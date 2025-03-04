#include <gtk/gtk.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

// to launch -> gcc calculator.c -o calculator `pkg-config --cflags --libs gtk+-3.0` ./calculator

static char expression[100] = "";
// display area
void update_display(GtkWidget *label) {
    gtk_label_set_text(GTK_LABEL(label), expression);
}

// button handler
static void on_button_clicked(GtkWidget *widget, gpointer data) {
    const char *button_label = (char *)data;

    // display current button
    GtkWidget *label = gtk_label_new(expression); 

    if (strcmp(button_label, "=") == 0) {
        double result = 0;
        if (sscanf(expression, "%lf", &result) != 1) {
            g_print("Invalid expression\n");
            return;
        }
        snprintf(expression, sizeof(expression), "%.2f", result);
        update_display(label); 
    } 
    else if (strcmp(button_label, "C") == 0) {
        expression[0] = '\0';
        update_display(label);
    }
    else {
        strcat(expression, button_label);
        update_display(label);
    }
}

int main(int argc, char *argv[]) {
    GtkWidget *window, *grid, *button, *label;
    gtk_init(&argc, &argv);

    window = gtk_window_new(GTK_WINDOW_TOPLEVEL);
    gtk_window_set_title(GTK_WINDOW(window), "Calculator");
    gtk_window_set_default_size(GTK_WINDOW(window), 300, 400);
    g_signal_connect(window, "destroy", G_CALLBACK(gtk_main_quit), NULL);

    grid = gtk_grid_new();
    gtk_container_add(GTK_CONTAINER(window), grid);

    label = gtk_label_new("");
    gtk_grid_attach(GTK_GRID(grid), label, 0, 0, 4, 1);

    const char *buttons[] = {"7", "8", "9", "/", "4", "5", "6", "*", "1", "2", "3", "-", "0", "=", "+", "C"};
    for (int i = 0; i < 16; i++) {
        button = gtk_button_new_with_label(buttons[i]);
        g_signal_connect(button, "clicked", G_CALLBACK(on_button_clicked), (gpointer)buttons[i]);
        gtk_grid_attach(GTK_GRID(grid), button, i % 4, (i / 4) + 1, 1, 1);
    }

    gtk_grid_set_row_spacing(GTK_GRID(grid), 5);
    gtk_grid_set_column_spacing(GTK_GRID(grid), 5);
    gtk_widget_set_margin_top(grid, 10);
    gtk_widget_set_margin_bottom(grid, 10);
    gtk_widget_set_margin_start(grid, 10);
    gtk_widget_set_margin_end(grid, 10);

    gtk_widget_show_all(window);
    gtk_main();
    return 0;
}

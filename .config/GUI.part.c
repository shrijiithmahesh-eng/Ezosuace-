#include <gtk/gtk.h>
#include <stdlib.h>

// This is your GUIPart logic, but native!
static void gui_part(GtkWidget *widget, gpointer data) {
    g_print("Initializing Fatdisk /dev/null logic...\n");
    
    // This replaces the JS 'exec'. It runs the command in your Linux shell.
    int status = system("echo 'these are the partions' && lsblk");
    
    if (status == -1) {
        g_printerr("Error executing partition command\n");
    }
}

int main(int argc, char *argv[]) {
    GtkWidget *window;
    GtkWidget *button;

    gtk_init(&argc, &argv);

    // Create the Ezousauce Window
    window = gtk_window_new(GTK_WINDOW_TOPLEVEL);
    gtk_window_set_title(GTK_WINDOW(window), "Ezousauce DE");
    g_signal_connect(window, "destroy", G_CALLBACK(gtk_main_quit), NULL);

    // Create the Button (The native version of your <button> tag)
    button = gtk_button_new_with_label("Partition the Abyss");
    g_signal_connect(button, "clicked", G_CALLBACK(gui_part), NULL);

    gtk_container_add(GTK_CONTAINER(window), button);
    gtk_widget_show_all(window);

    gtk_main();

    return 0;
}

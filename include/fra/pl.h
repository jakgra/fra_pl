#ifndef fra_pl_h
#define fra_pl_h




/* First make it work with config files only... */
/* then maybe only 2 functions fra_pl_reload() and fra_pl_cleanup() */
/* what about different repositories? */

/**
 * Main readonly plugin type.
 */
typedef struct {
	char * name;
	char * description;
	char * url;
	char * method;
	char * homepage;
} fra_pl_t;

/**
 * Init function. argv[1] must be the path to the plugins directory.
 */
int fra_pl_init( int argc, char * * argv );

/**
 * Install a plugin.
 * \Returns 1 if the plugin is already installed 0 on success and -1 on error.
 */
int fra_pl_install( char * name );

/**
 * Uninstall a plugin.
 */
int fra_pl_uninstall( char * name );

/**
 * Enable a plugin.
 */
int fra_pl_enable( char * name );

/**
 * Disable a plugin.
 */
int fra_pl_disable( char * name );




#endif

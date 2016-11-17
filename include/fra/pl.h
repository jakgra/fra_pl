#ifndef fra_pl_h
#define fra_pl_h




/**
 * Loads the plugins for the specified plugins directory.
 * argv[1] must be the path to the plugins directory.
 * Can be used directly from the fra config file or
 * called from your custom code.
 * If you wan't to reload, you have to restart the server...
 */
int fra_pl_load( int argc, char * * argv );

/**
 * Update the package index.
 */
int fra_pl_update( char * dir );

/**
 * Upgrade the installed packages.
 * Also the disabled ones.
 * If name is NULL, all the plugins get upgraded.
 */
int fra_pl_upgrade( char * dir, char * name );

/**
 * Install a plugin.
 * \Returns 1 if the plugin is already installed 0 on success and -1 on error.
 */
int fra_pl_install( char * dir, char * name );

/**
 * Uninstall a plugin.
 */
int fra_pl_uninstall( char * dir, char * name );

/**
 * Enable a plugin.
 */
int fra_pl_enable( char * dir, char * name );

/**
 * Disable a plugin.
 */
int fra_pl_disable( char * dir, char * name );




#endif

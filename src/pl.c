#include <fra/core.h>
#include "dbg.h"

#include <sys/stat.h>
#include <sys/types.h>
#include <dirent.h>




// semi-private functions

/*
int fra_pl_p_reload( char * dirname ) {

	DIR * pl_dir;


	pl_dir = opendir( argv[1] );
	check_msg_v(
			pld_dir,
			final_cleanup,
			"Failed opening the directory \"%s\". Does it exist, is it a directory "
			"and does the process have the correct permissions?",
			argv[1]
		   );

	while( readdir

	return 0;

final_cleanup:
	return -1;

}
*/

// global functions

/*
int fra_pl_init( int argc, char * * argv ) {

	int rc;


	check_msg(
			argc > 1,
			final_cleanup,
			"To few elements in the char * * argv  array supplied to the fra_pl_init() function. "
			"You must provide the plugins folder path as the 2nd element. "
			"Fix your config file passed to fra_glob_init() function."
		 );

	//rc = fra_pl_p_reload( argv[1] );
	//check( rc == 0, final_cleanup );

	return 0;

final_cleanup:
	return -1;

}
*/

int fra_pl_update( char * dir ) {

	bstring repos_dir_str;
	DIR * repos_dir;


	repos_dir_str = bformat( "%s/repos", dir );
	repos_dir = opendir( bdata( repos_dir_str ) );



}

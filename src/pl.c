#include <fra/core.h>




int main_init( int argc, char * * argv ) {

	int rc;


	rc = fra_glob_init();

	fra_glob_deinit();

	return rc;

}

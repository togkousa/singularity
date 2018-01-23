/* 
 * Copyright (c) 2017-2018, Sylabs, Inc. All rights reserved.
 * 
 * This software is licensed under a 3-clause BSD license.  Please
 * consult LICENSE file distributed with the sources of this project regarding
 * your rights to use or distribute this software.
 * 
 */


#ifndef __SINGULARITY_DAEMON_H_
#define __SINGULARITY_DAEMON_H_

    void singularity_daemon_init(void);
    int singularity_daemon_own_namespace(char *namespace);

#endif

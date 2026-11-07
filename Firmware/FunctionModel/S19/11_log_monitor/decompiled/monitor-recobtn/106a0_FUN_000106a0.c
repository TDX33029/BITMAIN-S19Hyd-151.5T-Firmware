// FUN_000106a0 @ 000106a0  size=480  callers=0
// program: monitor-recobtn


void FUN_000106a0(int param_1,int param_2)

{
  int iVar1;
  __pid_t _Var2;
  timeval local_38;
  timeval local_30;
  
  printf("monitor-recobtn compile %s--%s\n","Dec 17 2022","09:49:31");
  do {
    iVar1 = FUN_000109c0(0);
    while (iVar1 == 0) {
      gettimeofday(&local_38,(__timezone_ptr_t)0x0);
      FUN_00010940(1);
      puts("Detect recovery button push off");
LAB_00010714:
      iVar1 = FUN_000109c0(0);
      if (iVar1 != 1) {
        while (gettimeofday(&local_30,(__timezone_ptr_t)0x0),
              3000000 < ((local_30.tv_sec - local_38.tv_sec) * 1000000 + local_30.tv_usec) -
                        local_38.tv_usec) {
          puts("recovery button off over 3S, wait push on");
          while (iVar1 = FUN_000109c0(0), iVar1 == 0) {
            FUN_00010940(1);
            sleep(1);
            FUN_00010940(0);
            sleep(1);
          }
          puts("recovery button on");
          _Var2 = fork();
          if (_Var2 < 0) {
            puts("error occured.");
            goto LAB_00010714;
          }
          if (_Var2 == 0) {
            FUN_00010940();
            if (param_1 < 2) {
              sleep(1);
            }
            else {
              execvp(*(char **)(param_2 + 4),(char **)(param_2 + 4));
            }
                    /* WARNING: Subroutine does not return */
            exit(0);
          }
          wait((void *)0x0);
          iVar1 = 100;
          puts("child complete");
          do {
            FUN_00010940(1);
            usleep(100000);
            FUN_00010940(0);
            usleep(100000);
            iVar1 = iVar1 + -1;
          } while (iVar1 != 0);
          puts("recovery factory complete");
          iVar1 = FUN_000109c0(0);
          if (iVar1 == 1) goto LAB_00010814;
        }
        usleep(500000);
        goto LAB_00010714;
      }
LAB_00010814:
      FUN_00010940(0);
      iVar1 = FUN_000109c0(0);
    }
    sleep(1);
  } while( true );
}


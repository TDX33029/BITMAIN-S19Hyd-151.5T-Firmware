// FUN_00028fc8 @ 00028fc8  size=40  callers=0
// program: cgminer


void FUN_00028fc8(void)

{
  pthread_t __th;
  
  __th = pthread_self();
  pthread_detach(__th);
  pthread_setcanceltype(1,(int *)0x0);
  sleep(7);
                    /* WARNING: Subroutine does not return */
  exit(1);
}


// FUN_00029c5c @ 00029c5c  size=60  callers=0
// program: cgminer


void FUN_00029c5c(int param_1)

{
  pthread_t __th;
  
  __th = pthread_self();
  pthread_detach(__th);
  pthread_setcanceltype(1,(int *)0x0);
  FUN_00022ed0(&DAT_0004b24c);
  FUN_00029c00();
  FUN_0001b83c();
  *(undefined4 *)(param_1 + 0xc) = 0;
  return;
}


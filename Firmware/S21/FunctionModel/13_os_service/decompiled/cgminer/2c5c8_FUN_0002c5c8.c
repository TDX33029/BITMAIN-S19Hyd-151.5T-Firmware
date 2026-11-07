// FUN_0002c5c8 @ 0002c5c8  size=60  callers=2
// program: cgminer


/* WARNING: Control flow encountered bad instruction data */

void FUN_0002c5c8(void)

{
  int iVar1;
  pthread_t apStack_c [2];
  
  FUN_000206d8(&DAT_00068afc);
  iVar1 = pthread_create(apStack_c,(pthread_attr_t *)0x0,FUN_000349f4,(void *)0x0);
  if (iVar1 != 0) {
    FUN_0002c584();
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  return;
}


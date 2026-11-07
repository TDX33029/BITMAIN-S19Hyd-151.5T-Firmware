// FUN_0002b150 @ 0002b150  size=280  callers=1
// program: bmminer


undefined4 FUN_0002b150(void)

{
  int iVar1;
  pthread_attr_t pStack_834;
  char local_810 [12];
  undefined4 uStack_804;
  char acStack_800 [2032];
  
  if (DAT_00089fd8 == (void *)0x0) {
    pthread_attr_init(&pStack_834);
    pthread_attr_setstacksize(&pStack_834,0x100000);
    DAT_00089fd8 = calloc(1,0x40);
    iVar1 = FUN_00035098(DAT_00089fd8,&pStack_834,FUN_00027f90,DAT_00089fd8);
    if (iVar1 != 0) {
      if (DAT_00087bbc < 4) {
        return 0xffffffff;
      }
      builtin_strncpy(local_810,"create threa",0xc);
      uStack_804._0_1_ = 'd';
      uStack_804._1_1_ = ' ';
      uStack_804._2_1_ = 'f';
      uStack_804._3_1_ = 'a';
      builtin_strncpy(acStack_800,"iled\n",6);
      FUN_00032218(3,local_810,0);
      return 0xffffffff;
    }
    pthread_detach(*(pthread_t *)((int)DAT_00089fd8 + 0xc));
    if (3 < DAT_00087bbc) {
      builtin_strncpy(local_810,"create threa",0xc);
      uStack_804 = CONCAT13(uStack_804._3_1_,0xa64);
      FUN_00032218(3,local_810,0);
      return 0;
    }
  }
  return 0;
}


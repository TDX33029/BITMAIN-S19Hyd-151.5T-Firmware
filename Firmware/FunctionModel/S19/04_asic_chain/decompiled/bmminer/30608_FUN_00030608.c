// FUN_00030608 @ 00030608  size=512  callers=1
// program: bmminer


void FUN_00030608(void)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int extraout_r1;
  int param4;
  int *piVar4;
  int param3;
  int param3_00;
  int iVar5;
  int param4_00;
  undefined4 local_828;
  char acStack_824 [2048];
  
  if (4 < DAT_00087bbc) {
    local_828._0_1_ = '\n';
    local_828._1_1_ = ' ';
    local_828._2_1_ = 'd';
    local_828._3_1_ = 'u';
    builtin_strncpy(acStack_824,"mp asic nonce number...\n",0x19);
    FUN_00032218(4,&local_828,0);
  }
  iVar5 = 0;
  param3_00 = 0;
  do {
    iVar1 = FUN_000201d8(param3_00);
    if (iVar1 != 0) {
      if (4 < DAT_00087bbc) {
        snprintf((char *)&local_828,0x800,"Chain[%d]:\n",param3_00);
        FUN_00032218(4,&local_828,0);
      }
      iVar1 = FUN_0002002c();
      param4_00 = 0;
      if (0 < iVar1) {
        param3 = 0;
        do {
          iVar2 = FUN_0002005c();
          if (iVar2 < 1) {
            param4 = 0;
          }
          else {
            param4 = 0;
            piVar4 = (int *)((param3 + iVar5) * 0x1000 + 0x8b9c0);
            do {
              piVar4 = piVar4 + 1;
              param4 = param4 + *piVar4;
            } while (piVar4 != (int *)((iVar2 + (param3 + iVar5) * 0x400) * 4 + 0x8b9c0));
            param4_00 = param4_00 + param4;
          }
          if (4 < DAT_00087bbc) {
            snprintf((char *)&local_828,0x800,"IC[%03d] = %-10d ",param3,param4);
            FUN_00032218(4,&local_828,0);
          }
          param3 = param3 + 1;
          uVar3 = FUN_0002003c();
          FUN_0006769c(param3,uVar3);
          if ((extraout_r1 == 0) && (4 < DAT_00087bbc)) {
            local_828._0_1_ = '\n';
            local_828._1_1_ = '\0';
            FUN_00032218(4,&local_828);
          }
        } while (param3 != iVar1);
      }
      if (4 < DAT_00087bbc) {
        snprintf((char *)&local_828,0x800,"Chain[%d] total nonce number = %d\n",param3_00,param4_00)
        ;
        FUN_00032218(4,&local_828,0);
        if (4 < DAT_00087bbc) {
          local_828._0_1_ = '\n';
          local_828._1_1_ = '\0';
          FUN_00032218(4,&local_828,0);
        }
      }
    }
    param3_00 = param3_00 + 1;
    iVar5 = iVar5 + 0x100;
  } while (param3_00 != 4);
  return;
}


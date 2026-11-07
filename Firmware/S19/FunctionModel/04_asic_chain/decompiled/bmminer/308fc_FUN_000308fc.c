// FUN_000308fc @ 000308fc  size=460  callers=1
// program: bmminer


void FUN_000308fc(undefined4 param_1,uint param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int extraout_r1;
  uint extraout_r1_00;
  uint extraout_r1_01;
  int param3;
  int iVar4;
  undefined8 uVar5;
  undefined4 local_828;
  char acStack_824 [2048];
  
  if (4 < DAT_00087bbc) {
    local_828._0_1_ = '\n';
    local_828._1_1_ = ' ';
    local_828._2_1_ = 'd';
    local_828._3_1_ = 'u';
    builtin_strncpy(acStack_824,"mp domain nonce number...\n",0x1b);
    FUN_00032218(4,&local_828,0);
    param_2 = extraout_r1_01;
  }
  param3 = 0;
  do {
    uVar5 = FUN_000201d8(param3,param_2);
    param_2 = (uint)((ulonglong)uVar5 >> 0x20);
    if ((int)uVar5 != 0) {
      if (4 < DAT_00087bbc) {
        snprintf((char *)&local_828,0x800,"Chain[%d]:\n",param3);
        FUN_00032218(4,&local_828,0);
      }
      iVar4 = 0;
      param_2 = 0;
      while( true ) {
        iVar2 = FUN_0002001c();
        iVar3 = FUN_0002008c();
        if (iVar3 * iVar2 <= (int)param_2) break;
        iVar2 = FUN_0003080c(param3);
        iVar3 = iVar4 + iVar2;
        if (4 < DAT_00087bbc) {
          snprintf((char *)&local_828,0x800,"D[%02d]:%-10d ",param_2,iVar2);
          FUN_00032218(4,&local_828,0);
        }
        uVar1 = FUN_0002008c();
        FUN_0006769c(param_2 + 1,uVar1);
        iVar4 = iVar3;
        if ((extraout_r1 == 0) && (iVar4 = 0, 4 < DAT_00087bbc)) {
          snprintf((char *)&local_828,0x800,"D_BIG[%02d]:%-10d\n",param_2 >> 2,iVar3);
          FUN_00032218(4,&local_828,0);
        }
        param_2 = param_2 + 1;
      }
      if (4 < DAT_00087bbc) {
        local_828._0_1_ = '\n';
        local_828._1_1_ = '\0';
        FUN_00032218(4,&local_828,0);
        param_2 = extraout_r1_00;
      }
    }
    param3 = param3 + 1;
  } while (param3 != 4);
  return;
}


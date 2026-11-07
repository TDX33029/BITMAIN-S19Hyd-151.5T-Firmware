// FUN_00026ac0 @ 00026ac0  size=552  callers=1
// program: bmminer


int FUN_00026ac0(undefined4 param_1,int param_2,int param_3,int *param_4,int param_5,uint *param_6,
                int *param_7,undefined1 param_8,undefined4 param_9)

{
  int iVar1;
  uint param4;
  int param5;
  int iVar2;
  uint uVar3;
  char acStack_2030 [8196];
  
  if (*param_4 != *param_7) {
    if (1 < *param_6) {
      uVar3 = 1;
      do {
        iVar2 = 0;
        do {
          iVar1 = FUN_0002a6f0(iVar2);
          if ((iVar1 != 0) && (param4 = param_4[1], param4 <= *(uint *)(param_2 + iVar2 * 4))) {
            if (3 < DAT_000be63c) {
              snprintf(acStack_2030,0x2000,"2.chain_%d inc freq to %d\n",iVar2,param4);
              FUN_0004948c(3,acStack_2030,0);
              param4 = param_4[1];
            }
            FUN_0002683c(param_1,iVar2,param_8,*param_4,param4,0,param_9);
          }
          iVar2 = iVar2 + 1;
        } while (iVar2 != 4);
        uVar3 = uVar3 + 1;
        param_4 = param_4 + 1;
      } while (uVar3 < *param_6);
    }
    iVar2 = 0;
    do {
      iVar1 = FUN_0002a6f0(iVar2);
      if (iVar1 != 0) {
        iVar1 = *(int *)(param_2 + iVar2 * 4);
        param5 = *(int *)(param_3 + iVar2 * 4);
        if (iVar1 != param5) {
          if (3 < DAT_000be63c) {
            snprintf(acStack_2030,0x2000,"3.chain %d min = %d, max = %d",iVar2,iVar1,param5);
            FUN_0004948c(3,acStack_2030,0);
            iVar1 = *(int *)(param_2 + iVar2 * 4);
          }
          FUN_0002500c(param_1,iVar2,param_5 + iVar2 * 0x400,iVar1,param_9);
        }
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 != 4);
  }
  iVar2 = 0;
  do {
    iVar1 = FUN_0002a6f0(iVar2);
    if (iVar1 != 0) {
      (&DAT_000c0430)[iVar2] = (&DAT_008c7054)[iVar2];
      (&DAT_000c044c)[iVar2] = (&DAT_008c7054)[iVar2];
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 != 4);
  return *param_7;
}


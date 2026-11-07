// FUN_01282f28 @ 01282f28 size=220 calls_out=6 calls_in=3
// strings: 

void FUN_01282f28(int *param_1,int *param_2,undefined4 param_3,int param_4)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  
  piVar2 = param_2 + 2;
  if (*piVar2 == 1) {
    DataMemoryBarrier(0xb);
    do {
      bVar1 = (bool)hasExclusiveAccess(piVar2);
      if (bVar1) {
        *piVar2 = 0;
        DataMemoryBarrier(0xb);
        iVar3 = *param_2;
        iVar5 = param_2[1];
        thunk_FUN_01be4678(param_2);
        FUN_01bed864(iVar3,param_3,param_4);
        goto LAB_01282ff4;
      }
    } while (*piVar2 == 1);
  }
  uVar4 = 0;
  ClearExclusiveLocal();
  if (param_4 < 0) {
LAB_01282f7c:
                    /* WARNING: Subroutine does not return */
    FUN_00664620(uVar4,param_4);
  }
  if (param_4 == 0) {
    iVar3 = 1;
    iVar5 = 0;
  }
  else {
    uVar4 = 1;
    iVar3 = FUN_01298504(param_4,1);
    iVar5 = param_4;
    if (iVar3 == 0) goto LAB_01282f7c;
  }
  FUN_01bed4e2(iVar3,param_3,param_4);
  FUN_01282e84(param_2);
LAB_01282ff4:
  *param_1 = iVar5;
  param_1[1] = iVar3;
  param_1[2] = param_4;
  return;
}


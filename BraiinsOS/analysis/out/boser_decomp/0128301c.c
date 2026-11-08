// FUN_0128301c @ 0128301c size=256 calls_out=6 calls_in=2
// strings: 

void FUN_0128301c(undefined4 *param_1,int *param_2,int param_3,int param_4,int param_5,int param_6)

{
  bool bVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  iVar7 = (param_5 - param_4) + param_6;
  piVar2 = (int *)thunk_FUN_01be5118(0xc);
  if (piVar2 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0066439c(4,0xc);
  }
  *piVar2 = param_4;
  piVar2[1] = iVar7;
  piVar2[2] = 2;
  iVar4 = *param_2;
  if (iVar4 == param_3) {
    DataMemoryBarrier(0xb);
    do {
      bVar1 = (bool)hasExclusiveAccess(param_2);
      if (bVar1) {
        *param_2 = (int)piVar2;
        bVar1 = true;
        goto LAB_01283094;
      }
      iVar4 = *param_2;
    } while (iVar4 == param_3);
  }
  bVar1 = false;
  ClearExclusiveLocal();
LAB_01283094:
  DataMemoryBarrier(0xb);
  if (bVar1) {
    param_1[2] = param_6;
    param_1[3] = piVar2;
    *param_1 = &DAT_01c25ae0;
    param_1[1] = param_5;
    return;
  }
  piVar2 = (int *)(iVar4 + 8);
  do {
    iVar5 = *piVar2;
    iVar6 = iVar5 + 1;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar6;
  if (iVar5 < 0) {
    uVar3 = FUN_0128479c();
    FUN_01282ee0(iVar6,iVar7);
                    /* WARNING: Subroutine does not return */
    FUN_01be040c(uVar3);
  }
  param_1[2] = param_6;
  param_1[3] = iVar4;
  *param_1 = &DAT_01c25ae0;
  param_1[1] = param_5;
  thunk_FUN_01be4678();
  return;
}


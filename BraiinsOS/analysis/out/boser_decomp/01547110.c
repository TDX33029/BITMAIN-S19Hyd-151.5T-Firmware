// FUN_01547110 @ 01547110 size=260 calls_out=3 calls_in=1
// strings: 

void FUN_01547110(undefined4 *param_1,int *param_2,int *param_3)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  
  if (*param_2 == 0) {
    iVar2 = param_2[1];
    piVar3 = (int *)*param_3;
    *param_1 = 0;
    param_1[1] = iVar2;
    DataMemoryBarrier(0xb);
    do {
      iVar2 = *piVar3;
      bVar1 = (bool)hasExclusiveAccess(piVar3);
    } while (!bVar1);
    *piVar3 = iVar2 + -1;
    if (iVar2 == 1) {
      DataMemoryBarrier(0xb);
      FUN_0070451c(*param_3,param_3[1]);
    }
    piVar3 = (int *)param_3[2];
    DataMemoryBarrier(0xb);
    do {
      iVar2 = *piVar3;
      bVar1 = (bool)hasExclusiveAccess(piVar3);
    } while (!bVar1);
    *piVar3 = iVar2 + -1;
    if (iVar2 == 1) {
      DataMemoryBarrier(0xb);
      FUN_0070451c(param_3[2],param_3[3]);
      return;
    }
  }
  else {
    iVar10 = *param_3;
    iVar11 = param_3[1];
    iVar8 = param_3[2];
    iVar9 = param_3[3];
    iVar2 = *param_2;
    iVar4 = param_2[1];
    iVar5 = param_2[2];
    iVar6 = param_2[3];
    iVar7 = param_2[4];
    piVar3 = (int *)thunk_FUN_01be5118(0x24);
    if (piVar3 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0066439c(4,0x24);
    }
    *piVar3 = iVar2;
    piVar3[1] = iVar4;
    piVar3[2] = iVar5;
    piVar3[3] = iVar6;
    piVar3[4] = iVar7;
    piVar3[5] = iVar10;
    piVar3[6] = iVar11;
    piVar3[7] = iVar8;
    piVar3[8] = iVar9;
    *param_1 = piVar3;
    param_1[1] = &DAT_01cfb78c;
  }
  return;
}


// FUN_01ab9c10 @ 01ab9c10 size=240 calls_out=5 calls_in=2
// strings: 

void FUN_01ab9c10(int param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  
  piVar3 = (int *)FUN_01ac2674(param_1 + 0xc);
  if (*piVar3 != 0) {
    FUN_01306fc8(&DAT_01d2ee64);
    *piVar3 = *piVar3 + 1;
                    /* WARNING: Subroutine does not return */
    FUN_01be040c();
  }
  iVar7 = piVar3[3];
  *piVar3 = -1;
  iVar5 = piVar3[2];
  iVar8 = *param_2;
  iVar9 = param_2[1];
  iVar1 = iVar7 * 0x10;
  iVar2 = 0;
  do {
    iVar4 = iVar2;
    if (iVar1 == iVar4) break;
    iVar2 = iVar4 + 0x10;
  } while (*(int *)(iVar5 + iVar4) != iVar8 || ((int *)(iVar5 + iVar4))[1] != iVar9);
  if (iVar7 == piVar3[1]) {
    FUN_015f5b78();
    iVar5 = piVar3[2];
  }
  piVar6 = (int *)(iVar5 + iVar7 * 0x10);
  *piVar6 = iVar8;
  piVar6[1] = iVar9;
  *(bool *)(piVar6 + 2) = iVar1 != iVar4;
  piVar3[3] = iVar7 + 1;
  *piVar3 = *piVar3 + 1;
  if (iVar1 == iVar4) {
    FUN_01ab985c(param_1,param_2);
    return;
  }
  return;
}


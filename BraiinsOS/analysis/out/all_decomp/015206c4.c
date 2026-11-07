// FUN_015206c4 @ 015206c4 size=208 calls_out=4 calls_in=1
// strings: 

void FUN_015206c4(int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  
  iVar1 = *param_2;
  if (iVar1 != param_2[1]) {
    iVar3 = *(int *)(iVar1 + 8);
    iVar2 = 0;
    iVar6 = param_2[2];
    iVar4 = param_2[3];
    piVar5 = (int *)param_2[4];
    *param_2 = iVar1 + 0xc;
    if (iVar3 < 0) {
LAB_015206fc:
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(iVar2,iVar3);
    }
    if (iVar3 == 0) {
      iVar1 = 1;
    }
    else {
      iVar2 = 1;
      iVar1 = FUN_016d38c8(iVar3,1);
      if (iVar1 == 0) goto LAB_015206fc;
      iVar2 = iVar3;
    }
    iVar4 = (**(code **)(iVar4 + 0x10))(iVar6,iVar1,iVar3);
    if (iVar4 == 0) {
      *param_1 = iVar2;
      param_1[1] = iVar1;
      param_1[2] = iVar3;
      return;
    }
    if (iVar2 != 0) {
      thunk_FUN_016d3fb4(iVar1);
    }
    if (*piVar5 != -0x7fffffd7) {
      FUN_01465b84(piVar5);
    }
    *piVar5 = -0x7fffffde;
  }
  *param_1 = -0x80000000;
  return;
}


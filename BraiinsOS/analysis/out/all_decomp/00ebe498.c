// FUN_00ebe498 @ 00ebe498 size=228 calls_out=3 calls_in=1
// strings: 

bool FUN_00ebe498(int param_1,int param_2,int *param_3)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  
  iVar4 = *(int *)(param_1 + 8);
  bVar1 = true;
  if ((iVar4 != param_2) && (bVar1 = false, param_3[1] != *param_3)) {
    iVar2 = 1;
    iVar6 = *(int *)(param_1 + 4);
    *param_3 = 1;
    iVar3 = *(int *)(param_3[2] + 8);
    uVar7 = *(undefined4 *)(param_3[2] + 4);
    if (iVar3 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(0,iVar3);
    }
    if (iVar3 == 0) {
      iVar8 = 0;
    }
    else {
      iVar2 = thunk_FUN_016d4a50(iVar3);
      iVar8 = iVar3;
      if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00600af4(1,iVar3);
      }
    }
    piVar5 = (int *)(iVar6 + iVar4 * 0xc);
    FUN_016dd1aa(iVar2,uVar7,iVar3);
    *piVar5 = iVar8;
    piVar5[1] = iVar2;
    piVar5[2] = iVar3;
    *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
    bVar1 = (int)piVar5 - (iVar6 + param_2 * 0xc) == -0xc;
  }
  return bVar1;
}


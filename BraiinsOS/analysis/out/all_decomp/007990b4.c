// FUN_007990b4 @ 007990b4 size=268 calls_out=5 calls_in=8
// strings: 

void FUN_007990b4(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int local_30;
  int local_2c;
  
  iVar3 = *(int *)(param_2 + 0xec);
  if (iVar3 == 0) {
    iVar1 = 1;
  }
  else {
    uVar4 = *(undefined4 *)(param_2 + 0xe8);
    iVar1 = thunk_FUN_016d4a50(iVar3);
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(1,iVar3);
    }
    FUN_016dd1aa(iVar1,uVar4,iVar3);
    if (iVar3 == -0x80000000) {
      *param_1 = -0x80000000;
      return;
    }
  }
  FUN_00794310(&local_30,iVar1,iVar3);
  if (local_30 == 0) {
    iVar5 = iVar3;
  }
  else {
    if (local_2c < 0) {
      uVar4 = 0;
LAB_00799138:
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(uVar4,local_2c);
    }
    if (local_2c == 0) {
      iVar2 = 1;
      iVar5 = 0;
    }
    else {
      iVar2 = thunk_FUN_016d4a50(local_2c);
      if (iVar2 == 0) {
        uVar4 = 1;
        goto LAB_00799138;
      }
      iVar5 = local_2c;
    }
    FUN_016dd1aa(iVar2,local_30,local_2c);
    if (iVar3 != 0) {
      thunk_FUN_016d3fb4(iVar1);
    }
    iVar3 = local_2c;
    iVar1 = iVar2;
  }
  *param_1 = iVar5;
  param_1[1] = iVar1;
  param_1[2] = iVar3;
  return;
}


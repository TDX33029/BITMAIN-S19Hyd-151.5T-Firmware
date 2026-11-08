// FUN_00794130 @ 00794130 size=288 calls_out=5 calls_in=2
// strings: 

void FUN_00794130(int *param_1,int *param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int local_30 [2];
  undefined4 local_28;
  int local_24;
  
  if (*param_2 == -0x80000000) {
LAB_00794180:
    *param_1 = -0x80000000;
  }
  else {
    iVar4 = param_2[2];
    if (iVar4 == 0) {
      iVar1 = 1;
    }
    else {
      iVar5 = param_2[1];
      iVar1 = thunk_FUN_016d4a50(iVar4);
      if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00600af4(1,iVar4);
      }
      FUN_016dd1aa(iVar1,iVar5,iVar4);
      if (iVar4 == -0x80000000) goto LAB_00794180;
    }
    FUN_00794310(local_30,iVar1,iVar4);
    if (local_30[0] == 0) {
      *param_1 = -0x80000000;
    }
    else {
      if (local_24 < 0) {
        uVar2 = 0;
LAB_007941c0:
                    /* WARNING: Subroutine does not return */
        FUN_00600af4(uVar2,local_24);
      }
      if (local_24 == 0) {
        iVar3 = 1;
        iVar5 = 0;
      }
      else {
        iVar3 = thunk_FUN_016d4a50(local_24);
        if (iVar3 == 0) {
          uVar2 = 1;
          goto LAB_007941c0;
        }
        iVar5 = local_24;
      }
      FUN_016dd1aa(iVar3,local_28,local_24);
      *param_1 = iVar5;
      param_1[1] = iVar3;
      param_1[2] = local_24;
    }
    if (iVar4 != 0) {
      thunk_FUN_016d3fb4(iVar1);
      return;
    }
  }
  return;
}


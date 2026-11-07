// FUN_00f3cfcc @ 00f3cfcc size=460 calls_out=6 calls_in=1
// strings: 

void FUN_00f3cfcc(undefined4 *param_1,uint *param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int local_3c;
  undefined4 local_38;
  int local_34;
  undefined1 local_30 [4];
  uint local_2c;
  uint local_28;
  undefined1 uStack_19;
  
  uVar2 = 0x15;
  if ((int)*param_2 < 0) {
    uVar2 = *param_2 ^ 0x80000000;
  }
  switch(uVar2) {
  case 0xc:
    uVar2 = param_2[3];
    if ((int)uVar2 < 0) {
LAB_00f3d064:
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(0,uVar2);
    }
    uVar3 = param_2[2];
    break;
  case 0xd:
    uVar2 = param_2[2];
    if ((int)uVar2 < 0) goto LAB_00f3d064;
    uVar3 = param_2[1];
    break;
  case 0xe:
    uVar2 = param_2[2];
    uVar3 = param_2[3];
    goto LAB_00f3d040;
  case 0xf:
    uVar2 = param_2[1];
    uVar3 = param_2[2];
LAB_00f3d040:
    FUN_00fab1e0(&local_3c);
    if (local_3c == 1) {
      local_30[0] = 6;
      local_2c = uVar2;
      local_28 = uVar3;
      FUN_00f3cebc(param_1,local_30,&uStack_19);
      return;
    }
    if (local_34 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(0,local_34);
    }
    if (local_34 == 0) {
      iVar4 = 0;
      iVar1 = 1;
    }
    else {
      iVar1 = thunk_FUN_016d4a50(local_34);
      iVar4 = local_34;
      if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00600af4(1,local_34);
      }
    }
    FUN_016dd1aa(iVar1,local_38,local_34);
    param_1[3] = local_34;
    *param_1 = 2;
    param_1[1] = iVar4;
    param_1[2] = iVar1;
    return;
  default:
    FUN_008f7820(param_1,param_2,&uStack_19,&DAT_0187f1b8);
    return;
  }
  if (uVar2 == 0) {
    uVar5 = 0;
    iVar4 = 1;
  }
  else {
    iVar4 = thunk_FUN_016d4a50(uVar2);
    uVar5 = uVar2;
    if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(1,uVar2);
    }
  }
  FUN_016dd1aa(iVar4,uVar3,uVar2);
  param_1[1] = uVar5;
  *param_1 = 2;
  param_1[2] = iVar4;
  param_1[3] = uVar2;
  return;
}


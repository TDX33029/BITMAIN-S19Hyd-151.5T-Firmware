// FUN_015a0f80 @ 015a0f80 size=344 calls_out=6 calls_in=0
// strings: 

void FUN_015a0f80(undefined4 *param_1,int param_2,int param_3,undefined4 param_4,undefined4 param_5,
                 undefined4 param_6)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int local_48;
  undefined4 local_44;
  undefined4 local_40;
  int local_3c;
  int local_38;
  int local_34;
  undefined4 local_30;
  undefined4 local_2c;
  
  local_40 = 0;
  local_44 = 1;
  local_48 = 0;
  if (param_3 != 0) {
    param_3 = param_3 * 0xc;
    do {
      local_2c = param_6;
      local_30 = param_5;
      FUN_015a170c(&local_3c,param_2,&local_48,param_4,&local_30);
      if (local_3c != 4) {
        param_1[1] = local_3c;
        param_1[2] = local_38;
        uVar1 = 1;
        goto LAB_015a10b0;
      }
      param_2 = param_2 + 0xc;
      param_3 = param_3 + -0xc;
    } while (param_3 != 0);
  }
  FUN_006008c8(&local_3c,local_44,local_40);
  if (local_3c == -0x80000000) {
    if (local_34 < 0) {
      uVar1 = 0;
LAB_015a1040:
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(uVar1,local_34);
    }
    if (local_34 == 0) {
      iVar2 = 1;
      iVar3 = 0;
    }
    else {
      iVar2 = thunk_FUN_016d4a50(local_34);
      if (iVar2 == 0) {
        uVar1 = 1;
        goto LAB_015a1040;
      }
      iVar3 = local_34;
    }
    FUN_016dd1aa(iVar2,local_38,local_34);
    local_3c = iVar3;
    local_38 = iVar2;
  }
  param_1[1] = local_3c;
  uVar1 = 0;
  param_1[2] = local_38;
LAB_015a10b0:
  *param_1 = uVar1;
  param_1[3] = local_34;
  if (local_48 != 0) {
    thunk_FUN_016d3fb4(local_44);
  }
  return;
}


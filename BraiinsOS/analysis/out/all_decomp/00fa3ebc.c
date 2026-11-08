// FUN_00fa3ebc @ 00fa3ebc size=596 calls_out=5 calls_in=2
// strings: 

void FUN_00fa3ebc(int *param_1,undefined4 param_2,uint param_3,int param_4,int param_5,int param_6)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  int local_60;
  int local_5c;
  int local_58;
  int local_50;
  int *local_4c;
  undefined4 local_48;
  int *local_44;
  undefined4 local_40;
  int *local_3c;
  int local_38;
  int **local_34;
  undefined *local_30;
  int **local_2c;
  undefined4 *local_28;
  
  local_58 = 0;
  local_60 = 0;
  local_44 = &local_50;
  local_50 = param_4 + 0xe;
  local_5c = 1;
  local_30 = &DAT_00fa02fc;
  local_34 = &local_44;
  FUN_00fa948c(&local_60,&DAT_018809bc,&DAT_0035df0e,&local_34);
  if ((uint)(local_60 - local_58) < param_3) {
    FUN_00f991dc(&local_60,local_58,param_3,1,1);
  }
  iVar1 = local_58;
  FUN_016dd1aa(local_5c + local_58,param_2,param_3);
  local_58 = iVar1 + param_3;
  if (param_6 != 0) {
    if ((uint)(local_60 - local_58) < 2) {
      FUN_00f991dc(&local_60,local_58,2,1,1);
    }
    uVar2 = *(undefined4 *)(param_6 + 4);
    uVar3 = *(uint *)(param_6 + 8);
    iVar1 = local_58 + 2;
    *(undefined2 *)(local_5c + local_58) = 0xa0a;
    local_58 = iVar1;
    if ((uint)(local_60 - iVar1) < uVar3) {
      FUN_00f991dc(&local_60,iVar1,uVar3,1,1);
    }
    iVar1 = local_58;
    FUN_016dd1aa(local_5c + local_58,uVar2,uVar3);
    local_58 = iVar1 + uVar3;
  }
  if (param_5 != 0) {
    FUN_00fa3d10(&local_50);
    iVar1 = local_50;
    if (local_50 == -0x7fffffff) {
      if (local_60 == local_58) {
        FUN_00f991dc(&local_60,local_58,1,1,1);
      }
      *(undefined1 *)(local_5c + local_58) = 10;
      local_58 = local_58 + 1;
    }
    else {
      local_44 = local_4c;
      local_3c = &local_38;
      local_38 = param_4 + 0x2a;
      local_34 = &local_3c;
      local_40 = local_48;
      local_28 = &DAT_0157d360;
      local_30 = &DAT_00fa02fc;
      local_2c = &local_44;
      FUN_00fa948c(&local_60,&DAT_018809bc,&DAT_0035e2bf,&local_34);
      if ((-0x7fffffff < iVar1) && (iVar1 != 0)) {
        thunk_FUN_016d3fb4(local_4c);
      }
    }
  }
  *param_1 = local_60;
  param_1[1] = local_5c;
  param_1[2] = local_58;
  return;
}


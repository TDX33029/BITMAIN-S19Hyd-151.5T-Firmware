// FUN_01126c98 @ 01126c98 size=452 calls_out=6 calls_in=2
// strings: 

void FUN_01126c98(int *param_1,undefined4 param_2,uint param_3)

{
  uint uVar1;
  undefined1 extraout_r1;
  undefined1 extraout_r1_00;
  int iVar2;
  undefined1 *puVar3;
  int iVar4;
  int local_60;
  int local_5c;
  undefined4 local_58;
  uint local_54;
  int local_50;
  undefined4 local_4c;
  int *local_48;
  int local_44;
  undefined1 *local_40;
  int local_3c;
  undefined4 local_38;
  uint local_34;
  int local_30;
  undefined4 uStack_2c;
  int *local_28;
  
  if ((param_3 & 1) == 0) {
    local_48 = &local_60;
    local_50 = 2;
    local_60 = 0x110002;
    local_4c = 0;
    local_58 = param_2;
    local_54 = param_3;
    uVar1 = FUN_0111eb80(&local_58);
    puVar3 = &DAT_00000001;
    iVar2 = 0;
    iVar4 = 0;
    if ((uVar1 & 1) != 0) {
      if (((*local_48 == 0x110002) && (local_54 != 0)) && (local_50 == 0)) {
                    /* WARNING: Subroutine does not return */
        FUN_00faf2a4(&DAT_0188b814);
      }
      puVar3 = (undefined1 *)thunk_FUN_016d4a50(8);
      if (puVar3 == (undefined1 *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00600af4(1,8);
      }
      *puVar3 = extraout_r1;
      local_3c = 1;
      local_44 = 8;
      local_38 = local_58;
      local_34 = local_54;
      local_30 = local_50;
      uStack_2c = local_4c;
      local_28 = local_48;
      local_40 = puVar3;
      while (iVar2 = local_3c, uVar1 = FUN_0111eb80(&local_38), (uVar1 & 1) != 0) {
        if (iVar2 == local_44) {
          if (((*local_28 == 0x110002) && (local_34 != 0)) && (local_30 == 0)) {
                    /* WARNING: Subroutine does not return */
            FUN_00faf2a4(&DAT_0188b814);
          }
          FUN_00f58340(&local_44,iVar2,1);
          puVar3 = local_40;
        }
        puVar3[iVar2] = extraout_r1_00;
        local_3c = iVar2 + 1;
      }
      iVar4 = local_44;
    }
    if (local_60 == 0x110002) {
      *param_1 = iVar4;
      param_1[1] = (int)puVar3;
      param_1[2] = iVar2;
      return;
    }
    *param_1 = -0x80000000;
    param_1[1] = local_60;
    param_1[2] = local_5c;
    if (iVar4 != 0) {
      thunk_FUN_016d3fb4(puVar3);
      return;
    }
  }
  else {
    *param_1 = -0x80000000;
    param_1[1] = (int)&DAT_00110000;
  }
  return;
}


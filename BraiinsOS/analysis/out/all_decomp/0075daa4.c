// FUN_0075daa4 @ 0075daa4 size=512 calls_out=4 calls_in=1
// strings: 

void FUN_0075daa4(undefined4 *param_1,int param_2,undefined4 param_3,code *param_4)

{
  uint uVar1;
  undefined4 uVar2;
  int local_5c;
  int local_58;
  int iStack_54;
  uint local_50;
  int local_4c;
  int local_48;
  int local_44;
  undefined4 *local_40;
  int local_3c;
  uint local_38;
  uint local_34;
  uint local_30;
  uint local_2c;
  undefined4 local_28;
  code *local_24;
  uint *local_20;
  code *local_1c;
  
  uVar1 = *(uint *)(param_2 + 0x60);
  if (uVar1 == 0) {
    FUN_0075d034(&local_28,param_2);
    uVar2 = 1;
    if (((uint)local_28 & 0xff) == 5) {
LAB_0075dc60:
      *param_1 = uVar2;
      return;
    }
    if (((uint)local_28 & 0xff) != 4) {
      param_1[3] = local_24;
      uVar2 = 0;
      *(undefined1 *)((int)param_1 + 0xb) = local_28._3_1_;
      *(undefined2 *)((int)param_1 + 9) = local_28._1_2_;
      *(undefined1 *)(param_1 + 2) = (undefined1)local_28;
      param_1[1] = 0;
      goto LAB_0075dc60;
    }
    if (local_24 < param_4) {
      param_4 = local_24;
    }
    FUN_00f5f8dc(&local_5c,param_2 + 0x5c,param_4);
    if ((local_50 & 1) != 0) {
      local_44 = local_58 + (local_50 >> 5);
      local_48 = local_5c - (local_50 >> 5);
      local_4c = iStack_54 + (local_50 >> 5);
      FUN_00f5ef18(&local_40,&local_4c);
      local_30 = local_50 >> 5;
      if (local_38 < local_50 >> 5) {
        local_20 = &local_2c;
        local_2c = local_38;
        local_1c = FUN_007883b8;
        local_24 = FUN_007883b8;
        local_28 = &local_30;
                    /* WARNING: Subroutine does not return */
        FUN_00faa478(&DAT_00584155,&local_28,&DAT_018a6700);
      }
      goto LAB_0075dc0c;
    }
  }
  else {
    if (uVar1 < param_4) {
      param_4 = (code *)uVar1;
    }
    FUN_00f5f8dc(&local_5c,param_2 + 0x5c,param_4);
    if ((local_50 & 1) != 0) {
      local_44 = local_58 + (local_50 >> 5);
      local_48 = local_5c - (local_50 >> 5);
      local_4c = iStack_54 + (local_50 >> 5);
      FUN_00f5ef18(&local_40,&local_4c);
      local_30 = local_50 >> 5;
      if (local_38 < local_50 >> 5) {
        local_20 = &local_2c;
        local_2c = local_38;
        local_1c = FUN_007883b8;
        local_24 = FUN_007883b8;
        local_28 = &local_30;
                    /* WARNING: Subroutine does not return */
        FUN_00faa478(&DAT_00584155,&local_28,&DAT_018a6700);
      }
LAB_0075dc0c:
      local_58 = local_38 - local_30;
      local_5c = local_3c + local_30;
      local_50 = local_34;
      goto LAB_0075dc20;
    }
  }
  local_40 = &DAT_018ad580;
LAB_0075dc20:
  param_1[1] = local_40;
  *param_1 = 0;
  param_1[2] = local_5c;
  param_1[3] = local_58;
  param_1[4] = local_50;
  return;
}


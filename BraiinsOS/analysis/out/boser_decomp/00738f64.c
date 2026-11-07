// FUN_00738f64 @ 00738f64 size=300 calls_out=5 calls_in=0
// strings: 

void FUN_00738f64(int *param_1,int param_2)

{
  int iVar1;
  int local_90;
  int iStack_8c;
  int iStack_88;
  undefined4 uStack_84;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 local_64;
  undefined4 local_60;
  int local_58;
  int local_54;
  int local_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  uint uStack_2c;
  undefined4 uStack_28;
  undefined1 local_1f;
  undefined1 local_1e;
  undefined1 local_1d;
  undefined1 local_1c;
  undefined1 local_1b;
  undefined1 local_1a;
  undefined1 uStack_19;
  
  FUN_00797908(&local_58,*(undefined4 *)(param_2 + 4),*(undefined4 *)(param_2 + 8));
  if (local_58 == -0x80000000) {
    FUN_00797a34(&local_90);
  }
  else {
    local_90 = local_58;
    iStack_8c = local_54;
    iStack_88 = local_50;
    uStack_84 = uStack_4c;
    local_80 = local_48;
    uStack_7c = uStack_44;
    uStack_78 = uStack_40;
    uStack_74 = uStack_3c;
    local_70 = local_38;
    uStack_6c = uStack_34;
    uStack_68 = uStack_30;
    local_64 = uStack_2c;
    local_60 = uStack_28;
  }
  if (local_90 == -0x80000000) {
    *param_1 = -0x80000000;
  }
  else {
    if ((local_64 & 1) == 0) {
      *param_1 = -0x80000000;
    }
    else {
      local_1e = local_64._2_1_;
      local_1f = local_64._1_1_;
      local_1a = local_60._2_1_;
      local_1b = local_60._1_1_;
      local_1c = (undefined1)local_60;
      local_1d = local_64._3_1_;
      local_50 = 0;
      local_54 = 1;
      local_58 = 0;
      iVar1 = FUN_007a82f4(&local_1f,&local_58,&DAT_01c07d10);
      if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_013073dc(&DAT_00533383,0x37,&uStack_19,&DAT_01c07d38,&DAT_01d30334);
      }
      *param_1 = local_58;
      param_1[1] = local_54;
      param_1[2] = local_50;
    }
    FUN_007390c4(&local_90);
  }
  return;
}


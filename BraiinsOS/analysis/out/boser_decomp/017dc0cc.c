// FUN_017dc0cc @ 017dc0cc size=528 calls_out=7 calls_in=1
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_017dc0cc(undefined4 *param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  bool bVar6;
  undefined4 in_stack_00000000;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 local_b4;
  int iStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 local_98;
  undefined1 *puStack_94;
  undefined4 uStack_90;
  undefined4 local_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  int local_68;
  undefined4 local_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 local_3c;
  int local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  local_4c = 0;
  local_50 = 3;
  local_38 = 0;
  local_48 = 0;
  FUN_01444d9c(&local_98,&local_50);
  FUN_01444e9c(&local_c8,&local_98,in_stack_00000000);
  local_8c = 0;
  local_98 = &PTR_FUN_01d1cb58;
  puStack_94 = &DAT_005327c4;
  uStack_90 = 1;
  FUN_014134f0(&local_50,&local_98);
  iVar2 = local_50;
  uVar5 = (undefined1)local_4c;
  if (local_50 == 0) {
    local_68 = CONCAT31(local_68._1_3_,(undefined1)local_4c);
                    /* WARNING: Subroutine does not return */
    FUN_013073dc(&DAT_00533467,0x2b,&local_68,&DAT_01d1cabc);
  }
  local_68 = local_50;
  local_64 = local_4c;
  uVar1 = local_64;
  uStack_60 = local_48;
  uStack_5c = uStack_44;
  uStack_58 = uStack_40;
  if ((char)local_c8 == '\x04') {
    (**(code **)(local_50 + 0x10))(&uStack_5c,local_4c,local_48);
    uVar5 = local_c8._1_1_;
    uVar4 = local_c8._2_1_;
  }
  else {
    local_64._1_1_ = (undefined1)((uint)local_4c >> 8);
    uVar4 = local_64._1_1_;
    bVar6 = local_50 != 0;
    local_50 = local_c8;
    local_4c = uStack_c4;
    local_48 = uStack_c0;
    uStack_44 = uStack_bc;
    uStack_40 = uStack_b8;
    local_3c = local_b4;
    local_38 = iStack_b0;
    local_34 = uStack_ac;
    local_30 = uStack_a8;
    uStack_2c = uStack_a4;
    uStack_28 = uStack_a0;
    local_64 = uVar1;
    if (bVar6) {
      if (iStack_b0 != 0) {
        (**(code **)(iStack_b0 + 0x10))(&uStack_2c,uStack_ac,uStack_a8);
      }
      local_34 = CONCAT31(CONCAT21(local_34._2_2_,uVar4),uVar5);
      local_38 = iVar2;
      FUN_01bed4e2((int)&local_34 + 2,(uint)&local_68 | 6,0xe);
      uVar3 = (undefined1)local_50;
      uVar5 = local_50._1_1_;
      uVar4 = local_50._2_1_;
      FUN_01bed4e2(&local_98,(uint)&local_50 | 3,0x29);
      goto LAB_017dc230;
    }
    FUN_0143bfe8(&local_50);
  }
  uVar3 = 4;
LAB_017dc230:
  local_50 = CONCAT31(CONCAT21(CONCAT11(local_50._3_1_,uVar4),uVar5),uVar3);
  FUN_01bed4e2((uint)&local_50 | 3,&local_98,0x29);
  FUN_01410ce4(&local_98,&local_50);
  if (((uint)local_98 & 0xff) == 3) {
    local_50 = CONCAT22(local_50._2_2_,local_98._1_2_);
                    /* WARNING: Subroutine does not return */
    FUN_013073dc(&DAT_0050c2b3,0x21,&local_50,&DAT_01d1caac);
  }
  *param_1 = local_98;
  param_1[1] = puStack_94;
  param_1[2] = uStack_90;
  param_1[3] = local_8c;
  param_1[4] = uStack_88;
  param_1[5] = uStack_84;
  param_1[6] = uStack_80;
  param_1[7] = uStack_7c;
  param_1[8] = uStack_78;
  param_1[9] = uStack_74;
  param_1[10] = uStack_70;
  return;
}


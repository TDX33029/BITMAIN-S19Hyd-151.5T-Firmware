// FUN_006feadc @ 006feadc size=1856 calls_out=8 calls_in=1
// strings: 

/* WARNING: Removing unreachable block (ram,0x006febac) */
/* WARNING: Removing unreachable block (ram,0x006fee28) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_006feadc(int *param_1,int param_2)

{
  byte bVar1;
  int iVar2;
  char cVar3;
  int iVar4;
  undefined1 uVar5;
  int iVar6;
  undefined4 local_170;
  undefined1 local_16c;
  int local_164;
  undefined4 local_15c;
  undefined4 local_158;
  undefined4 local_154;
  undefined4 local_150;
  undefined4 local_14c;
  undefined4 local_148;
  undefined2 local_144;
  undefined4 local_137;
  undefined4 local_133;
  undefined3 local_12f;
  undefined1 uStack_12c;
  undefined3 uStack_12b;
  undefined4 local_128;
  undefined4 local_124;
  undefined4 local_120;
  undefined4 local_11c;
  undefined4 local_118;
  undefined4 local_114;
  undefined4 local_110;
  undefined4 local_10c;
  undefined2 local_108;
  undefined4 local_106;
  undefined2 local_102;
  int local_100;
  undefined2 local_fc;
  undefined2 local_fa;
  undefined4 local_f8;
  undefined2 local_f4;
  undefined4 local_f0;
  undefined4 local_ec;
  undefined4 uStack_e8;
  undefined3 uStack_e4;
  undefined4 local_e0;
  undefined2 local_dc;
  undefined4 local_d8;
  undefined4 local_d4;
  undefined3 uStack_d0;
  undefined1 local_cd;
  undefined3 uStack_cc;
  undefined2 local_c8;
  undefined2 uStack_c6;
  undefined2 local_c4;
  undefined2 uStack_c2;
  undefined2 local_c0;
  undefined2 uStack_be;
  undefined2 local_bc;
  undefined2 uStack_ba;
  int local_b8;
  undefined4 local_b4;
  undefined4 local_b0;
  int local_ac;
  int local_a8;
  undefined4 uStack_a4;
  undefined1 uStack_a0;
  undefined4 uStack_9f;
  undefined3 uStack_9b;
  undefined4 local_98;
  undefined4 local_94;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined2 local_78;
  undefined4 local_76;
  undefined2 local_72;
  int local_70;
  undefined2 local_6c;
  undefined2 uStack_6a;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined2 local_58;
  undefined2 uStack_56;
  undefined2 local_54;
  undefined2 uStack_52;
  undefined2 local_50;
  undefined2 uStack_4e;
  undefined2 local_4c;
  undefined2 uStack_4a;
  undefined2 local_47;
  undefined1 local_45;
  undefined2 local_40;
  undefined2 uStack_3e;
  undefined2 uStack_3c;
  undefined2 local_3a;
  undefined2 uStack_38;
  undefined1 local_36;
  undefined1 uStack_35;
  undefined2 uStack_34;
  undefined1 uStack_32;
  undefined1 uStack_31;
  undefined1 local_30;
  undefined2 local_2f;
  undefined1 local_2d;
  
  local_6c = 200;
  uStack_6a = 2;
  local_80 = 4;
  local_8c = 4;
  local_98 = 2;
  local_54 = 0x1d;
  uStack_52 = 0;
  iVar4 = 0;
  local_ac = 0;
  local_b0 = 0;
  local_70 = 0;
  local_78 = 0;
  local_7c = 0;
  local_84 = 0;
  local_88 = 0;
  local_90 = 0;
  local_94 = 0;
  local_4c = 0;
  uStack_4a = 0;
  local_50 = 0;
  uStack_4e = 0;
  local_58 = 0;
  uStack_56 = 0;
  if (*(int *)(param_2 + 0x28) == 0) {
    local_c0 = 0;
    uStack_be = 0;
    local_c4 = 1;
    uStack_c2 = 0;
    local_c8 = 0;
    uStack_c6 = 0;
    FUN_00f5ef18(&local_40,&local_c8);
  }
  else {
    do {
      bVar1 = *(byte *)(*(int *)(param_2 + 0x24) + iVar4);
      if (bVar1 < 0x20) {
        if (bVar1 != 9) {
LAB_006feb9c:
          local_16c = 5;
          goto LAB_006fec64;
        }
      }
      else if (bVar1 == 0x7f) goto LAB_006feb9c;
      iVar4 = iVar4 + 1;
    } while (*(int *)(param_2 + 0x28) != iVar4);
    FUN_00f5eea8(&local_40);
  }
  local_b8 = (uint)CONCAT12(local_2d,local_2f) << 8;
  local_c8 = local_40;
  uStack_34 = 0;
  uStack_32 = 0;
  uStack_31 = 0;
  uStack_38 = 0;
  local_36 = 0;
  uStack_35 = 0;
  uStack_3c = 0x1d;
  local_3a = 0;
  local_40 = 0;
  uStack_3e = 0;
  cVar3 = FUN_006a5c1c(&local_b0,&local_40,&local_c8);
  local_16c = 6;
  if (cVar3 == '\x02') {
LAB_006fec64:
    FUN_01015c1c(&local_b0);
    iVar4 = local_70;
    local_144 = 200;
    if (local_70 != 0) {
      FUN_0148eea4(local_70);
      thunk_FUN_016d3fb4(iVar4);
    }
    local_170 = 4;
    local_14c = 0;
    local_148 = 2;
    local_150 = 0;
    local_154 = 0;
    local_158 = 0;
    local_15c = 4;
    local_164 = 0;
    local_10c = 0;
    iVar4 = 3;
    iVar6 = 0;
    local_108 = 0;
    local_fa = 2;
  }
  else {
    local_40 = (undefined2)((uint)local_a8 >> 8);
    uStack_3e = (undefined2)(CONCAT13((undefined1)uStack_a4,local_a8._1_3_) >> 0x10);
    local_14c = local_94;
    local_150 = local_90;
    local_170 = local_8c;
    local_154 = local_88;
    local_158 = local_84;
    local_15c = local_80;
    local_16c = (undefined1)local_a8;
    local_64 = CONCAT22(local_64._2_2_,local_72);
    local_68 = local_76;
    local_164 = local_70;
    local_144 = local_6c;
    uStack_38 = (undefined2)uStack_9f;
    local_36 = (undefined1)((uint)uStack_9f >> 0x10);
    local_148 = local_98;
    uStack_3c = (undefined2)((uint)uStack_a4 >> 8);
    local_3a = (undefined2)(CONCAT13(uStack_a0,uStack_a4._1_3_) >> 0x10);
    uStack_35 = uStack_9f._3_1_;
    uStack_34 = (undefined2)uStack_9b;
    uStack_32 = (undefined1)((uint3)uStack_9b >> 0x10);
    local_10c = local_7c;
    iVar4 = local_b0;
    iVar6 = local_ac;
    local_108 = local_78;
    local_fa = uStack_6a;
  }
  local_f0 = CONCAT22(uStack_3e,local_40);
  local_ec = CONCAT22(local_3a,uStack_3c);
  uStack_d0 = CONCAT12(local_36,uStack_38);
  uStack_e8 = CONCAT13(uStack_35,uStack_d0);
  uStack_e4 = (undefined3)(CONCAT13(uStack_32,CONCAT21(uStack_34,uStack_35)) >> 8);
  local_f8 = local_68;
  local_f4 = (undefined2)local_64;
  local_cd = uStack_35;
  uStack_cc = uStack_e4;
  local_e0 = local_68;
  local_dc = (undefined2)local_64;
  local_c4 = 4;
  uStack_c2 = 0;
  local_c0 = 0;
  uStack_be = 0;
  local_c8 = 0x6d64;
  uStack_c6 = 0x56;
  local_bc = 0x16;
  uStack_ba = 0;
  local_b8 = 0;
  local_b4 = 0;
  local_d8 = local_f0;
  local_d4 = local_ec;
  if (iVar4 == 3 && iVar6 == 0) {
    local_b4 = 0;
    local_b8 = 0;
    uStack_ba = 0;
    local_bc = 0x16;
    uStack_be = 0;
    local_c0 = 0;
    uStack_c2 = 0;
    local_c4 = 4;
    uStack_c6 = 0x56;
    local_c8 = 0x6d64;
    iVar4 = 0;
    iVar6 = 3;
  }
  else {
    local_a8._1_3_ = (undefined3)local_f0;
    uStack_a4._0_1_ = (undefined1)((ushort)uStack_3e >> 8);
    local_80 = local_15c;
    local_84 = local_158;
    local_88 = local_154;
    uStack_9b = uStack_e4;
    local_90 = local_150;
    local_94 = local_14c;
    local_98 = local_148;
    local_70 = local_164;
    local_a8 = CONCAT31(local_a8._1_3_,local_16c);
    uStack_a4._1_3_ = (undefined3)local_ec;
    uStack_a0 = (undefined1)((ushort)local_3a >> 8);
    local_8c = local_170;
    local_6c = local_144;
    local_76 = local_68;
    local_72 = (undefined2)local_64;
    local_5c = 0;
    local_60 = 0;
    local_64 = 0x16;
    local_68 = 0;
    local_b0 = iVar4;
    local_ac = iVar6;
    uStack_9f = uStack_e8;
    local_7c = local_10c;
    local_78 = local_108;
    uStack_6a = local_fa;
    FUN_00f5eea8(&local_58,&DAT_00566d64,4);
    uStack_3e = uStack_56;
    uStack_3c = local_54;
    local_3a = uStack_52;
    uStack_38 = local_50;
    local_36 = (undefined1)uStack_4e;
    uStack_35 = (undefined1)((ushort)uStack_4e >> 8);
    uStack_34 = local_4c;
    uStack_32 = (undefined1)uStack_4a;
    uStack_31 = (undefined1)((ushort)uStack_4a >> 8);
    local_2f = local_47;
    local_2d = local_45;
    local_30 = 0;
    local_40 = local_58;
    local_4c = 0;
    uStack_4a = 0;
    local_50 = 0;
    uStack_4e = 0;
    local_54 = 0x16;
    uStack_52 = 0;
    local_58 = 0;
    uStack_56 = 0;
    cVar3 = FUN_006a5c1c(&local_b0,&local_58,&local_40);
    if (cVar3 == '\x02') {
      FUN_01015c1c(&local_b0);
      iVar2 = local_70;
      local_16c = 6;
      iVar4 = 0;
      iVar6 = 3;
      if (local_70 != 0) {
        FUN_0148eea4(local_70);
        thunk_FUN_016d3fb4(iVar2);
      }
    }
    else {
      local_d8 = CONCAT13((undefined1)uStack_a4,local_a8._1_3_);
      local_14c = local_94;
      local_d4 = CONCAT13(uStack_a0,uStack_a4._1_3_);
      local_150 = local_90;
      local_154 = local_88;
      local_158 = local_84;
      local_15c = local_80;
      local_dc = local_72;
      local_e0 = local_76;
      local_164 = local_70;
      local_148 = local_98;
      uStack_d0 = (undefined3)uStack_9f;
      local_cd = uStack_9f._3_1_;
      uStack_cc = uStack_9b;
      local_144 = local_6c;
      local_170 = local_8c;
      iVar4 = local_ac;
      local_10c = local_7c;
      iVar6 = local_b0;
      local_16c = (undefined1)local_a8;
      local_108 = local_78;
      local_fa = uStack_6a;
    }
  }
  local_137 = local_d8;
  local_110 = local_15c;
  local_114 = local_158;
  local_118 = local_154;
  local_120 = local_150;
  local_124 = local_14c;
  _local_12f = CONCAT13(local_cd,uStack_d0);
  uStack_12b = uStack_cc;
  local_128 = local_148;
  local_133 = local_d4;
  local_100 = local_164;
  local_fc = local_144;
  local_106 = local_e0;
  local_102 = local_dc;
  local_11c = local_170;
  (*(code *)**(undefined4 **)(param_2 + 0x10))
            (&local_b0,param_2 + 0x1c,*(undefined4 *)(param_2 + 0x14),
             *(undefined4 *)(param_2 + 0x18));
  if (local_a8 == 0) {
    (**(code **)(local_b0 + 0x10))(&uStack_a4,local_ac,0);
    local_b0 = 0;
    local_ac = CONCAT22(uStack_c6,local_c8);
    local_a8 = CONCAT22(uStack_c2,local_c4);
    uStack_a4 = CONCAT22(uStack_be,local_c0);
    uVar5 = (undefined1)local_137;
    if (iVar6 != 3 || iVar4 != 0) goto LAB_006ff1ac;
  }
  else {
    uVar5 = (undefined1)local_137;
    local_c8 = (undefined2)local_ac;
    uStack_c6 = (undefined2)((uint)local_ac >> 0x10);
    local_c4 = (undefined2)local_a8;
    uStack_c2 = (undefined2)((uint)local_a8 >> 0x10);
    local_c0 = (undefined2)uStack_a4;
    uStack_be = (undefined2)((uint)uStack_a4 >> 0x10);
    if (iVar6 != 3 || iVar4 != 0) {
LAB_006ff1ac:
      iVar2 = local_b0;
      FUN_016dd1aa((int)param_1 + 10,(int)&local_137 + 1,0x3e);
      *param_1 = iVar6;
      param_1[0x12] = iVar2;
      param_1[0x13] = CONCAT22(uStack_c6,local_c8);
      param_1[0x14] = CONCAT22(uStack_c2,local_c4);
      param_1[0x15] = CONCAT22(uStack_be,local_c0);
      param_1[1] = iVar4;
      *(undefined1 *)((int)param_1 + 9) = uVar5;
      *(undefined1 *)(param_1 + 2) = local_16c;
      return;
    }
    if (local_b0 != 0) {
      (**(code **)(local_b0 + 0x10))(&uStack_a4,local_ac,local_a8);
    }
  }
  local_b0 = CONCAT31(CONCAT21(local_b0._2_2_,uVar5),local_16c);
                    /* WARNING: Subroutine does not return */
  FUN_00fb74f8(&DAT_0033fbab,0x26,&local_b0,&DAT_018a44c4,&DAT_018597b4);
}


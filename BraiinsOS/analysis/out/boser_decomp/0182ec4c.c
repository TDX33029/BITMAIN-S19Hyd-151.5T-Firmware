// FUN_0182ec4c @ 0182ec4c size=1260 calls_out=15 calls_in=2
// strings: current header name

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_0182ec4c(undefined4 *param_1,int *param_2,int param_3,int param_4)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  int iVar9;
  uint uVar10;
  undefined8 uVar11;
  int local_148;
  uint local_144;
  int local_13c;
  undefined4 local_138;
  undefined4 local_134;
  undefined4 local_130;
  undefined4 local_12c;
  int local_124;
  uint local_120;
  uint local_11c;
  undefined4 local_118;
  undefined1 auStack_114 [4];
  undefined4 local_110;
  undefined4 local_10c;
  undefined4 local_f8;
  undefined4 local_f4;
  undefined4 local_f0;
  undefined4 local_ec;
  undefined4 local_e8;
  undefined4 local_e4;
  undefined4 local_e0;
  undefined4 local_dc;
  undefined2 local_d8;
  uint local_d0;
  uint uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  uint local_c0;
  uint local_bc;
  uint uStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  int local_ac;
  int local_a8;
  undefined4 local_a4;
  int local_a0;
  uint local_98;
  uint local_94;
  uint uStack_90;
  undefined4 uStack_8c;
  int local_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  int local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  int local_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined1 auStack_50 [4];
  char local_4c;
  int local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 local_30;
  undefined4 local_2c;
  int local_28;
  
  if ((*param_2 != 0) || (param_2[1] == -0x80000000)) {
    *param_1 = 5;
    FUN_017793c0(param_3);
    return;
  }
  FUN_01428600(&local_148,param_2[2],param_2[3]);
  local_e0 = 4;
  local_ec = 4;
  local_f8 = 2;
  puVar6 = (undefined4 *)((uint)&local_d0 | 4);
  local_124 = 0;
  local_10c = 0;
  local_110 = 0;
  local_d8 = 0;
  local_dc = 0;
  local_e4 = 0;
  local_e8 = 0;
  local_f0 = 0;
  local_f4 = 0;
  local_ac = *(int *)(param_3 + 0x24);
  local_a0 = *(int *)(param_3 + 0x28) * 0x34 + local_ac;
  local_a4 = *(undefined4 *)(param_3 + 0x20);
  uVar7 = *(undefined4 *)(param_3 + 0x30);
  uVar8 = *(undefined4 *)(param_3 + 0x34);
  *puVar6 = *(undefined4 *)(param_3 + 0x2c);
  puVar6[1] = uVar7;
  puVar6[2] = uVar8;
  if (*(int *)(param_3 + 0x1c) != 0) {
    thunk_FUN_01be4678(*(undefined4 *)(param_3 + 0x18));
  }
  local_c0 = 0;
  local_bc = local_d0;
  uStack_b8 = uStack_cc;
  uStack_b4 = uStack_c8;
  uStack_b0 = uStack_c4;
  local_a8 = local_ac;
LAB_0182edb8:
  do {
    FUN_006ced10(&local_98,&local_c0);
    if (local_98 == 2) {
      FUN_00713cb8(&local_c0);
      local_28 = 0;
      local_30 = 0;
      local_2c = 1;
      if (param_4 == 0) {
        FUN_01417d58(&local_110,&local_30);
      }
      else {
        FUN_01417f04(&local_110,&local_30);
      }
      if (local_28 == 0) {
        *param_1 = 5;
        FUN_019bb7e0(local_30,local_2c);
        FUN_017793c0(&local_110);
        uVar5 = 0;
        if (local_124 != 0) {
          uVar5 = local_120;
        }
        if (local_124 != 0 && uVar5 != 0) {
          (**(code **)(uVar5 + 0x10))(auStack_114,local_11c,local_118);
        }
      }
      else {
        FUN_01283524(&local_98,&local_30);
        local_c0 = local_98;
        local_bc = local_94;
        uStack_b8 = uStack_90;
        uStack_b4 = uStack_8c;
        param_1[1] = "0\r\n";
        param_1[2] = 3;
        param_1[3] = local_98;
        param_1[4] = local_94;
        param_1[5] = uStack_90;
        param_1[6] = uStack_8c;
        param_1[7] = &DAT_00531047;
        param_1[8] = 2;
        *param_1 = 4;
        FUN_017793c0(&local_110);
        uVar5 = 0;
        if (local_124 != 0) {
          uVar5 = local_120;
        }
        if (local_124 != 0 && uVar5 != 0) {
          (**(code **)(uVar5 + 0x10))(auStack_114,local_11c,local_118);
        }
      }
      FUN_0141fb8c(&local_148);
      return;
    }
    local_70 = local_84;
    uStack_6c = uStack_80;
    uStack_68 = uStack_7c;
    uStack_64 = uStack_78;
    uStack_60 = uStack_74;
    if ((local_98 & 1) == 0) {
      if (local_124 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_0130739c("current header name",0x13,&DAT_01d1e4d0);
      }
    }
    else {
      uVar5 = local_98;
      if (local_124 != 0) {
        uVar5 = local_120;
      }
      if (local_124 != 0 && uVar5 != 0) {
        (**(code **)(uVar5 + 0x10))(auStack_114,local_11c,local_118);
      }
      local_124 = 1;
      local_120 = local_94;
      local_11c = uStack_90;
      local_118 = uStack_8c;
    }
    uVar11 = FUN_00f80570(&local_120);
    iVar4 = (int)((ulonglong)uVar11 >> 0x20);
    if (local_13c != 0) {
      uVar1 = FUN_019306a8(local_138,local_134,local_130,local_12c,uVar11);
      uVar5 = uVar1 >> 0x19;
      iVar9 = 0;
      while( true ) {
        uVar1 = local_144 & uVar1;
        uVar10 = *(uint *)(local_148 + uVar1);
        uVar2 = uVar10 ^ uVar5 * 0x1010101;
        uVar2 = ~uVar2 & 0x80808080 & uVar2 + 0xfefefeff;
        while (uVar2 != 0) {
          iVar3 = local_148 + -0xc +
                  (uVar1 + ((uint)LZCOUNT(uVar2 << 0x18 | (uVar2 >> 8 & 0xff) << 0x10 |
                                          (uVar2 >> 0x10 & 0xff) << 8 | uVar2 >> 0x18) >> 3) &
                  local_144) * -0xc;
          uVar2 = uVar2 - 1 & uVar2;
          if ((iVar4 == *(int *)(iVar3 + 8)) &&
             (iVar3 = thunk_FUN_01bed842((int)uVar11,*(undefined4 *)(iVar3 + 4),iVar4), iVar3 == 0))
          {
            if (local_120 == 0) {
              uVar5 = (local_11c & 0xff) - 0x10;
              if (((uVar5 < 0x20) && ((1 << (uVar5 & 0xff) & 0x80402543U) != 0)) ||
                 ((uVar5 = (local_11c & 0xff) - 0x41, uVar5 < 5 && (uVar5 != 1))))
              goto LAB_0182efbc;
            }
            local_48 = local_70;
            uStack_44 = uStack_6c;
            uStack_40 = uStack_68;
            uStack_3c = uStack_64;
            uStack_38 = uStack_60;
            FUN_0182e46c(&local_5c,&local_110,&local_120);
            if (local_4c != '\x02') {
              (**(code **)(local_5c + 0x10))(auStack_50,uStack_58,uStack_54);
            }
            goto LAB_0182edb8;
          }
        }
        if ((uVar10 & 0x80808080 & uVar10 << 1) != 0) break;
        iVar9 = iVar9 + 4;
        uVar1 = uVar1 + iVar9;
      }
    }
LAB_0182efbc:
    (**(code **)(local_70 + 0x10))(&uStack_64,uStack_6c,uStack_68);
  } while( true );
}


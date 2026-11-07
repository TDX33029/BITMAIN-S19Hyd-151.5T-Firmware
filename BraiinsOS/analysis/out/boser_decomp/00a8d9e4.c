// FUN_00a8d9e4 @ 00a8d9e4 size=1740 calls_out=8 calls_in=3
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_00a8d9e4(undefined4 *param_1,undefined4 param_2)

{
  int iVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  int iVar8;
  int iVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  uint uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined *puVar22;
  undefined1 *unaff_r8;
  undefined1 *puVar23;
  undefined4 *puVar24;
  undefined4 local_110;
  undefined4 local_10c;
  undefined1 *local_108;
  undefined4 local_e8;
  undefined4 local_e4;
  undefined1 *local_e0;
  undefined1 *local_dc;
  undefined4 local_d0;
  undefined4 local_c0;
  int local_bc;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 local_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined1 *local_70;
  undefined1 *local_6c;
  undefined1 *local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  int local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 local_38;
  int local_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  local_bc = 7;
  local_c0 = param_2;
  FUN_0094e4d8(&local_70,&local_c0);
  puVar7 = local_68;
  puVar6 = local_6c;
  puVar2 = local_70;
  iVar1 = local_bc;
  uVar21 = local_c0;
  puVar23 = &DAT_3b9aca00;
  if (local_68 == (undefined1 *)0x3b9aca01) {
LAB_00a8da24:
    *param_1 = 2;
  }
  else {
    if (local_68 == &DAT_3b9aca00) {
      local_70 = (undefined1 *)FUN_00a9d070(0,&DAT_01c0c3b0,&DAT_01d064b8);
      *param_1 = 2;
      param_1[1] = 0;
      goto LAB_00a8da34;
    }
    if (local_bc == 0) {
LAB_00a8dbf0:
      puVar22 = &DAT_01c0c3b0;
LAB_00a8dbf8:
      uVar21 = 1;
LAB_00a8dc04:
      local_68 = (undefined1 *)FUN_00a9d070(uVar21,puVar22,&DAT_01d064b8);
LAB_00a8dc0c:
      *param_1 = 2;
      param_1[1] = 0;
      param_1[2] = local_68;
      return;
    }
    FUN_0094f574(&local_70,local_c0);
    if ((char)local_70 == '\x01') {
LAB_00a8da74:
      local_68 = local_6c;
      goto LAB_00a8dc0c;
    }
    uVar19 = (uint)local_70 >> 8 & 0xff;
    if (uVar19 == 0) {
      uVar21 = 0;
    }
    else {
      if (uVar19 != 1) {
        local_70 = &DAT_80000004;
        local_6c = (undefined1 *)uVar19;
        local_68 = (undefined1 *)FUN_0073696c(&local_70);
        goto LAB_00a8dc0c;
      }
      local_34 = 2;
      local_38 = uVar21;
      FUN_0094f420(&local_70,&local_38);
      puVar23 = local_68;
      local_dc = local_6c;
      local_e0 = local_70;
      if (local_68 == (undefined1 *)0x3b9aca01) {
        local_68 = local_70;
        goto LAB_00a8dc0c;
      }
      if (local_68 == &DAT_3b9aca00) {
        uVar21 = 0;
        puVar22 = &DAT_01c0c3c0;
        goto LAB_00a8dc04;
      }
      if (local_34 == 0) {
        puVar22 = &DAT_01c0c3c0;
        goto LAB_00a8dbf8;
      }
      FUN_009c9b04(&local_70,local_38);
      if (local_70 != (undefined1 *)0x0) goto LAB_00a8da74;
      if (puVar23 == (undefined1 *)0x3b9aca02) goto LAB_00a8dc0c;
      if (puVar23 == (undefined1 *)0x3b9aca01) goto LAB_00a8dbf0;
      local_e4 = local_64;
      local_e8 = local_60;
      uVar21 = local_5c;
      unaff_r8 = local_68;
    }
    uVar20 = local_c0;
    if (iVar1 != 1) {
      local_bc = iVar1 + -2;
      FUN_0094f574(&local_70,local_c0);
      if ((char)local_70 == '\x01') {
LAB_00a8daf4:
        local_70 = local_6c;
        goto LAB_00a8da24;
      }
      uVar19 = (uint)local_70 >> 8 & 0xff;
      if (uVar19 == 0) {
        uVar20 = 0;
        local_d0 = 0;
      }
      else {
        if (uVar19 != 1) {
          local_70 = &DAT_80000004;
          local_6c = (undefined1 *)uVar19;
          local_70 = (undefined1 *)FUN_0073696c(&local_70);
          goto LAB_00a8da24;
        }
        FUN_009c9b04(&local_70,uVar20);
        if (local_70 == (undefined1 *)0x1) goto LAB_00a8daf4;
        local_108 = local_68;
        local_10c = local_64;
        local_110 = local_60;
        local_d0 = local_5c;
        uVar20 = 1;
      }
      FUN_0094f9a0(&local_70,&local_c0);
      uVar16 = local_4c;
      uVar13 = local_50;
      uVar10 = local_54;
      iVar1 = local_58;
      puVar3 = local_70;
      if (local_58 != -0x7ffffffe) {
        puVar24 = (undefined4 *)((uint)&local_70 | 4);
        local_b8 = *puVar24;
        uStack_b4 = puVar24[1];
        uStack_b0 = puVar24[2];
        uStack_ac = puVar24[3];
        uStack_a8 = puVar24[4];
        if (local_58 != -0x7fffffff) {
          FUN_0094f9a0(&local_70,&local_c0);
          uVar17 = local_4c;
          uVar14 = local_50;
          uVar11 = local_54;
          iVar8 = local_58;
          puVar4 = local_70;
          if (local_58 != -0x7ffffffe) {
            puVar24 = (undefined4 *)((uint)&local_70 | 4);
            local_a0 = *puVar24;
            uStack_9c = puVar24[1];
            uStack_98 = puVar24[2];
            uStack_94 = puVar24[3];
            uStack_90 = puVar24[4];
            if (local_58 != -0x7fffffff) {
              FUN_0094f9a0(&local_70,&local_c0);
              uVar18 = local_4c;
              uVar15 = local_50;
              uVar12 = local_54;
              iVar9 = local_58;
              puVar5 = local_70;
              if (local_58 == -0x7ffffffe) {
LAB_00a8dd7c:
                *param_1 = 2;
                param_1[1] = 0;
                param_1[2] = local_70;
              }
              else {
                puVar24 = (undefined4 *)((uint)&local_70 | 4);
                local_88 = *puVar24;
                uStack_84 = puVar24[1];
                uStack_80 = puVar24[2];
                uStack_7c = puVar24[3];
                uStack_78 = puVar24[4];
                if (local_58 == -0x7fffffff) {
                  local_70 = (undefined1 *)FUN_00a9d070(5,&DAT_01c0c3b0,&DAT_01d064b8);
                  goto LAB_00a8dd7c;
                }
                FUN_0094f9a0(&local_70,&local_c0);
                if (local_58 != -0x7ffffffe) {
                  puVar24 = (undefined4 *)((uint)&local_70 | 4);
                  local_38 = *puVar24;
                  local_34 = puVar24[1];
                  uStack_30 = puVar24[2];
                  uStack_2c = puVar24[3];
                  uStack_28 = puVar24[4];
                  local_48 = local_54;
                  uStack_44 = local_50;
                  uStack_40 = local_4c;
                  if (local_58 != -0x7fffffff) {
                    param_1[0x31] = local_38;
                    param_1[0x32] = local_34;
                    param_1[0x33] = uStack_30;
                    param_1[0x34] = uStack_2c;
                    param_1[0x35] = uStack_28;
                    param_1[0x37] = local_54;
                    param_1[0x38] = local_50;
                    param_1[0x39] = local_4c;
                    param_1[0x12] = puVar3;
                    param_1[0x13] = local_b8;
                    param_1[0x14] = uStack_b4;
                    param_1[0x15] = uStack_b0;
                    param_1[0x16] = uStack_ac;
                    param_1[0x17] = uStack_a8;
                    param_1[0x1a] = uVar13;
                    param_1[0x1b] = uVar16;
                    param_1[0x18] = iVar1;
                    param_1[0x19] = uVar10;
                    param_1[0x1c] = puVar4;
                    param_1[0x1d] = local_a0;
                    param_1[0x1e] = uStack_9c;
                    param_1[0x1f] = uStack_98;
                    param_1[0x20] = uStack_94;
                    param_1[0x21] = uStack_90;
                    param_1[0x24] = uVar14;
                    param_1[0x25] = uVar17;
                    param_1[0x22] = iVar8;
                    param_1[0x23] = uVar11;
                    param_1[0x26] = puVar5;
                    param_1[0x27] = local_88;
                    param_1[0x28] = uStack_84;
                    param_1[0x29] = uStack_80;
                    param_1[0x2a] = uStack_7c;
                    param_1[0x2b] = uStack_78;
                    param_1[0x10] = puVar23;
                    param_1[0x2e] = uVar15;
                    param_1[0x2f] = uVar18;
                    param_1[0xb] = local_e4;
                    param_1[0xc] = local_e8;
                    param_1[0xd] = uVar21;
                    param_1[3] = local_10c;
                    param_1[4] = local_110;
                    param_1[5] = local_d0;
                    param_1[0x2c] = iVar9;
                    param_1[0x2d] = uVar12;
                    *param_1 = uVar20;
                    param_1[1] = 0;
                    param_1[2] = local_108;
                    param_1[0x36] = local_58;
                    param_1[0x30] = local_70;
                    param_1[0xe] = local_e0;
                    param_1[0xf] = local_dc;
                    param_1[6] = puVar2;
                    param_1[10] = unaff_r8;
                    param_1[7] = puVar6;
                    param_1[8] = puVar7;
                    return;
                  }
                  local_70 = (undefined1 *)FUN_00a9d070(6,&DAT_01c0c3b0,&DAT_01d064b8);
                }
                *param_1 = 2;
                param_1[1] = 0;
                param_1[2] = local_70;
                if (iVar9 != -0x80000000) {
                  FUN_0132b958(iVar9,uVar12,8,0x28);
                }
              }
              if (iVar8 != -0x80000000) {
                FUN_0132b958(iVar8,uVar11,8,0x28);
              }
              goto LAB_00a8dda8;
            }
            local_70 = (undefined1 *)FUN_00a9d070(4,&DAT_01c0c3b0,&DAT_01d064b8);
          }
          *param_1 = 2;
          param_1[1] = 0;
          param_1[2] = local_70;
LAB_00a8dda8:
          if (iVar1 == -0x80000000) {
            return;
          }
          FUN_0132b958(iVar1,uVar10,8,0x28);
          return;
        }
        local_70 = (undefined1 *)FUN_00a9d070(3,&DAT_01c0c3b0,&DAT_01d064b8);
      }
      *param_1 = 2;
      param_1[1] = 0;
      goto LAB_00a8da34;
    }
    local_70 = (undefined1 *)FUN_00a9d070(2,&DAT_01c0c3b0,&DAT_01d064b8);
    *param_1 = 2;
  }
  param_1[1] = 0;
LAB_00a8da34:
  param_1[2] = local_70;
  return;
}


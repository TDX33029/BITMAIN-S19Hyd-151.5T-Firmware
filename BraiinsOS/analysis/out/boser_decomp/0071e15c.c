// FUN_0071e15c @ 0071e15c size=3196 calls_out=11 calls_in=2
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_0071e15c(undefined4 *param_1,int param_2,uint param_3,uint param_4,uint param_5,
                 undefined4 param_6,undefined4 param_7,int param_8,uint param_9)

{
  byte bVar1;
  byte bVar2;
  ushort uVar3;
  undefined3 uVar4;
  ushort uVar5;
  ushort uVar6;
  ushort *puVar7;
  ushort *puVar8;
  ushort *puVar9;
  undefined1 uVar10;
  ushort *puVar11;
  ushort *puVar12;
  ushort *puVar13;
  ushort *puVar14;
  int iVar15;
  ushort *puVar16;
  undefined4 *puVar17;
  ushort *puVar18;
  uint uVar19;
  uint uVar20;
  ushort *puVar21;
  uint uVar22;
  uint uVar23;
  undefined3 *puVar24;
  undefined4 uVar25;
  uint uVar26;
  ushort *puVar27;
  ushort *puVar28;
  byte bVar29;
  ushort *puVar30;
  ushort *puVar31;
  bool bVar32;
  bool bVar33;
  ushort *local_204;
  uint local_1f8;
  ushort *local_1f0;
  ushort *local_1ec;
  undefined4 local_1e4;
  uint local_1dc;
  ushort *local_1d8;
  ushort *local_1d4;
  uint local_1d0;
  ushort *local_1cc;
  ushort *local_1c0;
  ushort *local_1bc;
  ushort *local_1b8;
  uint local_1b4;
  ushort *local_180;
  ushort *local_17c;
  ushort *local_128;
  ushort *local_124;
  uint local_120;
  int local_11c;
  uint local_118;
  int local_110;
  int local_10c;
  int local_108;
  undefined4 local_100;
  undefined4 local_fc;
  undefined4 local_f8;
  undefined4 local_f4;
  undefined4 local_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  ushort *local_c0;
  ushort *local_bc;
  ushort *local_b8;
  ushort *local_b4;
  ushort *local_b0;
  ushort *local_ac;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  if (param_3 < param_4) {
    param_1[4] = param_2;
    uVar25 = 0x2f;
    param_1[5] = 0;
    *(undefined1 *)(param_1 + 2) = 0x13;
    goto LAB_0071e250;
  }
  puVar24 = (undefined3 *)((uint)&local_c0 | 1);
  local_17c = (ushort *)(param_3 - param_4);
  local_180 = (ushort *)(param_2 + param_4);
  FUN_00719ebc(&local_c0,&local_180);
  puVar18 = local_bc;
  uVar10 = local_b8._0_1_;
  if ((char)local_c0 != 'O') {
    local_124 = (ushort *)(uint)(uint3)puVar24[2];
    local_1bc = (ushort *)CONCAT31(*puVar24,(char)local_c0);
    puVar18 = local_b4;
    puVar21 = local_bc;
    puVar27 = (ushort *)((uint)local_b8 & 0xff);
    goto LAB_0071e230;
  }
  puVar27 = local_180;
  if (local_17c < local_bc) {
LAB_0071e1f4:
    local_1bc = (ushort *)&DAT_00000013;
    local_128 = puVar27;
LAB_0071e200:
    local_124 = (ushort *)((uint)local_128 >> 8);
    puVar18 = (ushort *)0x0;
    puVar21 = local_128;
    puVar27 = local_128;
  }
  else {
    uVar19 = (uint)local_b8 & 0xff;
    local_17c = (ushort *)((int)local_17c - (int)local_bc);
    if (local_bc < (ushort *)0x2) goto LAB_0071e1f4;
    local_128 = local_180 + 1;
    uVar3 = *local_180;
    puVar21 = (ushort *)(uint)uVar3;
    if (((uint)(puVar21 + -3) & 0xffff) < 0xfffc) {
      local_124 = (ushort *)(uint)(uVar3 >> 8);
      puVar18 = (ushort *)0x0;
      local_1bc = (ushort *)&DAT_00000011;
      puVar27 = puVar21;
      goto LAB_0071e230;
    }
    if (&DAT_00000005 <= puVar21) {
      if (local_bc + -1 == (ushort *)0x0) {
        local_1bc = (ushort *)&DAT_00000013;
      }
      else {
        param_5 = (uint)(byte)*local_128;
        if ((param_5 < 9) && ((1 << param_5 & 0x116U) != 0)) {
          if (local_bc != (ushort *)&DAT_00000003) {
            local_124 = (ushort *)(uint)*(byte *)((int)local_180 + 3);
            local_128 = local_180 + 2;
            puVar14 = local_bc + -2;
            if (local_124 != (ushort *)0x0) {
              local_1bc = (ushort *)&DAT_00000044;
              goto LAB_0071e230;
            }
            goto LAB_0071e2dc;
          }
LAB_0071e2d0:
          puVar27 = (ushort *)((int)puVar27 + 3);
          goto LAB_0071e1f4;
        }
        local_1bc = (ushort *)(param_5 << 8 | 0x19);
        local_128 = local_180;
      }
      goto LAB_0071e200;
    }
    puVar14 = local_bc + -1;
LAB_0071e2dc:
    local_124 = puVar14;
    local_180 = (ushort *)((int)local_180 + (int)local_bc);
    FUN_007194a0(&local_c0,&local_128,uVar19);
    puVar8 = local_bc;
    puVar7 = local_124;
    puVar14 = local_128;
    if ((char)local_c0 == 'O') {
      if (local_124 < local_bc) {
        local_124 = (ushort *)((uint)local_128 >> 8);
        puVar18 = (ushort *)0x0;
        local_1bc = (ushort *)&DAT_00000013;
        puVar27 = local_128;
      }
      else if (local_bc == (ushort *)0x0) {
        local_124 = (ushort *)((uint)local_128 >> 8);
        puVar18 = (ushort *)0x0;
        local_1bc = (ushort *)&DAT_00000013;
        puVar21 = local_128;
        puVar27 = local_128;
      }
      else {
        puVar27 = (ushort *)((int)local_128 + 1);
        uVar5 = *local_128;
        if ((byte)uVar5 == 0) {
          local_1bc = (ushort *)&DAT_0000001c;
        }
        else {
          puVar31 = (ushort *)((int)local_bc + -1);
          bVar29 = 1;
          if (&DAT_00000003 < puVar21) {
            if (puVar31 == (ushort *)0x0) goto LAB_0071e1f4;
            bVar29 = *(byte *)((int)local_128 + 1);
            if (bVar29 == 0) {
              local_1bc = (ushort *)&DAT_0000001d;
              goto LAB_0071e230;
            }
            puVar27 = local_128 + 1;
            puVar31 = local_bc + -1;
          }
          if (puVar31 == (ushort *)0x0) goto LAB_0071e1f4;
          puVar30 = (ushort *)((int)puVar27 + 1);
          local_124 = (ushort *)(uint)(byte)*puVar27;
          if (puVar31 == (ushort *)&DAT_00000001) {
            local_124 = (ushort *)((uint)puVar30 >> 8);
            local_1bc = (ushort *)&DAT_00000013;
            puVar18 = (ushort *)0x0;
            puVar21 = puVar30;
            puVar27 = puVar30;
            goto LAB_0071e230;
          }
          if (puVar31 == (ushort *)0x2) {
            puVar27 = puVar27 + 1;
            goto LAB_0071e1f4;
          }
          uVar6 = puVar27[1];
          if ((byte)uVar6 == 0) {
            local_1bc = (ushort *)&DAT_0000001e;
            goto LAB_0071e230;
          }
          bVar32 = local_124 != (ushort *)0x0;
          if (puVar31 == (ushort *)&DAT_00000003) goto LAB_0071e2d0;
          bVar1 = *(byte *)((int)puVar27 + 3);
          if (bVar1 == 0) {
            local_1bc = (ushort *)&DAT_0000001f;
            local_124 = (ushort *)0x0;
          }
          else {
            puVar30 = puVar27 + 2;
            puVar16 = (ushort *)(uint)(byte)(bVar1 - 1);
            if (puVar31 + -2 < puVar16) {
              local_1bc = (ushort *)&DAT_00000013;
              local_124 = (ushort *)((uint)puVar30 >> 8);
              puVar18 = (ushort *)0x0;
              puVar21 = puVar30;
              puVar27 = puVar30;
            }
            else {
              bVar2 = *(byte *)((int)puVar27 + 1);
              uVar20 = (int)(puVar31 + -2) - (int)puVar16;
              local_128 = (ushort *)((int)puVar30 + (int)puVar16);
              local_118 = 0;
              iVar15 = 8;
              local_120 = 0;
              local_11c = 8;
              local_124 = (ushort *)uVar20;
              if (&SUB_00000004 < puVar21) {
                FUN_0071df3c(&local_c0,&local_128);
                puVar9 = local_b4;
                puVar31 = local_b8;
                if ((char)local_c0 != 'O') {
                  FUN_0134c054(0,8,8,0x10);
                  goto LAB_0071e344;
                }
                local_1d8 = local_bc;
                local_1cc = local_b8;
                local_1d4 = local_b4;
                FUN_00719bb8(&local_c0,&local_128);
                if ((char)local_c0 == 'O') {
                  uVar20 = *(uint *)((int)puVar24 + 7);
                  uVar23 = *(uint *)((int)puVar24 + 0xb);
                  if (uVar20 == 0 && uVar23 == 0) {
                    local_1b4 = 0;
LAB_0071e818:
                    local_108 = 0;
                    local_10c = 8;
                    local_110 = 0;
                    FUN_0071df3c(&local_c0,&local_128);
                    puVar27 = local_b4;
                    puVar21 = local_b8;
                    if ((char)local_c0 != 'O') {
                      local_1b8 = local_b4;
                      local_1c0 = local_bc;
                      FUN_0134c054(0,8,8,0x48);
                      goto LAB_0071eb80;
                    }
                    local_204 = local_bc;
                    local_1ec = local_b8;
                    local_1f0 = local_b4;
                    FUN_00719bb8(&local_c0,&local_128);
                    if ((char)local_c0 == 'O') {
                      local_1f8 = *(uint *)((int)puVar24 + 7);
                      uVar25 = 0x2e;
                      uVar20 = *(uint *)((int)puVar24 + 0xb);
                      if (local_1f8 != 0 || uVar20 != 0) {
                        local_1d0 = 0;
                        local_1dc = 0;
                        do {
                          bVar33 = 0xfffffffe < local_1d0;
                          local_1d0 = local_1d0 + 1;
                          local_1dc = local_1dc + bVar33;
                          FUN_0071d470(&local_c0,&local_128,param_5 & 0xff | uVar19 << 8 | 0x50000,
                                       puVar21,puVar27);
                          puVar13 = local_ac;
                          puVar28 = local_b0;
                          puVar12 = local_b4;
                          puVar11 = local_b8;
                          puVar9 = local_bc;
                          puVar31 = local_c0;
                          iVar15 = local_108;
                          local_1bc = local_b8;
                          local_1c0 = local_b4;
                          local_1b8 = local_ac;
                          if (local_c0 == (ushort *)&DAT_0000002e && local_bc == (ushort *)0x0)
                          goto LAB_0071ed44;
                          local_78 = local_a8;
                          uStack_74 = uStack_a4;
                          uStack_70 = uStack_a0;
                          uStack_6c = uStack_9c;
                          uStack_68 = uStack_98;
                          uStack_64 = uStack_94;
                          local_60 = local_90;
                          uStack_5c = uStack_8c;
                          uStack_58 = uStack_88;
                          uStack_54 = uStack_84;
                          uStack_50 = uStack_80;
                          uStack_4c = uStack_7c;
                          if (local_108 == local_110) {
                            FUN_00719470(&local_110);
                          }
                          puVar17 = (undefined4 *)(local_10c + iVar15 * 0x48);
                          *puVar17 = puVar31;
                          puVar17[1] = puVar9;
                          puVar17[2] = puVar11;
                          puVar17[3] = puVar12;
                          puVar17[5] = puVar13;
                          puVar17[4] = puVar28;
                          puVar17[6] = local_78;
                          puVar17[7] = uStack_74;
                          puVar17[8] = uStack_70;
                          puVar17[9] = uStack_6c;
                          puVar17[10] = uStack_68;
                          puVar17[0xb] = uStack_64;
                          puVar17[0xc] = local_60;
                          puVar17[0xd] = uStack_5c;
                          puVar17[0xe] = uStack_58;
                          puVar17[0xf] = uStack_54;
                          puVar17[0x10] = uStack_50;
                          puVar17[0x11] = uStack_4c;
                          local_108 = iVar15 + 1;
                        } while (local_1dc <= uVar20 &&
                                 (uint)(local_1f8 <= local_1d0) <= local_1dc - uVar20);
                      }
LAB_0071e9c0:
                      param_1[6] = local_48;
                      param_1[7] = uStack_44;
                      param_1[8] = uStack_40;
                      param_1[9] = uStack_3c;
                      param_1[10] = local_38;
                      param_1[0xb] = uStack_34;
                      param_1[0xc] = uStack_30;
                      param_1[0xd] = uStack_2c;
                      param_1[0xe] = local_100;
                      param_1[0xf] = local_fc;
                      param_1[0x10] = local_f8;
                      param_1[0x11] = local_f4;
                      param_1[0x1a] = local_1d4;
                      param_1[0x12] = puVar30;
                      param_1[0x13] = puVar16;
                      param_1[0x14] = (byte *)((int)puVar14 + (int)puVar8);
                      param_1[0x15] = (int)puVar7 - (int)puVar8;
                      param_1[0x16] = local_1b4;
                      param_1[0x17] = local_1e4;
                      param_1[0x18] = local_1d8;
                      param_1[0x19] = local_1cc;
                      param_1[0x1b] = local_120;
                      param_1[0x1c] = local_11c;
                      param_1[0x1d] = local_118;
                      param_1[0x1e] = local_204;
                      param_1[0x1f] = local_1ec;
                      param_1[0x20] = local_1f0;
                      param_1[0x21] = local_110;
                      param_1[0x22] = local_10c;
                      param_1[0x23] = local_108;
                      *(byte *)((int)param_1 + 0xa5) = bVar1;
                      *(byte *)(param_1 + 0x29) = (byte)uVar6;
                      *(byte *)((int)param_1 + 0xa3) = bVar2;
                      *(byte *)((int)param_1 + 0xa2) = bVar29;
                      *(byte *)((int)param_1 + 0xa1) = (byte)uVar5;
                      *(bool *)(param_1 + 0x28) = bVar32;
                      param_1[0x26] = puVar18;
                      param_1[0x27] = puVar8;
                      *(ushort *)((int)param_1 + 0x92) = uVar3;
                      *(undefined1 *)((int)param_1 + 0x91) = uVar10;
                      *(char *)(param_1 + 0x24) = (char)param_5;
                      param_1[2] = param_8;
                      param_1[0x25] = param_4;
                      param_1[3] = local_1f8;
                      param_1[4] = 0x2e;
                      param_1[5] = 0;
                      goto LAB_0071e250;
                    }
                    local_1c0 = local_bc;
                    local_1b8 = local_b4;
                    uVar4 = *puVar24;
                    FUN_0134c054(0,8,8,0x48);
                    local_1bc = (ushort *)CONCAT31(uVar4,(char)local_c0);
                  }
                  else {
                    uVar22 = 0;
                    local_1b4 = 0;
                    local_1d0 = 8;
                    do {
                      uVar26 = local_1b4 + 1;
                      uVar22 = uVar22 + (0xfffffffe < local_1b4);
                      FUN_0071ee9c(&local_c0,&local_128,param_5 & 0xff | uVar19 << 8 | 0x50000,
                                   puVar31,puVar9);
                      puVar28 = local_ac;
                      puVar27 = local_b0;
                      puVar12 = local_b4;
                      puVar11 = local_b8;
                      local_1bc = local_b8;
                      local_1c0 = local_b4;
                      local_1b8 = local_ac;
                      if (((uint)local_c0 & 1) != 0) goto LAB_0071ed6c;
                      if (local_120 == local_1b4) {
                        FUN_0126721c(&local_120);
                        local_1d0 = local_11c;
                      }
                      puVar17 = (undefined4 *)(local_1d0 + local_1b4 * 0x10);
                      *puVar17 = puVar11;
                      puVar17[1] = puVar12;
                      puVar17[2] = puVar27;
                      puVar17[3] = puVar28;
                      local_1b4 = uVar26;
                      local_118 = uVar26;
                    } while (uVar22 <= uVar23 && (uint)(uVar20 <= uVar26) <= uVar22 - uVar23);
                    local_1b4 = 0;
LAB_0071e7b8:
                    local_10c = 8;
                    local_108 = 0;
                    local_110 = 0;
                    if (&SUB_00000004 < puVar21) goto LAB_0071e818;
                    if (param_8 == 0) {
                      uVar25 = 0x2e;
                    }
                    else {
                      local_1f8 = param_9;
                      local_f4 = 0;
                      local_f8 = 0;
                      local_fc = 0;
                      local_100 = 0;
                      FUN_01bed93e(&uStack_40,0,0x18);
                      uVar25 = 0x1f;
                    }
                    local_1d0 = 0;
                    local_1dc = 8;
                    while (puVar21 = local_128, local_124 != (ushort *)0x0) {
                      uVar19 = 0;
                      while (*(byte *)((int)local_128 + uVar19) != 0) {
                        uVar19 = uVar19 + 1;
                        if (local_124 == (ushort *)uVar19) goto LAB_0071ed24;
                      }
                      local_124 = (ushort *)((int)local_124 + ~uVar19);
                      local_128 = (ushort *)((int)local_128 + uVar19 + 1);
                      if (uVar19 == 0) {
                        local_1ec = (ushort *)0x2;
                        local_1f0 = (ushort *)0x0;
                        local_204 = (ushort *)0x0;
                        goto LAB_0071e9c0;
                      }
                      FUN_0071ef90(&local_c0,&local_128,puVar21);
                      puVar28 = local_ac;
                      puVar12 = local_b0;
                      puVar11 = local_b4;
                      puVar9 = local_b8;
                      puVar31 = local_bc;
                      puVar27 = local_c0;
                      local_1bc = local_b8;
                      local_1c0 = local_b4;
                      local_1b8 = local_ac;
                      if (local_c0 == (ushort *)&DAT_0000002e && local_bc == (ushort *)0x0) {
                        local_204 = (ushort *)0x0;
                        local_1ec = (ushort *)0x2;
                        puVar28 = local_b0;
                        goto LAB_0071ed44;
                      }
                      local_f0 = local_a8;
                      uStack_ec = uStack_a4;
                      uStack_e8 = uStack_a0;
                      uStack_e4 = uStack_9c;
                      uStack_e0 = uStack_98;
                      uStack_dc = uStack_94;
                      local_d8 = local_90;
                      uStack_d4 = uStack_8c;
                      uStack_d0 = uStack_88;
                      uStack_cc = uStack_84;
                      uStack_c8 = uStack_80;
                      uStack_c4 = uStack_7c;
                      if (local_1d0 == local_110) {
                        FUN_00719470(&local_110);
                        local_1dc = local_10c;
                      }
                      local_108 = local_1d0 + 1;
                      puVar17 = (undefined4 *)(local_1dc + local_1d0 * 0x48);
                      *puVar17 = puVar27;
                      puVar17[1] = puVar31;
                      puVar17[2] = puVar9;
                      puVar17[3] = puVar11;
                      puVar17[4] = puVar12;
                      puVar17[5] = puVar28;
                      puVar17[6] = local_f0;
                      puVar17[7] = uStack_ec;
                      puVar17[8] = uStack_e8;
                      puVar17[9] = uStack_e4;
                      puVar17[10] = uStack_e0;
                      puVar17[0xb] = uStack_dc;
                      puVar17[0xc] = local_d8;
                      puVar17[0xd] = uStack_d4;
                      puVar17[0xe] = uStack_d0;
                      puVar17[0xf] = uStack_cc;
                      puVar17[0x10] = uStack_c8;
                      puVar17[0x11] = uStack_c4;
                      local_1c0 = puVar21;
                      local_1d0 = local_108;
                    }
LAB_0071ed24:
                    local_1ec = (ushort *)0x2;
                    local_1b8 = (ushort *)0x0;
                    local_1bc = (ushort *)&DAT_00000013;
                    local_204 = (ushort *)0x0;
                    puVar28 = local_128;
LAB_0071ed44:
                    FUN_0134c054(local_110,local_10c,8,0x48);
                    local_b8 = puVar28;
                  }
                  FUN_0134c054(local_204,local_1ec,2,4);
                  puVar27 = local_b8;
                }
                else {
                  local_1c0 = local_bc;
                  local_c0 = (ushort *)CONCAT31(*puVar24,(char)local_c0);
                  local_1b8 = local_b4;
LAB_0071eb80:
                  puVar27 = local_b8;
                  local_1bc = local_c0;
                }
              }
              else {
                local_1e4 = param_7;
                local_1b4 = param_6;
                puVar31 = local_128;
                while( true ) {
                  puVar27 = puVar31;
                  uVar23 = local_118;
                  if (uVar20 == 0) break;
                  uVar22 = 0;
                  while (*(byte *)((int)puVar27 + uVar22) != 0) {
                    uVar22 = uVar22 + 1;
                    if (uVar20 == uVar22) goto LAB_0071e6f4;
                  }
                  uVar20 = uVar20 + ~uVar22;
                  puVar31 = (ushort *)((int)puVar27 + uVar22 + 1);
                  if (uVar22 == 0) {
                    local_1cc = (ushort *)0x2;
                    local_1d4 = (ushort *)0x0;
                    local_1d8 = (ushort *)0x0;
                    local_128 = puVar31;
                    local_124 = (ushort *)uVar20;
                    goto LAB_0071e7b8;
                  }
                  if (local_118 == local_120) {
                    FUN_0126721c(&local_120);
                    iVar15 = local_11c;
                  }
                  puVar17 = (undefined4 *)(iVar15 + uVar23 * 0x10);
                  *puVar17 = 0x1f;
                  local_118 = uVar23 + 1;
                  puVar17[1] = 0;
                  puVar17[2] = puVar27;
                  puVar17[3] = uVar22;
                  local_1c0 = puVar27;
                }
LAB_0071e6f4:
                local_1cc = (ushort *)0x2;
                local_1b8 = (ushort *)0x0;
                local_1bc = (ushort *)&DAT_00000013;
                local_1d8 = (ushort *)0x0;
              }
LAB_0071ed6c:
              FUN_0134c054(local_120,local_11c,8,0x10);
              FUN_0134c054(local_1d8,local_1cc,2,4);
              local_124 = (ushort *)((uint)puVar27 >> 8);
              puVar18 = local_1b8;
              puVar21 = local_1c0;
            }
          }
        }
      }
    }
    else {
LAB_0071e344:
      local_124 = (ushort *)((uint)local_b8 >> 8);
      local_1bc = local_c0;
      puVar18 = local_b4;
      puVar21 = local_bc;
      puVar27 = local_b8;
    }
  }
LAB_0071e230:
  param_1[2] = local_1bc;
  param_1[3] = puVar21;
  uVar25 = 0x2f;
  param_1[4] = (uint)puVar27 & 0xff | (int)local_124 << 8;
  param_1[5] = puVar18;
LAB_0071e250:
  *param_1 = uVar25;
  param_1[1] = 0;
  return;
}


// FUN_0060a058 @ 0060a058 size=3100 calls_out=9 calls_in=2
// strings: 

void FUN_0060a058(undefined4 *param_1,int param_2,uint param_3,uint param_4,uint param_5,
                 undefined4 param_6,int param_7,int param_8,uint param_9)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  undefined1 uVar4;
  undefined2 uVar5;
  uint uVar6;
  uint uVar7;
  uint *puVar8;
  uint *puVar9;
  uint *puVar10;
  int iVar11;
  uint uVar12;
  ushort *puVar13;
  undefined4 *puVar14;
  uint *puVar15;
  uint *puVar16;
  uint uVar17;
  uint *puVar18;
  uint *puVar19;
  int iVar20;
  uint uVar21;
  uint *puVar22;
  uint uVar23;
  undefined3 *puVar24;
  uint *puVar25;
  uint uVar26;
  uint uVar27;
  uint uVar28;
  ushort *puVar29;
  uint uVar30;
  byte bVar31;
  bool bVar32;
  undefined4 local_1c0;
  uint *local_1bc;
  uint local_1b0;
  uint *local_1a4;
  uint local_1a0;
  int local_194;
  uint *local_190;
  uint *local_18c;
  int local_188;
  uint local_184;
  uint local_17c;
  uint local_174;
  uint *local_170;
  uint local_144;
  undefined4 local_138;
  undefined4 uStack_134;
  uint *local_108;
  uint *local_104;
  uint local_100;
  int local_fc;
  uint local_f8;
  int local_f0;
  int local_ec;
  int local_e8;
  undefined4 local_e0;
  undefined4 local_dc;
  undefined4 local_d8;
  undefined4 local_d4;
  uint local_d0;
  uint uStack_cc;
  uint uStack_c8;
  uint uStack_c4;
  uint uStack_c0;
  uint uStack_bc;
  uint local_b8;
  uint uStack_b4;
  uint uStack_b0;
  uint uStack_ac;
  uint uStack_a8;
  uint uStack_a4;
  uint local_a0;
  uint *local_9c;
  uint local_98;
  uint *local_94;
  uint *local_90;
  uint uStack_8c;
  uint local_88;
  uint uStack_84;
  uint uStack_80;
  uint uStack_7c;
  uint uStack_78;
  uint uStack_74;
  uint local_70;
  uint uStack_6c;
  uint uStack_68;
  uint uStack_64;
  uint uStack_60;
  uint uStack_5c;
  uint local_58;
  uint uStack_54;
  uint uStack_50;
  uint uStack_4c;
  uint uStack_48;
  uint uStack_44;
  uint local_40;
  uint uStack_3c;
  uint uStack_38;
  uint uStack_34;
  uint uStack_30;
  uint uStack_2c;
  
  if (param_3 < param_4) {
    param_1[4] = param_2;
    param_1[5] = 0;
    *param_1 = 0x2f;
    param_1[1] = 0;
    *(undefined1 *)(param_1 + 2) = 0x13;
    return;
  }
  param_3 = param_3 - param_4;
  puVar18 = (uint *)(param_2 + param_4);
  if (param_3 < 4) {
    uVar12 = (uint)puVar18 & 0xffffff00;
    uVar28 = 0x13;
    local_108 = puVar18;
  }
  else {
    uVar28 = param_3 - 4;
    local_108 = puVar18 + 1;
    uVar27 = *puVar18;
    iVar20 = 4;
    if (uVar27 < 0xfffffff0) {
      bVar32 = uVar28 == uVar27;
      if (uVar27 <= uVar28) {
        bVar32 = uVar27 == 1;
      }
      if ((uVar27 > uVar28 || uVar27 == 0) || bVar32) goto LAB_0060a0cc;
LAB_0060a15c:
      local_104 = (uint *)(uVar27 - 2);
      puVar18 = (uint *)((int)local_108 + 2);
      uVar12 = *local_108;
      puVar22 = (uint *)(uint)(ushort)uVar12;
      if ((ushort *)((int)puVar22 + -6) < (ushort *)0xfffffffb || puVar22 == (uint *)&DAT_00000001)
      {
        uVar28 = 0x11;
        local_108 = puVar22;
        param_5 = 0;
        goto LAB_0060a114;
      }
      if (&DAT_00000004 < puVar22) {
        if (local_104 != (uint *)0x0) {
          param_5 = (uint)*(byte *)puVar18;
          if ((8 < param_5) || ((1 << param_5 & 0x116U) == 0)) {
            uVar28 = param_5 << 8 | 0x19;
            goto LAB_0060a114;
          }
          if (uVar27 == 3) {
            local_108 = (uint *)((int)local_108 + 3);
            goto LAB_0060a0cc;
          }
          local_104 = (uint *)(uVar27 - 4);
          puVar10 = local_108 + 1;
          if (*(byte *)((int)local_108 + 3) != 0) {
            uVar28 = 0x44;
            goto LAB_0060a114;
          }
          goto LAB_0060a1d4;
        }
LAB_0060a2b4:
        param_5 = 0;
        uVar28 = 0x13;
        local_108 = puVar18;
        goto LAB_0060a114;
      }
      puVar10 = puVar18;
LAB_0060a1d4:
      local_108 = puVar10;
      puVar24 = (undefined3 *)((uint)&local_a0 | 1);
      FUN_00618580(&local_a0,&local_108,iVar20);
      puVar9 = local_9c;
      puVar8 = local_104;
      puVar10 = local_108;
      uVar28 = local_a0 & 0xff;
      if (uVar28 != 0x4f) {
        uVar4 = *(undefined1 *)((int)puVar24 + 2);
        uVar5 = *(undefined2 *)puVar24;
        local_108 = *(uint **)((int)puVar24 + 7);
        param_5 = *(uint *)((int)puVar24 + 0xb);
LAB_0060a230:
        uVar28 = uVar28 | (uint)CONCAT12(uVar4,uVar5) << 8;
        puVar18 = local_9c;
        goto LAB_0060a114;
      }
      if (local_104 < local_9c) {
        uVar28 = 0x13;
        param_5 = 0;
        goto LAB_0060a114;
      }
      if (local_9c == (uint *)0x0) {
LAB_0060a0cc:
        uVar28 = 0x13;
        puVar18 = local_108;
        param_5 = 0;
        goto LAB_0060a114;
      }
      puVar18 = (uint *)((int)local_108 + 1);
      uVar6 = *local_108;
      if ((byte)uVar6 == 0) {
        uVar28 = 0x1c;
        goto LAB_0060a114;
      }
      puVar29 = (ushort *)((int)local_9c + -1);
      bVar31 = 1;
      if ((uint *)0x3 < puVar22) {
        if (puVar29 == (ushort *)0x0) goto LAB_0060a2b4;
        bVar31 = *(byte *)((int)local_108 + 1);
        if (bVar31 == 0) {
          uVar28 = 0x1d;
          goto LAB_0060a114;
        }
        puVar18 = (uint *)((int)local_108 + 2);
        puVar29 = (ushort *)((int)local_9c + -2);
      }
      if (puVar29 == (ushort *)0x0) goto LAB_0060a2b4;
      puVar16 = (uint *)((int)puVar18 + 1);
      uVar7 = *puVar18;
      if (puVar29 == (ushort *)&DAT_00000001) {
        uVar28 = 0x13;
        puVar18 = puVar16;
        local_108 = puVar16;
        param_5 = 0;
        goto LAB_0060a114;
      }
      if (puVar29 == (ushort *)&SUB_00000002) {
        local_108 = (uint *)((int)puVar18 + 2);
        goto LAB_0060a0cc;
      }
      bVar1 = *(byte *)((int)puVar18 + 2);
      if (bVar1 == 0) {
        uVar28 = 0x1e;
        goto LAB_0060a114;
      }
      if (puVar29 == (ushort *)0x3) {
        puVar18 = (uint *)((int)puVar18 + 3);
        uVar28 = 0x13;
        local_108 = puVar18;
        param_5 = 0;
        goto LAB_0060a114;
      }
      bVar2 = *(byte *)((int)puVar18 + 3);
      if (bVar2 == 0) {
        uVar28 = 0x1f;
        goto LAB_0060a114;
      }
      puVar16 = puVar18 + 1;
      puVar13 = (ushort *)(uint)(byte)(bVar2 - 1);
      if (puVar29 + -2 < puVar13) {
        uVar28 = 0x13;
        puVar18 = puVar16;
        local_108 = puVar16;
        param_5 = 0;
        goto LAB_0060a114;
      }
      bVar3 = *(byte *)((int)puVar18 + 1);
      local_f8 = 0;
      local_104 = (uint *)((int)(puVar29 + -2) - (int)puVar13);
      local_108 = (uint *)((int)puVar16 + (int)puVar13);
      iVar11 = 8;
      local_fc = 8;
      local_100 = 0;
      if (&DAT_00000004 < puVar22) {
        FUN_0060ad68(&local_a0,&local_108);
        puVar25 = local_94;
        uVar17 = local_98;
        uVar28 = local_a0 & 0xff;
        if (uVar28 != 0x4f) {
          uVar4 = *(undefined1 *)((int)puVar24 + 2);
          uVar5 = *(undefined2 *)puVar24;
          local_108 = *(uint **)((int)puVar24 + 7);
          param_5 = *(uint *)((int)puVar24 + 0xb);
          goto LAB_0060a230;
        }
        local_190 = local_9c;
        local_184 = local_98;
        local_18c = local_94;
        FUN_006183c4(&local_a0,&local_108);
        if ((char)local_a0 != 'O') {
          uVar30 = *(uint *)((int)puVar24 + 0xb);
          local_170 = *(uint **)((int)puVar24 + 7);
          uVar28 = CONCAT31(*puVar24,(char)local_a0);
          puVar18 = local_9c;
          goto LAB_0060ac00;
        }
        uVar23 = *(uint *)((int)puVar24 + 7);
        uVar26 = *(uint *)((int)puVar24 + 0xb);
        if (uVar23 == 0 && uVar26 == 0) {
          local_174 = 0;
LAB_0060a6f4:
          local_e8 = 0;
          local_ec = 8;
          local_f0 = 0;
          FUN_0060ad68(&local_a0,&local_108);
          puVar18 = local_94;
          uVar28 = local_98;
          if ((char)local_a0 != 'O') {
            bVar32 = false;
            uVar30 = *(uint *)((int)puVar24 + 0xb);
            local_170 = *(uint **)((int)puVar24 + 7);
            uVar28 = CONCAT31(*puVar24,(char)local_a0);
            puVar19 = local_9c;
            goto LAB_0060abd0;
          }
          local_1bc = local_9c;
          local_1a0 = local_98;
          local_1a4 = local_94;
          FUN_006183c4(&local_a0,&local_108);
          if ((char)local_a0 == 'O') {
            uVar17 = *(uint *)((int)puVar24 + 7);
            uVar30 = *(uint *)((int)puVar24 + 0xb);
            local_1c0 = 0x2e;
            if (uVar17 != 0 || uVar30 != 0) {
              local_1b0 = param_5 & 0xff | iVar20 << 8 | 0x50000;
              local_144 = 0;
              local_17c = 0;
              do {
                bVar32 = 0xfffffffe < local_144;
                local_144 = local_144 + 1;
                local_17c = local_17c + bVar32;
                FUN_0060b218(&local_a0,&local_108,local_1b0,uVar28,puVar18);
                uVar21 = uStack_8c;
                puVar19 = local_90;
                puVar25 = local_94;
                uVar26 = local_98;
                puVar22 = local_9c;
                uVar23 = local_a0;
                iVar11 = local_e8;
                local_170 = local_90;
                if (local_a0 == 0x2e && local_9c == (uint *)0x0) {
                  bVar32 = true;
                  puVar19 = local_94;
                  uVar30 = uStack_8c;
                  uVar28 = local_98;
                  goto LAB_0060abd0;
                }
                local_58 = local_88;
                uStack_54 = uStack_84;
                uStack_50 = uStack_80;
                uStack_4c = uStack_7c;
                uStack_48 = uStack_78;
                uStack_44 = uStack_74;
                local_40 = local_70;
                uStack_3c = uStack_6c;
                uStack_38 = uStack_68;
                uStack_34 = uStack_64;
                uStack_30 = uStack_60;
                uStack_2c = uStack_5c;
                if (local_e8 == local_f0) {
                  FUN_0061d010(&local_f0);
                }
                puVar15 = (uint *)(local_ec + iVar11 * 0x48);
                *puVar15 = uVar23;
                puVar15[3] = (uint)puVar25;
                puVar15[1] = (uint)puVar22;
                puVar15[2] = uVar26;
                puVar15[4] = (uint)puVar19;
                puVar15[5] = uVar21;
                puVar15[6] = local_58;
                puVar15[7] = uStack_54;
                puVar15[8] = uStack_50;
                puVar15[9] = uStack_4c;
                puVar15[10] = uStack_48;
                puVar15[0xb] = uStack_44;
                puVar15[0xc] = local_40;
                puVar15[0xd] = uStack_3c;
                puVar15[0xe] = uStack_38;
                puVar15[0xf] = uStack_34;
                puVar15[0x10] = uStack_30;
                puVar15[0x11] = uStack_2c;
                local_e8 = iVar11 + 1;
              } while (local_17c <= uVar30 && (uint)(uVar17 <= local_144) <= local_17c - uVar30);
            }
LAB_0060a8f4:
            param_1[0x1d] = local_f8;
            param_1[0x1b] = local_100;
            param_1[0x1e] = local_1bc;
            param_1[0x1f] = local_1a0;
            param_1[0x19] = local_184;
            param_1[0x20] = local_1a4;
            param_1[0x21] = local_f0;
            param_1[0x18] = local_190;
            param_1[0x1a] = local_18c;
            *param_1 = local_1c0;
            param_1[1] = 0;
            param_1[0x1c] = local_fc;
            param_1[0x22] = local_ec;
            param_1[0x23] = local_e8;
            param_1[2] = param_8;
            param_1[3] = local_1b0;
            param_1[4] = 0x2e;
            param_1[5] = 0;
            param_1[6] = local_138;
            param_1[7] = uStack_134;
            param_1[8] = 0;
            param_1[9] = 0;
            param_1[10] = 0;
            param_1[0xb] = 0;
            param_1[0xc] = 0;
            param_1[0xd] = 0;
            param_1[0xe] = local_e0;
            param_1[0xf] = local_dc;
            param_1[0x10] = local_d8;
            param_1[0x11] = local_d4;
            *(byte *)((int)param_1 + 0xa5) = bVar2;
            *(byte *)(param_1 + 0x29) = bVar1;
            *(byte *)((int)param_1 + 0xa3) = bVar3;
            *(byte *)((int)param_1 + 0xa2) = bVar31;
            *(byte *)((int)param_1 + 0xa1) = (byte)uVar6;
            *(bool *)(param_1 + 0x28) = (byte)uVar7 != 0;
            *(ushort *)((int)param_1 + 0x92) = (ushort)uVar12;
            *(char *)((int)param_1 + 0x91) = (char)iVar20;
            *(char *)(param_1 + 0x24) = (char)param_5;
            param_1[0x17] = local_188;
            param_1[0x16] = local_174;
            param_1[0x13] = puVar13;
            param_1[0x25] = param_4;
            param_1[0x26] = uVar27;
            param_1[0x27] = puVar9;
            param_1[0x15] = (int)puVar8 - (int)puVar9;
            param_1[0x14] = (byte *)((int)puVar10 + (int)puVar9);
            param_1[0x12] = puVar16;
            return;
          }
          uVar30 = *(uint *)((int)puVar24 + 0xb);
          local_170 = *(uint **)((int)puVar24 + 7);
          uVar28 = CONCAT31(*puVar24,(char)local_a0);
          puVar19 = local_9c;
        }
        else {
          local_174 = 0;
          local_188 = 8;
          local_17c = 0;
          do {
            uVar21 = local_174 + 1;
            local_17c = local_17c + (0xfffffffe < local_174);
            FUN_0060b124(&local_a0,&local_108,param_5 & 0xff | iVar20 << 8 | 0x50000,uVar17,puVar25)
            ;
            uVar30 = uStack_8c;
            puVar15 = local_90;
            puVar19 = local_94;
            uVar28 = local_98;
            local_170 = local_90;
            puVar18 = local_94;
            if ((local_a0 & 1) != 0) goto LAB_0060ac00;
            if (local_100 == local_174) {
              FUN_0061cfac(&local_100);
              local_188 = local_fc;
            }
            puVar18 = (uint *)(local_188 + local_174 * 0x10);
            *puVar18 = uVar28;
            puVar18[1] = (uint)puVar19;
            puVar18[2] = (uint)puVar15;
            puVar18[3] = uVar30;
            local_174 = uVar21;
            local_f8 = uVar21;
          } while (local_17c <= uVar26 && (uint)(uVar23 <= uVar21) <= local_17c - uVar26);
          local_174 = 0;
LAB_0060a694:
          local_ec = 8;
          local_e8 = 0;
          local_f0 = 0;
          if (&DAT_00000004 < puVar22) goto LAB_0060a6f4;
          if (param_8 == 0) {
            local_1c0 = 0x2e;
          }
          else {
            local_1b0 = param_9;
            local_d4 = 0;
            local_d8 = 0;
            local_dc = 0;
            local_e0 = 0;
            local_1c0 = 0x1f;
          }
          local_194 = 8;
          while (iVar11 = local_e8, puVar18 = local_108, local_170 = local_108,
                local_104 != (uint *)0x0) {
            uVar28 = 0;
            while (*(byte *)((int)local_108 + uVar28) != 0) {
              uVar28 = uVar28 + 1;
              if (local_104 == (uint *)uVar28) goto LAB_0060abb4;
            }
            local_104 = (uint *)((int)local_104 + ~uVar28);
            local_108 = (uint *)((int)local_108 + uVar28 + 1);
            if (uVar28 == 0) {
              local_1a0 = 2;
              local_1a4 = (uint *)0x0;
              local_1bc = (uint *)0x0;
              goto LAB_0060a8f4;
            }
            FUN_0060b5e4(&local_a0,&local_108,puVar18);
            uVar30 = uStack_8c;
            puVar19 = local_90;
            puVar25 = local_94;
            uVar17 = local_98;
            puVar22 = local_9c;
            uVar28 = local_a0;
            local_170 = local_90;
            if (local_a0 == 0x2e && local_9c == (uint *)0x0) {
              bVar32 = true;
              local_1bc = (uint *)0x0;
              local_1a0 = 2;
              puVar19 = local_94;
              uVar28 = local_98;
              goto LAB_0060abd0;
            }
            local_d0 = local_88;
            uStack_cc = uStack_84;
            uStack_c8 = uStack_80;
            uStack_c4 = uStack_7c;
            uStack_c0 = uStack_78;
            uStack_bc = uStack_74;
            local_b8 = local_70;
            uStack_b4 = uStack_6c;
            uStack_b0 = uStack_68;
            uStack_ac = uStack_64;
            uStack_a8 = uStack_60;
            uStack_a4 = uStack_5c;
            if (iVar11 == local_f0) {
              FUN_0061d010(&local_f0);
              local_194 = local_ec;
            }
            local_e8 = iVar11 + 1;
            puVar15 = (uint *)(local_194 + iVar11 * 0x48);
            *puVar15 = uVar28;
            puVar15[3] = (uint)puVar25;
            puVar15[1] = (uint)puVar22;
            puVar15[2] = uVar17;
            puVar15[4] = (uint)puVar19;
            puVar15[5] = uVar30;
            puVar15[6] = local_d0;
            puVar15[7] = uStack_cc;
            puVar15[8] = uStack_c8;
            puVar15[9] = uStack_c4;
            puVar15[10] = uStack_c0;
            puVar15[0xb] = uStack_bc;
            puVar15[0xc] = local_b8;
            puVar15[0xd] = uStack_b4;
            puVar15[0xe] = uStack_b0;
            puVar15[0xf] = uStack_ac;
            puVar15[0x10] = uStack_a8;
            puVar15[0x11] = uStack_a4;
            puVar19 = puVar18;
          }
LAB_0060abb4:
          bVar32 = true;
          local_1bc = (uint *)0x0;
          local_1a0 = 2;
          uVar30 = 0;
          uVar28 = 0x13;
LAB_0060abd0:
          if (local_f0 != 0) {
            thunk_FUN_016d3fb4(local_ec);
          }
          puVar18 = puVar19;
          if (!bVar32) goto LAB_0060ac00;
        }
        puVar18 = puVar19;
        if (local_1bc != (uint *)0x0) {
          thunk_FUN_016d3fb4(local_1a0);
        }
      }
      else {
        local_188 = param_7;
        local_174 = param_6;
        uVar28 = (uint)local_104;
        puVar25 = local_108;
        uVar17 = local_f8;
        while (puVar19 = puVar25, local_f8 = uVar17, uVar28 != 0) {
          uVar30 = 0;
          while (*(byte *)((int)puVar19 + uVar30) != 0) {
            uVar30 = uVar30 + 1;
            if (uVar28 == uVar30) goto LAB_0060a4ac;
          }
          uVar28 = uVar28 + ~uVar30;
          puVar25 = (uint *)((int)puVar19 + uVar30 + 1);
          if (uVar30 == 0) {
            local_184 = 2;
            local_18c = (uint *)0x0;
            local_190 = (uint *)0x0;
            local_108 = puVar25;
            local_104 = (uint *)uVar28;
            goto LAB_0060a694;
          }
          if (uVar17 == local_100) {
            FUN_0061cfac(&local_100);
            iVar11 = local_fc;
          }
          puVar14 = (undefined4 *)(iVar11 + uVar17 * 0x10);
          *puVar14 = 0x1f;
          uVar17 = uVar17 + 1;
          puVar14[1] = 0;
          puVar14[2] = puVar19;
          puVar14[3] = uVar30;
          puVar18 = puVar19;
        }
LAB_0060a4ac:
        local_190 = (uint *)0x0;
        local_184 = 2;
        uVar30 = 0;
        uVar28 = 0x13;
        local_170 = puVar19;
      }
LAB_0060ac00:
      if (local_100 != 0) {
        thunk_FUN_016d3fb4(local_fc);
      }
      if (local_190 != (uint *)0x0) {
        thunk_FUN_016d3fb4(local_184);
      }
      local_108 = local_170;
      param_5 = uVar30;
      goto LAB_0060a114;
    }
    uVar12 = 0;
    if (uVar27 == 0xffffffff) {
      if (uVar28 < 8) {
        uVar12 = (uint)local_108 & 0xffffff00;
        uVar28 = 0x13;
        goto LAB_0060a108;
      }
      if (puVar18[2] == 0) {
        uVar27 = *local_108;
        param_3 = param_3 - 0xc;
        local_108 = puVar18 + 3;
        iVar20 = 8;
        bVar32 = param_3 == uVar27;
        if (uVar27 <= param_3) {
          bVar32 = uVar27 == 1;
        }
        if ((uVar27 <= param_3 && uVar27 != 0) && !bVar32) goto LAB_0060a15c;
        goto LAB_0060a0cc;
      }
      uVar28 = 0x38;
    }
    else {
      uVar28 = 0x10;
    }
    local_108 = (uint *)0x0;
  }
LAB_0060a108:
  puVar18 = local_108;
  local_108 = (uint *)(uVar12 | (uint)local_108 & 0xff);
  param_5 = 0;
LAB_0060a114:
  *param_1 = 0x2f;
  param_1[1] = 0;
  param_1[2] = uVar28;
  param_1[3] = puVar18;
  param_1[4] = local_108;
  param_1[5] = param_5;
  return;
}


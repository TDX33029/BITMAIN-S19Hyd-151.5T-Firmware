// FUN_00ff28c0 @ 00ff28c0 size=4196 calls_out=23 calls_in=2
// strings: end of string not reached

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_00ff28c0(undefined4 *param_1,undefined4 *param_2)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  char cVar6;
  int *piVar7;
  undefined1 *puVar8;
  uint uVar9;
  undefined1 **ppuVar10;
  uint *puVar11;
  uint *puVar12;
  undefined1 ***pppuVar13;
  undefined4 *puVar14;
  uint uVar15;
  undefined1 **ppuVar16;
  int iVar17;
  undefined1 **ppuVar18;
  undefined1 *puVar19;
  int iVar20;
  undefined1 *puVar21;
  uint uVar22;
  undefined4 uVar23;
  undefined1 **ppuVar24;
  undefined1 *puVar25;
  undefined4 uVar26;
  undefined1 **ppuVar27;
  undefined1 **ppuVar28;
  undefined4 uVar29;
  undefined4 uVar30;
  undefined1 **ppuVar31;
  undefined1 **ppuVar32;
  uint *puVar33;
  bool bVar34;
  undefined8 uVar35;
  undefined1 **local_174;
  undefined1 **local_170;
  undefined1 **local_16c;
  undefined1 *local_168;
  undefined1 **local_164;
  undefined1 **local_160;
  undefined1 **local_15c;
  undefined1 **local_158;
  undefined1 **local_154;
  undefined1 **local_150;
  undefined1 **local_14c;
  undefined1 **local_148;
  undefined1 **ppuStack_144;
  undefined1 **ppuStack_140;
  undefined1 **local_13c;
  undefined1 **local_138;
  undefined1 **local_134;
  undefined1 **local_130;
  undefined1 **local_12c;
  undefined1 **ppuStack_128;
  undefined1 local_124;
  char local_123;
  undefined1 **local_120;
  undefined1 **local_11c;
  undefined1 **local_118;
  undefined1 **local_114;
  undefined1 **ppuStack_110;
  undefined1 **local_10c;
  undefined1 **ppuStack_108;
  undefined1 **ppuStack_104;
  undefined1 **ppuStack_100;
  undefined1 **ppuStack_fc;
  undefined1 **ppuStack_f8;
  undefined1 **local_f0;
  undefined1 **local_ec;
  undefined1 **local_e8;
  undefined1 **local_e4;
  undefined1 **local_e0;
  undefined1 **local_dc;
  undefined1 **local_d8;
  undefined1 **ppuStack_d4;
  undefined4 uStack_d0;
  undefined1 **local_c8;
  undefined1 **local_c4;
  undefined1 **local_c0;
  undefined1 **local_b8;
  undefined1 **ppuStack_b4;
  undefined1 **ppuStack_b0;
  undefined1 **local_ac;
  undefined1 **ppuStack_a8;
  undefined1 **ppuStack_a4;
  undefined1 *local_a0;
  undefined1 **local_9c;
  undefined1 **local_98;
  undefined1 **local_94;
  undefined1 **local_90;
  undefined1 **local_8c;
  undefined1 **local_88;
  undefined1 **local_84;
  undefined1 **local_80;
  undefined1 **local_7c;
  undefined1 local_78;
  undefined1 uStack_77;
  undefined2 uStack_76;
  undefined1 **local_74;
  undefined1 **local_70;
  undefined1 **local_6c;
  undefined1 **local_68;
  undefined1 **local_64;
  undefined4 local_60;
  undefined1 **local_5c;
  undefined1 local_58;
  undefined1 **local_50;
  undefined1 **local_4c;
  undefined1 **local_48;
  undefined1 **local_44;
  undefined1 **local_40;
  undefined1 **local_3c;
  undefined1 **local_38;
  undefined1 **ppuStack_34;
  undefined1 **local_30;
  undefined1 **local_2c;
  undefined1 **ppuStack_28;
  
  piVar7 = param_2 + 4;
  ppuVar31 = (undefined1 **)param_2[5];
  ppuVar32 = (undefined1 **)param_2[6];
  bVar1 = *(byte *)((int)param_2 + 0x22);
  bVar2 = *(byte *)((int)param_2 + 0x21);
  bVar3 = *(byte *)(param_2 + 0xc);
  bVar4 = *(byte *)((int)param_2 + 0x23);
  bVar5 = *(byte *)((int)param_2 + 0x26);
  uVar35 = thunk_FUN_016de0ee(piVar7,0x2c0);
  puVar33 = (uint *)((int)uVar35 + (int)((ulonglong)uVar35 >> 0x20));
  if ((char)puVar33[4] == '\0') {
    FUN_015f62e4(&local_50);
    *puVar33 = (uint)local_50;
    puVar33[1] = (uint)local_4c;
    puVar33[2] = (uint)local_48;
    puVar33[3] = (uint)local_44;
    *(undefined1 *)(puVar33 + 4) = 1;
  }
  uVar15 = *puVar33;
  local_74 = (undefined1 **)puVar33[1];
  local_6c = (undefined1 **)puVar33[3];
  puVar11 = puVar33 + 2;
  local_70 = (undefined1 **)*puVar11;
  *puVar33 = uVar15 + 1;
  puVar33[1] = (int)local_74 + (uint)(0xfffffffe < uVar15);
  local_68 = (undefined1 **)
             (((uint)bVar2 | (uint)bVar1 << 1 | (uint)bVar5 << 4 | (uint)bVar4 << 2 |
              (uint)bVar3 << 6) & 0xff | 0x20);
  local_88 = (undefined1 **)&DAT_005674cc;
  local_9c = (undefined1 **)&DAT_00000004;
  local_94 = (undefined1 **)0x0;
  local_98 = (undefined1 **)0x0;
  local_a0 = (undefined1 *)0x0;
  local_64 = (undefined1 **)0x0;
  local_60 = (undefined1 **)0x0;
  local_78 = (undefined1)uVar15;
  uStack_77 = (undefined1)(uVar15 >> 8);
  uStack_76 = (undefined2)(uVar15 >> 0x10);
  local_90 = ppuVar31;
  local_8c = ppuVar32;
  local_84 = (undefined1 **)0x0;
  local_80 = (undefined1 **)0x0;
  local_7c = (undefined1 **)0x0;
  FUN_00fe559c(&local_50,&local_a0,0,0);
  local_174 = local_4c;
  if (local_50 == (undefined1 **)&DAT_00000001) {
    ppuVar10 = local_40;
    ppuVar32 = local_44;
    local_170 = local_48;
    local_174 = local_3c;
    local_16c = local_4c;
joined_r0x00ff2b10:
    if (local_a0 != (undefined1 *)0x0) {
      thunk_FUN_016d3fb4(local_9c);
    }
    ppuVar16 = local_84;
    if (local_84 != (undefined1 **)0x0) {
      if (local_7c != (undefined1 **)0x0) {
        ppuVar28 = local_88 + 1;
        uVar15 = ~(uint)*local_88 & 0x80808080;
        ppuVar18 = local_88;
        ppuVar24 = local_7c;
        do {
          ppuVar27 = ppuVar28;
          if (uVar15 == 0) {
            do {
              ppuVar28 = ppuVar27 + 1;
              puVar8 = *ppuVar27;
              ppuVar18 = ppuVar18 + -0x10;
              ppuVar27 = ppuVar28;
            } while (((uint)puVar8 & 0x80808080) == 0x80808080);
            uVar15 = (uint)puVar8 & 0x80808080 ^ 0x80808080;
          }
          uVar9 = LZCOUNT(uVar15 << 0x18 | (uVar15 >> 8 & 0xff) << 0x10 |
                          (uVar15 >> 0x10 & 0xff) << 8 | uVar15 >> 0x18) & 0x38;
          if (*(int *)((int)ppuVar18 + uVar9 * -2 + -0x10) != 0) {
            thunk_FUN_016d3fb4(*(undefined4 *)((int)ppuVar18 + uVar9 * -2 + -0xc));
          }
          ppuVar24 = (undefined1 **)((int)ppuVar24 + -1);
          uVar15 = uVar15 - 1 & uVar15;
        } while (ppuVar24 != (undefined1 **)0x0);
      }
      if ((int)ppuVar16 * 0x11 != -0x15) {
        thunk_FUN_016d3fb4(local_88 + (int)ppuVar16 * -4 + -4);
      }
    }
  }
  else {
    local_e0 = local_38;
    local_e4 = local_3c;
    local_e8 = local_40;
    local_ec = local_44;
    local_f0 = local_48;
    if (local_4c < ppuVar32) {
      ppuVar32 = (undefined1 **)thunk_FUN_016d4a50(0x19);
      if (ppuVar32 == (undefined1 **)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00600af4(1,0x19);
      }
      FUN_016dd1aa(ppuVar32,"end of string not reached",0x19);
      FUN_00fe5d20(&local_f0);
      local_170 = (undefined1 **)&DAT_00000019;
      local_16c = (undefined1 **)0x0;
      ppuVar10 = (undefined1 **)&DAT_00000019;
      goto joined_r0x00ff2b10;
    }
    if (local_60._2_1_ != '\0') {
      local_60._0_3_ = (uint3)(ushort)local_60;
      FUN_00fe5af0(&local_a0,&local_f0);
    }
    ppuVar32 = local_ec;
    local_38 = local_f0;
    ppuStack_34 = local_ec;
    local_30 = local_e8;
    local_2c = local_e4;
    ppuStack_28 = local_e0;
    local_16c = local_9c;
    local_170 = local_98;
    local_174 = local_84;
    local_48 = (undefined1 **)CONCAT22(uStack_76,CONCAT11(uStack_77,local_78));
    local_50 = local_80;
    local_4c = local_7c;
    local_44 = local_74;
    local_40 = local_70;
    local_3c = local_6c;
    local_120 = local_80;
    local_11c = local_7c;
    local_114 = local_74;
    ppuStack_110 = local_70;
    local_10c = local_6c;
    ppuStack_108 = local_f0;
    ppuStack_104 = local_ec;
    ppuStack_100 = local_e8;
    ppuStack_fc = local_e4;
    ppuStack_f8 = local_e0;
    local_118 = local_48;
    if (local_a0 != (undefined1 *)0x80000000) {
      local_150 = local_80;
      local_14c = local_7c;
      ppuStack_144 = local_74;
      ppuStack_140 = local_70;
      local_13c = local_6c;
      local_138 = local_f0;
      local_134 = local_ec;
      local_130 = local_e8;
      local_12c = local_e4;
      ppuStack_128 = local_e0;
      local_124 = local_60._1_1_;
      local_154 = local_84;
      local_158 = local_88;
      local_15c = local_94;
      uVar15 = 0;
      local_160 = local_98;
      local_123 = local_60._3_1_;
      local_164 = local_9c;
      local_168 = local_a0;
      local_148 = local_48;
      if (local_60._3_1_ == '\0') {
        uVar9 = 9;
        if ((int)local_f0 < 0) {
          uVar9 = (uint)local_f0 ^ 0x80000000;
        }
        if (uVar9 == 4) {
          if (local_e4 != (undefined1 **)0x0) {
            ppuVar16 = local_e8 + (int)local_e4 * 5;
            ppuVar10 = ppuVar16 + -5;
            if (*ppuVar10 == (undefined1 *)0x80000007) {
              ppuVar16 = (undefined1 **)(uint)*(byte *)(ppuVar16 + -3);
            }
            if (*ppuVar10 == (undefined1 *)0x80000007 && ppuVar16 == (undefined1 **)0x0) {
              ppuVar10 = (undefined1 **)((int)local_e4 + -1);
              ppuVar16 = local_e8 + (int)ppuVar10 * 5;
              local_120 = (undefined1 **)*ppuVar16;
              ppuVar18 = (undefined1 **)ppuVar16[1];
              local_118 = (undefined1 **)ppuVar16[2];
              local_114 = (undefined1 **)ppuVar16[3];
              ppuStack_110 = (undefined1 **)ppuVar16[4];
              local_f0 = local_ec;
              local_ec = local_e8;
              local_12c = (undefined1 **)0x0;
              local_130 = (undefined1 **)0x4;
              local_134 = (undefined1 **)0x0;
              local_11c = ppuVar18;
              if (local_120 != (undefined1 **)0x80000007 || (char)local_118 != '\0') {
                local_9c = (undefined1 **)&DAT_0157d360;
                local_a0 = &DAT_01881e28;
                local_e8 = ppuVar10;
                    /* WARNING: Subroutine does not return */
                FUN_00faa478(&DAT_0056c101,&local_a0,&DAT_01881e30);
              }
              local_9c = ppuVar32;
              local_98 = local_e8;
              local_a0 = &DAT_80000004;
              local_e8 = ppuVar10;
              local_94 = ppuVar10;
              ppuVar32 = (undefined1 **)thunk_FUN_016d4a50(0x14);
              if (ppuVar32 == (undefined1 **)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_00600874(4,0x14);
              }
              *ppuVar32 = local_a0;
              ppuVar32[1] = (undefined1 *)local_9c;
              ppuVar32[2] = (undefined1 *)local_98;
              ppuVar32[3] = (undefined1 *)local_94;
              ppuVar32[4] = (undefined1 *)local_90;
              local_50 = (undefined1 **)0x80000006;
              local_4c = ppuVar32;
              ppuVar32 = (undefined1 **)thunk_FUN_016d4a50(0x28);
              if (ppuVar32 == (undefined1 **)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_00600874(4,0x28);
              }
              *ppuVar32 = (undefined1 *)local_50;
              ppuVar32[1] = (undefined1 *)local_4c;
              ppuVar32[2] = (undefined1 *)local_48;
              ppuVar32[3] = (undefined1 *)local_44;
              ppuVar32[4] = (undefined1 *)local_40;
              puVar8 = ppuVar18[1];
              puVar19 = ppuVar18[2];
              puVar21 = ppuVar18[3];
              puVar25 = ppuVar18[4];
              ppuVar32[5] = *ppuVar18;
              ppuVar32[6] = puVar8;
              ppuVar32[7] = puVar19;
              ppuVar32[8] = puVar21;
              ppuVar32[9] = puVar25;
              FUN_010019c0(&local_138);
              local_12c = (undefined1 **)&SUB_00000002;
              local_134 = (undefined1 **)&SUB_00000002;
              local_138 = (undefined1 **)&DAT_80000004;
              local_130 = ppuVar32;
              thunk_FUN_016d3fb4(ppuVar18);
              uVar15 = 1;
            }
          }
        }
        else {
          bVar34 = uVar9 == 7;
          if (bVar34) {
            uVar9 = (uint)local_e8 & 0xff;
          }
          if (bVar34 && uVar9 == 0) {
            local_a0 = (undefined1 *)0x80000000;
            ppuVar32 = (undefined1 **)thunk_FUN_016d4a50(0x14);
            if (ppuVar32 == (undefined1 **)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_00600874(4,0x14);
            }
            *ppuVar32 = local_a0;
            ppuVar32[1] = (undefined1 *)local_9c;
            ppuVar32[2] = (undefined1 *)local_98;
            ppuVar32[3] = (undefined1 *)local_94;
            ppuVar32[4] = (undefined1 *)local_90;
            local_50 = (undefined1 **)0x80000006;
            local_a0 = *local_134;
            local_9c = (undefined1 **)local_134[1];
            local_98 = (undefined1 **)local_134[2];
            local_94 = (undefined1 **)local_134[3];
            local_90 = (undefined1 **)local_134[4];
            *local_134 = (undefined1 *)0x80000000;
            local_4c = ppuVar32;
            ppuVar32 = (undefined1 **)thunk_FUN_016d4a50(0x28);
            if (ppuVar32 == (undefined1 **)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_00600874(4,0x28);
            }
            *ppuVar32 = (undefined1 *)local_50;
            ppuVar32[1] = (undefined1 *)local_4c;
            ppuVar32[2] = (undefined1 *)local_48;
            ppuVar32[3] = (undefined1 *)local_44;
            ppuVar32[4] = (undefined1 *)local_40;
            ppuVar32[5] = local_a0;
            ppuVar32[6] = (undefined1 *)local_9c;
            ppuVar32[7] = (undefined1 *)local_98;
            ppuVar32[8] = (undefined1 *)local_94;
            ppuVar32[9] = (undefined1 *)local_90;
            FUN_010019c0(&local_138);
            local_12c = (undefined1 **)&SUB_00000002;
            uVar15 = 1;
            local_134 = (undefined1 **)&SUB_00000002;
            local_138 = (undefined1 **)&DAT_80000004;
            local_130 = ppuVar32;
          }
        }
      }
      if ((char)puVar33[4] == '\0') {
        FUN_015f62e4(&local_a0);
        *puVar33 = (uint)local_a0;
        puVar33[1] = (uint)local_9c;
        *puVar11 = (uint)local_98;
        puVar33[3] = (uint)local_94;
        *(undefined1 *)(puVar33 + 4) = 1;
      }
      local_40 = (undefined1 **)*puVar33;
      local_3c = (undefined1 **)puVar33[1];
      local_38 = (undefined1 **)*puVar11;
      ppuStack_34 = (undefined1 **)puVar33[3];
      local_30 = &local_168;
      *puVar33 = (int)local_40 + 1;
      puVar33[1] = (int)local_3c + (uint)((undefined1 **)0xfffffffe < local_40);
      local_50 = (undefined1 **)&DAT_005674cc;
      local_4c = (undefined1 **)0x0;
      local_48 = (undefined1 **)0x0;
      local_44 = (undefined1 **)0x0;
      local_2c = (undefined1 **)(uVar15 ^ 1);
      FUN_00ffefc0(&local_120,&local_50,&local_138,0);
      if (local_30[3] == (undefined1 *)0x0) {
        puVar11 = (uint *)local_30[1];
        puVar33 = puVar11 + (int)local_30[2];
        if (local_30[2] != (undefined1 *)0x0) {
          uVar9 = *puVar11;
          goto joined_r0x00ff2fa8;
        }
      }
      else {
        if (local_30[2] == (undefined1 *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_00fb74b8(&DAT_00378024,0x13,&DAT_01881e58);
        }
        puVar11 = (uint *)local_30[1];
        uVar9 = *puVar11;
        if ((uVar9 & 1) != 0) {
          local_a0 = (undefined1 *)0x7;
          local_9c = (undefined1 **)0x0;
          ppuVar32 = (undefined1 **)thunk_FUN_016d4a50(0x48);
          if (ppuVar32 == (undefined1 **)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_00600874(8,0x48);
          }
LAB_00ff3088:
          FUN_016dd1aa(ppuVar32,&local_a0,0x48);
          pppuVar13 = (undefined1 ***)FUN_010000a0(&local_120);
          ppuVar10 = (undefined1 **)&DAT_80000000;
          ppuVar16 = (undefined1 **)&DAT_00000010;
          goto LAB_00ff30ac;
        }
        puVar33 = puVar11 + (int)local_30[2];
joined_r0x00ff2fa8:
        puVar11 = puVar11 + 1;
        iVar20 = 0;
        if (uVar9 != 0) goto LAB_00ff2fe4;
      }
      iVar20 = 0;
      puVar12 = puVar11;
      do {
        if (puVar12 == puVar33) goto LAB_00ff3044;
        puVar11 = puVar12 + 1;
        uVar9 = *puVar12;
        iVar20 = iVar20 + 0x20;
        puVar12 = puVar11;
      } while (uVar9 == 0);
LAB_00ff2fe4:
      do {
        do {
          iVar17 = iVar20;
          uVar22 = uVar9;
          uVar9 = uVar22 - 1 & uVar22;
          iVar20 = iVar17;
        } while (uVar9 != 0);
        puVar12 = puVar11;
        do {
          if (puVar12 == puVar33) {
            bVar2 = (byte)uVar22;
            bVar4 = (byte)(uVar22 >> 8);
            bVar5 = (byte)(uVar22 >> 0x10);
            bVar1 = (byte)(uVar22 >> 0x18);
            ppuVar32 = (undefined1 **)
                       (iVar17 + LZCOUNT((uint)(byte)((((((((bVar2 & 1) << 1 | bVar2 >> 1 & 1) << 1
                                                          | bVar2 >> 2 & 1) << 1 | bVar2 >> 3 & 1)
                                                         << 1 | bVar2 >> 4 & 1) << 1 |
                                                       bVar2 >> 5 & 1) << 1 | bVar2 >> 6 & 1) << 1 |
                                                     bVar2 >> 7) << 0x18 |
                                         (uint)(byte)((((((((bVar4 & 1) << 1 | bVar4 >> 1 & 1) << 1
                                                          | bVar4 >> 2 & 1) << 1 | bVar4 >> 3 & 1)
                                                         << 1 | bVar4 >> 4 & 1) << 1 |
                                                       bVar4 >> 5 & 1) << 1 | bVar4 >> 6 & 1) << 1 |
                                                     bVar4 >> 7) << 0x10 |
                                         (uint)(byte)((((((((bVar5 & 1) << 1 | bVar5 >> 1 & 1) << 1
                                                          | bVar5 >> 2 & 1) << 1 | bVar5 >> 3 & 1)
                                                         << 1 | bVar5 >> 4 & 1) << 1 |
                                                       bVar5 >> 5 & 1) << 1 | bVar5 >> 6 & 1) << 1 |
                                                     bVar5 >> 7) << 8 |
                                         (uint)(byte)((((((((bVar1 & 1) << 1 | bVar1 >> 1 & 1) << 1
                                                          | bVar1 >> 2 & 1) << 1 | bVar1 >> 3 & 1)
                                                         << 1 | bVar1 >> 4 & 1) << 1 |
                                                       bVar1 >> 5 & 1) << 1 | bVar1 >> 6 & 1) << 1 |
                                                     bVar1 >> 7)));
            if ((ppuVar32 <= (undefined1 **)((int)local_2c - (int)(uVar15 ^ 1))) &&
               ((uVar15 & ppuVar32 == local_2c) == 0)) goto LAB_00ff3044;
            local_a0 = (undefined1 *)0x7;
            local_9c = ppuVar32;
            ppuVar32 = (undefined1 **)thunk_FUN_016d4a50(0x48);
            if (ppuVar32 == (undefined1 **)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_00600874(8,0x48);
            }
            goto LAB_00ff3088;
          }
          puVar11 = puVar12 + 1;
          uVar9 = *puVar12;
          iVar20 = iVar20 + 0x20;
          puVar12 = puVar11;
        } while (uVar9 == 0);
      } while( true );
    }
    ppuVar10 = local_88;
    ppuVar32 = local_94;
  }
  *param_1 = 3;
  param_1[1] = local_16c;
  param_1[2] = local_170;
  param_1[3] = ppuVar32;
  param_1[4] = ppuVar10;
  param_1[5] = local_174;
LAB_00ff2c14:
  if (*piVar7 == 0) {
    return;
  }
LAB_00ff2c28:
  thunk_FUN_016d3fb4(ppuVar31);
  return;
LAB_00ff3044:
  pppuVar13 = &local_114;
  local_b8 = local_114;
  ppuStack_b4 = ppuStack_110;
  ppuStack_b0 = local_10c;
  local_ac = ppuStack_108;
  ppuStack_a8 = ppuStack_104;
  ppuStack_a4 = ppuStack_100;
  ppuVar10 = local_120;
  ppuVar16 = local_11c;
  ppuVar32 = local_118;
LAB_00ff30ac:
  iVar20 = 0;
  if (local_4c != (undefined1 **)0x0) {
    pppuVar13 = (undefined1 ***)((int)local_4c * 3);
    iVar20 = (int)local_4c * 0xd;
  }
  if (local_4c != (undefined1 **)0x0 && iVar20 != -0x11) {
    thunk_FUN_016d3fb4(local_50 + (-3 - (int)pppuVar13));
  }
  local_c8 = local_b8;
  local_c4 = ppuStack_b4;
  local_c0 = ppuStack_b0;
  if (ppuVar10 == (undefined1 **)&DAT_80000000) {
    *param_1 = 3;
    param_1[1] = ppuVar16;
    param_1[2] = ppuVar32;
    bVar34 = true;
    param_1[3] = local_b8;
    param_1[4] = ppuStack_b4;
    param_1[5] = ppuStack_b0;
  }
  else {
    local_d8 = local_ac;
    ppuStack_d4 = ppuStack_a8;
    uStack_d0 = ppuStack_a4;
    ppuVar18 = uStack_d0;
    uStack_d0._1_1_ = (char)((uint)ppuStack_a4 >> 8);
    local_e4 = local_b8;
    local_e0 = ppuStack_b4;
    local_dc = ppuStack_b0;
    local_f0 = ppuVar10;
    local_ec = ppuVar16;
    local_e8 = ppuVar32;
    uStack_d0 = ppuVar18;
    if (uStack_d0._1_1_ == '\0') {
      local_118 = (undefined1 **)0x0;
      local_11c = (undefined1 **)&DAT_00000001;
      local_120 = (undefined1 **)0x0;
      FUN_00ff3f58(&local_138,&local_120,0);
      FUN_00ff7708(&local_a0,local_11c,local_118,param_2);
      bVar34 = local_a0 != (undefined1 *)0x12;
      if (bVar34) {
        param_1[1] = local_a0;
        *param_1 = 3;
        param_1[2] = local_9c;
        param_1[3] = local_98;
        param_1[4] = local_94;
        param_1[5] = local_90;
        if (local_120 != (undefined1 **)0x0) {
          thunk_FUN_016d3fb4(local_11c);
        }
      }
      else {
        local_5c = local_98;
        local_90 = (undefined1 **)*piVar7;
        local_8c = (undefined1 **)param_2[5];
        local_88 = (undefined1 **)param_2[6];
        local_7c = (undefined1 **)param_2[9];
        uVar23 = param_2[10];
        local_74 = (undefined1 **)param_2[0xb];
        local_a0 = (undefined1 *)*param_2;
        local_98 = (undefined1 **)param_2[2];
        local_94 = (undefined1 **)param_2[3];
        local_78 = (undefined1)uVar23;
        uStack_77 = (undefined1)((uint)uVar23 >> 8);
        uStack_76 = (undefined2)((uint)uVar23 >> 0x10);
        local_60 = local_9c;
        local_70 = (undefined1 **)CONCAT31(local_70._1_3_,bVar3);
        local_6c = local_120;
        local_68 = local_11c;
        local_64 = local_118;
        local_84 = (undefined1 **)param_2[7];
        local_80 = (undefined1 **)param_2[8];
        local_58 = (undefined1)uVar15;
        local_48 = local_158;
        local_44 = local_154;
        local_40 = local_150;
        local_3c = local_14c;
        local_38 = local_148;
        ppuStack_34 = ppuStack_144;
        local_30 = ppuStack_140;
        local_2c = local_13c;
        local_4c = (undefined1 **)&DAT_00000001;
        local_50 = (undefined1 **)&DAT_00000001;
        local_9c = (undefined1 **)param_2[1];
        puVar14 = (undefined4 *)thunk_FUN_016d4a50(0x28);
        if (puVar14 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_00600874(8,0x28);
        }
        *puVar14 = local_50;
        puVar14[1] = local_4c;
        puVar14[2] = local_48;
        puVar14[3] = local_44;
        puVar14[4] = local_40;
        puVar14[5] = local_3c;
        puVar14[6] = local_38;
        puVar14[7] = ppuStack_34;
        puVar14[8] = local_30;
        puVar14[9] = local_2c;
        FUN_016dd1aa(param_1,&local_a0,0x4c);
        param_1[0x13] = puVar14;
      }
    }
    else {
      uVar15 = 9;
      if ((int)local_138 < 0) {
        uVar15 = (uint)local_138 ^ 0x80000000;
      }
      bVar34 = false;
      if (uVar15 == 4) {
        if (local_12c == (undefined1 **)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_00faa4a4(0,0,&DAT_01881c78);
        }
        if (*local_130 == (undefined1 *)0x80000002) {
          cVar6 = *(char *)(local_130 + 1);
          goto LAB_00ff331c;
        }
      }
      else if (uVar15 == 2) {
        cVar6 = (char)local_134;
LAB_00ff331c:
        bVar34 = cVar6 == '\0';
      }
      local_74 = (undefined1 **)&DAT_000f4240;
      ppuVar32 = (undefined1 **)0x0;
      local_84 = (undefined1 **)0xfa;
      local_60 = (undefined1 **)((int)ppuStack_b0 << 1);
      local_64 = (undefined1 **)0x0;
      local_68 = (undefined1 **)&DAT_00000004;
      local_6c = (undefined1 **)0x0;
      local_80 = (undefined1 **)&DAT_0000000a;
      local_88 = (undefined1 **)0x0;
      local_8c = (undefined1 **)&DAT_00000001;
      local_90 = (undefined1 **)0x0;
      local_98 = (undefined1 **)0x0;
      local_a0 = (undefined1 *)0x0;
      local_5c = (undefined1 **)((uint)local_5c & 0xffffff00);
      local_70 = (undefined1 **)((uint)local_70 & 0xffffff00);
      uStack_77 = 0;
      local_7c = (undefined1 **)&DAT_01000000;
      local_78 = 1;
      if (!bVar34) {
        local_48 = (undefined1 **)&DAT_00000001;
        local_4c = (undefined1 **)0x3;
        local_50 = (undefined1 **)0x7;
        FUN_01000664(&local_6c);
        *local_68 = (undefined1 *)local_50;
        local_68[1] = (undefined1 *)local_4c;
        local_68[2] = (undefined1 *)local_48;
        local_68[3] = (undefined1 *)local_44;
        local_68[4] = (undefined1 *)local_40;
        local_68[5] = (undefined1 *)local_3c;
        local_68[6] = (undefined1 *)local_38;
        local_68[7] = (undefined1 *)ppuStack_34;
        local_68[8] = (undefined1 *)local_30;
        local_68[9] = (undefined1 *)local_2c;
        local_64 = (undefined1 **)0x1;
        local_50 = (undefined1 **)0x3;
        if (local_6c == (undefined1 **)&DAT_00000001) {
          FUN_01000664(&local_6c);
        }
        local_68[10] = (undefined1 *)local_50;
        local_68[0xb] = (undefined1 *)local_4c;
        local_68[0xc] = (undefined1 *)local_48;
        local_68[0xd] = (undefined1 *)local_44;
        local_68[0xe] = (undefined1 *)local_40;
        local_68[0xf] = (undefined1 *)local_3c;
        local_68[0x10] = (undefined1 *)local_38;
        local_68[0x11] = (undefined1 *)ppuStack_34;
        local_68[0x12] = (undefined1 *)local_30;
        local_68[0x13] = (undefined1 *)local_2c;
        local_64 = (undefined1 **)0x2;
        local_50 = (undefined1 **)&DAT_00000008;
        local_4c = (undefined1 **)0x0;
        if (local_6c == (undefined1 **)&SUB_00000002) {
          FUN_01000664(&local_6c);
        }
        local_68[0x14] = (undefined1 *)local_50;
        local_68[0x15] = (undefined1 *)local_4c;
        local_68[0x16] = (undefined1 *)local_48;
        local_68[0x17] = (undefined1 *)local_44;
        local_68[0x18] = (undefined1 *)local_40;
        local_68[0x19] = (undefined1 *)local_3c;
        local_68[0x1a] = (undefined1 *)local_38;
        local_68[0x1b] = (undefined1 *)ppuStack_34;
        local_68[0x1c] = (undefined1 *)local_30;
        local_68[0x1d] = (undefined1 *)local_2c;
        ppuVar32 = (undefined1 **)0x3;
        local_64 = (undefined1 **)0x3;
      }
      ppuVar16 = local_e0;
      if (local_e0 == (undefined1 **)&DAT_00000001) {
        local_50 = (undefined1 **)&DAT_00000009;
        local_4c = (undefined1 **)0x0;
        if (ppuVar32 == local_6c) {
          FUN_01000664(&local_6c);
        }
        ppuVar18 = local_68 + (int)ppuVar32 * 10;
        *ppuVar18 = (undefined1 *)local_50;
        ppuVar18[1] = (undefined1 *)local_4c;
        ppuVar18[2] = (undefined1 *)local_48;
        ppuVar18[3] = (undefined1 *)local_44;
        ppuVar18[4] = (undefined1 *)local_40;
        ppuVar18[5] = (undefined1 *)local_3c;
        ppuVar18[6] = (undefined1 *)local_38;
        ppuVar18[7] = (undefined1 *)ppuStack_34;
        ppuVar18[8] = (undefined1 *)local_30;
        ppuVar18[9] = (undefined1 *)local_2c;
        local_64 = (undefined1 **)((int)ppuVar32 + 1);
      }
      FUN_00ff8048(&local_50,&local_a0,&local_f0,0);
      ppuVar24 = local_40;
      ppuVar18 = local_50;
      ppuVar32 = local_64;
      if (local_50 == (undefined1 **)&DAT_00000012) {
        if (ppuVar16 == (undefined1 **)&DAT_00000001) {
          local_50 = (undefined1 **)0x9;
          local_4c = (undefined1 **)&DAT_00000001;
          if (local_64 == local_6c) {
            FUN_01000664(&local_6c);
          }
          local_64 = (undefined1 **)((int)ppuVar32 + 1);
          ppuVar32 = local_68 + (int)ppuVar32 * 10;
          *ppuVar32 = (undefined1 *)local_50;
          ppuVar32[1] = (undefined1 *)local_4c;
          ppuVar32[2] = (undefined1 *)local_48;
          ppuVar32[3] = (undefined1 *)local_44;
          ppuVar32[4] = (undefined1 *)local_40;
          ppuVar32[5] = (undefined1 *)local_3c;
          ppuVar32[6] = (undefined1 *)local_38;
          ppuVar32[7] = (undefined1 *)ppuStack_34;
          ppuVar32[8] = (undefined1 *)local_30;
          ppuVar32[9] = (undefined1 *)local_2c;
        }
        ppuVar32 = local_64;
        local_50 = (undefined1 **)&SUB_00000002;
        if (local_64 == local_6c) {
          FUN_01000664(&local_6c);
        }
        ppuVar16 = local_68 + (int)ppuVar32 * 10;
        *ppuVar16 = (undefined1 *)local_50;
        ppuVar16[1] = (undefined1 *)local_4c;
        ppuVar16[2] = (undefined1 *)local_48;
        ppuVar16[3] = (undefined1 *)local_44;
        ppuVar16[4] = (undefined1 *)local_40;
        ppuVar16[5] = (undefined1 *)local_3c;
        ppuVar16[6] = (undefined1 *)local_38;
        ppuVar16[7] = (undefined1 *)ppuStack_34;
        ppuVar16[8] = (undefined1 *)local_30;
        ppuVar16[9] = (undefined1 *)local_2c;
        local_118 = (undefined1 **)((int)ppuVar32 + 1);
        ppuVar18 = (undefined1 **)&DAT_00000012;
        local_120 = local_6c;
        local_11c = local_68;
        ppuVar24 = local_60;
        local_64 = local_118;
      }
      else {
        iVar20 = (int)local_64 + 1;
        local_120 = local_4c;
        local_11c = local_48;
        local_118 = local_44;
        ppuVar32 = local_68;
        while (iVar20 = iVar20 + -1, iVar20 != 0) {
          FUN_00ffd270(ppuVar32);
          ppuVar32 = ppuVar32 + 10;
        }
        if (local_6c != (undefined1 **)0x0) {
          thunk_FUN_016d3fb4(local_68);
        }
      }
      if (local_90 != (undefined1 **)0x0) {
        thunk_FUN_016d3fb4(local_8c);
      }
      local_b8 = local_120;
      ppuStack_b4 = local_11c;
      ppuStack_b0 = local_118;
      if (ppuVar18 == (undefined1 **)&DAT_00000012) {
        local_48 = local_120;
        local_44 = local_11c;
        local_40 = local_118;
        local_4c = (undefined1 **)0x1;
        local_50 = (undefined1 **)0x1;
        local_3c = ppuVar24;
        ppuVar31 = (undefined1 **)thunk_FUN_016d4a50(0x18);
        if (ppuVar31 == (undefined1 **)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_00600874(4,0x18);
        }
        *ppuVar31 = (undefined1 *)local_50;
        ppuVar31[1] = (undefined1 *)local_4c;
        ppuVar31[2] = (undefined1 *)local_48;
        ppuVar31[3] = (undefined1 *)local_44;
        ppuVar31[4] = (undefined1 *)local_40;
        ppuVar31[5] = (undefined1 *)local_3c;
        puVar14 = (undefined4 *)((uint)&local_a0 | 4);
        uVar23 = param_2[1];
        uVar26 = param_2[2];
        uVar29 = param_2[3];
        *puVar14 = *param_2;
        puVar14[1] = uVar23;
        puVar14[2] = uVar26;
        puVar14[3] = uVar29;
        uVar23 = param_2[5];
        uVar26 = param_2[6];
        uVar29 = param_2[7];
        puVar14[4] = param_2[4];
        puVar14[5] = uVar23;
        puVar14[6] = uVar26;
        puVar14[7] = uVar29;
        uVar23 = param_2[9];
        uVar26 = param_2[10];
        uVar29 = param_2[0xb];
        uVar30 = param_2[0xc];
        puVar14[8] = param_2[8];
        puVar14[9] = uVar23;
        puVar14[10] = uVar26;
        puVar14[0xb] = uVar29;
        puVar14[0xc] = uVar30;
        local_a0 = (undefined1 *)0x2;
        local_64 = local_dc;
        local_48 = local_158;
        local_44 = local_154;
        local_40 = local_150;
        local_3c = local_14c;
        local_38 = local_148;
        ppuStack_34 = ppuStack_144;
        local_30 = ppuStack_140;
        local_2c = local_13c;
        local_4c = (undefined1 **)&DAT_00000001;
        local_50 = (undefined1 **)&DAT_00000001;
        local_68 = ppuVar31;
        puVar14 = (undefined4 *)thunk_FUN_016d4a50(0x28);
        if (puVar14 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_00600874(8,0x28);
        }
        *puVar14 = local_50;
        puVar14[1] = local_4c;
        puVar14[2] = local_48;
        puVar14[3] = local_44;
        puVar14[4] = local_40;
        puVar14[5] = local_3c;
        puVar14[6] = local_38;
        puVar14[7] = ppuStack_34;
        puVar14[8] = local_30;
        puVar14[9] = local_2c;
        FUN_016dd1aa(param_1,&local_a0,0x4c);
        param_1[0x13] = puVar14;
        FUN_00ffda98(&local_f0);
        if (ppuVar10 != (undefined1 **)0x0) {
          thunk_FUN_016d3fb4(local_ec);
        }
        FUN_00ff3d1c(&local_138);
        if (local_168 == (undefined1 *)0x0) {
          return;
        }
        ppuVar31 = local_164;
        goto LAB_00ff2c28;
      }
      *param_1 = 3;
      param_1[1] = ppuVar18;
      param_1[2] = local_120;
      param_1[3] = local_11c;
      param_1[4] = local_118;
      param_1[5] = ppuVar24;
      bVar34 = true;
    }
    FUN_00ffda98(&local_f0);
    if (ppuVar10 != (undefined1 **)0x0) {
      thunk_FUN_016d3fb4(local_ec);
    }
  }
  FUN_00ff3d1c(&local_138);
  if (local_168 != (undefined1 *)0x0) {
    thunk_FUN_016d3fb4(local_164);
  }
  ppuVar32 = local_154;
  if (!bVar34) {
    return;
  }
  if (local_154 != (undefined1 **)0x0) {
    if (local_14c != (undefined1 **)0x0) {
      ppuVar18 = local_158 + 1;
      uVar15 = ~(uint)*local_158 & 0x80808080;
      ppuVar10 = local_158;
      ppuVar16 = local_14c;
      do {
        ppuVar24 = ppuVar18;
        if (uVar15 == 0) {
          do {
            ppuVar18 = ppuVar24 + 1;
            puVar8 = *ppuVar24;
            ppuVar10 = ppuVar10 + -0x10;
            ppuVar24 = ppuVar18;
          } while (((uint)puVar8 & 0x80808080) == 0x80808080);
          uVar15 = (uint)puVar8 & 0x80808080 ^ 0x80808080;
        }
        uVar9 = LZCOUNT(uVar15 << 0x18 | (uVar15 >> 8 & 0xff) << 0x10 | (uVar15 >> 0x10 & 0xff) << 8
                        | uVar15 >> 0x18) & 0x38;
        if (*(int *)((int)ppuVar10 + uVar9 * -2 + -0x10) != 0) {
          thunk_FUN_016d3fb4(*(undefined4 *)((int)ppuVar10 + uVar9 * -2 + -0xc));
        }
        ppuVar16 = (undefined1 **)((int)ppuVar16 + -1);
        uVar15 = uVar15 - 1 & uVar15;
      } while (ppuVar16 != (undefined1 **)0x0);
    }
    if ((int)ppuVar32 * 0x11 != -0x15) {
      thunk_FUN_016d3fb4(local_158 + (int)ppuVar32 * -4 + -4);
    }
  }
  goto LAB_00ff2c14;
}


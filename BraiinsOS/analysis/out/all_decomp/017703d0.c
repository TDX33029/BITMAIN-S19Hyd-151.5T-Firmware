// FUN_017703d0 @ 017703d0 size=2880 calls_out=7 calls_in=2
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined8 FUN_017703d0(int param_1,int param_2,undefined4 *param_3)

{
  ushort uVar1;
  code *pcVar2;
  short sVar3;
  short sVar4;
  undefined2 uVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  short *psVar11;
  ushort *puVar12;
  byte *pbVar13;
  short *psVar14;
  int iVar15;
  ushort *puVar16;
  ushort *puVar17;
  uint uVar18;
  undefined1 *puVar19;
  undefined1 *puVar20;
  undefined2 *puVar21;
  undefined4 *puVar22;
  byte *pbVar23;
  undefined2 *puVar24;
  short *psVar25;
  byte *pbVar26;
  undefined1 *puVar27;
  undefined4 *puVar28;
  undefined1 auStack_18a0 [512];
  undefined1 auStack_16a0 [512];
  undefined1 auStack_14a0 [512];
  undefined1 auStack_12a0 [512];
  short local_10a0 [62];
  int local_1024;
  ushort uStack_ea2;
  short local_ea0 [255];
  ushort uStack_ca2;
  byte local_ca0 [192];
  byte local_be0 [192];
  undefined1 local_b20 [126];
  ushort uStack_aa2;
  undefined1 local_aa0 [64];
  undefined1 local_a60 [446];
  ushort uStack_8a2;
  short local_8a0 [255];
  short sStack_6a2;
  short local_6a0 [256];
  undefined2 local_4a0 [256];
  undefined4 local_2a0 [8];
  undefined2 local_280;
  undefined2 local_240;
  undefined2 local_200;
  undefined2 local_1c0;
  undefined4 local_1a0;
  undefined4 uStack_19c;
  undefined4 uStack_198;
  undefined4 uStack_194;
  undefined4 local_190;
  undefined4 uStack_18c;
  undefined4 uStack_188;
  undefined4 uStack_184;
  undefined1 local_180;
  undefined4 local_160;
  undefined4 uStack_15c;
  undefined4 uStack_158;
  undefined4 uStack_154;
  undefined4 local_150;
  undefined4 uStack_14c;
  undefined4 uStack_148;
  undefined4 uStack_144;
  undefined1 local_140 [32];
  undefined4 local_120;
  undefined4 uStack_11c;
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined4 local_110;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined1 local_100 [32];
  undefined4 local_e0 [8];
  undefined1 local_c0 [32];
  undefined4 local_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined1 local_40 [20];
  int local_2c;
  
  local_2c = DAT_018ddaf8;
  local_1024 = param_1;
  if ((local_40 <= param_3 || param_3 <= &local_60) &&
     ((&local_60 <= param_3 || (param_3 + 8 <= &local_60)))) {
    uStack_5c = param_3[1];
    local_60 = *param_3;
    uStack_58 = param_3[2];
    uStack_54 = param_3[3];
    local_50 = param_3[4];
    uStack_4c = param_3[5];
    uStack_48 = param_3[6];
    uStack_44 = param_3[7];
    local_40[0] = 2;
    FUN_017573c4(&local_60,0x21,&local_a0);
    puVar28 = local_2a0;
    do {
      uVar10 = uStack_94;
      uVar9 = uStack_98;
      uVar8 = uStack_9c;
      if (((puVar28 < &local_a0) && (&local_a0 < puVar28 + 8)) ||
         (puVar28 < &local_80 && &local_a0 < puVar28)) goto LAB_01770f0c;
      puVar22 = puVar28 + 0x10;
      *puVar28 = local_a0;
      puVar28[1] = uVar8;
      puVar28[2] = uVar9;
      puVar28[3] = uVar10;
      uVar10 = uStack_84;
      uVar9 = uStack_88;
      uVar8 = uStack_8c;
      puVar28[4] = local_90;
      puVar28[5] = uVar8;
      puVar28[6] = uVar9;
      puVar28[7] = uVar10;
      puVar28 = puVar22;
    } while (&local_1a0 != puVar22);
    local_280 = 0;
    local_240 = 1;
    local_200 = 0x100;
    local_1c0 = 0x101;
    FUN_017694a0(auStack_18a0,auStack_16a0,auStack_14a0,auStack_12a0,local_2a0);
    FUN_0177aaa0(local_2a0,0x100);
    if ((&local_80 <= &local_1a0 || &local_1a0 <= &local_a0) &&
       (&local_60 <= &local_1a0 || &local_1a0 <= &local_80)) {
      local_1a0 = local_80;
      uStack_19c = uStack_7c;
      uStack_198 = uStack_78;
      uStack_194 = uStack_74;
      local_190 = local_70;
      uStack_18c = uStack_6c;
      uStack_188 = uStack_68;
      uStack_184 = uStack_64;
      if ((local_140 <= &local_80 || &local_80 <= &local_160) &&
         (&local_160 <= &local_80 || &local_a0 <= &local_1a0)) {
        local_160 = local_80;
        uStack_15c = uStack_7c;
        uStack_158 = uStack_78;
        uStack_154 = uStack_74;
        local_150 = local_70;
        uStack_14c = uStack_6c;
        uStack_148 = uStack_68;
        uStack_144 = uStack_64;
        if ((local_100 <= &local_80 || &local_80 <= &local_120) &&
           (&local_120 <= &local_80 || &local_60 <= &local_120)) {
          local_120 = local_80;
          uStack_11c = uStack_7c;
          uStack_118 = uStack_78;
          uStack_114 = uStack_74;
          local_110 = local_70;
          uStack_10c = uStack_6c;
          uStack_108 = uStack_68;
          uStack_104 = uStack_64;
          if ((local_c0 <= &local_80 || &local_80 <= local_e0) &&
             (&local_60 <= local_e0 || local_e0 <= &local_80)) {
            pbVar23 = local_ca0;
            local_180 = 0;
            local_140[0] = 1;
            local_100[0] = 2;
            local_c0[0] = 3;
            FUN_01769db8(&local_1a0,&local_160,&local_120,local_e0,0x21,pbVar23,local_be0,local_b20,
                         local_a60,0xc0);
            psVar11 = local_10a0;
            pbVar26 = pbVar23;
            do {
              pbVar13 = pbVar26 + 3;
              uVar18 = (uint)pbVar26[2] << 0x10 | (uint)pbVar26[1] << 8 | (uint)*pbVar26;
              uVar18 = (uVar18 >> 1 & 0x249249) + (uVar18 >> 2 & 0x249249) + (uVar18 & 0x249249);
              *psVar11 = (short)(uVar18 & 0x1f0007) - (short)((uVar18 & 0x3f) >> 3);
              psVar11[1] = (short)((uVar18 & 0x1ff) >> 6) - (short)((uVar18 & 0xfff) >> 9);
              psVar11[2] = (short)((uVar18 & 0x7fff) >> 0xc) - (short)((uVar18 & 0x3ffff) >> 0xf);
              psVar11[3] = (ushort)((uVar18 & 0x1f0007) >> 0x12) - (ushort)(uVar18 >> 0x15);
              psVar11 = psVar11 + 4;
              pbVar26 = pbVar13;
            } while (local_be0 != pbVar13);
            psVar11 = local_ea0;
            pbVar26 = pbVar23;
            do {
              pbVar13 = pbVar26 + 3;
              uVar18 = (uint)pbVar26[0xc2] << 0x10 | (uint)pbVar26[0xc1] << 8 | (uint)pbVar26[0xc0];
              uVar18 = (uVar18 >> 1 & 0x249249) + (uVar18 >> 2 & 0x249249) + (uVar18 & 0x249249);
              *psVar11 = (short)(uVar18 & 0x1f0007) - (short)((uVar18 & 0x3f) >> 3);
              psVar11[1] = (short)((uVar18 & 0x1ff) >> 6) - (short)((uVar18 & 0xfff) >> 9);
              psVar11[2] = (short)((uVar18 & 0x7fff) >> 0xc) - (short)((uVar18 & 0x3ffff) >> 0xf);
              psVar11[3] = (ushort)((uVar18 & 0x1f0007) >> 0x12) - (ushort)(uVar18 >> 0x15);
              psVar11 = psVar11 + 4;
              pbVar26 = pbVar13;
            } while (local_be0 != pbVar13);
            psVar14 = local_6a0;
            psVar11 = local_8a0;
            pbVar26 = pbVar23;
            do {
              psVar25 = psVar11 + 4;
              uVar18 = (uint)pbVar26[0x182] << 0x10 | (uint)pbVar26[0x181] << 8 |
                       (uint)pbVar26[0x180];
              uVar18 = (uVar18 >> 1 & 0x249249) + (uVar18 >> 2 & 0x249249) + (uVar18 & 0x249249);
              *psVar11 = (short)(uVar18 & 0x1f0007) - (short)((uVar18 & 0x3f) >> 3);
              psVar11[1] = (short)((uVar18 & 0x1ff) >> 6) - (short)((uVar18 & 0xfff) >> 9);
              psVar11[2] = (short)((uVar18 & 0x7fff) >> 0xc) - (short)((uVar18 & 0x3ffff) >> 0xf);
              psVar11[3] = (ushort)((uVar18 & 0x1f0007) >> 0x12) - (ushort)(uVar18 >> 0x15);
              psVar11 = psVar25;
              pbVar13 = pbVar23;
              pbVar26 = pbVar26 + 3;
            } while (psVar14 != psVar25);
            do {
              pbVar26 = pbVar13 + 3;
              uVar18 = (uint)pbVar13[0x242] << 0x10 | (uint)pbVar13[0x241] << 8 |
                       (uint)pbVar13[0x240];
              uVar18 = (uVar18 >> 1 & 0x249249) + (uVar18 >> 2 & 0x249249) + (uVar18 & 0x249249);
              *psVar14 = (short)(uVar18 & 0x1f0007) - (short)((uVar18 & 0x3f) >> 3);
              psVar14[1] = (short)((uVar18 & 0x1ff) >> 6) - (short)((uVar18 & 0xfff) >> 9);
              psVar14[2] = (short)((uVar18 & 0x7fff) >> 0xc) - (short)((uVar18 & 0x3ffff) >> 0xf);
              psVar14[3] = (ushort)((uVar18 & 0x1f0007) >> 0x12) - (ushort)(uVar18 >> 0x15);
              psVar14 = psVar14 + 4;
              pbVar13 = pbVar26;
            } while (local_be0 != pbVar26);
            FUN_0177aaa0(pbVar23,0x300);
            FUN_0177aaa0(&local_1a0,0x100);
            FUN_01708030(local_10a0);
            FUN_01708030(local_8a0);
            iVar15 = 2;
            puVar21 = local_4a0;
            psVar11 = local_10a0;
            while( true ) {
              psVar25 = &DAT_00428fbe;
              puVar24 = puVar21;
              psVar14 = psVar11;
              do {
                psVar25 = psVar25 + 1;
                iVar6 = (int)psVar14[1] * (int)*psVar25;
                iVar7 = (int)psVar14[3] * (int)-*psVar25;
                *puVar24 = (short)((uint)((short)((short)iVar6 * -0xcff) * -0xd01 + iVar6) >> 0x10);
                puVar24[1] = (short)((uint)((short)((short)iVar7 * -0xcff) * -0xd01 + iVar7) >> 0x10
                                    );
                puVar24 = puVar24 + 2;
                psVar14 = psVar14 + 4;
              } while (psVar25 != (short *)&DAT_0042903e);
              puVar21 = puVar21 + 0x80;
              psVar11 = psVar11 + 0x100;
              if (iVar15 == 1) break;
              iVar15 = 1;
            }
            FUN_017032a0(pbVar23,auStack_18a0,local_10a0,local_4a0);
            FUN_017032a0(local_aa0,auStack_14a0,local_10a0,local_4a0);
            puVar16 = &uStack_ca2;
            puVar12 = &uStack_aa2;
            puVar17 = puVar16;
            do {
              puVar17 = puVar17 + 1;
              iVar15 = (short)*puVar17 * 0x549;
              *puVar17 = (ushort)((uint)((short)((short)iVar15 + *puVar17 * 0x4b00) * -0xd01 +
                                        iVar15) >> 0x10);
            } while (puVar12 != puVar17);
            puVar17 = puVar12;
            do {
              puVar17 = puVar17 + 1;
              iVar15 = (short)*puVar17 * 0x549;
              *puVar17 = (ushort)((uint)((short)((short)iVar15 + *puVar17 * 0x4b00) * -0xd01 +
                                        iVar15) >> 0x10);
            } while (&uStack_8a2 != puVar17);
            puVar17 = &uStack_8a2;
            do {
              puVar16 = puVar16 + 1;
              puVar17 = puVar17 + 1;
              *puVar16 = *puVar17 + *puVar16;
            } while (puVar12 != puVar16);
            psVar11 = &sStack_6a2;
            puVar17 = puVar12;
            do {
              puVar17 = puVar17 + 1;
              psVar11 = psVar11 + 1;
              *puVar17 = *puVar17 + *psVar11;
            } while (&uStack_8a2 != puVar17);
            iVar15 = 2;
            while( true ) {
              puVar17 = puVar12 + -0x100;
              do {
                puVar17 = puVar17 + 1;
                uVar1 = *puVar17 + (short)((short)*puVar17 * 0x4ebf + 0x2000000 >> 0x1a) * -0xd01;
                *puVar17 = uVar1 ^ (uVar1 + 0xd01 ^ uVar1) &
                                   (ushort)(-((uint)(int)(short)uVar1 >> 0x10) >> 0x10);
              } while (puVar12 != puVar17);
              puVar12 = puVar12 + 0x100;
              if (iVar15 == 1) break;
              iVar15 = 1;
            }
            iVar15 = 2;
            puVar17 = &uStack_ea2;
            while( true ) {
              puVar12 = puVar17 + -0x100;
              do {
                puVar12 = puVar12 + 1;
                uVar1 = *puVar12 + (short)((short)*puVar12 * 0x4ebf + 0x2000000 >> 0x1a) * -0xd01;
                *puVar12 = uVar1 ^ (uVar1 + 0xd01 ^ uVar1) &
                                   (ushort)(-((uint)(int)(short)uVar1 >> 0x10) >> 0x10);
              } while (puVar17 != puVar12);
              puVar17 = puVar17 + 0x100;
              if (iVar15 == 1) break;
              iVar15 = 1;
            }
            puVar27 = (undefined1 *)(param_2 + 0x180);
            psVar11 = local_ea0;
            psVar14 = local_10a0;
            while( true ) {
              psVar25 = psVar11;
              puVar19 = puVar27 + -0x180;
              do {
                puVar20 = puVar19;
                sVar3 = psVar14[1];
                sVar4 = *psVar14;
                psVar14 = psVar14 + 2;
                *puVar20 = (char)sVar4;
                puVar20[2] = (char)((uint)(int)sVar3 >> 4);
                puVar20[1] = (byte)((int)sVar3 << 4) | (byte)((ushort)sVar4 >> 8);
                puVar19 = puVar20 + 3;
              } while (puVar20 + 3 != puVar27);
              puVar27 = puVar20 + 0x183;
              if (puVar27 == (undefined1 *)(param_2 + 0x480)) break;
              psVar11 = psVar25 + 0x100;
              psVar14 = psVar25;
            }
            puVar27 = (undefined1 *)(param_1 + 0x180);
            do {
              pbVar26 = pbVar23;
              puVar19 = puVar27 + -0x180;
              do {
                uVar5 = *(undefined2 *)pbVar26;
                puVar20 = puVar19 + 3;
                sVar3 = *(short *)(pbVar26 + 2);
                pbVar26 = pbVar26 + 4;
                *puVar19 = (char)uVar5;
                puVar19[2] = (char)((uint)(int)sVar3 >> 4);
                puVar19[1] = (byte)((int)sVar3 << 4) | (byte)((ushort)uVar5 >> 8);
                puVar19 = puVar20;
              } while (puVar27 != puVar20);
              puVar27 = puVar27 + 0x180;
              pbVar23 = pbVar23 + 0x200;
            } while ((undefined1 *)(param_1 + 0x480) != puVar27);
            puVar28 = (undefined4 *)(param_1 + 0x300);
            if (((&local_a0 <= puVar28) || ((undefined4 *)(param_1 + 800) <= &local_a0)) &&
               (&local_80 <= puVar28 || puVar28 <= &local_a0)) {
              *(undefined4 *)(param_1 + 0x300) = local_a0;
              *(undefined4 *)(param_1 + 0x304) = uStack_9c;
              *(undefined4 *)(param_1 + 0x308) = uStack_98;
              *(undefined4 *)(param_1 + 0x30c) = uStack_94;
              *(undefined4 *)(param_1 + 0x310) = local_90;
              *(undefined4 *)(param_1 + 0x314) = uStack_8c;
              *(undefined4 *)(param_1 + 0x318) = uStack_88;
              *(undefined4 *)(param_1 + 0x31c) = uStack_84;
              FUN_0177aaa0(&local_a0,0x40);
              FUN_0177aaa0(&local_60,0x21);
              FUN_0177aaa0(auStack_18a0,0x800);
              FUN_0177aaa0(local_8a0,0x400);
              FUN_0177aaa0(local_10a0,0x400);
              FUN_0177aaa0(local_4a0,0x200);
              if (local_2c != DAT_018ddaf8) {
                    /* WARNING: Subroutine does not return */
                FUN_016d2b78();
              }
              return 0;
            }
          }
        }
      }
    }
  }
LAB_01770f0c:
                    /* WARNING: Does not return */
  pcVar2 = (code *)software_udf(0,0x1770f0c);
  (*pcVar2)();
}


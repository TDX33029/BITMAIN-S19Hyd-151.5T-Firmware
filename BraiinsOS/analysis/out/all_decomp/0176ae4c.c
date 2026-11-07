// FUN_0176ae4c @ 0176ae4c size=3788 calls_out=8 calls_in=3
// strings: 

undefined8 FUN_0176ae4c(uint *param_1,int param_2,int param_3,undefined4 *param_4)

{
  ushort uVar1;
  code *pcVar2;
  byte bVar3;
  ushort uVar4;
  ushort uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  byte *pbVar12;
  byte *pbVar13;
  uint *puVar14;
  ushort *puVar15;
  short *psVar16;
  uint uVar17;
  uint uVar18;
  undefined4 *puVar19;
  undefined4 *puVar20;
  uint *puVar21;
  ushort *puVar22;
  undefined2 *puVar23;
  ushort *puVar24;
  undefined2 *puVar25;
  ushort *puVar26;
  short *psVar27;
  undefined1 *puVar28;
  byte *pbVar29;
  undefined2 *puVar30;
  uint uVar31;
  undefined2 *puVar32;
  uint uVar33;
  ushort *local_4b30;
  byte *local_4b2c;
  undefined1 auStack_4b20 [2812];
  uint *local_4024;
  uint *local_3024;
  undefined4 local_2b20;
  undefined4 local_2b1c;
  undefined4 local_2b18;
  undefined4 local_2b14;
  undefined4 local_2b10;
  undefined4 uStack_2b0c;
  undefined4 uStack_2b08;
  undefined4 uStack_2b04;
  undefined1 local_2b00;
  undefined1 local_2aff;
  undefined4 local_2ae0;
  undefined4 uStack_2adc;
  undefined4 uStack_2ad8;
  undefined4 uStack_2ad4;
  undefined4 local_2ad0;
  undefined4 uStack_2acc;
  undefined4 uStack_2ac8;
  undefined4 uStack_2ac4;
  undefined1 local_2ac0;
  undefined1 local_2abf;
  undefined4 local_2aa0;
  undefined4 uStack_2a9c;
  undefined4 uStack_2a98;
  undefined4 uStack_2a94;
  undefined4 local_2a90;
  undefined4 uStack_2a8c;
  undefined4 uStack_2a88;
  undefined4 uStack_2a84;
  undefined1 local_2a80;
  undefined1 local_2a7f;
  undefined4 local_2a60;
  undefined4 uStack_2a5c;
  undefined4 uStack_2a58;
  undefined4 uStack_2a54;
  undefined4 local_2a50;
  undefined4 uStack_2a4c;
  undefined4 uStack_2a48;
  undefined4 uStack_2a44;
  undefined1 local_2a40;
  undefined1 local_2a3f;
  ushort uStack_2922;
  ushort auStack_2920 [767];
  short sStack_2322;
  undefined4 local_2320 [127];
  ushort uStack_2122;
  undefined1 auStack_2120 [252];
  uint *local_2024;
  undefined1 auStack_1f20 [512];
  undefined1 auStack_1d20 [512];
  ushort local_1b20 [1024];
  undefined2 auStack_1320 [256];
  undefined1 auStack_1120 [252];
  uint *local_1024;
  undefined1 auStack_f20 [512];
  undefined1 auStack_d20 [512];
  undefined2 local_b20 [511];
  short sStack_722;
  short local_720 [255];
  short sStack_522;
  ushort local_520 [255];
  ushort uStack_322;
  ushort local_320 [254];
  undefined4 uStack_124;
  ushort local_120 [62];
  uint uStack_a4;
  undefined4 local_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined1 local_80 [32];
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 auStack_40 [5];
  int local_2c;
  
  pbVar29 = (byte *)(param_3 + 0x180);
  local_2c = DAT_018ddaf8;
  puVar15 = local_1b20;
  local_1024 = param_1;
  do {
    pbVar12 = pbVar29 + -0x180;
    puVar22 = puVar15;
    do {
      bVar3 = pbVar12[1];
      puVar22[1] = (ushort)pbVar12[2] << 4 | (ushort)(bVar3 >> 4);
      pbVar13 = pbVar12 + 3;
      *puVar22 = (ushort)*pbVar12 | (bVar3 & 0xf) << 8;
      pbVar12 = pbVar13;
      puVar22 = puVar22 + 2;
    } while (pbVar29 != pbVar13);
    pbVar29 = pbVar29 + 0x180;
    puVar15 = puVar15 + 0x100;
  } while ((byte *)(param_3 + 0x780) != pbVar29);
  puVar19 = (undefined4 *)(param_3 + 0x600);
  local_4024 = param_1;
  local_3024 = param_1;
  local_2024 = param_1;
  if ((auStack_40 <= puVar19 || puVar19 <= &local_60) &&
     ((&local_60 <= puVar19 || ((undefined4 *)(param_3 + 0x620U) <= &local_60)))) {
    local_60 = *(undefined4 *)(param_3 + 0x600);
    local_4b2c = (byte *)(param_2 + -1);
    uStack_5c = *(undefined4 *)(param_3 + 0x604);
    uStack_58 = *(undefined4 *)(param_3 + 0x608);
    uStack_54 = *(undefined4 *)(param_3 + 0x60c);
    local_50 = *(undefined4 *)(param_3 + 0x610);
    uStack_4c = *(undefined4 *)(param_3 + 0x614);
    uStack_48 = *(undefined4 *)(param_3 + 0x618);
    uStack_44 = *(undefined4 *)(param_3 + 0x61c);
    puVar15 = local_520;
    do {
      puVar22 = puVar15 + 8;
      local_4b2c = local_4b2c + 1;
      uVar17 = (uint)*local_4b2c;
      *puVar15 = (ushort)(-(uVar17 & 1) >> 0x10) & 0x681;
      puVar15[1] = (ushort)(-(uVar17 & 2) >> 0x10) & 0x681;
      puVar15[2] = (ushort)(-(uVar17 & 4) >> 0x10) & 0x681;
      puVar15[3] = (ushort)(-(uVar17 & 8) >> 0x10) & 0x681;
      puVar15[4] = (ushort)(-(uVar17 & 0x10) >> 0x10) & 0x681;
      puVar15[5] = (ushort)(-(uVar17 & 0x20) >> 0x10) & 0x681;
      puVar15[7] = (ushort)(-(uVar17 & 0x80) >> 0x10) & 0x681;
      puVar15[6] = (ushort)(-(uVar17 & 0x40) >> 0x10) & 0x681;
      puVar15 = puVar22;
    } while (local_320 != puVar22);
    if (((&local_60 <= &local_2b20) || (&local_2b00 <= &local_60)) &&
       (&local_2b20 <= &local_60 || auStack_40 <= &local_2b20)) {
      local_2b20 = local_60;
      local_2b1c = uStack_5c;
      local_2b18 = uStack_58;
      local_2b14 = uStack_54;
      local_2b10 = local_50;
      uStack_2b0c = uStack_4c;
      uStack_2b08 = uStack_48;
      uStack_2b04 = uStack_44;
      if (((&local_60 <= &local_2ae0) || (&local_2ac0 <= &local_60)) &&
         (&local_2ae0 <= &local_60 || auStack_40 <= &local_2ae0)) {
        local_2ae0 = local_60;
        uStack_2adc = uStack_5c;
        uStack_2ad8 = uStack_58;
        uStack_2ad4 = uStack_54;
        local_2ad0 = local_50;
        uStack_2acc = uStack_4c;
        uStack_2ac8 = uStack_48;
        uStack_2ac4 = uStack_44;
        if (((&local_60 <= &local_2aa0) || (&local_2a80 <= &local_60)) &&
           (&local_2aa0 <= &local_60 || auStack_40 <= &local_2aa0)) {
          local_2aa0 = local_60;
          uStack_2a9c = uStack_5c;
          uStack_2a98 = uStack_58;
          uStack_2a94 = uStack_54;
          local_2a90 = local_50;
          uStack_2a8c = uStack_4c;
          uStack_2a88 = uStack_48;
          uStack_2a84 = uStack_44;
          if (((&local_60 <= &local_2a60) || (&local_2a40 <= &local_60)) &&
             (auStack_40 <= &local_2a60 || &local_2a60 <= &local_60)) {
            local_2a60 = local_60;
            uStack_2a5c = uStack_5c;
            uStack_2a58 = uStack_58;
            uStack_2a54 = uStack_54;
            local_2a50 = local_50;
            uStack_2a4c = uStack_4c;
            uStack_2a48 = uStack_48;
            uStack_2a44 = uStack_44;
            uVar17 = 0;
            puVar28 = auStack_4b20;
            do {
              local_2aff = 0;
              local_2abf = 1;
              local_2ac0 = (undefined1)(uVar17 + 1 >> 2);
              local_2a7f = 2;
              local_2a80 = (undefined1)(uVar17 + 2 >> 2);
              uVar18 = uVar17 + 3;
              local_2b00 = (undefined1)(uVar17 >> 2);
              uVar17 = uVar17 + 4;
              local_2a3f = 3;
              local_2a40 = (undefined1)(uVar18 >> 2);
              FUN_017694a0(puVar28,puVar28 + 0x200,puVar28 + 0x400,puVar28 + 0x600);
              puVar28 = puVar28 + 0x800;
            } while (uVar17 != 0x10);
            FUN_0177aaa0(&local_2b20,0x100);
            FUN_0176a0c0(auStack_1320,auStack_1120,auStack_f20,auStack_d20,param_4,0,1,2,3);
            FUN_0176a0c0(local_2320,auStack_2120,auStack_1f20,auStack_1d20,param_4,4,5,6,7);
            if ((local_80 <= param_4 || param_4 <= &local_a0) &&
               ((&local_a0 <= param_4 || (param_4 + 8 <= &local_a0)))) {
              local_a0 = *param_4;
              uStack_9c = param_4[1];
              uStack_98 = param_4[2];
              uStack_94 = param_4[3];
              local_90 = param_4[4];
              uStack_8c = param_4[5];
              uStack_88 = param_4[6];
              uStack_84 = param_4[7];
              local_80[0] = 8;
              FUN_01757bf4(&local_a0,0x21,local_120,0x80);
              puVar14 = &uStack_124;
              psVar27 = local_720;
              do {
                puVar14 = puVar14 + 1;
                uVar17 = (*puVar14 >> 1 & 0x55555555) + (*puVar14 & 0x55555555);
                *psVar27 = (short)(uVar17 & 0xfff0003) - (short)((uVar17 & 0xf) >> 2);
                psVar27[1] = (short)((uVar17 & 0x3f) >> 4) - (short)((uVar17 & 0xff) >> 6);
                psVar27[2] = ((ushort)(uVar17 >> 8) & 3) - (short)((uVar17 & 0xfff) >> 10);
                uVar1 = (ushort)(uVar17 >> 0x10);
                psVar27[3] = (short)((uVar17 & 0x3fff) >> 0xc) - (short)((uVar17 & 0xffff) >> 0xe);
                psVar27[4] = (uVar1 & 3) - ((uVar1 & 0xf) >> 2);
                psVar27[5] = ((uVar1 & 0x3f) >> 4) - ((uVar1 & 0xff) >> 6);
                psVar27[6] = (ushort)((byte)(uVar17 >> 0x18) & 3) -
                             (ushort)((uVar17 & 0xfff0003) >> 0x1a);
                psVar27[7] = ((uVar1 & 0x3fff) >> 0xc) - (uVar1 >> 0xe);
                psVar27 = psVar27 + 8;
              } while (&uStack_a4 != puVar14);
              FUN_0177aaa0(local_120,0x80);
              FUN_0177aaa0(&local_a0,0x21);
              FUN_017084e0(auStack_1320);
              puVar23 = auStack_1320;
              puVar25 = local_b20;
              do {
                psVar27 = &DAT_00428fbe;
                puVar30 = puVar23;
                puVar32 = puVar25;
                do {
                  psVar27 = psVar27 + 1;
                  iVar6 = (int)(short)puVar30[1] * (int)*psVar27;
                  iVar7 = (int)(short)puVar30[3] * (int)-*psVar27;
                  *puVar32 = (short)((uint)((short)((short)iVar6 * -0xcff) * -0xd01 + iVar6) >> 0x10
                                    );
                  puVar32[1] = (short)((uint)((short)((short)iVar7 * -0xcff) * -0xd01 + iVar7) >>
                                      0x10);
                  puVar30 = puVar30 + 4;
                  puVar32 = puVar32 + 2;
                } while (psVar27 != (short *)&DAT_0042903e);
                puVar25 = puVar25 + 0x80;
                puVar23 = puVar23 + 0x100;
              } while (puVar23 != local_b20);
              puVar19 = &local_2b20;
              puVar28 = auStack_4b20;
              do {
                puVar20 = puVar19 + 0x80;
                FUN_01703610(puVar19,puVar28,auStack_1320,local_b20);
                puVar28 = puVar28 + 0x800;
                puVar19 = puVar20;
              } while (puVar20 != local_2320);
              FUN_01703610(local_320,local_1b20,auStack_1320,local_b20);
              puVar19 = &local_2b20;
              do {
                puVar20 = puVar19 + 0x80;
                FUN_01703114(puVar19);
                puVar19 = puVar20;
              } while (puVar20 != local_2320);
              psVar27 = &sStack_2322;
              FUN_01703114(local_320);
              puVar22 = &uStack_2922;
              puVar15 = puVar22;
              do {
                psVar16 = psVar27;
                puVar24 = puVar15 + -0x100;
                do {
                  puVar26 = puVar24;
                  puVar24 = puVar26 + 1;
                  psVar16 = psVar16 + 1;
                  *puVar24 = *puVar24 + *psVar16;
                } while (puVar24 != puVar15);
                puVar15 = puVar26 + 0x101;
                psVar27 = psVar27 + 0x100;
              } while (puVar15 != &uStack_2122);
              puVar24 = &uStack_322;
              puVar26 = (ushort *)((int)&uStack_124 + 2);
              psVar27 = &sStack_722;
              puVar15 = puVar24;
              do {
                puVar15 = puVar15 + 1;
                psVar27 = psVar27 + 1;
                *puVar15 = *puVar15 + *psVar27;
              } while (puVar15 != puVar26);
              psVar27 = &sStack_522;
              puVar15 = puVar24;
              do {
                puVar15 = puVar15 + 1;
                psVar27 = psVar27 + 1;
                *puVar15 = *puVar15 + *psVar27;
              } while (puVar15 != puVar26);
              do {
                puVar15 = puVar22 + -0x100;
                do {
                  puVar15 = puVar15 + 1;
                  uVar1 = *puVar15 + (short)((short)*puVar15 * 0x4ebf + 0x2000000 >> 0x1a) * -0xd01;
                  *puVar15 = uVar1 ^ (uVar1 + 0xd01 ^ uVar1) &
                                     (ushort)(-((uint)(int)(short)uVar1 >> 0x10) >> 0x10);
                } while (puVar22 != puVar15);
                puVar22 = puVar22 + 0x100;
              } while (puVar22 != &uStack_2122);
              do {
                puVar24 = puVar24 + 1;
                uVar1 = *puVar24 + (short)((short)*puVar24 * 0x4ebf + 0x2000000 >> 0x1a) * -0xd01;
                *puVar24 = uVar1 ^ (uVar1 + 0xd01 ^ uVar1) &
                                   (ushort)(-((uint)(int)(short)uVar1 >> 0x10) >> 0x10);
              } while (puVar24 != puVar26);
              local_4b30 = auStack_2920;
              puVar14 = param_1 + 0x160;
              do {
                puVar21 = param_1;
                puVar15 = local_4b30 + -0x100;
                do {
                  puVar22 = puVar15 + 8;
                  uVar17 = (int)((ulonglong)puVar15[3] * 0x13afb7800 >> 0x20) + 1U & 0xfff;
                  uVar18 = (int)((ulonglong)puVar15[2] * 0x13afb7800 >> 0x20) + 1U & 0xfff;
                  uVar31 = (int)((ulonglong)puVar15[1] * 0x13afb7800 >> 0x20) + 1U & 0xfff;
                  uVar33 = (int)((ulonglong)puVar15[4] * 0x13afb7800 >> 0x20) + 1U & 0xfff;
                  uVar8 = (int)((ulonglong)*puVar15 * 0x13afb7800 >> 0x20) + 1U & 0xfff;
                  uVar9 = (int)((ulonglong)puVar15[5] * 0x13afb7800 >> 0x20) + 1U & 0xfff;
                  uVar10 = (int)((ulonglong)puVar15[6] * 0x13afb7800 >> 0x20) + 1U & 0xfff;
                  uVar11 = (int)((ulonglong)puVar15[7] * 0x13afb7800 >> 0x20) + 1U & 0xfff;
                  *puVar21 = uVar8 >> 1 & 0xff | ((uVar31 >> 1 & 0x1f) << 3 | uVar8 >> 9) << 8 |
                             ((uVar18 >> 1 & 3) << 6 | uVar31 >> 6) << 0x10 | (uVar18 >> 3) << 0x18;
                  *(byte *)(puVar21 + 2) = (byte)((uVar10 >> 1) << 2) | (byte)(uVar9 >> 10);
                  puVar21[1] = (uVar17 >> 1 & 0x7f) << 1 | uVar18 >> 0xb |
                               ((uVar33 >> 1 & 0xf) << 4 | uVar17 >> 8) << 8 |
                               ((uVar9 >> 1 & 1) << 7 | uVar33 >> 5) << 0x10 | (uVar9 >> 2) << 0x18;
                  *(byte *)((int)puVar21 + 9) = (byte)((uVar11 >> 1) << 5) | (byte)(uVar10 >> 7);
                  *(char *)((int)puVar21 + 10) = (char)(uVar11 >> 4);
                  puVar21 = (uint *)((int)puVar21 + 0xb);
                  puVar15 = puVar22;
                } while (local_4b30 != puVar22);
                param_1 = param_1 + 0x58;
                local_4b30 = local_4b30 + 0x100;
              } while (param_1 != puVar14);
              puVar15 = local_320;
              do {
                puVar22 = puVar15 + 8;
                uVar1 = puVar15[5];
                uVar4 = puVar15[2];
                uVar18 = (uint)puVar15[6] * 0x13afc0 + 0x4000000;
                uVar5 = *puVar15;
                uVar31 = (uint)puVar15[4] * 0x13afc0 + 0x4000000;
                uVar17 = (uint)puVar15[3] * 0x13afc0 + 0x4000000;
                uVar33 = (uint)puVar15[1] * 0x13afc0 + 0x4000000;
                *(byte *)(puVar14 + 1) =
                     (byte)(((uint)puVar15[7] * 0x13afc0 + 0x4000000 >> 0x1b) << 3) |
                     (byte)(uVar18 >> 0x1d);
                *puVar14 = (uVar33 >> 0x1b & 7) << 5 | (uint)uVar5 * 0x13afc0 + 0x4000000 >> 0x1b |
                           ((uVar17 >> 0x1b & 1) << 7 |
                            ((uint)uVar4 * 0x13afc0 + 0x4000000 >> 0x1b) << 2 | uVar33 >> 0x1e) << 8
                           | ((uVar31 >> 0x1b & 0xf) << 4 | uVar17 >> 0x1c) << 0x10 |
                           ((uVar18 >> 0x1b & 3) << 6 |
                            ((uint)uVar1 * 0x13afc0 + 0x4000000 >> 0x1b) << 1 | uVar31 >> 0x1f) <<
                           0x18;
                puVar15 = puVar22;
                puVar14 = (uint *)((int)puVar14 + 5);
              } while (local_120 != puVar22);
              FUN_0177aaa0(&local_60,0x20);
              FUN_0177aaa0(auStack_1320,0x800);
              FUN_0177aaa0(local_b20,0x400);
              FUN_0177aaa0(&local_2b20,0x800);
              FUN_0177aaa0(local_320,0x200);
              FUN_0177aaa0(auStack_4b20,0x2000);
              FUN_0177aaa0(local_520,0x200);
              FUN_0177aaa0(local_2320,0x800);
              FUN_0177aaa0(local_720,0x200);
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
                    /* WARNING: Does not return */
  pcVar2 = (code *)software_udf(0,0x176bd14);
  (*pcVar2)();
}


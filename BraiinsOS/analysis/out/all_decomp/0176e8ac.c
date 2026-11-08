// FUN_0176e8ac @ 0176e8ac size=4028 calls_out=10 calls_in=3
// strings: 

undefined8 FUN_0176e8ac(int param_1,int param_2,int param_3,undefined4 *param_4)

{
  ushort uVar1;
  code *pcVar2;
  byte bVar3;
  int iVar4;
  int iVar5;
  uint *puVar6;
  short *psVar7;
  ushort *puVar8;
  byte *pbVar9;
  int iVar10;
  ushort *puVar11;
  uint uVar12;
  ushort *puVar13;
  undefined4 *puVar14;
  undefined4 *puVar15;
  short *psVar16;
  byte *pbVar17;
  ushort *puVar18;
  byte *pbVar19;
  short *psVar20;
  ushort *puVar21;
  undefined1 auStack_2120 [252];
  int local_2024;
  undefined1 auStack_1f20 [512];
  undefined1 auStack_1d20 [512];
  undefined1 auStack_1b20 [510];
  ushort uStack_1922;
  undefined4 local_1920;
  undefined4 uStack_191c;
  undefined4 uStack_1918;
  undefined4 uStack_1914;
  undefined4 local_1910;
  undefined4 uStack_190c;
  undefined4 uStack_1908;
  undefined4 uStack_1904;
  byte local_1900 [32];
  undefined4 local_18e0;
  undefined4 uStack_18dc;
  undefined4 uStack_18d8;
  undefined4 uStack_18d4;
  undefined4 local_18d0;
  undefined4 uStack_18cc;
  undefined4 uStack_18c8;
  undefined4 uStack_18c4;
  byte local_18c0 [32];
  undefined4 local_18a0;
  undefined4 uStack_189c;
  undefined4 uStack_1898;
  undefined4 uStack_1894;
  undefined4 local_1890;
  undefined4 uStack_188c;
  undefined4 uStack_1888;
  undefined4 uStack_1884;
  byte local_1880 [32];
  undefined4 local_1860;
  undefined4 uStack_185c;
  undefined4 uStack_1858;
  undefined4 uStack_1854;
  undefined4 local_1850;
  undefined4 uStack_184c;
  undefined4 uStack_1848;
  undefined4 uStack_1844;
  byte local_1840 [156];
  uint uStack_17a4;
  uint local_17a0 [31];
  undefined4 uStack_1724;
  ushort local_1720 [30];
  uint uStack_16e4;
  uint local_16e0 [31];
  uint auStack_1664 [80];
  ushort uStack_1522;
  short local_1520 [255];
  short sStack_1322;
  short local_1320 [256];
  ushort local_1120 [126];
  int local_1024;
  short local_d20 [256];
  short local_b20 [256];
  undefined4 local_920;
  undefined4 uStack_91c;
  undefined4 uStack_918;
  undefined4 uStack_914;
  undefined4 local_910;
  undefined4 uStack_90c;
  undefined4 uStack_908;
  undefined4 uStack_904;
  undefined1 local_900 [32];
  undefined4 local_8e0;
  undefined4 uStack_8dc;
  undefined4 uStack_8d8;
  undefined4 uStack_8d4;
  undefined4 local_8d0;
  undefined4 uStack_8cc;
  undefined4 uStack_8c8;
  undefined4 uStack_8c4;
  undefined1 local_8c0 [32];
  undefined4 local_8a0;
  undefined4 uStack_89c;
  undefined4 uStack_898;
  undefined4 uStack_894;
  undefined4 local_890;
  undefined4 uStack_88c;
  undefined4 uStack_888;
  undefined4 uStack_884;
  undefined1 local_880 [32];
  undefined4 local_860;
  undefined4 uStack_85c;
  undefined4 uStack_858;
  undefined4 uStack_854;
  undefined4 local_850;
  undefined4 uStack_84c;
  undefined4 uStack_848;
  undefined4 uStack_844;
  undefined1 local_840 [286];
  short sStack_722;
  short local_720 [255];
  short sStack_522;
  ushort local_520 [255];
  ushort uStack_322;
  ushort local_320 [254];
  undefined4 uStack_124;
  undefined1 local_120 [124];
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
  byte abStack_40 [20];
  int local_2c;
  
  pbVar19 = (byte *)(param_3 + 0x180);
  local_2c = DAT_018ddaf8;
  puVar11 = local_1120;
  local_1024 = param_1;
  do {
    puVar13 = puVar11;
    pbVar9 = pbVar19 + -0x180;
    do {
      bVar3 = pbVar9[1];
      puVar13[1] = (ushort)pbVar9[2] << 4 | (ushort)(bVar3 >> 4);
      pbVar17 = pbVar9 + 3;
      *puVar13 = (ushort)*pbVar9 | (bVar3 & 0xf) << 8;
      puVar13 = puVar13 + 2;
      pbVar9 = pbVar17;
    } while (pbVar19 != pbVar17);
    pbVar19 = pbVar19 + 0x180;
    puVar11 = puVar11 + 0x100;
  } while ((byte *)(param_3 + 0x480) != pbVar19);
  pbVar19 = (byte *)(param_3 + 0x300);
  local_2024 = param_1;
  if ((abStack_40 <= pbVar19 || pbVar19 <= &local_60) &&
     ((&local_60 <= pbVar19 || ((byte *)(param_3 + 800) <= &local_60)))) {
    local_60 = *(undefined4 *)(param_3 + 0x300);
    uStack_58 = *(undefined4 *)(param_3 + 0x308);
    pbVar19 = (byte *)(param_2 + -1);
    uStack_5c = *(undefined4 *)(param_3 + 0x304);
    uStack_54 = *(undefined4 *)(param_3 + 0x30c);
    uStack_4c = *(undefined4 *)(param_3 + 0x314);
    uStack_48 = *(undefined4 *)(param_3 + 0x318);
    local_50 = *(undefined4 *)(param_3 + 0x310);
    uStack_44 = *(undefined4 *)(param_3 + 0x31c);
    puVar11 = local_520;
    do {
      pbVar19 = pbVar19 + 1;
      uVar12 = (uint)*pbVar19;
      puVar13 = puVar11 + 8;
      *puVar11 = (ushort)(-(uVar12 & 1) >> 0x10) & 0x681;
      puVar11[1] = (ushort)(-(uVar12 & 2) >> 0x10) & 0x681;
      puVar11[2] = (ushort)(-(uVar12 & 4) >> 0x10) & 0x681;
      puVar11[3] = (ushort)(-(uVar12 & 8) >> 0x10) & 0x681;
      puVar11[4] = (ushort)(-(uVar12 & 0x10) >> 0x10) & 0x681;
      puVar11[5] = (ushort)(-(uVar12 & 0x20) >> 0x10) & 0x681;
      puVar11[7] = (ushort)(-(uVar12 & 0xffffff80) >> 0x10) & 0x681;
      puVar11[6] = (ushort)(-(uVar12 & 0x40) >> 0x10) & 0x681;
      puVar11 = puVar13;
    } while (local_320 != puVar13);
    if (((&local_60 <= &local_1920) || (local_1900 <= &local_60)) &&
       (&local_1920 <= &local_60 || abStack_40 <= &local_1920)) {
      local_1920 = local_60;
      uStack_191c = uStack_5c;
      uStack_1918 = uStack_58;
      uStack_1914 = uStack_54;
      local_1910 = local_50;
      uStack_190c = uStack_4c;
      uStack_1908 = uStack_48;
      uStack_1904 = uStack_44;
      if (((&local_60 <= &local_18e0) || (local_18c0 <= &local_60)) &&
         (&local_18e0 <= &local_60 || abStack_40 <= &local_18e0)) {
        local_18e0 = local_60;
        uStack_18dc = uStack_5c;
        uStack_18d8 = uStack_58;
        uStack_18d4 = uStack_54;
        local_18d0 = local_50;
        uStack_18cc = uStack_4c;
        uStack_18c8 = uStack_48;
        uStack_18c4 = uStack_44;
        if (((&local_60 <= &local_18a0) || (local_1880 <= &local_60)) &&
           (abStack_40 <= &local_18a0 || &local_18a0 <= &local_60)) {
          local_18a0 = local_60;
          uStack_189c = uStack_5c;
          uStack_1898 = uStack_58;
          uStack_1894 = uStack_54;
          local_1890 = local_50;
          uStack_188c = uStack_4c;
          uStack_1888 = uStack_48;
          uStack_1884 = uStack_44;
          if (((&local_60 <= &local_1860) || (local_1840 <= &local_60)) &&
             (abStack_40 <= &local_1860 || &local_1860 <= &local_60)) {
            local_1860 = local_60;
            uStack_185c = uStack_5c;
            uStack_1858 = uStack_58;
            uStack_1854 = uStack_54;
            local_1850 = local_50;
            uStack_184c = uStack_4c;
            uStack_1848 = uStack_48;
            uStack_1844 = uStack_44;
            local_1900[0] = 0;
            local_1900[1] = 0;
            local_1880[0] = 1;
            local_1880[1] = 0;
            local_1840[0] = 1;
            local_1840[1] = 1;
            local_18c0[0] = 0;
            local_18c0[1] = 1;
            FUN_017694a0(auStack_2120,auStack_1f20,auStack_1d20,auStack_1b20);
            FUN_0177aaa0(&local_1920,0x100);
            if ((param_4 <= &local_920 || local_900 <= param_4) &&
               ((&local_920 <= param_4 || (param_4 + 8 <= &local_920)))) {
              local_920 = *param_4;
              uStack_91c = param_4[1];
              uStack_918 = param_4[2];
              uStack_914 = param_4[3];
              local_910 = param_4[4];
              uStack_90c = param_4[5];
              uStack_908 = param_4[6];
              uStack_904 = param_4[7];
              if ((local_8c0 <= param_4 || param_4 <= &local_8e0) &&
                 ((&local_8e0 <= param_4 || (param_4 + 8 <= &local_8e0)))) {
                local_8e0 = *param_4;
                uStack_8dc = param_4[1];
                uStack_8d8 = param_4[2];
                uStack_8d4 = param_4[3];
                local_8d0 = param_4[4];
                uStack_8cc = param_4[5];
                uStack_8c8 = param_4[6];
                uStack_8c4 = param_4[7];
                if ((local_880 <= param_4 || param_4 <= &local_8a0) &&
                   ((&local_8a0 <= param_4 || (param_4 + 8 <= &local_8a0)))) {
                  local_8a0 = *param_4;
                  uStack_89c = param_4[1];
                  uStack_898 = param_4[2];
                  uStack_894 = param_4[3];
                  local_890 = param_4[4];
                  uStack_88c = param_4[5];
                  uStack_888 = param_4[6];
                  uStack_884 = param_4[7];
                  if ((param_4 <= &local_860 || local_840 <= param_4) &&
                     ((&local_860 <= param_4 || (param_4 + 8 <= &local_860)))) {
                    local_860 = *param_4;
                    uStack_85c = param_4[1];
                    uStack_858 = param_4[2];
                    uStack_854 = param_4[3];
                    local_850 = param_4[4];
                    uStack_84c = param_4[5];
                    uStack_848 = param_4[6];
                    uStack_844 = param_4[7];
                    local_900[0] = 0;
                    local_8c0[0] = 1;
                    local_880[0] = 2;
                    local_840[0] = 3;
                    FUN_01769db8(&local_920,&local_8e0,&local_8a0,&local_860);
                    pbVar19 = (byte *)&local_1920;
                    psVar16 = local_d20;
                    do {
                      pbVar9 = pbVar19 + 3;
                      uVar12 = (uint)pbVar19[2] << 0x10 | (uint)pbVar19[1] << 8 | (uint)*pbVar19;
                      uVar12 = (uVar12 >> 1 & 0x249249) + (uVar12 >> 2 & 0x249249) +
                               (uVar12 & 0x249249);
                      *psVar16 = (short)(uVar12 & 0x1f0007) - (short)((uVar12 & 0x3f) >> 3);
                      psVar16[1] = (short)((uVar12 & 0x1ff) >> 6) - (short)((uVar12 & 0xfff) >> 9);
                      psVar16[2] = (short)((uVar12 & 0x7fff) >> 0xc) -
                                   (short)((uVar12 & 0x3ffff) >> 0xf);
                      psVar16[3] = (ushort)((uVar12 & 0x1f0007) >> 0x12) - (ushort)(uVar12 >> 0x15);
                      pbVar19 = pbVar9;
                      psVar16 = psVar16 + 4;
                    } while ((byte *)&local_1860 != pbVar9);
                    pbVar19 = (byte *)&local_1920;
                    psVar16 = local_b20;
                    do {
                      pbVar9 = pbVar19 + 3;
                      uVar12 = (uint)pbVar19[0xc2] << 0x10 | (uint)pbVar19[0xc1] << 8 |
                               (uint)pbVar19[0xc0];
                      uVar12 = (uVar12 >> 1 & 0x249249) + (uVar12 >> 2 & 0x249249) +
                               (uVar12 & 0x249249);
                      *psVar16 = (short)(uVar12 & 0x1f0007) - (short)((uVar12 & 0x3f) >> 3);
                      psVar16[1] = (short)((uVar12 & 0x1ff) >> 6) - (short)((uVar12 & 0xfff) >> 9);
                      psVar16[2] = (short)((uVar12 & 0x7fff) >> 0xc) -
                                   (short)((uVar12 & 0x3ffff) >> 0xf);
                      psVar16[3] = (ushort)((uVar12 & 0x1f0007) >> 0x12) - (ushort)(uVar12 >> 0x15);
                      pbVar19 = pbVar9;
                      psVar16 = psVar16 + 4;
                    } while ((byte *)&local_1860 != pbVar9);
                    puVar6 = &uStack_17a4;
                    psVar16 = local_1520;
                    do {
                      puVar6 = puVar6 + 1;
                      uVar12 = (*puVar6 >> 1 & 0x55555555) + (*puVar6 & 0x55555555);
                      *psVar16 = (short)(uVar12 & 0x3fff0003) - (short)((uVar12 & 0xf) >> 2);
                      psVar16[1] = (short)((uVar12 & 0x3f) >> 4) - (short)((uVar12 & 0xff) >> 6);
                      psVar16[2] = ((ushort)(uVar12 >> 8) & 3) - (short)((uVar12 & 0xfff) >> 10);
                      uVar1 = (ushort)(uVar12 >> 0x10);
                      psVar16[3] = (short)((uVar12 & 0x3fff) >> 0xc) -
                                   (short)((uVar12 & 0xffff) >> 0xe);
                      psVar16[4] = (uVar1 & 3) - ((uVar1 & 0xf) >> 2);
                      psVar16[5] = ((uVar1 & 0x3f) >> 4) - ((uVar1 & 0xff) >> 6);
                      psVar16[6] = (ushort)((byte)(uVar12 >> 0x18) & 3) - ((uVar1 & 0xfff) >> 10);
                      psVar16[7] = (ushort)((uVar12 & 0x3fff0003) >> 0x1c) - (uVar1 >> 0xe);
                      psVar16 = psVar16 + 8;
                    } while (&uStack_1724 != puVar6);
                    puVar6 = &uStack_16e4;
                    psVar16 = local_1320;
                    do {
                      puVar6 = puVar6 + 1;
                      uVar12 = (*puVar6 >> 1 & 0x55555555) + (*puVar6 & 0x55555555);
                      *psVar16 = (short)(uVar12 & 0xfff0003) - (short)((uVar12 & 0xf) >> 2);
                      psVar16[1] = (short)((uVar12 & 0x3f) >> 4) - (short)((uVar12 & 0xff) >> 6);
                      psVar16[2] = ((ushort)(uVar12 >> 8) & 3) - (short)((uVar12 & 0xfff) >> 10);
                      uVar1 = (ushort)(uVar12 >> 0x10);
                      psVar16[3] = (short)((uVar12 & 0x3fff) >> 0xc) -
                                   (short)((uVar12 & 0xffff) >> 0xe);
                      psVar16[4] = (uVar1 & 3) - ((uVar1 & 0xf) >> 2);
                      psVar16[5] = ((uVar1 & 0x3f) >> 4) - ((uVar1 & 0xff) >> 6);
                      psVar16[6] = (ushort)((byte)(uVar12 >> 0x18) & 3) -
                                   (ushort)((uVar12 & 0xfff0003) >> 0x1a);
                      psVar16[7] = ((uVar1 & 0x3fff) >> 0xc) - (uVar1 >> 0xe);
                      psVar16 = psVar16 + 8;
                    } while (auStack_1664 != puVar6);
                    FUN_0177aaa0(&local_1920,0x300);
                    FUN_0177aaa0(&local_920,0x100);
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
                      local_80[0] = 4;
                      FUN_01757bf4(&local_a0,0x21,local_120,0x80);
                      puVar6 = &uStack_124;
                      psVar16 = local_720;
                      do {
                        puVar6 = puVar6 + 1;
                        uVar12 = (*puVar6 >> 1 & 0x55555555) + (*puVar6 & 0x55555555);
                        *psVar16 = (short)(uVar12 & 0xfff0003) - (short)((uVar12 & 0xf) >> 2);
                        psVar16[1] = (short)((uVar12 & 0x3f) >> 4) - (short)((uVar12 & 0xff) >> 6);
                        psVar16[2] = ((ushort)(uVar12 >> 8) & 3) - (short)((uVar12 & 0xfff) >> 10);
                        uVar1 = (ushort)(uVar12 >> 0x10);
                        psVar16[3] = (short)((uVar12 & 0x3fff) >> 0xc) -
                                     (short)((uVar12 & 0xffff) >> 0xe);
                        psVar16[4] = (uVar1 & 3) - ((uVar1 & 0xf) >> 2);
                        psVar16[5] = ((uVar1 & 0x3f) >> 4) - ((uVar1 & 0xff) >> 6);
                        psVar16[6] = (ushort)((byte)(uVar12 >> 0x18) & 3) -
                                     (ushort)((uVar12 & 0xfff0003) >> 0x1a);
                        psVar16[7] = ((uVar1 & 0x3fff) >> 0xc) - (uVar1 >> 0xe);
                        psVar16 = psVar16 + 8;
                      } while (&uStack_a4 != puVar6);
                      FUN_0177aaa0(local_120,0x80);
                      FUN_0177aaa0(&local_a0,0x21);
                      FUN_01708030(local_d20);
                      iVar10 = 2;
                      psVar16 = local_b20;
                      puVar14 = &local_920;
                      psVar20 = local_d20;
                      while( true ) {
                        psVar7 = psVar16;
                        psVar16 = &DAT_00428fbe;
                        puVar15 = puVar14;
                        do {
                          psVar16 = psVar16 + 1;
                          iVar4 = (int)psVar20[1] * (int)*psVar16;
                          iVar5 = (int)psVar20[3] * (int)-*psVar16;
                          *(short *)puVar15 =
                               (short)((uint)((short)((short)iVar4 * -0xcff) * -0xd01 + iVar4) >>
                                      0x10);
                          *(short *)((int)puVar15 + 2) =
                               (short)((uint)((short)((short)iVar5 * -0xcff) * -0xd01 + iVar5) >>
                                      0x10);
                          puVar15 = puVar15 + 1;
                          psVar20 = psVar20 + 4;
                        } while (psVar16 != (short *)&DAT_0042903e);
                        puVar14 = puVar14 + 0x40;
                        if (iVar10 == 1) break;
                        iVar10 = 1;
                        psVar16 = psVar7 + 0x100;
                        psVar20 = psVar7;
                      }
                      FUN_017032a0(&local_1920,auStack_2120,local_d20,&local_920);
                      FUN_017032a0(local_1720,auStack_1d20,local_d20,&local_920);
                      FUN_017032a0(local_320,local_1120,local_d20,&local_920);
                      FUN_01703114(&local_1920);
                      FUN_01703114(local_1720);
                      FUN_01703114(local_320);
                      puVar18 = (ushort *)((int)&uStack_1724 + 2);
                      puVar13 = &uStack_1922;
                      puVar11 = &uStack_1522;
                      do {
                        puVar13 = puVar13 + 1;
                        puVar11 = puVar11 + 1;
                        *puVar13 = *puVar11 + *puVar13;
                      } while (puVar18 != puVar13);
                      psVar16 = &sStack_1322;
                      puVar11 = puVar18;
                      do {
                        puVar11 = puVar11 + 1;
                        psVar16 = psVar16 + 1;
                        *puVar11 = *puVar11 + *psVar16;
                      } while (&uStack_1522 != puVar11);
                      puVar21 = &uStack_322;
                      puVar13 = (ushort *)((int)&uStack_124 + 2);
                      psVar16 = &sStack_722;
                      puVar11 = puVar21;
                      do {
                        puVar11 = puVar11 + 1;
                        psVar16 = psVar16 + 1;
                        *puVar11 = *puVar11 + *psVar16;
                      } while (puVar13 != puVar11);
                      psVar16 = &sStack_522;
                      puVar11 = puVar21;
                      do {
                        puVar11 = puVar11 + 1;
                        psVar16 = psVar16 + 1;
                        *puVar11 = *puVar11 + *psVar16;
                      } while (puVar13 != puVar11);
                      iVar10 = 2;
                      while( true ) {
                        puVar11 = puVar18 + -0x100;
                        do {
                          puVar8 = puVar11;
                          puVar11 = puVar8 + 1;
                          uVar1 = *puVar11 +
                                  (short)((short)*puVar11 * 0x4ebf + 0x2000000 >> 0x1a) * -0xd01;
                          *puVar11 = uVar1 ^ (uVar1 + 0xd01 ^ uVar1) &
                                             (ushort)(-((uint)(int)(short)uVar1 >> 0x10) >> 0x10);
                        } while (puVar11 != puVar18);
                        puVar18 = puVar8 + 0x101;
                        if (iVar10 == 1) break;
                        iVar10 = 1;
                      }
                      do {
                        puVar21 = puVar21 + 1;
                        uVar1 = *puVar21 +
                                (short)((short)*puVar21 * 0x4ebf + 0x2000000 >> 0x1a) * -0xd01;
                        *puVar21 = uVar1 ^ (uVar1 + 0xd01 ^ uVar1) &
                                           (ushort)(-((uint)(int)(short)uVar1 >> 0x10) >> 0x10);
                      } while (puVar13 != puVar21);
                      FUN_01702f8c(param_1,&local_1920);
                      FUN_01702f8c(param_1 + 0x140,local_1720);
                      FUN_01702e90(param_1 + 0x280,local_320);
                      FUN_0177aaa0(&local_60,0x20);
                      FUN_0177aaa0(local_d20,0x400);
                      FUN_0177aaa0(&local_920,0x200);
                      FUN_0177aaa0(&local_1920,0x400);
                      FUN_0177aaa0(local_320,0x200);
                      FUN_0177aaa0(auStack_2120,0x800);
                      FUN_0177aaa0(local_520,0x200);
                      FUN_0177aaa0(local_1520,0x400);
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
        }
      }
    }
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)software_udf(0,0x176f864);
  (*pcVar2)();
}


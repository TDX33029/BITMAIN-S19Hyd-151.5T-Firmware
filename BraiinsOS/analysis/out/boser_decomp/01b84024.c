// FUN_01b84024 @ 01b84024 size=1656 calls_out=3 calls_in=3
// strings: 

uint FUN_01b84024(undefined **param_1,int param_2,undefined *param_3,uint param_4,int param_5,
                 uint param_6)

{
  byte bVar1;
  short sVar2;
  ushort uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  int iVar8;
  uint uVar9;
  ushort *puVar10;
  uint *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  uint uVar14;
  short *psVar15;
  short *psVar16;
  int iVar17;
  undefined *puVar18;
  int iVar19;
  undefined *puVar20;
  undefined *puVar21;
  undefined2 *puVar22;
  int iVar23;
  uint uVar24;
  bool bVar25;
  int local_90;
  undefined *local_84;
  ushort auStack_80 [14];
  undefined *apuStack_64 [14];
  uint local_2c;
  undefined *puStack_28;
  
  ppuVar7 = &PTR_01d3b2b0;
  uVar24 = -param_5 & 3;
  local_2c = DAT_01d53560;
  puVar10 = (ushort *)0x0;
  if ((param_6 < uVar24) || (param_6 - uVar24 < 0x1300)) {
    uVar24 = 0xffffffbe;
  }
  else {
    if (param_4 == 0) {
      param_4 = 0xb;
    }
    if (param_3 < (undefined *)0x100) {
      local_90 = param_5 + uVar24;
      FUN_01bed93e(local_90,0,0x1000);
      puVar13 = param_3 + 1;
      iVar23 = local_90 + 8;
      iVar8 = FUN_01bed93e(local_90 + 0x1000,0,0x300);
      puVar11 = (uint *)(param_2 + -4);
      do {
        puVar11 = puVar11 + 1;
        uVar14 = *puVar11;
        if (0xa4 < uVar14) {
          uVar14 = 0xbd - LZCOUNT(uVar14);
        }
        *(short *)(iVar8 + uVar14 * 4) = *(short *)(iVar8 + uVar14 * 4) + 1;
      } while ((uint *)(param_2 + (int)param_3 * 4) != puVar11);
      psVar15 = (short *)(local_90 + 0x12f8);
      do {
        sVar2 = *psVar15;
        psVar16 = psVar15 + -2;
        *psVar15 = sVar2 + psVar15[2];
        psVar15[1] = sVar2 + psVar15[2];
        psVar15 = psVar16;
      } while ((short *)(local_90 + 0xffc) != psVar16);
      puVar12 = (undefined *)0x0;
      do {
        uVar9 = *(uint *)(param_2 + (int)puVar12 * 4);
        uVar14 = uVar9;
        if (0xa4 < uVar9) {
          uVar14 = 0xbd - LZCOUNT(uVar9);
        }
        iVar17 = iVar8 + (uVar14 + 1) * 4;
        uVar3 = *(ushort *)(iVar17 + 2);
        *(ushort *)(iVar17 + 2) = uVar3 + 1;
        *(uint *)(iVar23 + (uint)uVar3 * 8) = uVar9;
        *(char *)(iVar23 + (uint)uVar3 * 8 + 6) = (char)puVar12;
        puVar12 = puVar12 + 1;
      } while (puVar12 < puVar13);
      puVar10 = (ushort *)(local_90 + 0x1294);
      do {
        iVar8 = (uint)puVar10[1] - (uint)*puVar10;
        if (1 < iVar8) {
          FUN_01b83930(iVar23 + (uint)*puVar10 * 8,0,iVar8 + -1);
        }
        puVar10 = puVar10 + 2;
      } while ((ushort *)(local_90 + 0x12fc) != puVar10);
      puVar12 = param_3;
      for (iVar8 = local_90 + (int)param_3 * 8; *(int *)(iVar8 + 8) == 0; iVar8 = iVar8 + -8) {
        puVar12 = puVar12 + -1;
      }
      ppuVar7 = (undefined **)(puVar12 + 0xff);
      puVar20 = puVar12 + 0x1fffffff;
      *(int *)(local_90 + 0x808) = *(int *)(iVar23 + (int)puVar20 * 8) + *(int *)(iVar8 + 8);
      *(undefined2 *)(iVar23 + (int)puVar20 * 8 + 4) = 0x100;
      *(undefined2 *)(iVar8 + 0xc) = 0x100;
      puVar21 = puVar12 + -2;
      for (iVar17 = 0x101; iVar17 <= (int)ppuVar7; iVar17 = iVar17 + 1) {
        *(undefined4 *)(iVar23 + iVar17 * 8) = 0x40000000;
      }
      *(undefined4 *)(param_5 + uVar24) = 0x80000000;
      puVar18 = (undefined *)0x100;
      for (iVar17 = 0x101; iVar17 <= (int)ppuVar7; iVar17 = iVar17 + 1) {
        uVar24 = *(uint *)(iVar23 + (int)puVar21 * 8);
        uVar14 = *(uint *)(iVar23 + (int)puVar18 * 8);
        puVar4 = puVar18;
        puVar5 = puVar21;
        if (uVar24 < uVar14) {
          puVar4 = puVar21;
          puVar5 = puVar21 + -1;
        }
        if (uVar24 >= uVar14) {
          puVar18 = puVar18 + 1;
          uVar24 = uVar14;
        }
        uVar9 = *(uint *)(iVar23 + (int)puVar5 * 8);
        uVar14 = *(uint *)(iVar23 + (int)puVar18 * 8);
        bVar25 = uVar14 <= uVar9;
        puVar21 = puVar5;
        if (!bVar25) {
          puVar21 = puVar5 + -1;
          uVar14 = uVar9;
        }
        puVar6 = puVar18;
        if (bVar25) {
          puVar6 = puVar18 + 1;
          puVar5 = puVar18;
        }
        puVar18 = puVar6;
        *(uint *)(iVar23 + iVar17 * 8) = uVar24 + uVar14;
        *(short *)(iVar23 + (int)puVar5 * 8 + 4) = (short)iVar17;
        *(short *)(iVar23 + (int)puVar4 * 8 + 4) = (short)iVar17;
      }
      *(undefined1 *)(iVar23 + (int)puVar20 * 8 + 0x807) = 0;
      iVar17 = (int)puVar20 * 8 + 8;
      puVar10 = (ushort *)(local_90 + 0x7fc + iVar17);
      for (puVar21 = puVar12 + 0xfe; 0xff < (int)puVar21; puVar21 = puVar21 + -1) {
        ppuVar7 = (undefined **)(*(byte *)(iVar23 + (uint)*puVar10 * 8 + 7) + 1);
        *(char *)((int)puVar10 + 3) = (char)ppuVar7;
        puVar10 = puVar10 + -4;
      }
      puVar10 = (ushort *)(local_90 + 0xc);
      for (iVar19 = 0; iVar19 <= (int)puVar12; iVar19 = iVar19 + 1) {
        ppuVar7 = (undefined **)(*(byte *)(iVar23 + (uint)*puVar10 * 8 + 7) + 1);
        *(char *)((int)puVar10 + 3) = (char)ppuVar7;
        puVar10 = puVar10 + 4;
      }
      uVar24 = (uint)*(byte *)(iVar8 + 0xf);
      if (param_4 < uVar24) {
        iVar8 = 0;
        puVar21 = puVar12;
        for (iVar17 = local_90 + iVar17; param_4 < *(byte *)(iVar17 + 0xf); iVar17 = iVar17 + -8) {
          puVar21 = puVar21 + -1;
          iVar8 = (iVar8 + (1 << (uVar24 - param_4 & 0xff))) -
                  (1 << (uVar24 - *(byte *)(iVar17 + 0xf) & 0xff));
          *(char *)(iVar17 + 0xf) = (char)param_4;
        }
        iVar17 = local_90 + 0xf;
        while (param_4 == *(byte *)(iVar17 + (int)puVar21 * 8)) {
          puVar21 = puVar21 + -1;
        }
        iVar8 = iVar8 >> (uVar24 - param_4 & 0xff);
        ppuVar7 = (undefined **)FUN_01bed93e(apuStack_64,0xf0,0x38);
        uVar24 = param_4;
        for (puVar20 = puVar21; -1 < (int)puVar20; puVar20 = puVar20 + -1) {
          uVar14 = (uint)*(byte *)(iVar17 + (int)puVar20 * 8);
          if (uVar14 < uVar24) {
            ppuVar7 = &puStack_28;
            apuStack_64[param_4 - uVar14] = puVar20;
            uVar24 = uVar14;
          }
        }
        while (0 < iVar8) {
          uVar24 = 0x20 - LZCOUNT(iVar8);
          ppuVar7 = apuStack_64 + uVar24;
          for (; uVar24 != 1; uVar24 = uVar24 - 1) {
            if ((*ppuVar7 != (undefined *)0xf0f0f0f0) &&
               ((puVar20 = ppuVar7[-1], puVar20 == (undefined *)0xf0f0f0f0 ||
                (*(uint *)(iVar23 + (int)*ppuVar7 * 8) <=
                 (uint)(*(int *)(iVar23 + (int)puVar20 * 8) * 2))))) break;
            ppuVar7 = ppuVar7 + -1;
          }
          for (; (puVar20 = apuStack_64[uVar24], uVar24 < 0xd &&
                 (puVar20 == (undefined *)0xf0f0f0f0)); uVar24 = uVar24 + 1) {
          }
          iVar19 = iVar23 + (int)puVar20 * 8;
          uVar14 = uVar24 - 1;
          iVar8 = iVar8 - (1 << (uVar14 & 0xff));
          *(char *)(iVar19 + 7) = *(char *)(iVar19 + 7) + '\x01';
          if (apuStack_64[uVar14] == (undefined *)0xf0f0f0f0) {
            apuStack_64[uVar14] = puVar20;
          }
          ppuVar7 = apuStack_64 + uVar24 + 0xf;
          if (apuStack_64[uVar24] == (undefined *)0x0) {
            apuStack_64[uVar24] = (undefined *)0xf0f0f0f0;
          }
          else {
            puVar20 = apuStack_64[uVar24] + -1;
            if ((uint)*(byte *)(iVar23 + (int)puVar20 * 8 + 7) != param_4 - uVar24) {
              puVar20 = (undefined *)0xf0f0f0f0;
            }
            apuStack_64[uVar24] = puVar20;
          }
        }
        puVar10 = (ushort *)0xf0f0f0f0;
        while (iVar8 != 0) {
          iVar8 = iVar8 + 1;
          if (apuStack_64[1] == (undefined *)0xf0f0f0f0) {
            while (apuStack_64[1] = puVar21, param_4 == *(byte *)(iVar17 + (int)puVar21 * 8)) {
              puVar21 = puVar21 + -1;
            }
          }
          apuStack_64[1] = apuStack_64[1] + 1;
          ppuVar7 = (undefined **)(iVar23 + (int)apuStack_64[1] * 8);
          *(char *)((int)ppuVar7 + 7) = *(char *)((int)ppuVar7 + 7) + -1;
        }
        uVar24 = param_4;
      }
      if (uVar24 < 0xd) {
        FUN_01bed93e(auStack_80,0,0x1a);
        iVar8 = FUN_01bed93e(apuStack_64,0,0x1a);
        for (iVar23 = 0; iVar23 <= (int)puVar12; iVar23 = iVar23 + 1) {
          bVar1 = *(byte *)(local_90 + 0xf + iVar23 * 8);
          auStack_80[bVar1] = auStack_80[bVar1] + 1;
        }
        uVar9 = 0;
        puVar22 = (undefined2 *)(iVar8 + uVar24 * 2);
        puVar10 = auStack_80 + uVar24;
        for (uVar14 = uVar24; uVar14 != 0; uVar14 = uVar14 - 1) {
          uVar3 = *puVar10;
          *puVar22 = (short)uVar9;
          uVar9 = (uVar9 + uVar3 & 0xffff) >> 1;
          puVar22 = puVar22 + -1;
          puVar10 = puVar10 + -1;
        }
        iVar8 = 0;
        do {
          iVar8 = iVar8 + 1;
          param_1[*(byte *)(local_90 + 0xe) + 1] = (undefined *)(uint)*(byte *)(local_90 + 0xf);
          local_90 = local_90 + 8;
        } while (iVar8 < (int)puVar13);
        iVar8 = 0;
        ppuVar7 = param_1;
        do {
          ppuVar7 = ppuVar7 + 1;
          puVar10 = (ushort *)*ppuVar7;
          iVar8 = iVar8 + 1;
          uVar9 = (uint)puVar10 & 0xff;
          uVar14 = 0;
          if (uVar9 != 0) {
            uVar14 = 0x20 - uVar9;
          }
          uVar3 = *(ushort *)((int)apuStack_64 + uVar9 * 2);
          *(ushort *)((int)apuStack_64 + uVar9 * 2) = uVar3 + 1;
          if (uVar9 != 0) {
            puVar10 = (ushort *)((uint)puVar10 | (uint)uVar3 << (uVar14 & 0xff));
            *ppuVar7 = (undefined *)puVar10;
          }
        } while (iVar8 < (int)puVar13);
        local_84 = (undefined *)(uint)CONCAT11((char)param_3,(char)uVar24);
        *param_1 = local_84;
      }
      else {
        uVar24 = 0xffffffff;
      }
    }
    else {
      uVar24 = 0xffffffd2;
    }
  }
  if ((local_2c ^ DAT_01d53560) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01be31f4(ppuVar7,puVar10,local_2c ^ DAT_01d53560,0);
  }
  return uVar24;
}


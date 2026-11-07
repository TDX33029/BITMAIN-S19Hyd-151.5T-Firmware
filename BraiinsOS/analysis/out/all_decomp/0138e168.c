// FUN_0138e168 @ 0138e168 size=1620 calls_out=13 calls_in=6
// strings: cannot save sentinel state | adding one state after cache clear must work

void FUN_0138e168(int *param_1)

{
  code *pcVar1;
  byte bVar2;
  bool bVar3;
  longlong lVar4;
  int iVar5;
  undefined4 *puVar6;
  int *piVar7;
  int iVar8;
  uint uVar9;
  undefined *puVar10;
  uint *puVar11;
  int iVar12;
  uint uVar13;
  int iVar14;
  uint *puVar15;
  uint uVar16;
  int iVar17;
  uint uVar18;
  uint *puVar19;
  undefined4 *puVar20;
  uint uVar21;
  ulonglong uVar22;
  uint local_50 [4];
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  uint local_30 [3];
  
  puVar20 = (undefined4 *)param_1[1];
  iVar17 = 0;
  iVar12 = puVar20[0x24];
  iVar14 = puVar20[0x25];
  puVar20[0x22] = 0;
  puVar20[0x1f] = 0;
  puVar20[0x25] = 0;
  if (iVar14 != 0) {
    do {
      puVar6 = (undefined4 *)(iVar12 + iVar17 * 8);
      piVar7 = (int *)*puVar6;
      iVar17 = iVar17 + 1;
      DataMemoryBarrier(0xb);
      do {
        iVar8 = *piVar7;
        bVar3 = (bool)hasExclusiveAccess(piVar7);
      } while (!bVar3);
      *piVar7 = iVar8 + -1;
      if (iVar8 == 1) {
        DataMemoryBarrier(0xb);
        FUN_0143daec(*puVar6,puVar6[1]);
      }
    } while (iVar17 != iVar14);
  }
  iVar12 = puVar20[3];
  if (iVar12 != 0) {
    puVar19 = (uint *)*puVar20;
    puVar11 = puVar19 + 1;
    uVar18 = ~*puVar19 & 0x80808080;
    do {
      puVar15 = puVar11;
      if (uVar18 == 0) {
        do {
          puVar11 = puVar15 + 1;
          uVar18 = *puVar15;
          puVar19 = puVar19 + -0xc;
          puVar15 = puVar11;
        } while ((uVar18 & 0x80808080) == 0x80808080);
        uVar18 = uVar18 & 0x80808080 ^ 0x80808080;
      }
      uVar13 = uVar18 >> 8;
      uVar16 = uVar18 >> 0x10;
      uVar9 = uVar18 >> 0x18;
      uVar21 = uVar18 << 0x18;
      uVar18 = uVar18 - 1 & uVar18;
      iVar12 = iVar12 + -1;
      uVar13 = (uint)LZCOUNT(uVar21 | (uVar13 & 0xff) << 0x10 | (uVar16 & 0xff) << 8 | uVar9) >> 3;
      piVar7 = (int *)puVar19[uVar13 * -3 + -3];
      DataMemoryBarrier(0xb);
      do {
        iVar14 = *piVar7;
        bVar3 = (bool)hasExclusiveAccess(piVar7);
      } while (!bVar3);
      *piVar7 = iVar14 + -1;
      if (iVar14 == 1) {
        DataMemoryBarrier(0xb);
        FUN_0143daec(puVar19[uVar13 * -3 + -3],puVar19[uVar13 * -3 + -2]);
      }
    } while (iVar12 != 0);
    uVar13 = puVar20[1];
    uVar18 = 0;
    if (uVar13 != 0) {
      FUN_016dd606(*puVar20,0xff,uVar13 + 5);
      uVar18 = uVar13;
      if (7 < uVar13) {
        uVar18 = (uVar13 + 1 & 0xfffffff8) - (uVar13 + 1 >> 3);
      }
    }
    puVar20[2] = uVar18;
    puVar20[3] = 0;
  }
  puVar20[0x1b] = puVar20[0x1b] + 1;
  puVar20[0x1a] = 0;
  if (puVar20[0x2c] == 1) {
    puVar20[0x2d] = puVar20[0x2e];
  }
  puVar20[0x1c] = 0;
  FUN_0138e8a8(param_1);
  uVar18 = puVar20[9];
  piVar7 = (int *)puVar20[10];
  iVar12 = puVar20[8];
  iVar14 = puVar20[0xb];
  puVar20[8] = 0;
  if (iVar12 == 1) {
    if (uVar18 == 0x80000000) {
LAB_0138e698:
                    /* WARNING: Subroutine does not return */
      FUN_00faa478("cannot save sentinel state",0x35,&DAT_01892f60);
    }
    iVar12 = *param_1;
    uVar13 = *(uint *)(iVar12 + 0x27c) & 0x1f;
    local_30[0] = 1 << uVar13;
    if (0x1a < uVar13) {
      puVar10 = &DAT_01893000;
LAB_0138e73c:
      local_30[1] = 0;
                    /* WARNING: Subroutine does not return */
      FUN_00fb74f8(&DAT_00418ec6,0x2b,local_30,&DAT_01893030,puVar10);
    }
    if (uVar18 == (local_30[0] | 0x40000000)) goto LAB_0138e698;
    if (uVar13 == 0x1a) {
      puVar10 = &DAT_01893010;
      local_30[0] = 0x8000000;
      goto LAB_0138e73c;
    }
    if (uVar18 == (2 << uVar13 | 0x20000000U)) goto LAB_0138e698;
    if (*(uint *)(iVar12 + 0x280) <
        iVar14 + puVar20[0x25] * 8 + puVar20[3] * 0xc + puVar20[0x29] + puVar20[0x1a] +
        (puVar20[0x22] + puVar20[0x1f] + puVar20[0xe] + puVar20[0x11] + puVar20[0x15] +
         puVar20[0x18] + puVar20[0x26]) * 4 + (4 << uVar13) + 0x14U) {
      if (((*(byte *)(iVar12 + 0x30) & 1) != 0) && (*(uint *)(iVar12 + 0x34) <= (uint)puVar20[0x1b])
         ) {
        if ((*(byte *)(iVar12 + 0x38) & 1) == 0) goto LAB_0138e6d0;
        iVar17 = 0;
        if (puVar20[0x2c] == 1) {
          uVar13 = puVar20[0x2d];
          uVar16 = puVar20[0x2e];
          iVar17 = uVar13 - uVar16;
          if (uVar13 < uVar16 || iVar17 == 0) {
            iVar17 = uVar16 - uVar13;
          }
        }
        lVar4 = (ulonglong)(uint)puVar20[0x25] * (ulonglong)*(uint *)(iVar12 + 0x3c);
        uVar13 = (uint)lVar4;
        if ((int)((ulonglong)lVar4 >> 0x20) != 0) {
          uVar13 = 0xffffffff;
        }
        if ((uint)(iVar17 + puVar20[0x1c]) < uVar13) goto LAB_0138e6d0;
      }
      FUN_0138e168(param_1);
    }
    uVar22 = FUN_0138f9cc(param_1);
    if ((uVar22 & 1) != 0) {
LAB_0138e6d0:
      DataMemoryBarrier(0xb);
      do {
        iVar12 = *piVar7;
        bVar3 = (bool)hasExclusiveAccess(piVar7);
      } while (!bVar3);
      *piVar7 = iVar12 + -1;
      if (iVar12 == 1) {
        DataMemoryBarrier(0xb);
        FUN_0143daec(piVar7,iVar14);
      }
                    /* WARNING: Subroutine does not return */
      FUN_00fb74f8("adding one state after cache clear must work",0x2c,local_30,&DAT_01893020,
                   &DAT_01892f50);
    }
    if (iVar14 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa4a4(0,0,&DAT_01894308);
    }
    bVar2 = *(byte *)(piVar7 + 2);
    uVar13 = *(uint *)(iVar12 + 0x27c) & 0x1f;
    iVar8 = puVar20[0x1f];
    iVar17 = 1 << uVar13;
    if ((uint)(puVar20[0x1d] - iVar8) < (uint)(1 << uVar13)) {
      FUN_013c4434(puVar20 + 0x1d,iVar8,iVar17,4,4);
      iVar8 = puVar20[0x1f];
    }
    uVar18 = (uint)(uVar22 >> 0x20) | uVar18 & 0x10000000 | (bVar2 & 1) << 0x1b;
    iVar5 = puVar20[0x1e];
    do {
      *(undefined4 *)(iVar5 + iVar8 * 4) = 0x80000000;
      iVar8 = iVar8 + 1;
      iVar17 = iVar17 + -1;
    } while (iVar17 != 0);
    puVar20[0x1f] = iVar8;
    iVar17 = thunk_FUN_016dd50a(iVar12 + 600,"",0x20);
    uVar13 = 0;
    if (iVar17 != 0) {
      uVar13 = uVar18;
    }
    if (iVar17 != 0 && uVar13 != 0x80000000) {
      uVar13 = *(uint *)(iVar12 + 0x27c) & 0x1f;
      local_30[0] = 1 << uVar13;
      if (0x1a < uVar13) {
        puVar10 = &DAT_01893000;
LAB_0138e798:
        local_30[1] = 0;
                    /* WARNING: Subroutine does not return */
        FUN_00fb74f8(&DAT_00418ec6,0x2b,local_30,&DAT_01893030,puVar10);
      }
      if (uVar18 != (local_30[0] | 0x40000000)) {
        if (uVar13 == 0x1a) {
          puVar10 = &DAT_01893010;
          local_30[0] = 0x8000000;
          goto LAB_0138e798;
        }
        uVar13 = 2 << uVar13 | 0x20000000;
        if (uVar18 != uVar13) {
          uVar16 = 0;
          while( true ) {
            uVar9 = uVar16;
            if (uVar16 < 0x101) {
              uVar9 = 0x100;
            }
            do {
              uVar21 = uVar16;
              if (uVar9 == uVar21) goto LAB_0138e4f0;
              puVar11 = (uint *)(iVar12 + 600 + (uVar21 >> 3 & 0xfffffff0));
              local_50[3] = puVar11[3];
              local_50[0] = *puVar11;
              local_50[1] = puVar11[1];
              local_50[2] = puVar11[2];
              local_34 = 0;
              uVar16 = uVar21 + 1;
              local_38 = 0;
              local_3c = 0;
              local_40 = 0;
            } while ((*(uint *)((int)local_50 + ((uVar21 & 0x60) >> 3)) >> (uVar21 & 0x1f) & 1) == 0
                    );
            if (0xff < uVar21) break;
            FUN_0138fac8(iVar12,puVar20,uVar18,uVar21 << 8,uVar13);
          }
        }
      }
    }
LAB_0138e4f0:
    puVar20[0x1a] = puVar20[0x1a] + iVar14;
    do {
      iVar12 = *piVar7;
      bVar3 = (bool)hasExclusiveAccess(piVar7);
    } while (!bVar3);
    *piVar7 = iVar12 + 1;
    if (iVar12 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xfdee,0x138e7c4);
      (*pcVar1)();
    }
    iVar12 = puVar20[0x25];
    if (iVar12 == puVar20[0x23]) {
      FUN_013c3fcc();
    }
    puVar6 = (undefined4 *)(puVar20[0x24] + iVar12 * 8);
    *puVar6 = piVar7;
    puVar6[1] = iVar14;
    puVar20[0x25] = iVar12 + 1;
    FUN_013d1914(puVar20,piVar7,iVar14,uVar18);
    if (puVar20[8] == 1) {
      piVar7 = (int *)puVar20[10];
      DataMemoryBarrier(0xb);
      do {
        iVar12 = *piVar7;
        bVar3 = (bool)hasExclusiveAccess(piVar7);
      } while (!bVar3);
      *piVar7 = iVar12 + -1;
      if (iVar12 == 1) {
        DataMemoryBarrier(0xb);
        FUN_0143daec(puVar20[10],puVar20[0xb]);
      }
    }
    puVar20[8] = 2;
    puVar20[9] = uVar18;
  }
  return;
}


// FUN_0159ccd8 @ 0159ccd8 size=1532 calls_out=3 calls_in=0
// strings: Platform broken; got NULL as siginfo to signal handler. Aborting

void FUN_0159ccd8(uint param_1,int param_2,undefined4 param_3)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  code *pcVar9;
  int *piVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  int *piVar18;
  int iVar19;
  uint uVar20;
  uint uVar21;
  int iVar22;
  bool bVar23;
  
  if ((DAT_018dd9f0 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa444(&DAT_018a9fc0);
  }
  DataMemoryBarrier(0xb);
  piVar1 = &DAT_018dda0c + (DAT_018dda20 & 1);
  do {
    iVar3 = *piVar1;
    bVar23 = (bool)hasExclusiveAccess(piVar1);
  } while (!bVar23);
  *piVar1 = iVar3 + 1;
  piVar10 = DAT_018dda1c;
  DataMemoryBarrier(0xb);
  if (-1 < iVar3) {
    DataMemoryBarrier(0xb);
    DataMemoryBarrier(0xb);
    piVar18 = &DAT_018dd9f4 + (DAT_018dda08 & 1);
    do {
      iVar3 = *piVar18;
      bVar23 = (bool)hasExclusiveAccess(piVar18);
    } while (!bVar23);
    *piVar18 = iVar3 + 1;
    DataMemoryBarrier(0xb);
    if (-1 < iVar3) {
      DataMemoryBarrier(0xb);
      if (DAT_018dda04[3] != 0) {
        uVar13 = DAT_018dda04[4] ^ 0x70736575;
        uVar7 = DAT_018dda04[7] ^ 0x646f7261;
        uVar4 = DAT_018dda04[6] ^ 0x6e646f6d;
        uVar14 = uVar4 + uVar13;
        uVar12 = (uVar4 << 0xd | uVar7 >> 0x13) ^ uVar14;
        uVar15 = uVar7 + (DAT_018dda04[5] ^ 0x736f6d65U) + (uint)CARRY4(uVar4,uVar13);
        uVar13 = (uVar7 << 0xd | uVar4 >> 0x13) ^ uVar15;
        uVar6 = DAT_018dda04[7] ^ 0x70656462;
        uVar11 = DAT_018dda04[6] ^ param_1 ^ 0x79746573;
        uVar4 = DAT_018dda04[4] ^ 0x6e657261;
        uVar8 = uVar11 + uVar4;
        uVar4 = uVar6 + (DAT_018dda04[5] ^ 0x6c796765U) + (uint)CARRY4(uVar11,uVar4);
        uVar7 = uVar13 + uVar4 + (uint)CARRY4(uVar12,uVar8);
        uVar4 = (uVar6 << 0x10 | uVar11 >> 0x10) ^ uVar4;
        uVar6 = (uVar11 << 0x10 | uVar6 >> 0x10) ^ uVar8;
        uVar17 = uVar7 ^ (uVar13 << 0x11 | uVar12 >> 0xf);
        uVar16 = uVar4 + uVar14 + (uint)CARRY4(uVar6,uVar15);
        uVar11 = uVar12 + uVar8 ^ (uVar12 << 0x11 | uVar13 >> 0xf);
        uVar13 = uVar6 + uVar15 ^ param_1;
        uVar20 = uVar13 + uVar11;
        uVar21 = (uVar16 ^ 0x4000000) + uVar17 + (uint)CARRY4(uVar13,uVar11);
        uVar14 = uVar21 ^ (uVar17 << 0xd | uVar11 >> 0x13);
        uVar13 = uVar20 ^ (uVar11 << 0xd | uVar17 >> 0x13);
        uVar16 = (uVar4 << 0x15 | uVar6 >> 0xb) ^ uVar16;
        uVar6 = (uVar6 << 0x15 | uVar4 >> 0xb) ^ uVar6 + uVar15;
        uVar7 = uVar7 ^ 0xff;
        uVar11 = uVar7 + uVar6;
        uVar4 = uVar12 + uVar8 + uVar16 + (uint)CARRY4(uVar7,uVar6);
        uVar17 = uVar14 + uVar4 + (uint)CARRY4(uVar13,uVar11);
        uVar8 = uVar17 ^ (uVar14 << 0x11 | uVar13 >> 0xf);
        uVar12 = uVar13 + uVar11 ^ (uVar13 << 0x11 | uVar14 >> 0xf);
        uVar4 = uVar4 ^ (uVar16 << 0x10 | uVar6 >> 0x10);
        uVar7 = uVar11 ^ (uVar6 << 0x10 | uVar16 >> 0x10);
        uVar14 = uVar7 + uVar21;
        uVar15 = uVar4 + uVar20 + (uint)CARRY4(uVar7,uVar21);
        uVar21 = uVar8 + uVar15 + (uint)CARRY4(uVar12,uVar14);
        uVar6 = (uVar8 << 0xd | uVar12 >> 0x13) ^ uVar21;
        uVar16 = (uVar12 << 0xd | uVar8 >> 0x13) ^ uVar12 + uVar14;
        uVar15 = (uVar4 << 0x15 | uVar7 >> 0xb) ^ uVar15;
        uVar4 = (uVar7 << 0x15 | uVar4 >> 0xb) ^ uVar14;
        uVar8 = uVar4 + uVar17;
        uVar11 = uVar15 + uVar13 + uVar11 + (uint)CARRY4(uVar4,uVar17);
        uVar20 = uVar6 + uVar11 + (uint)CARRY4(uVar16,uVar8);
        uVar17 = (uVar6 << 0x11 | uVar16 >> 0xf) ^ uVar20;
        uVar11 = (uVar15 << 0x10 | uVar4 >> 0x10) ^ uVar11;
        uVar4 = (uVar4 << 0x10 | uVar15 >> 0x10) ^ uVar8;
        uVar13 = uVar4 + uVar21;
        uVar12 = uVar11 + uVar12 + uVar14 + (uint)CARRY4(uVar4,uVar21);
        uVar7 = (uVar4 << 0x15 | uVar11 >> 0xb) ^ uVar13;
        uVar14 = (uVar11 << 0x15 | uVar4 >> 0xb) ^ uVar12;
        uVar11 = uVar7 + uVar20;
        uVar4 = (uVar16 << 0x11 | uVar6 >> 0xf) ^ uVar16 + uVar8;
        uVar8 = uVar14 + uVar16 + uVar8 + (uint)CARRY4(uVar7,uVar20);
        uVar6 = (uVar17 << 0xd | uVar4 >> 0x13) ^ uVar17 + uVar12 + (uint)CARRY4(uVar4,uVar13);
        uVar4 = (uVar4 << 0xd | uVar17 >> 0x13) ^ uVar4 + uVar13;
        uVar7 = (uVar4 << 0x11 | uVar6 >> 0xf) ^
                ((uVar11 ^ uVar14 >> 0x10) << 0x15 |
                ((uVar14 << 0x10 | uVar7 >> 0x10) ^ uVar8) >> 0xb) ^
                uVar6 + uVar8 + (uint)CARRY4(uVar4,uVar11) ^ uVar4 + uVar11;
        iVar3 = *DAT_018dda04;
        iVar22 = 0;
        uVar4 = uVar7 >> 0x19;
        while( true ) {
          uVar7 = DAT_018dda04[1] & uVar7;
          uVar13 = *(uint *)(iVar3 + uVar7);
          uVar6 = uVar13 ^ uVar4 * 0x1010101;
          uVar6 = ~uVar6 & 0x80808080 & uVar6 + 0xfefefeff;
          while (uVar6 != 0) {
            uVar8 = uVar6 >> 8;
            uVar11 = uVar6 >> 0x10;
            uVar14 = uVar6 >> 0x18;
            uVar12 = uVar6 << 0x18;
            uVar6 = uVar6 - 1 & uVar6;
            uVar8 = uVar7 + ((uint)LZCOUNT(uVar12 | (uVar8 & 0xff) << 0x10 | (uVar11 & 0xff) << 8 |
                                           uVar14) >> 3) & DAT_018dda04[1];
            if (param_1 == *(uint *)(iVar3 + -0xa0 + uVar8 * -0xa0)) {
              uVar4 = iVar3 + uVar8 * -0xa0;
              pcVar9 = *(code **)(uVar4 - 0x98);
              if (&DAT_00000001 < pcVar9) {
                if ((*(byte *)(uVar4 - 0x14) & 4) == 0) {
                  (*pcVar9)(param_1);
                }
                else {
                  (*pcVar9)(param_1,param_2,param_3);
                }
              }
              if (param_2 == 0) {
                FUN_016e034e(2,"Platform broken, got NULL as siginfo to signal handler. Aborting",
                             0x40);
                    /* WARNING: Subroutine does not return */
                FUN_016d2c24();
              }
              iVar22 = *(int *)(uVar4 - 0xc);
              iVar3 = 0;
              bVar23 = iVar22 != 0;
              if (bVar23) {
                iVar19 = *(int *)(uVar4 - 4);
                uVar4 = *(uint *)(uVar4 - 8);
              }
              else {
                iVar19 = 0;
              }
              goto LAB_0159d19c;
            }
          }
          if ((uVar13 & 0x80808080 & uVar13 << 1) != 0) break;
          iVar22 = iVar22 + 4;
          uVar7 = uVar7 + iVar22;
        }
      }
      if (((*piVar10 != 0) && (piVar10[1] == param_1)) &&
         (pcVar9 = (code *)piVar10[2], &DAT_00000001 < pcVar9)) {
        if ((*(byte *)(piVar10 + 0x23) & 4) == 0) {
          (*pcVar9)(param_1);
        }
        else {
          (*pcVar9)(param_1,param_2,param_3);
        }
      }
LAB_0159d254:
      DataMemoryBarrier(0xb);
      do {
        bVar23 = (bool)hasExclusiveAccess(piVar18);
      } while (!bVar23);
      *piVar18 = *piVar18 + -1;
      DataMemoryBarrier(0xb);
      do {
        bVar23 = (bool)hasExclusiveAccess(piVar1);
      } while (!bVar23);
      *piVar1 = *piVar1 + -1;
      DataMemoryBarrier(0xb);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_016d2c24();
LAB_0159d19c:
  if (iVar19 == 0) goto LAB_0159d254;
  if (!bVar23) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa444(&DAT_018a9ff4);
  }
  if (iVar3 == 0) {
    uVar7 = 0;
    iVar3 = iVar22;
    for (; uVar4 != 0; uVar4 = uVar4 - 1) {
      iVar3 = *(int *)(iVar3 + 0x110);
    }
    iVar22 = 0;
    iVar2 = iVar3;
    if (*(short *)(iVar3 + 0x10e) == 0) goto LAB_0159d1fc;
  }
  else {
    uVar7 = uVar4;
    iVar2 = iVar3;
    if (*(ushort *)(iVar3 + 0x10e) <= uVar4) {
LAB_0159d1fc:
      do {
        iVar2 = *(int *)(iVar3 + 0x108);
        if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00faa444(&DAT_018aa004);
        }
        uVar7 = (uint)*(ushort *)(iVar3 + 0x10c);
        iVar22 = iVar22 + 1;
        iVar3 = iVar2;
      } while (*(ushort *)(iVar2 + 0x10e) <= uVar7);
    }
  }
  if (iVar22 == 0) {
    uVar4 = uVar7 + 1;
    iVar3 = iVar2;
  }
  else {
    piVar10 = (int *)(iVar2 + uVar7 * 4 + 0x114);
    do {
      iVar3 = *piVar10;
      iVar22 = iVar22 + -1;
      piVar10 = (int *)(iVar3 + 0x110);
    } while (iVar22 != 0);
    uVar4 = 0;
  }
  iVar2 = iVar2 + uVar7 * 8;
  iVar19 = iVar19 + -1;
  bVar23 = true;
  iVar22 = 0;
  iVar5 = *(int *)(iVar2 + 0xb4);
  (**(code **)(iVar5 + 0x14))
            (*(int *)(iVar2 + 0xb0) + (*(int *)(iVar5 + 8) - 1U & 0xfffffff8) + 8,param_2);
  goto LAB_0159d19c;
}


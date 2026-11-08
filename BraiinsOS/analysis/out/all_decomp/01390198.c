// FUN_01390198 @ 01390198 size=2060 calls_out=15 calls_in=7
// strings: state saver does not have saved state ID

longlong FUN_01390198(int *param_1,uint param_2,undefined4 param_3)

{
  code *pcVar1;
  byte bVar2;
  bool bVar3;
  longlong lVar4;
  uint uVar5;
  int iVar6;
  int *piVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  int *piVar12;
  uint *puVar13;
  undefined *puVar14;
  int iVar15;
  undefined4 *puVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  int iVar20;
  uint uVar21;
  int *piVar22;
  int iVar23;
  undefined8 uVar24;
  ulonglong uVar25;
  int local_88;
  uint local_68;
  uint local_60 [4];
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  int local_40;
  int local_3c;
  int local_38;
  uint local_30;
  int local_2c;
  int local_28;
  
  iVar23 = *param_1;
  piVar22 = (int *)param_1[1];
  uVar5 = *(uint *)(iVar23 + 0x27c);
  local_30 = piVar22[0x29];
  local_2c = piVar22[0x2a];
  local_28 = piVar22[0x2b];
  piVar22[0x2a] = 1;
  uVar5 = uVar5 & 0x1f;
  piVar22[0x29] = 0;
  piVar22[0x2b] = 0;
  uVar18 = param_2 & 0x7ffffff;
  uVar11 = uVar18 >> uVar5;
  if ((uint)piVar22[0x25] <= uVar18 >> uVar5) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa4a4(uVar11,piVar22[0x25],&DAT_01892ff0);
  }
  puVar16 = (undefined4 *)(piVar22[0x24] + uVar11 * 8);
  FUN_013c62ac(&local_40,*(undefined4 *)(iVar23 + 0x278),
               *(byte *)(iVar23 + 0x50) == 2 | *(byte *)(iVar23 + 0x50) & 1,piVar22 + 0xc,
               piVar22 + 0x26,*puVar16,puVar16[1],param_3,&local_30);
  iVar6 = piVar22[3];
  uVar17 = piVar22[0x25];
  uVar21 = *(uint *)(iVar23 + 0x280);
  uVar11 = *(uint *)(iVar23 + 0x27c) & 0x1f;
  uVar5 = local_38 + uVar17 * 8 + iVar6 * 0xc + piVar22[0x29] + piVar22[0x1a] +
          (piVar22[0x22] + piVar22[0x1f] + piVar22[0xe] + piVar22[0x11] + piVar22[0x15] +
           piVar22[0x18] + piVar22[0x26]) * 4 + (4 << uVar11) + 0x14;
  iVar15 = local_38;
  if (uVar21 < uVar5) {
    if (uVar17 <= uVar18 >> uVar11) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa4a4(uVar18 >> uVar11,uVar17,&DAT_01893ae0);
    }
    piVar12 = (int *)(piVar22[0x24] + (uVar18 >> uVar11) * 8);
    piVar7 = (int *)*piVar12;
    do {
      iVar15 = *piVar7;
      bVar3 = (bool)hasExclusiveAccess(piVar7);
    } while (!bVar3);
    *piVar7 = iVar15 + 1;
    if (iVar15 < 0) goto LAB_013909ac;
    iVar15 = *piVar12;
    iVar20 = piVar12[1];
    if (piVar22[8] == 1) {
      piVar7 = (int *)piVar22[10];
      DataMemoryBarrier(0xb);
      do {
        iVar6 = *piVar7;
        bVar3 = (bool)hasExclusiveAccess(piVar7);
      } while (!bVar3);
      *piVar7 = iVar6 + -1;
      if (iVar6 == 1) {
        DataMemoryBarrier(0xb);
        FUN_0143daec(piVar22[10],piVar22[0xb]);
      }
    }
    piVar22[8] = 1;
    iVar6 = piVar22[3];
    piVar22[9] = param_2;
    piVar22[10] = iVar15;
    piVar22[0xb] = iVar20;
    iVar15 = local_38;
  }
  if (iVar6 != 0) {
    uVar18 = FUN_013c34ec(piVar22[4],piVar22[5],piVar22[6],piVar22[7],local_3c,iVar15);
    uVar11 = uVar18 >> 0x19;
    iVar6 = *piVar22;
    uVar17 = piVar22[1];
    local_88 = 0;
    while( true ) {
      uVar18 = uVar17 & uVar18;
      uVar19 = *(uint *)(iVar6 + uVar18);
      uVar8 = uVar19 ^ uVar11 * 0x1010101;
      for (uVar8 = ~uVar8 & 0x80808080 & uVar8 + 0xfefefeff; uVar8 != 0; uVar8 = uVar8 - 1 & uVar8)
      {
        uVar9 = uVar18 + ((uint)LZCOUNT(uVar8 << 0x18 | (uVar8 >> 8 & 0xff) << 0x10 |
                                        (uVar8 >> 0x10 & 0xff) << 8 | uVar8 >> 0x18) >> 3) & uVar17;
        piVar7 = (int *)(iVar6 + -0xc + uVar9 * -0xc);
        if ((iVar15 == piVar7[1]) &&
           (iVar20 = thunk_FUN_016dd50a(local_3c,*piVar7 + 8,iVar15), iVar20 == 0)) {
          iVar15 = piVar22[0x29];
          iVar20 = piVar22[0x2a];
          param_1 = *(int **)(iVar6 + uVar9 * -0xc + -4);
          piVar22[0x29] = local_40;
          piVar22[0x2a] = local_3c;
          piVar22[0x2b] = 0;
          if (iVar15 != 0) {
            thunk_FUN_016d3fb4(iVar20);
          }
          goto LAB_01390738;
        }
      }
      if ((uVar19 & 0x80808080 & uVar19 << 1) != 0) break;
      local_88 = local_88 + 4;
      uVar18 = uVar18 + local_88;
    }
  }
  uVar24 = FUN_011e1508(local_3c,iVar15);
  iVar15 = (int)((ulonglong)uVar24 >> 0x20);
  piVar7 = (int *)uVar24;
  if (*(uint *)(iVar23 + 0x280) <
      iVar15 + piVar22[0x25] * 8 + piVar22[3] * 0xc + piVar22[0x29] + piVar22[0x1a] +
      (piVar22[0x22] + piVar22[0x1f] + piVar22[0xe] + piVar22[0x11] + piVar22[0x15] + piVar22[0x18]
      + piVar22[0x26]) * 4 + (4 << (*(uint *)(iVar23 + 0x27c) & 0x1f)) + 0x14U) {
    if (((*(byte *)(iVar23 + 0x30) & 1) == 0) || ((uint)piVar22[0x1b] < *(uint *)(iVar23 + 0x34))) {
LAB_01390594:
      FUN_0138e168(param_1);
      goto LAB_0139059c;
    }
    if ((*(byte *)(iVar23 + 0x38) & 1) != 0) {
      iVar6 = 0;
      if (piVar22[0x2c] == 1) {
        uVar11 = piVar22[0x2d];
        uVar18 = piVar22[0x2e];
        iVar6 = uVar11 - uVar18;
        if (uVar11 < uVar18 || iVar6 == 0) {
          iVar6 = uVar18 - uVar11;
        }
      }
      lVar4 = (ulonglong)(uint)piVar22[0x25] * (ulonglong)*(uint *)(iVar23 + 0x3c);
      uVar11 = (uint)lVar4;
      if ((int)((ulonglong)lVar4 >> 0x20) != 0) {
        uVar11 = 0xffffffff;
      }
      if (uVar11 <= (uint)(iVar6 + piVar22[0x1c])) goto LAB_01390594;
    }
  }
  else {
LAB_0139059c:
    uVar25 = FUN_0138f9cc(param_1);
    if ((uVar25 & 1) == 0) {
      if (iVar15 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa4a4(0,0,&DAT_01894308);
      }
      bVar2 = *(byte *)(piVar7 + 2);
      iVar20 = piVar22[0x1f];
      uVar11 = *(uint *)(iVar23 + 0x27c) & 0x1f;
      iVar6 = 1 << uVar11;
      if ((uint)(piVar22[0x1d] - iVar20) < (uint)(1 << uVar11)) {
        FUN_013c4434(piVar22 + 0x1d,iVar20,iVar6,4,4);
        iVar20 = piVar22[0x1f];
      }
      param_1 = (int *)((uint)(uVar25 >> 0x20) | (bVar2 & 1) << 0x1b);
      iVar10 = piVar22[0x1e];
      do {
        *(undefined4 *)(iVar10 + iVar20 * 4) = 0x80000000;
        iVar20 = iVar20 + 1;
        iVar6 = iVar6 + -1;
      } while (iVar6 != 0);
      piVar22[0x1f] = iVar20;
      iVar6 = thunk_FUN_016dd50a(iVar23 + 600,"",0x20);
      if (iVar6 != 0 && param_1 != (int *)&DAT_80000000) {
        uVar18 = *(uint *)(iVar23 + 0x27c) & 0x1f;
        uVar11 = 1 << uVar18;
        if (0x1a < uVar18) {
          puVar14 = &DAT_01893000;
LAB_01390980:
          local_2c = 0;
          local_30 = uVar11;
                    /* WARNING: Subroutine does not return */
          FUN_00fb74f8(&DAT_00418ec6,0x2b,&local_30,&DAT_01893030,puVar14);
        }
        if (param_1 != (int *)(uVar11 | 0x40000000)) {
          if (uVar18 == 0x1a) {
            puVar14 = &DAT_01893010;
            uVar11 = 0x8000000;
            goto LAB_01390980;
          }
          piVar12 = (int *)(2 << uVar18 | 0x20000000);
          if (param_1 != piVar12) {
            iVar6 = 0;
            for (uVar11 = 0; uVar11 != 0x100; uVar11 = uVar11 + 1) {
              puVar13 = (uint *)(iVar23 + 600 + (uVar11 >> 3 & 0xfffffff0));
              local_60[3] = puVar13[3];
              local_60[0] = *puVar13;
              local_60[1] = puVar13[1];
              local_60[2] = puVar13[2];
              local_44 = 0;
              local_48 = 0;
              local_4c = 0;
              local_50 = 0;
              if ((*(uint *)((int)local_60 + ((uVar11 & 0x60) >> 3)) >> (uVar11 & 0x1f) & 1) != 0) {
                if (0xff < uVar11) break;
                FUN_0138fac8(iVar23,piVar22,param_1,iVar6,piVar12);
              }
              iVar6 = iVar6 + 0x100;
            }
          }
        }
      }
      piVar22[0x1a] = piVar22[0x1a] + iVar15;
      do {
        iVar6 = *piVar7;
        bVar3 = (bool)hasExclusiveAccess(piVar7);
      } while (!bVar3);
      *piVar7 = iVar6 + 1;
      if (iVar6 < 0) {
LAB_013909ac:
                    /* WARNING: Does not return */
        pcVar1 = (code *)software_udf(0xfdee,0x13909ac);
        (*pcVar1)();
      }
      iVar6 = piVar22[0x25];
      if (iVar6 == piVar22[0x23]) {
        FUN_013c3fcc();
      }
      *(undefined8 *)(piVar22[0x24] + iVar6 * 8) = uVar24;
      bVar3 = false;
      piVar22[0x25] = iVar6 + 1;
      FUN_013d1914(piVar22,piVar7,iVar15,param_1);
      goto LAB_013906f4;
    }
  }
  DataMemoryBarrier(0xb);
  do {
    iVar6 = *piVar7;
    bVar3 = (bool)hasExclusiveAccess(piVar7);
  } while (!bVar3);
  *piVar7 = iVar6 + -1;
  bVar3 = true;
  if (iVar6 == 1) {
    DataMemoryBarrier(0xb);
    FUN_0143daec(piVar7,iVar15);
  }
LAB_013906f4:
  iVar15 = piVar22[0x29];
  iVar6 = piVar22[0x2a];
  piVar22[0x29] = local_40;
  piVar22[0x2a] = local_3c;
  piVar22[0x2b] = 0;
  if (iVar15 != 0) {
    thunk_FUN_016d3fb4(iVar6);
  }
  if (bVar3) {
    return CONCAT44(param_1,1);
  }
LAB_01390738:
  local_68 = param_2;
  if (uVar21 < uVar5) {
    local_68 = piVar22[9];
    iVar6 = piVar22[8];
    piVar7 = (int *)piVar22[10];
    iVar15 = piVar22[0xb];
    piVar22[8] = 0;
    if (iVar6 == 1) {
      DataMemoryBarrier(0xb);
      do {
        iVar6 = *piVar7;
        bVar3 = (bool)hasExclusiveAccess(piVar7);
      } while (!bVar3);
      *piVar7 = iVar6 + -1;
      if (iVar6 == 1) {
        DataMemoryBarrier(0xb);
        FUN_0143daec(piVar7,iVar15);
      }
    }
    else if (iVar6 != 2) {
                    /* WARNING: Subroutine does not return */
      FUN_00fb74b8("state saver does not have saved state ID",0x28,&DAT_01892f80);
    }
  }
  FUN_0138fac8(iVar23,piVar22,local_68,param_3,param_1);
  return ZEXT48(param_1) << 0x20;
}


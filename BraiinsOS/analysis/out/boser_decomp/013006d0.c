// FUN_013006d0 @ 013006d0 size=2908 calls_out=8 calls_in=2
// strings: assertion failed: d.mant > 0 | assertion failed: d.minus > 0 | assertion failed: d.plus > 0 | assertion failed: d.mant.checked_add(d.plus).is_some() | assertion failed: d.mant.checked_sub(d.minus).is_some() | assertion failed: other > 0

/* WARNING: Removing unreachable block (ram,0x01300fb8) */
/* WARNING: Type propagation algorithm not settling */

void FUN_013006d0(undefined4 *param_1,uint *param_2,undefined1 *param_3,uint param_4,short param_5)

{
  int *piVar1;
  bool bVar2;
  longlong lVar3;
  char cVar4;
  int iVar5;
  uint *puVar6;
  int iVar7;
  uint *puVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  bool bVar15;
  undefined1 uVar16;
  uint uVar17;
  int iVar18;
  uint uVar19;
  uint uVar20;
  uint *puVar21;
  short sVar22;
  uint uVar23;
  byte local_38c;
  undefined4 *******local_374;
  uint local_370 [2];
  undefined1 auStack_368 [152];
  uint local_2d0;
  uint auStack_2cc [41];
  uint local_228;
  uint auStack_224 [41];
  uint local_180;
  uint auStack_17c [41];
  uint local_d8;
  uint auStack_d4 [44];
  
  uVar20 = *param_2;
  uVar14 = param_2[1];
  if (uVar20 == 0 && uVar14 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb0ec("assertion failed: d.mant > 0",0x1c,&DAT_01ce4870);
  }
  uVar10 = param_2[2];
  uVar23 = param_2[3];
  if (uVar10 == 0 && uVar23 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb0ec("assertion failed: d.minus > 0",0x1d,&DAT_01ce4880);
  }
  uVar17 = param_2[5];
  if (param_2[4] == 0 && uVar17 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb0ec("assertion failed: d.plus > 0",0x1c,&DAT_01ce4890);
  }
  if (CARRY4(uVar14,uVar17) || CARRY4(uVar14 + uVar17,(uint)CARRY4(uVar20,param_2[4]))) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb0ec("assertion failed: d.mant.checked_add(d.plus).is_some()",0x36,&DAT_01ce4900);
  }
  if (uVar14 <= uVar23 && (uint)(uVar10 <= uVar20) <= uVar14 - uVar23) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb0ec("assertion failed: d.mant.checked_sub(d.minus).is_some()",0x37,&DAT_01ce48f0,
                 uVar14 - (uVar23 + (uVar10 > uVar20)));
  }
  local_2d0 = 2;
  if (uVar14 == 0) {
    local_2d0 = 1;
  }
  uVar10 = param_2[6];
  iVar12 = (int)(short)uVar10;
  local_370[0] = uVar20;
  local_370[1] = uVar14;
  FUN_01bed93e(auStack_368,0,0x98);
  FUN_01bed93e((uint)(auStack_2cc + 1) | 4,0,0x9c);
  iVar7 = uVar14 - (uVar20 == 0);
  iVar5 = LZCOUNT(uVar20 - 1) + 0x20;
  if (iVar7 != 0) {
    iVar5 = LZCOUNT(iVar7);
  }
  lVar3 = (longlong)(iVar12 - iVar5) * 0x4d104d42 + 0x1344135080;
  local_228 = 1;
  auStack_2cc[1] = 1;
  sVar22 = (short)((ulonglong)lVar3 >> 0x20);
  if (iVar12 < 0) {
    iVar12 = (int)(short)-(short)uVar10;
    puVar6 = auStack_2cc + 1;
  }
  else {
    puVar6 = local_370;
  }
  FUN_012ff7d0(puVar6,iVar12);
  if (sVar22 < 0) {
    uVar14 = -(int)sVar22 & 0xffff;
    puVar6 = local_370;
  }
  else {
    uVar14 = (uint)((ulonglong)lVar3 >> 0x20) & 0x7fff;
    puVar6 = auStack_2cc + 1;
  }
  FUN_012ff94c(puVar6,uVar14);
  local_374 = &local_374;
  FUN_01bed4e2(auStack_d4 + 1,auStack_2cc + 1,0xa4);
  uVar14 = param_4;
  do {
    uVar20 = auStack_d4[0x29];
    if (0x28 < auStack_d4[0x29]) goto LAB_013010cc;
    if (auStack_d4[0x29] != 0) {
      iVar7 = 0;
      iVar5 = auStack_d4[0x29] * -4;
      do {
        iVar18 = *(int *)((int)auStack_d4 - iVar5);
        iVar12 = FUN_01bf0ff0(iVar18,iVar7,&DAT_3b9aca00,0);
        iVar7 = iVar18 + iVar12 * -1000000000;
        *(int *)((int)auStack_d4 - iVar5) = iVar12;
        iVar5 = iVar5 + 4;
      } while (iVar5 != 0);
    }
    uVar14 = uVar14 - 9;
  } while (9 < uVar14);
  iVar5 = *(int *)(&DAT_00425a60 + uVar14 * 4) * 2;
  if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb0ec("assertion failed: other > 0",0x1b,&DAT_01ce4690);
  }
  uVar20 = auStack_d4[0x29];
  if (0x28 < auStack_d4[0x29]) {
LAB_013010cc:
                    /* WARNING: Subroutine does not return */
    FUN_012faff4(0,uVar20,0x28,&DAT_01ce4690);
  }
  uVar14 = 0;
  if (auStack_d4[0x29] != 0) {
    iVar7 = auStack_d4[0x29] * -4;
    do {
      iVar18 = *(int *)((int)auStack_d4 - iVar7);
      iVar12 = FUN_01bf0ff0(iVar18,uVar14,iVar5,0);
      uVar14 = iVar18 - iVar12 * iVar5;
      *(int *)((int)auStack_d4 - iVar7) = iVar12;
      iVar7 = iVar7 + 4;
    } while (iVar7 != 0);
    uVar14 = auStack_d4[0x29];
  }
  uVar10 = local_228;
  uVar20 = local_2d0;
  puVar6 = auStack_2cc + 1;
  if (uVar14 < local_2d0) {
    uVar14 = local_2d0;
  }
  if (0x28 < uVar14) {
LAB_013010e4:
                    /* WARNING: Subroutine does not return */
    FUN_012faff4(0,uVar14,0x28,&DAT_01ce4690);
  }
  if (uVar14 == 0) {
    uVar14 = 0;
  }
  else {
    uVar23 = uVar14;
    puVar8 = auStack_d4 + 1;
    puVar21 = local_370;
    bVar15 = false;
    do {
      uVar19 = *puVar8;
      uVar17 = *puVar21;
      bVar2 = CARRY4(uVar17 + uVar19,(uint)bVar15);
      *puVar8 = uVar17 + uVar19 + (uint)bVar15;
      uVar23 = uVar23 - 1;
      puVar8 = puVar8 + 1;
      puVar21 = puVar21 + 1;
      bVar15 = CARRY4(uVar17,uVar19) || bVar2;
    } while (uVar23 != 0);
    if (CARRY4(uVar17,uVar19) || bVar2) {
      if (uVar14 == 0x28) goto LAB_013011f4;
      auStack_d4[uVar14 + 1] = 1;
      uVar14 = uVar14 + 1;
    }
  }
  auStack_d4[0x29] = uVar14;
  if (uVar14 < local_228) {
    uVar14 = local_228;
  }
  if (0x28 < uVar14) goto LAB_013010e4;
  iVar5 = uVar14 << 2;
  do {
    if (iVar5 == 0) {
      if (auStack_2cc + 1 != (uint *)((int)puVar6 + iVar5)) goto LAB_013009e0;
      goto LAB_013009cc;
    }
    puVar21 = (uint *)((int)auStack_d4 + iVar5);
    puVar8 = (uint *)((int)auStack_2cc + iVar5);
    iVar5 = iVar5 + -4;
  } while (*puVar21 == *puVar8);
  if (*puVar21 < *puVar8) {
LAB_013009e0:
    if (local_2d0 == 0) {
      uVar20 = 0;
    }
    else {
      iVar5 = local_2d0 << 2;
      uVar14 = 0;
      puVar8 = local_370;
      do {
        iVar5 = iVar5 + -4;
        lVar3 = (ulonglong)*puVar8 * 10 + (ulonglong)uVar14;
        uVar14 = (uint)((ulonglong)lVar3 >> 0x20);
        *puVar8 = (uint)lVar3;
        puVar8 = puVar8 + 1;
      } while (iVar5 != 0);
      if (uVar14 != 0) {
        if (uVar20 == 0x28) goto LAB_013011f4;
        local_370[uVar20] = uVar14;
        uVar20 = uVar20 + 1;
      }
    }
    local_2d0 = uVar20;
  }
  else {
LAB_013009cc:
    sVar22 = sVar22 + 1;
  }
  uVar23 = local_2d0;
  iVar5 = (int)sVar22;
  iVar7 = (int)param_5;
  bVar15 = true;
  if (iVar5 < iVar7) {
    uVar17 = 0;
  }
  else {
    uVar17 = param_4;
    if ((uint)(iVar5 - iVar7) < param_4) {
      uVar17 = (uint)(short)(sVar22 - param_5);
    }
    if (uVar17 == 0) {
      uVar17 = 0;
    }
    else {
      FUN_01bed4e2(auStack_224 + 1,puVar6,0xa4);
      FUN_012ff7d0(auStack_224 + 1,1);
      FUN_01bed4e2(auStack_17c + 1,puVar6,0xa4);
      FUN_012ff7d0(auStack_17c + 1,2);
      FUN_01bed4e2(auStack_d4 + 1,puVar6,0xa4);
      FUN_012ff7d0(auStack_d4 + 1,3);
      uVar19 = auStack_d4[0x29];
      uVar9 = 0;
      do {
        puVar6 = auStack_d4 + 1;
        uVar14 = uVar23;
        if (0x28 < uVar23) goto LAB_013010f8;
        uVar11 = uVar9 + 1;
        iVar12 = 0;
        do {
          if (uVar23 * 4 == iVar12) {
            if (param_4 < uVar17) {
                    /* WARNING: Subroutine does not return */
              FUN_012faff4(uVar9,uVar17,param_4,&DAT_01ce48e0);
            }
            if (uVar17 != uVar9) {
              FUN_01bed93e(param_3 + uVar9,0x30,uVar17 - uVar9);
            }
            *param_1 = param_3;
            param_1[1] = uVar17;
            *(short *)(param_1 + 2) = sVar22;
            return;
          }
          piVar1 = (int *)((int)local_370 + iVar12);
          iVar12 = iVar12 + 4;
        } while (*piVar1 == 0);
        if (uVar23 < uVar19) {
          uVar14 = uVar19;
        }
        if (0x28 < uVar14) goto LAB_013010e4;
        iVar12 = uVar14 << 2;
        do {
          if (iVar12 == 0) {
            local_38c = 0;
            if (puVar6 == (uint *)((int)puVar6 + iVar12)) goto LAB_01300ba0;
            goto LAB_01300bec;
          }
          uVar20 = *(uint *)((int)local_370 + iVar12 + -4);
          puVar8 = (uint *)((int)auStack_d4 + iVar12);
          iVar12 = iVar12 + -4;
        } while (uVar20 == *puVar8);
        local_38c = 0;
        if (*puVar8 <= uVar20) {
LAB_01300ba0:
          puVar8 = local_370;
          uVar20 = uVar14;
          bVar15 = true;
          do {
            uVar23 = *puVar8;
            uVar13 = ~*puVar6;
            bVar2 = CARRY4(uVar23 + uVar13,(uint)bVar15);
            *puVar8 = uVar23 + uVar13 + (uint)bVar15;
            uVar20 = uVar20 - 1;
            puVar8 = puVar8 + 1;
            puVar6 = puVar6 + 1;
            bVar15 = CARRY4(uVar23,uVar13) || bVar2;
          } while (uVar20 != 0);
          if (!CARRY4(uVar23,uVar13) && !bVar2) goto LAB_013011dc;
          local_38c = 8;
          local_2d0 = uVar14;
          uVar23 = uVar14;
        }
LAB_01300bec:
        uVar14 = uVar23;
        if (uVar23 < local_d8) {
          uVar14 = local_d8;
        }
        if (0x28 < uVar14) goto LAB_013010e4;
        puVar6 = auStack_17c + 1;
        iVar12 = uVar14 << 2;
        do {
          if (iVar12 == 0) {
            if (puVar6 != (uint *)((int)puVar6 + iVar12)) goto LAB_01300ca0;
            goto LAB_01300c34;
          }
          uVar20 = *(uint *)((int)local_370 + iVar12 + -4);
          puVar8 = (uint *)((int)auStack_17c + iVar12);
          iVar12 = iVar12 + -4;
        } while (uVar20 == *puVar8);
        if (*puVar8 <= uVar20) {
LAB_01300c34:
          if (uVar14 != 0) {
            puVar8 = local_370;
            uVar20 = uVar14;
            bVar15 = true;
            do {
              uVar13 = *puVar8;
              uVar23 = ~*puVar6;
              bVar2 = CARRY4(uVar13 + uVar23,(uint)bVar15);
              *puVar8 = uVar13 + uVar23 + (uint)bVar15;
              uVar20 = uVar20 - 1;
              puVar8 = puVar8 + 1;
              puVar6 = puVar6 + 1;
              bVar15 = CARRY4(uVar13,uVar23) || bVar2;
            } while (uVar20 != 0);
            if (!CARRY4(uVar13,uVar23) && !bVar2) goto LAB_013011dc;
          }
          local_2d0 = uVar14;
          local_38c = local_38c | 4;
          uVar23 = uVar14;
        }
LAB_01300ca0:
        puVar6 = auStack_224 + 1;
        uVar20 = uVar23;
        if (uVar23 < local_180) {
          uVar20 = local_180;
        }
        if (0x28 < uVar20) goto LAB_013010cc;
        iVar12 = uVar20 << 2;
        do {
          if (iVar12 == 0) {
            if (puVar6 != (uint *)((int)puVar6 + iVar12)) goto LAB_01300d54;
            goto LAB_01300ce8;
          }
          puVar8 = (uint *)((int)auStack_224 + iVar12);
          puVar21 = (uint *)((int)local_374 + iVar12);
          iVar12 = iVar12 + -4;
        } while (*puVar21 == *puVar8);
        if (*puVar8 <= *puVar21) {
LAB_01300ce8:
          if (uVar20 != 0) {
            puVar8 = local_370;
            uVar14 = uVar20;
            bVar15 = true;
            do {
              uVar13 = *puVar8;
              uVar23 = ~*puVar6;
              bVar2 = CARRY4(uVar13 + uVar23,(uint)bVar15);
              *puVar8 = uVar13 + uVar23 + (uint)bVar15;
              uVar14 = uVar14 - 1;
              puVar8 = puVar8 + 1;
              puVar6 = puVar6 + 1;
              bVar15 = CARRY4(uVar13,uVar23) || bVar2;
            } while (uVar14 != 0);
            if (!CARRY4(uVar13,uVar23) && !bVar2) goto LAB_013011dc;
          }
          local_2d0 = uVar20;
          local_38c = local_38c + 2;
          uVar23 = uVar20;
        }
LAB_01300d54:
        uVar14 = uVar23;
        if (uVar23 < uVar10) {
          uVar14 = uVar10;
        }
        if (0x28 < uVar14) goto LAB_013010f8;
        iVar12 = uVar14 << 2;
        do {
          if (iVar12 == 0) {
            if (auStack_2cc + 1 != (uint *)((int)auStack_2cc + iVar12 + 4)) goto LAB_01300e0c;
            goto LAB_01300d9c;
          }
          puVar6 = (uint *)((int)auStack_2cc + iVar12);
          puVar8 = (uint *)((int)local_374 + iVar12);
          iVar12 = iVar12 + -4;
        } while (*puVar8 == *puVar6);
        if (*puVar6 <= *puVar8) {
LAB_01300d9c:
          if (uVar14 != 0) {
            puVar6 = auStack_2cc;
            puVar8 = local_370;
            uVar20 = uVar14;
            bVar15 = true;
            do {
              puVar6 = puVar6 + 1;
              uVar13 = *puVar8;
              uVar23 = ~*puVar6;
              bVar2 = CARRY4(uVar13 + uVar23,(uint)bVar15);
              *puVar8 = uVar13 + uVar23 + (uint)bVar15;
              uVar20 = uVar20 - 1;
              puVar8 = puVar8 + 1;
              bVar15 = CARRY4(uVar13,uVar23) || bVar2;
            } while (uVar20 != 0);
            if (!CARRY4(uVar13,uVar23) && !bVar2) {
LAB_013011dc:
                    /* WARNING: Subroutine does not return */
              FUN_012fb0ec("assertion failed: noborrow",0x1a,&DAT_01ce4690);
            }
          }
          local_2d0 = uVar14;
          local_38c = local_38c + 1;
          uVar23 = uVar14;
        }
LAB_01300e0c:
        if (uVar9 == param_4) {
                    /* WARNING: Subroutine does not return */
          FUN_012fb12c(param_4,param_4,&DAT_01ce48d0);
        }
        param_3[uVar9] = local_38c + 0x30;
        if (uVar23 == 0) {
          uVar23 = 0;
        }
        else {
          iVar12 = uVar23 << 2;
          uVar14 = 0;
          puVar6 = local_370;
          do {
            iVar12 = iVar12 + -4;
            lVar3 = (ulonglong)*puVar6 * 10 + (ulonglong)uVar14;
            uVar14 = (uint)((ulonglong)lVar3 >> 0x20);
            *puVar6 = (uint)lVar3;
            puVar6 = puVar6 + 1;
          } while (iVar12 != 0);
          if (uVar14 != 0) {
            if (uVar23 == 0x28) goto LAB_013011f4;
            local_370[uVar23] = uVar14;
            uVar23 = uVar23 + 1;
          }
        }
        local_2d0 = uVar23;
        uVar9 = uVar11;
      } while (uVar11 != uVar17);
      bVar15 = false;
    }
  }
  uVar20 = 0;
  if (uVar10 != 0) {
    puVar6 = auStack_2cc;
    iVar12 = uVar10 << 2;
    uVar14 = 0;
    do {
      puVar6 = puVar6 + 1;
      iVar12 = iVar12 + -4;
      lVar3 = (ulonglong)*puVar6 * 5 + (ulonglong)uVar14;
      uVar14 = (uint)((ulonglong)lVar3 >> 0x20);
      *puVar6 = (uint)lVar3;
    } while (iVar12 != 0);
    if (uVar14 == 0) {
      uVar20 = uVar10;
    }
    else {
      if (uVar10 == 0x28) {
LAB_013011f4:
                    /* WARNING: Subroutine does not return */
        FUN_012fb12c(0x28,0x28,&DAT_01ce4690);
      }
      auStack_2cc[uVar10 + 1] = uVar14;
      uVar20 = uVar10 + 1;
    }
  }
  local_228 = uVar20;
  uVar14 = local_2d0;
  if (local_2d0 < uVar20) {
    uVar14 = uVar20;
  }
  if (0x28 < uVar14) {
LAB_013010f8:
                    /* WARNING: Subroutine does not return */
    FUN_012faff4(0,uVar14,0x28,&DAT_01ce4690);
  }
  iVar12 = uVar14 << 2;
  do {
    if (iVar12 == 0) {
      cVar4 = '\0';
      goto LAB_01300fbc;
    }
    uVar14 = *(uint *)((int)local_370 + iVar12 + -4);
    uVar20 = *(uint *)((int)auStack_2cc + iVar12);
    iVar12 = iVar12 + -4;
  } while (uVar14 == uVar20);
  cVar4 = (uVar14 >= uVar20) - (uVar14 < uVar20);
LAB_01300fbc:
  if (cVar4 == '\0') {
    uVar14 = 0;
    if (bVar15) goto LAB_013010b8;
    uVar20 = uVar17 - 1;
    if (param_4 <= uVar20) {
                    /* WARNING: Subroutine does not return */
      FUN_012fb12c(uVar20,param_4,&DAT_01ce48a0);
    }
    uVar14 = uVar17;
    if ((param_3[uVar20] & 1) != 0) goto LAB_01300fd0;
  }
  else {
    uVar14 = uVar17;
    if (cVar4 == '\x01') {
LAB_01300fd0:
      if (param_4 < uVar17) {
                    /* WARNING: Subroutine does not return */
        FUN_012faff4(0,uVar17,param_4,&DAT_01ce48b0);
      }
      uVar14 = uVar17;
      do {
        uVar20 = uVar14;
        if (uVar20 == 0) {
          uVar16 = 0x31;
          if (!bVar15) {
            *param_3 = 0x31;
            uVar16 = 0x30;
            FUN_01bed93e(param_3 + 1,0x30,uVar17 - 1);
          }
          sVar22 = sVar22 + 1;
          uVar14 = uVar17;
          if ((iVar7 <= iVar5) && (uVar17 < param_4)) {
            param_3[uVar17] = uVar16;
            uVar14 = uVar17 + 1;
          }
          goto LAB_013010a8;
        }
        uVar14 = uVar20 - 1;
      } while (param_3[uVar20 - 1] == '9');
      param_3[uVar14] = param_3[uVar14] + '\x01';
      FUN_01bed93e(param_3 + uVar20,0x30,uVar17 - uVar20);
      uVar14 = uVar17;
    }
  }
LAB_013010a8:
  if (param_4 < uVar14) {
                    /* WARNING: Subroutine does not return */
    FUN_012faff4(0,uVar14,param_4,&DAT_01ce48c0);
  }
LAB_013010b8:
  *param_1 = param_3;
  *(short *)(param_1 + 2) = sVar22;
  param_1[1] = uVar14;
  return;
}


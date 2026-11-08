// FUN_00fafb90 @ 00fafb90 size=2932 calls_out=8 calls_in=2
// strings: assertion failed: d.mant > 0 | assertion failed: d.minus > 0 | assertion failed: d.plus > 0 | assertion failed: d.mant.checked_add(d.plus).is_some() | assertion failed: d.mant.checked_sub(d.minus).is_some() | assertion failed: other > 0

/* WARNING: Removing unreachable block (ram,0x00fb04bc) */
/* WARNING: Type propagation algorithm not settling */

void FUN_00fafb90(undefined4 *param_1,uint *param_2,undefined1 *param_3,uint param_4,short param_5)

{
  int *piVar1;
  longlong lVar2;
  int iVar3;
  uint *puVar4;
  int iVar5;
  uint *puVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  bool bVar13;
  undefined1 uVar14;
  uint uVar15;
  int iVar16;
  uint uVar17;
  uint uVar18;
  uint *puVar19;
  short sVar20;
  uint uVar21;
  bool bVar22;
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
  
  uVar18 = *param_2;
  uVar12 = param_2[1];
  if (uVar18 == 0 && uVar12 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa464("assertion failed: d.mant > 0",0x1c,&DAT_0188103c);
  }
  uVar8 = param_2[2];
  uVar21 = param_2[3];
  if (uVar8 == 0 && uVar21 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa464("assertion failed: d.minus > 0",0x1d,&DAT_0188104c);
  }
  uVar15 = param_2[5];
  if (param_2[4] == 0 && uVar15 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa464("assertion failed: d.plus > 0",0x1c,&DAT_0188105c);
  }
  if (CARRY4(uVar12,uVar15) || CARRY4(uVar12 + uVar15,(uint)CARRY4(uVar18,param_2[4]))) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa464("assertion failed: d.mant.checked_add(d.plus).is_some()",0x36,&DAT_018810cc);
  }
  if (uVar12 <= uVar21 && (uint)(uVar8 <= uVar18) <= uVar12 - uVar21) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa464("assertion failed: d.mant.checked_sub(d.minus).is_some()",0x37,&DAT_018810bc,
                 uVar12 - (uVar21 + (uVar8 > uVar18)));
  }
  local_2d0 = 2;
  if (uVar12 == 0) {
    local_2d0 = 1;
  }
  uVar8 = param_2[6];
  iVar10 = (int)(short)uVar8;
  local_370[0] = uVar18;
  local_370[1] = uVar12;
  FUN_016dd606(auStack_368,0,0x98);
  FUN_016dd606((uint)(auStack_2cc + 1) | 4,0,0x9c);
  iVar5 = uVar12 - (uVar18 == 0);
  iVar3 = LZCOUNT(uVar18 - 1) + 0x20;
  if (iVar5 != 0) {
    iVar3 = LZCOUNT(iVar5);
  }
  lVar2 = (longlong)(iVar10 - iVar3) * 0x4d104d42 + 0x1344135080;
  local_228 = 1;
  auStack_2cc[1] = 1;
  sVar20 = (short)((ulonglong)lVar2 >> 0x20);
  if (iVar10 < 0) {
    iVar10 = (int)(short)-(short)uVar8;
    puVar4 = auStack_2cc + 1;
  }
  else {
    puVar4 = local_370;
  }
  FUN_00faec78(puVar4,iVar10);
  if (sVar20 < 0) {
    uVar12 = -(int)sVar20 & 0xffff;
    puVar4 = local_370;
  }
  else {
    uVar12 = (uint)((ulonglong)lVar2 >> 0x20) & 0x7fff;
    puVar4 = auStack_2cc + 1;
  }
  FUN_00faedf4(puVar4,uVar12);
  local_374 = &local_374;
  FUN_016dd1aa(auStack_d4 + 1,auStack_2cc + 1,0xa4);
  uVar12 = param_4;
  do {
    uVar18 = auStack_d4[0x29];
    if (0x28 < auStack_d4[0x29]) goto LAB_00fb05a4;
    if (auStack_d4[0x29] != 0) {
      iVar5 = 0;
      iVar3 = auStack_d4[0x29] * -4;
      do {
        iVar16 = *(int *)((int)auStack_d4 - iVar3);
        iVar10 = FUN_01846088(iVar16,iVar5,&DAT_3b9aca00,0);
        iVar5 = iVar16 + iVar10 * -1000000000;
        *(int *)((int)auStack_d4 - iVar3) = iVar10;
        iVar3 = iVar3 + 4;
      } while (iVar3 != 0);
    }
    uVar12 = uVar12 - 9;
  } while (9 < uVar12);
  iVar3 = *(int *)(&DAT_00362c30 + uVar12 * 4) * 2;
  if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa464("assertion failed: other > 0",0x1b,&DAT_01880e5c);
  }
  uVar18 = auStack_d4[0x29];
  if (0x28 < auStack_d4[0x29]) {
LAB_00fb05a4:
                    /* WARNING: Subroutine does not return */
    FUN_00faa36c(0,uVar18,0x28,&DAT_01880e5c);
  }
  uVar12 = 0;
  if (auStack_d4[0x29] != 0) {
    iVar5 = auStack_d4[0x29] * -4;
    do {
      iVar16 = *(int *)((int)auStack_d4 - iVar5);
      iVar10 = FUN_01846088(iVar16,uVar12,iVar3,0);
      uVar12 = iVar16 - iVar10 * iVar3;
      *(int *)((int)auStack_d4 - iVar5) = iVar10;
      iVar5 = iVar5 + 4;
    } while (iVar5 != 0);
    uVar12 = auStack_d4[0x29];
  }
  uVar8 = local_228;
  uVar18 = local_2d0;
  puVar4 = auStack_2cc + 1;
  if (uVar12 < local_2d0) {
    uVar12 = local_2d0;
  }
  if (0x28 < uVar12) {
LAB_00fb05bc:
                    /* WARNING: Subroutine does not return */
    FUN_00faa36c(0,uVar12,0x28,&DAT_01880e5c);
  }
  if (uVar12 == 0) {
    uVar12 = 0;
  }
  else {
    uVar21 = uVar12;
    puVar6 = auStack_d4 + 1;
    puVar19 = local_370;
    bVar13 = false;
    do {
      uVar17 = *puVar6;
      uVar15 = *puVar19;
      bVar22 = CARRY4(uVar15 + uVar17,(uint)bVar13);
      *puVar6 = uVar15 + uVar17 + (uint)bVar13;
      uVar21 = uVar21 - 1;
      puVar6 = puVar6 + 1;
      puVar19 = puVar19 + 1;
      bVar13 = CARRY4(uVar15,uVar17) || bVar22;
    } while (uVar21 != 0);
    if (CARRY4(uVar15,uVar17) || bVar22) {
      if (uVar12 == 0x28) goto LAB_00fb06cc;
      auStack_d4[uVar12 + 1] = 1;
      uVar12 = uVar12 + 1;
    }
  }
  auStack_d4[0x29] = uVar12;
  if (uVar12 < local_228) {
    uVar12 = local_228;
  }
  if (0x28 < uVar12) goto LAB_00fb05bc;
  iVar3 = uVar12 << 2;
  do {
    if (iVar3 == 0) {
      if (auStack_2cc + 1 == (uint *)((int)puVar4 + iVar3)) goto LAB_00fafe8c;
      goto LAB_00fafea0;
    }
    puVar19 = (uint *)((int)auStack_d4 + iVar3);
    puVar6 = (uint *)((int)auStack_2cc + iVar3);
    iVar3 = iVar3 + -4;
  } while (*puVar19 == *puVar6);
  if (*puVar19 < *puVar6) {
LAB_00fafea0:
    if (local_2d0 == 0) {
      uVar18 = 0;
    }
    else {
      iVar3 = local_2d0 << 2;
      uVar12 = 0;
      puVar6 = local_370;
      do {
        iVar3 = iVar3 + -4;
        lVar2 = (ulonglong)*puVar6 * 10 + (ulonglong)uVar12;
        uVar12 = (uint)((ulonglong)lVar2 >> 0x20);
        *puVar6 = (uint)lVar2;
        puVar6 = puVar6 + 1;
      } while (iVar3 != 0);
      if (uVar12 != 0) {
        if (uVar18 == 0x28) goto LAB_00fb06cc;
        local_370[uVar18] = uVar12;
        uVar18 = uVar18 + 1;
      }
    }
    local_2d0 = uVar18;
  }
  else {
LAB_00fafe8c:
    sVar20 = sVar20 + 1;
  }
  uVar21 = local_2d0;
  iVar3 = (int)sVar20;
  iVar5 = (int)param_5;
  bVar13 = true;
  if (iVar3 < iVar5) {
    uVar15 = 0;
  }
  else {
    uVar15 = param_4;
    if ((uint)(iVar3 - iVar5) < param_4) {
      uVar15 = (uint)(short)(sVar20 - param_5);
    }
    if (uVar15 == 0) {
      uVar15 = 0;
    }
    else {
      FUN_016dd1aa(auStack_224 + 1,puVar4,0xa4);
      FUN_00faec78(auStack_224 + 1,1);
      FUN_016dd1aa(auStack_17c + 1,puVar4,0xa4);
      FUN_00faec78(auStack_17c + 1,2);
      FUN_016dd1aa(auStack_d4 + 1,puVar4,0xa4);
      FUN_00faec78(auStack_d4 + 1,3);
      uVar17 = auStack_d4[0x29];
      uVar7 = 0;
LAB_00faffd8:
      do {
        puVar4 = auStack_d4 + 1;
        uVar12 = uVar21;
        if (0x28 < uVar21) goto LAB_00fb05d0;
        uVar9 = uVar7 + 1;
        iVar10 = 0;
        do {
          if (uVar21 * 4 == iVar10) {
            if (param_4 < uVar15) {
                    /* WARNING: Subroutine does not return */
              FUN_00faa36c(uVar7,uVar15,param_4,&DAT_018810ac);
            }
            if (uVar15 != uVar7) {
              FUN_016dd606(param_3 + uVar7,0x30,uVar15 - uVar7);
            }
            *param_1 = param_3;
            param_1[1] = uVar15;
            *(short *)(param_1 + 2) = sVar20;
            return;
          }
          piVar1 = (int *)((int)local_370 + iVar10);
          iVar10 = iVar10 + 4;
        } while (*piVar1 == 0);
        if (uVar21 < uVar17) {
          uVar12 = uVar17;
        }
        if (0x28 < uVar12) goto LAB_00fb05bc;
        iVar10 = uVar12 << 2;
        do {
          if (iVar10 == 0) {
            local_38c = 0;
            if (puVar4 != (uint *)((int)puVar4 + iVar10)) goto LAB_00fb00ac;
            goto LAB_00fb0060;
          }
          uVar18 = *(uint *)((int)local_370 + iVar10 + -4);
          puVar6 = (uint *)((int)auStack_d4 + iVar10);
          iVar10 = iVar10 + -4;
        } while (uVar18 == *puVar6);
        local_38c = 0;
        if (*puVar6 <= uVar18) {
LAB_00fb0060:
          puVar6 = local_370;
          uVar18 = uVar12;
          bVar13 = true;
          do {
            uVar21 = *puVar6;
            uVar11 = ~*puVar4;
            bVar22 = CARRY4(uVar21 + uVar11,(uint)bVar13);
            *puVar6 = uVar21 + uVar11 + (uint)bVar13;
            uVar18 = uVar18 - 1;
            puVar6 = puVar6 + 1;
            puVar4 = puVar4 + 1;
            bVar13 = CARRY4(uVar21,uVar11) || bVar22;
          } while (uVar18 != 0);
          if (!CARRY4(uVar21,uVar11) && !bVar22) goto LAB_00fb06b4;
          local_38c = 8;
          local_2d0 = uVar12;
          uVar21 = uVar12;
        }
LAB_00fb00ac:
        uVar12 = uVar21;
        if (uVar21 < local_d8) {
          uVar12 = local_d8;
        }
        if (0x28 < uVar12) goto LAB_00fb05bc;
        puVar4 = auStack_17c + 1;
        iVar10 = uVar12 << 2;
        do {
          if (iVar10 == 0) {
            if (puVar4 == (uint *)((int)puVar4 + iVar10)) goto LAB_00fb00f4;
            goto LAB_00fb0160;
          }
          uVar18 = *(uint *)((int)local_370 + iVar10 + -4);
          puVar6 = (uint *)((int)auStack_17c + iVar10);
          iVar10 = iVar10 + -4;
        } while (uVar18 == *puVar6);
        if (*puVar6 <= uVar18) {
LAB_00fb00f4:
          if (uVar12 != 0) {
            puVar6 = local_370;
            uVar18 = uVar12;
            bVar13 = true;
            do {
              uVar11 = *puVar6;
              uVar21 = ~*puVar4;
              bVar22 = CARRY4(uVar11 + uVar21,(uint)bVar13);
              *puVar6 = uVar11 + uVar21 + (uint)bVar13;
              uVar18 = uVar18 - 1;
              puVar6 = puVar6 + 1;
              puVar4 = puVar4 + 1;
              bVar13 = CARRY4(uVar11,uVar21) || bVar22;
            } while (uVar18 != 0);
            if (!CARRY4(uVar11,uVar21) && !bVar22) goto LAB_00fb06b4;
          }
          local_2d0 = uVar12;
          local_38c = local_38c | 4;
          uVar21 = uVar12;
        }
LAB_00fb0160:
        puVar4 = auStack_224 + 1;
        uVar18 = uVar21;
        if (uVar21 < local_180) {
          uVar18 = local_180;
        }
        if (0x28 < uVar18) goto LAB_00fb05a4;
        iVar10 = uVar18 << 2;
        do {
          if (iVar10 == 0) {
            if (puVar4 == (uint *)((int)puVar4 + iVar10)) goto LAB_00fb01a8;
            goto LAB_00fb0214;
          }
          puVar6 = (uint *)((int)auStack_224 + iVar10);
          puVar19 = (uint *)((int)local_374 + iVar10);
          iVar10 = iVar10 + -4;
        } while (*puVar19 == *puVar6);
        if (*puVar6 <= *puVar19) {
LAB_00fb01a8:
          if (uVar18 != 0) {
            puVar6 = local_370;
            uVar12 = uVar18;
            bVar13 = true;
            do {
              uVar11 = *puVar6;
              uVar21 = ~*puVar4;
              bVar22 = CARRY4(uVar11 + uVar21,(uint)bVar13);
              *puVar6 = uVar11 + uVar21 + (uint)bVar13;
              uVar12 = uVar12 - 1;
              puVar6 = puVar6 + 1;
              puVar4 = puVar4 + 1;
              bVar13 = CARRY4(uVar11,uVar21) || bVar22;
            } while (uVar12 != 0);
            if (!CARRY4(uVar11,uVar21) && !bVar22) goto LAB_00fb06b4;
          }
          local_2d0 = uVar18;
          local_38c = local_38c + 2;
          uVar21 = uVar18;
        }
LAB_00fb0214:
        uVar12 = uVar21;
        if (uVar21 < uVar8) {
          uVar12 = uVar8;
        }
        if (0x28 < uVar12) goto LAB_00fb05d0;
        iVar10 = uVar12 << 2;
        do {
          if (iVar10 == 0) {
            if (auStack_2cc + 1 == (uint *)((int)auStack_2cc + iVar10 + 4)) goto LAB_00fb025c;
            goto LAB_00fb02cc;
          }
          puVar4 = (uint *)((int)auStack_2cc + iVar10);
          puVar6 = (uint *)((int)local_374 + iVar10);
          iVar10 = iVar10 + -4;
        } while (*puVar6 == *puVar4);
        if (*puVar4 <= *puVar6) {
LAB_00fb025c:
          if (uVar12 != 0) {
            puVar4 = auStack_2cc;
            puVar6 = local_370;
            uVar18 = uVar12;
            bVar13 = true;
            do {
              puVar4 = puVar4 + 1;
              uVar11 = *puVar6;
              uVar21 = ~*puVar4;
              bVar22 = CARRY4(uVar11 + uVar21,(uint)bVar13);
              *puVar6 = uVar11 + uVar21 + (uint)bVar13;
              uVar18 = uVar18 - 1;
              puVar6 = puVar6 + 1;
              bVar13 = CARRY4(uVar11,uVar21) || bVar22;
            } while (uVar18 != 0);
            if (!CARRY4(uVar11,uVar21) && !bVar22) {
LAB_00fb06b4:
                    /* WARNING: Subroutine does not return */
              FUN_00faa464("assertion failed: noborrow",0x1a,&DAT_01880e5c);
            }
          }
          local_2d0 = uVar12;
          local_38c = local_38c + 1;
          uVar21 = uVar12;
        }
LAB_00fb02cc:
        if (uVar7 == param_4) {
                    /* WARNING: Subroutine does not return */
          FUN_00faa4a4(param_4,param_4,&DAT_0188109c);
        }
        param_3[uVar7] = local_38c + 0x30;
        uVar7 = uVar9;
        if (uVar21 == 0) {
          uVar21 = 0;
          local_2d0 = 0;
          if (uVar9 == uVar15) break;
          goto LAB_00faffd8;
        }
        iVar10 = uVar21 << 2;
        uVar12 = 0;
        puVar4 = local_370;
        do {
          iVar10 = iVar10 + -4;
          lVar2 = (ulonglong)*puVar4 * 10 + (ulonglong)uVar12;
          uVar12 = (uint)((ulonglong)lVar2 >> 0x20);
          *puVar4 = (uint)lVar2;
          puVar4 = puVar4 + 1;
        } while (iVar10 != 0);
        if (uVar12 != 0) {
          if (uVar21 == 0x28) goto LAB_00fb06cc;
          local_370[uVar21] = uVar12;
          uVar21 = uVar21 + 1;
        }
        local_2d0 = uVar21;
      } while (uVar9 != uVar15);
      bVar13 = false;
    }
  }
  uVar18 = 0;
  if (uVar8 != 0) {
    puVar4 = auStack_2cc;
    iVar10 = uVar8 << 2;
    uVar12 = 0;
    do {
      puVar4 = puVar4 + 1;
      iVar10 = iVar10 + -4;
      lVar2 = (ulonglong)*puVar4 * 5 + (ulonglong)uVar12;
      uVar12 = (uint)((ulonglong)lVar2 >> 0x20);
      *puVar4 = (uint)lVar2;
    } while (iVar10 != 0);
    if (uVar12 == 0) {
      uVar18 = uVar8;
    }
    else {
      if (uVar8 == 0x28) {
LAB_00fb06cc:
                    /* WARNING: Subroutine does not return */
        FUN_00faa4a4(0x28,0x28,&DAT_01880e5c);
      }
      auStack_2cc[uVar8 + 1] = uVar12;
      uVar18 = uVar8 + 1;
    }
  }
  local_228 = uVar18;
  uVar12 = local_2d0;
  if (local_2d0 < uVar18) {
    uVar12 = uVar18;
  }
  if (0x28 < uVar12) {
LAB_00fb05d0:
                    /* WARNING: Subroutine does not return */
    FUN_00faa36c(0,uVar12,0x28,&DAT_01880e5c);
  }
  iVar10 = uVar12 << 2;
  do {
    if (iVar10 == 0) goto LAB_00fb048c;
    uVar12 = *(uint *)((int)local_370 + iVar10 + -4);
    puVar4 = (uint *)((int)auStack_2cc + iVar10);
    bVar22 = uVar12 < *puVar4;
    iVar10 = iVar10 + -4;
  } while (uVar12 == *puVar4);
  if (!bVar22 == bVar22) {
LAB_00fb048c:
    uVar12 = 0;
    if (bVar13) goto LAB_00fb0590;
    uVar18 = uVar15 - 1;
    if (param_4 <= uVar18) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa4a4(uVar18,param_4,&DAT_0188106c);
    }
    uVar12 = uVar15;
    if ((param_3[uVar18] & 1) != 0) goto LAB_00fb04d4;
  }
  else {
    uVar12 = uVar15;
    if ((char)(!bVar22 - bVar22) == '\x01') {
LAB_00fb04d4:
      if (param_4 < uVar15) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa36c(0,uVar15,param_4,&DAT_0188107c);
      }
      uVar12 = uVar15;
      do {
        uVar18 = uVar12;
        if (uVar18 == 0) {
          uVar14 = 0x31;
          if (!bVar13) {
            *param_3 = 0x31;
            uVar14 = 0x30;
            FUN_016dd606(param_3 + 1,0x30,uVar15 - 1);
          }
          sVar20 = sVar20 + 1;
          uVar12 = uVar15;
          if ((iVar5 <= iVar3) && (uVar15 < param_4)) {
            param_3[uVar15] = uVar14;
            uVar12 = uVar15 + 1;
          }
          goto LAB_00fb0580;
        }
        uVar12 = uVar18 - 1;
      } while (param_3[uVar18 - 1] == '9');
      param_3[uVar12] = param_3[uVar12] + '\x01';
      FUN_016dd606(param_3 + uVar18,0x30,uVar15 - uVar18);
      uVar12 = uVar15;
    }
  }
LAB_00fb0580:
  if (param_4 < uVar12) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa36c(0,uVar12,param_4,&DAT_0188108c);
  }
LAB_00fb0590:
  *param_1 = param_3;
  *(short *)(param_1 + 2) = sVar20;
  param_1[1] = uVar12;
  return;
}


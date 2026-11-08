// FUN_00fadeb4 @ 00fadeb4 size=3444 calls_out=7 calls_in=4
// strings: assertion failed: noborrow | assertion failed: d.mant > 0 | assertion failed: d.minus > 0 | assertion failed: d.plus > 0 | assertion failed: d.mant.checked_add(d.plus).is_some() | assertion failed: d.mant.checked_sub(d.minus).is_some()

/* WARNING: Removing unreachable block (ram,0x00fae730) */
/* WARNING: Removing unreachable block (ram,0x00fae864) */

void FUN_00fadeb4(undefined4 *param_1,uint *param_2,undefined1 *param_3)

{
  uint *puVar1;
  bool bVar2;
  char cVar3;
  longlong lVar4;
  bool bVar5;
  char cVar6;
  char cVar7;
  uint *puVar8;
  int iVar9;
  uint *puVar10;
  int iVar11;
  uint *puVar12;
  uint uVar13;
  uint uVar14;
  short sVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  byte bVar22;
  uint local_57c;
  uint local_56c [3];
  undefined1 auStack_560 [152];
  uint local_4c8;
  uint auStack_4c4 [3];
  undefined1 auStack_4b8 [152];
  uint local_420;
  uint local_418 [2];
  undefined1 auStack_410 [152];
  uint local_378;
  uint auStack_374 [41];
  uint local_2d0;
  uint auStack_2cc [41];
  uint local_228;
  uint auStack_224 [41];
  uint local_180;
  uint auStack_17c [41];
  uint local_d8;
  uint auStack_d4 [44];
  
  uVar16 = *param_2;
  uVar14 = param_2[1];
  if (uVar16 == 0 && uVar14 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa464("assertion failed: d.mant > 0",0x1c,&DAT_018810dc);
  }
  uVar19 = param_2[2];
  uVar18 = param_2[3];
  if (uVar19 == 0 && uVar18 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa464("assertion failed: d.minus > 0",0x1d,&DAT_018810ec);
  }
  uVar13 = param_2[4];
  uVar20 = param_2[5];
  if (uVar13 == 0 && uVar20 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa464("assertion failed: d.plus > 0",0x1c,&DAT_018810fc);
  }
  iVar11 = uVar14 + uVar20 + (uint)CARRY4(uVar16,uVar13);
  if (CARRY4(uVar14,uVar20) || CARRY4(uVar14 + uVar20,(uint)CARRY4(uVar16,uVar13))) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa464("assertion failed: d.mant.checked_add(d.plus).is_some()",0x36,&DAT_0188114c,iVar11)
    ;
  }
  if (uVar14 <= uVar18 && (uint)(uVar19 <= uVar16) <= uVar14 - uVar18) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa464("assertion failed: d.mant.checked_sub(d.minus).is_some()",0x37,&DAT_0188113c,iVar11
                );
  }
  cVar3 = *(char *)((int)param_2 + 0x1a);
  uVar21 = 2;
  local_56c[0] = (uint)(short)param_2[6];
  local_4c8 = 2;
  if (uVar14 == 0) {
    local_4c8 = 1;
  }
  local_56c[1] = uVar16;
  local_56c[2] = uVar14;
  FUN_016dd606(auStack_560,0,0x98);
  local_420 = 2;
  if (uVar18 == 0) {
    local_420 = 1;
  }
  puVar10 = auStack_4c4;
  auStack_4c4[1] = uVar19;
  auStack_4c4[2] = uVar18;
  FUN_016dd606(auStack_4b8,0,0x98);
  if (uVar20 == 0) {
    uVar21 = 1;
  }
  local_418[0] = uVar13;
  local_418[1] = uVar20;
  local_378 = uVar21;
  FUN_016dd606(auStack_410,0,0x98);
  FUN_016dd606((uint)(auStack_374 + 1) | 4,0,0x9c);
  uVar18 = local_56c[0];
  iVar9 = (uVar14 + uVar20 + (uint)CARRY4(uVar16,uVar13)) - (uint)(uVar16 + uVar13 == 0);
  iVar11 = LZCOUNT(uVar16 + uVar13 + -1) + 0x20;
  if (iVar9 != 0) {
    iVar11 = LZCOUNT(iVar9);
  }
  lVar4 = (longlong)(int)(local_56c[0] - iVar11) * 0x4d104d42 + 0x1344135080;
  local_2d0 = 1;
  auStack_374[1] = 1;
  sVar15 = (short)((ulonglong)lVar4 >> 0x20);
  uVar14 = (uint)sVar15;
  if ((int)local_56c[0] < 0) {
    FUN_00faec78(auStack_374 + 1,(int)(short)-(short)local_56c[0]);
    if (uVar14 < 0x80000000) goto LAB_00fae05c;
LAB_00fae084:
    uVar14 = -uVar14 & 0xffff;
    FUN_00faedf4(local_56c + 1,uVar14);
    FUN_00faedf4(auStack_4c4 + 1,uVar14);
    puVar8 = local_418;
  }
  else {
    FUN_00faec78(local_56c + 1,local_56c[0]);
    FUN_00faec78(auStack_4c4 + 1,uVar18);
    FUN_00faec78(local_418,uVar18);
    if ((int)uVar14 < 0) goto LAB_00fae084;
LAB_00fae05c:
    uVar14 = (uint)((ulonglong)lVar4 >> 0x20) & 0x7fff;
    puVar8 = auStack_374 + 1;
  }
  FUN_00faedf4(puVar8,uVar14);
  FUN_016dd1aa(auStack_d4 + 1,local_56c + 1,0xa4);
  uVar18 = local_2d0;
  uVar16 = local_378;
  uVar14 = local_4c8;
  uVar19 = auStack_d4[0x29];
  if (auStack_d4[0x29] < local_378) {
    uVar19 = local_378;
  }
  if (0x28 < uVar19) goto LAB_00faeae8;
  if (uVar19 == 0) {
    uVar19 = 0;
  }
  else {
    uVar13 = uVar19;
    puVar8 = auStack_d4 + 1;
    puVar12 = local_418;
    bVar5 = false;
    do {
      uVar20 = *puVar8;
      uVar21 = *puVar12;
      bVar2 = CARRY4(uVar21 + uVar20,(uint)bVar5);
      *puVar8 = uVar21 + uVar20 + (uint)bVar5;
      uVar13 = uVar13 - 1;
      puVar8 = puVar8 + 1;
      puVar12 = puVar12 + 1;
      bVar5 = CARRY4(uVar21,uVar20) || bVar2;
    } while (uVar13 != 0);
    if (CARRY4(uVar21,uVar20) || bVar2) {
      if (uVar19 == 0x28) goto LAB_00faebec;
      auStack_d4[uVar19 + 1] = 1;
      uVar19 = uVar19 + 1;
    }
  }
  auStack_d4[0x29] = uVar19;
  if (uVar19 <= local_2d0) {
    uVar19 = local_2d0;
  }
  if (0x28 < uVar19) goto LAB_00faeae8;
  puVar8 = auStack_d4 + 1;
  iVar11 = uVar19 << 2;
  do {
    if (iVar11 == 0) {
      cVar6 = '\0';
      if (auStack_d4 + 1 != (uint *)((int)puVar8 + iVar11)) {
        cVar6 = -1;
      }
      goto joined_r0x00fae230;
    }
    uVar13 = *(uint *)((int)auStack_374 + iVar11);
    uVar19 = *(uint *)((int)auStack_d4 + iVar11);
    iVar11 = iVar11 + -4;
  } while (uVar13 == uVar19);
  cVar6 = (uVar13 >= uVar19) - (uVar13 < uVar19);
joined_r0x00fae230:
  if (cVar6 < cVar3) {
    sVar15 = sVar15 + 1;
  }
  else {
    if (0x28 < local_4c8) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa36c(0,local_4c8,0x28,&DAT_01880e5c);
    }
    if (local_4c8 == 0) {
      uVar14 = 0;
    }
    else {
      iVar11 = local_4c8 << 2;
      uVar19 = 0;
      puVar12 = local_56c + 1;
      do {
        iVar11 = iVar11 + -4;
        lVar4 = (ulonglong)*puVar12 * 10 + (ulonglong)uVar19;
        uVar19 = (uint)((ulonglong)lVar4 >> 0x20);
        *puVar12 = (uint)lVar4;
        puVar12 = puVar12 + 1;
      } while (iVar11 != 0);
      if (uVar19 != 0) {
        if (uVar14 == 0x28) goto LAB_00faebec;
        local_56c[uVar14 + 1] = uVar19;
        uVar14 = uVar14 + 1;
      }
    }
    uVar19 = local_420;
    local_4c8 = uVar14;
    if (0x28 < local_420) goto LAB_00faeae8;
    uVar14 = 0;
    if (local_420 == 0) {
LAB_00fae2ac:
      local_420 = uVar14;
    }
    else {
      iVar11 = local_420 << 2;
      do {
        puVar10 = puVar10 + 1;
        iVar11 = iVar11 + -4;
        lVar4 = (ulonglong)*puVar10 * 10 + (ulonglong)uVar14;
        uVar14 = (uint)((ulonglong)lVar4 >> 0x20);
        *puVar10 = (uint)lVar4;
      } while (iVar11 != 0);
      if (uVar14 != 0) {
        if (uVar19 == 0x28) goto LAB_00faebec;
        auStack_4c4[uVar19 + 1] = uVar14;
        uVar14 = uVar19 + 1;
        goto LAB_00fae2ac;
      }
      local_420 = uVar19;
    }
    uVar14 = 0;
    if (uVar16 != 0) {
      iVar11 = uVar16 << 2;
      uVar14 = 0;
      puVar10 = local_418;
      do {
        iVar11 = iVar11 + -4;
        lVar4 = (ulonglong)*puVar10 * 10 + (ulonglong)uVar14;
        uVar14 = (uint)((ulonglong)lVar4 >> 0x20);
        *puVar10 = (uint)lVar4;
        puVar10 = puVar10 + 1;
      } while (iVar11 != 0);
      if (uVar14 == 0) {
        uVar14 = uVar16;
      }
      else {
        if (uVar16 == 0x28) {
LAB_00faebec:
                    /* WARNING: Subroutine does not return */
          FUN_00faa4a4(0x28,0x28,&DAT_01880e5c);
        }
        local_418[uVar16] = uVar14;
        uVar14 = uVar16 + 1;
      }
    }
    local_378 = uVar14;
  }
  uVar16 = local_378;
  uVar14 = local_4c8;
  puVar10 = auStack_374 + 1;
  FUN_016dd1aa(auStack_2cc + 1,puVar10,0xa4);
  FUN_00faec78(auStack_2cc + 1,1);
  FUN_016dd1aa(auStack_224 + 1,puVar10,0xa4);
  FUN_00faec78(auStack_224 + 1,2);
  FUN_016dd1aa(auStack_17c + 1,puVar10,0xa4);
  FUN_00faec78(auStack_17c + 1,3);
  uVar19 = uVar14;
  if (uVar14 < local_d8) {
    uVar19 = local_d8;
  }
  if (uVar19 < 0x29) {
    uVar13 = 0;
    do {
      iVar11 = uVar19 << 2;
      do {
        if (iVar11 == 0) {
          bVar22 = 0;
          if (auStack_17c + 1 != (uint *)((int)(auStack_17c + 1) + iVar11)) goto LAB_00fae4a0;
          goto LAB_00fae440;
        }
        puVar12 = (uint *)((int)local_56c + iVar11);
        puVar10 = (uint *)((int)auStack_17c + iVar11);
        iVar11 = iVar11 + -4;
      } while (*puVar12 == *puVar10);
      bVar22 = 0;
      if (*puVar10 <= *puVar12) {
LAB_00fae440:
        if (uVar19 != 0) {
          puVar10 = local_56c;
          puVar12 = auStack_17c;
          uVar14 = uVar19;
          bVar5 = true;
          do {
            puVar12 = puVar12 + 1;
            puVar10 = puVar10 + 1;
            uVar21 = *puVar10;
            uVar20 = ~*puVar12;
            bVar2 = CARRY4(uVar21 + uVar20,(uint)bVar5);
            *puVar10 = uVar21 + uVar20 + (uint)bVar5;
            uVar14 = uVar14 - 1;
            bVar5 = CARRY4(uVar21,uVar20) || bVar2;
          } while (uVar14 != 0);
          if (!CARRY4(uVar21,uVar20) && !bVar2) goto LAB_00faeb2c;
        }
        bVar22 = 8;
        local_4c8 = uVar19;
        uVar14 = uVar19;
      }
LAB_00fae4a0:
      uVar19 = uVar14;
      if (uVar14 < local_180) {
        uVar19 = local_180;
      }
      if (0x28 < uVar19) break;
      iVar11 = uVar19 << 2;
      do {
        if (iVar11 == 0) {
          if (auStack_224 + 1 == (uint *)((int)auStack_224 + iVar11 + 4)) goto LAB_00fae4e4;
          goto LAB_00fae554;
        }
        puVar12 = (uint *)((int)local_56c + iVar11);
        puVar10 = (uint *)((int)auStack_224 + iVar11);
        iVar11 = iVar11 + -4;
      } while (*puVar12 == *puVar10);
      if (*puVar10 <= *puVar12) {
LAB_00fae4e4:
        if (uVar19 != 0) {
          puVar10 = local_56c;
          puVar12 = auStack_224;
          uVar14 = uVar19;
          bVar5 = true;
          do {
            puVar12 = puVar12 + 1;
            puVar10 = puVar10 + 1;
            uVar20 = *puVar10;
            uVar21 = ~*puVar12;
            bVar2 = CARRY4(uVar20 + uVar21,(uint)bVar5);
            *puVar10 = uVar20 + uVar21 + (uint)bVar5;
            uVar14 = uVar14 - 1;
            bVar5 = CARRY4(uVar20,uVar21) || bVar2;
          } while (uVar14 != 0);
          if (!CARRY4(uVar20,uVar21) && !bVar2) goto LAB_00faeb2c;
        }
        bVar22 = bVar22 | 4;
        local_4c8 = uVar19;
        uVar14 = uVar19;
      }
LAB_00fae554:
      puVar10 = auStack_2cc + 1;
      uVar19 = uVar14;
      if (uVar14 < local_228) {
        uVar19 = local_228;
      }
      if (0x28 < uVar19) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa36c(0,uVar19,0x28,&DAT_01880e5c);
      }
      local_56c[0] = uVar16;
      iVar11 = uVar19 << 2;
      do {
        if (iVar11 == 0) {
          if (puVar10 == (uint *)((int)puVar10 + iVar11)) goto LAB_00fae598;
          goto LAB_00fae604;
        }
        puVar1 = (uint *)((int)local_56c + iVar11);
        puVar12 = (uint *)((int)auStack_2cc + iVar11);
        iVar11 = iVar11 + -4;
      } while (*puVar1 == *puVar12);
      if (*puVar12 <= *puVar1) {
LAB_00fae598:
        if (uVar19 != 0) {
          puVar12 = local_56c;
          uVar14 = uVar19;
          bVar5 = true;
          do {
            puVar12 = puVar12 + 1;
            uVar16 = *puVar12;
            uVar20 = ~*puVar10;
            bVar2 = CARRY4(uVar16 + uVar20,(uint)bVar5);
            *puVar12 = uVar16 + uVar20 + (uint)bVar5;
            uVar14 = uVar14 - 1;
            puVar10 = puVar10 + 1;
            bVar5 = CARRY4(uVar16,uVar20) || bVar2;
          } while (uVar14 != 0);
          if (!CARRY4(uVar16,uVar20) && !bVar2) goto LAB_00faeb2c;
        }
        bVar22 = bVar22 + 2;
        local_4c8 = uVar19;
        uVar14 = uVar19;
      }
LAB_00fae604:
      puVar10 = auStack_374 + 1;
      uVar16 = uVar14;
      if (uVar14 < uVar18) {
        uVar16 = uVar18;
      }
      if (0x28 < uVar16) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa36c(0,uVar16,0x28,&DAT_01880e5c);
      }
      iVar11 = uVar16 << 2;
      do {
        if (iVar11 == 0) {
          if (puVar10 == (uint *)((int)puVar10 + iVar11)) goto LAB_00fae644;
          goto LAB_00fae6a4;
        }
        puVar1 = (uint *)((int)local_56c + iVar11);
        puVar12 = (uint *)((int)auStack_374 + iVar11);
        iVar11 = iVar11 + -4;
      } while (*puVar1 == *puVar12);
      if (*puVar1 < *puVar12) {
LAB_00fae6a4:
        uVar16 = uVar14;
      }
      else {
LAB_00fae644:
        if (uVar16 != 0) {
          puVar12 = local_56c;
          uVar14 = uVar16;
          bVar5 = true;
          do {
            puVar12 = puVar12 + 1;
            uVar19 = *puVar12;
            uVar20 = ~*puVar10;
            bVar2 = CARRY4(uVar19 + uVar20,(uint)bVar5);
            *puVar12 = uVar19 + uVar20 + (uint)bVar5;
            uVar14 = uVar14 - 1;
            puVar10 = puVar10 + 1;
            bVar5 = CARRY4(uVar19,uVar20) || bVar2;
          } while (uVar14 != 0);
          if (!CARRY4(uVar19,uVar20) && !bVar2) {
LAB_00faeb2c:
                    /* WARNING: Subroutine does not return */
            FUN_00faa464("assertion failed: noborrow",0x1a,&DAT_01880e5c);
          }
        }
        bVar22 = bVar22 + 1;
        local_4c8 = uVar16;
      }
      uVar20 = local_420;
      if (uVar13 == 0x11) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa4a4(0x11,0x11,&DAT_0188110c);
      }
      param_3[uVar13] = bVar22 + 0x30;
      uVar19 = uVar16;
      if (uVar16 < local_420) {
        uVar19 = local_420;
      }
      if (0x28 < uVar19) break;
      local_57c = uVar13 + 1;
      iVar11 = uVar19 << 2;
      do {
        if (iVar11 == 0) {
          cVar6 = '\0';
          goto LAB_00fae734;
        }
        uVar19 = *(uint *)((int)local_56c + iVar11);
        uVar14 = *(uint *)((int)auStack_4c4 + iVar11);
        iVar11 = iVar11 + -4;
      } while (uVar19 == uVar14);
      cVar6 = (uVar19 >= uVar14) - (uVar19 < uVar14);
LAB_00fae734:
      FUN_016dd1aa(puVar8,local_56c + 1,0xa4);
      uVar19 = auStack_d4[0x29];
      if (auStack_d4[0x29] < local_56c[0]) {
        uVar19 = local_56c[0];
      }
      if (0x28 < uVar19) break;
      if (uVar19 == 0) {
        uVar19 = 0;
      }
      else {
        uVar14 = uVar19;
        puVar10 = puVar8;
        puVar12 = local_418;
        bVar5 = false;
        do {
          uVar17 = *puVar10;
          uVar21 = *puVar12;
          bVar2 = CARRY4(uVar21 + uVar17,(uint)bVar5);
          *puVar10 = uVar21 + uVar17 + (uint)bVar5;
          uVar14 = uVar14 - 1;
          puVar10 = puVar10 + 1;
          puVar12 = puVar12 + 1;
          bVar5 = CARRY4(uVar21,uVar17) || bVar2;
        } while (uVar14 != 0);
        if (CARRY4(uVar21,uVar17) || bVar2) {
          if (uVar19 == 0x28) goto LAB_00faebec;
          puVar8[uVar19] = 1;
          uVar19 = uVar19 + 1;
        }
      }
      auStack_d4[0x29] = uVar19;
      if (uVar19 <= uVar18) {
        uVar19 = uVar18;
      }
      if (0x28 < uVar19) break;
      iVar11 = uVar19 << 2;
      do {
        if (iVar11 == 0) {
          cVar7 = '\0';
          if (cVar6 < cVar3) goto LAB_00fae9c4;
          goto LAB_00fae878;
        }
        uVar19 = *(uint *)((int)auStack_374 + iVar11);
        uVar14 = *(uint *)((int)auStack_d4 + iVar11);
        iVar11 = iVar11 + -4;
      } while (uVar19 == uVar14);
      cVar7 = (uVar19 >= uVar14) - (uVar19 < uVar14);
      if (cVar6 < cVar3) {
LAB_00fae9c4:
        if (cVar3 <= cVar7) goto LAB_00faea7c;
        iVar11 = FUN_00faec78(local_56c + 1,1);
        uVar19 = local_4c8;
        if (local_4c8 < uVar18) {
          uVar19 = uVar18;
        }
        if (uVar19 < 0x29) {
          iVar9 = uVar19 << 2;
          goto LAB_00fae9f8;
        }
        break;
      }
LAB_00fae878:
      if (cVar7 < cVar3) goto LAB_00faea2c;
      uVar19 = 0;
      uVar14 = 0;
      if (uVar16 != 0) {
        puVar10 = local_56c;
        iVar11 = uVar16 << 2;
        uVar14 = 0;
        do {
          puVar10 = puVar10 + 1;
          iVar11 = iVar11 + -4;
          lVar4 = (ulonglong)*puVar10 * 10 + (ulonglong)uVar14;
          uVar14 = (uint)((ulonglong)lVar4 >> 0x20);
          *puVar10 = (uint)lVar4;
        } while (iVar11 != 0);
        if (uVar14 == 0) {
          uVar14 = uVar16;
        }
        else {
          if (uVar16 == 0x28) goto LAB_00faebec;
          local_56c[uVar16 + 1] = uVar14;
          uVar14 = uVar16 + 1;
        }
      }
      local_4c8 = uVar14;
      if (uVar20 == 0) {
LAB_00fae94c:
        local_420 = uVar19;
        if (local_56c[0] != 0) goto LAB_00fae958;
LAB_00fae3dc:
        uVar16 = 0;
      }
      else {
        iVar11 = uVar20 << 2;
        uVar16 = 0;
        puVar10 = auStack_4c4 + 1;
        do {
          iVar11 = iVar11 + -4;
          lVar4 = (ulonglong)*puVar10 * 10 + (ulonglong)uVar16;
          uVar16 = (uint)((ulonglong)lVar4 >> 0x20);
          *puVar10 = (uint)lVar4;
          puVar10 = puVar10 + 1;
        } while (iVar11 != 0);
        if (uVar16 != 0) {
          if (uVar20 != 0x28) {
            (auStack_4c4 + 1)[uVar20] = uVar16;
            uVar19 = uVar20 + 1;
            goto LAB_00fae94c;
          }
          goto LAB_00faebec;
        }
        local_420 = uVar20;
        if (local_56c[0] == 0) goto LAB_00fae3dc;
LAB_00fae958:
        iVar11 = local_56c[0] << 2;
        uVar19 = 0;
        puVar10 = local_418;
        do {
          iVar11 = iVar11 + -4;
          lVar4 = (ulonglong)*puVar10 * 10 + (ulonglong)uVar19;
          uVar19 = (uint)((ulonglong)lVar4 >> 0x20);
          *puVar10 = (uint)lVar4;
          puVar10 = puVar10 + 1;
        } while (iVar11 != 0);
        uVar16 = local_56c[0];
        if (uVar19 != 0) {
          if (local_56c[0] == 0x28) goto LAB_00faebec;
          local_418[local_56c[0]] = uVar19;
          uVar16 = local_56c[0] + 1;
        }
      }
      local_378 = uVar16;
      uVar19 = uVar14;
      if (uVar14 < local_d8) {
        uVar19 = local_d8;
      }
      uVar13 = local_57c;
    } while (uVar19 < 0x29);
  }
LAB_00faeae8:
                    /* WARNING: Subroutine does not return */
  FUN_00faa36c(0,uVar19,0x28,&DAT_01880e5c);
  while( true ) {
    uVar14 = *(uint *)(iVar11 + -4 + iVar9);
    puVar10 = (uint *)((int)auStack_374 + iVar9);
    iVar9 = iVar9 + -4;
    if (uVar14 != *puVar10) break;
LAB_00fae9f8:
    if (iVar9 == 0) {
      if (auStack_374 + 1 != (uint *)((int)auStack_374 + iVar9 + 4)) goto LAB_00faea7c;
      goto LAB_00faea2c;
    }
  }
  if (*puVar10 <= uVar14) {
LAB_00faea2c:
    uVar14 = uVar13;
    do {
      uVar16 = uVar14;
      if (uVar16 == 0xffffffff) {
        *param_3 = 0x31;
        FUN_016dd606(param_3 + 1,0x30,uVar13);
        if (0xf < uVar13) {
                    /* WARNING: Subroutine does not return */
          FUN_00faa4a4(local_57c,0x11,&DAT_0188111c);
        }
        sVar15 = sVar15 + 1;
        param_3[local_57c] = 0x30;
        local_57c = uVar13 + 2;
        goto LAB_00faead0;
      }
      uVar14 = uVar16 - 1;
    } while (param_3[uVar16] == '9');
    param_3[uVar16] = param_3[uVar16] + '\x01';
    FUN_016dd606(param_3 + uVar16 + 1,0x30,local_57c - (uVar16 + 1));
  }
LAB_00faea7c:
  if (0x10 < uVar13) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa36c(0,local_57c,0x11,&DAT_0188112c);
  }
LAB_00faead0:
  *param_1 = param_3;
  *(short *)(param_1 + 2) = sVar15;
  param_1[1] = local_57c;
  return;
}


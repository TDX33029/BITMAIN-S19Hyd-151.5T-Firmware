// FUN_012fea44 @ 012fea44 size=3388 calls_out=7 calls_in=2
// strings: assertion failed: noborrow | assertion failed: d.mant > 0 | assertion failed: d.minus > 0 | assertion failed: d.plus > 0 | assertion failed: d.mant.checked_add(d.plus).is_some() | assertion failed: d.mant.checked_sub(d.minus).is_some()

/* WARNING: Removing unreachable block (ram,0x012ff2a4) */
/* WARNING: Removing unreachable block (ram,0x012ff3c8) */

void FUN_012fea44(undefined4 *param_1,uint *param_2,undefined1 *param_3)

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
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  short sVar20;
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
  
  uVar15 = *param_2;
  uVar14 = param_2[1];
  if (uVar15 == 0 && uVar14 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb0ec("assertion failed: d.mant > 0",0x1c,&DAT_01ce4910);
  }
  uVar18 = param_2[2];
  uVar17 = param_2[3];
  if (uVar18 == 0 && uVar17 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb0ec("assertion failed: d.minus > 0",0x1d,&DAT_01ce4920);
  }
  uVar13 = param_2[4];
  uVar19 = param_2[5];
  if (uVar13 == 0 && uVar19 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb0ec("assertion failed: d.plus > 0",0x1c,&DAT_01ce4930);
  }
  iVar11 = uVar14 + uVar19 + (uint)CARRY4(uVar15,uVar13);
  if (CARRY4(uVar14,uVar19) || CARRY4(uVar14 + uVar19,(uint)CARRY4(uVar15,uVar13))) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb0ec("assertion failed: d.mant.checked_add(d.plus).is_some()",0x36,&DAT_01ce4980,iVar11)
    ;
  }
  if (uVar14 <= uVar17 && (uint)(uVar18 <= uVar15) <= uVar14 - uVar17) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb0ec("assertion failed: d.mant.checked_sub(d.minus).is_some()",0x37,&DAT_01ce4970,iVar11
                );
  }
  cVar3 = *(char *)((int)param_2 + 0x1a);
  uVar21 = 2;
  local_56c[0] = (uint)(short)param_2[6];
  local_4c8 = 2;
  if (uVar14 == 0) {
    local_4c8 = 1;
  }
  local_56c[1] = uVar15;
  local_56c[2] = uVar14;
  FUN_01bed93e(auStack_560,0,0x98);
  local_420 = 2;
  if (uVar17 == 0) {
    local_420 = 1;
  }
  puVar10 = auStack_4c4;
  auStack_4c4[1] = uVar18;
  auStack_4c4[2] = uVar17;
  FUN_01bed93e(auStack_4b8,0,0x98);
  if (uVar19 == 0) {
    uVar21 = 1;
  }
  local_418[0] = uVar13;
  local_418[1] = uVar19;
  local_378 = uVar21;
  FUN_01bed93e(auStack_410,0,0x98);
  FUN_01bed93e((uint)(auStack_374 + 1) | 4,0,0x9c);
  uVar17 = local_56c[0];
  iVar9 = (uVar14 + uVar19 + (uint)CARRY4(uVar15,uVar13)) - (uint)(uVar15 + uVar13 == 0);
  iVar11 = LZCOUNT(uVar15 + uVar13 + -1) + 0x20;
  if (iVar9 != 0) {
    iVar11 = LZCOUNT(iVar9);
  }
  lVar4 = (longlong)(int)(local_56c[0] - iVar11) * 0x4d104d42 + 0x1344135080;
  local_2d0 = 1;
  auStack_374[1] = 1;
  sVar20 = (short)((ulonglong)lVar4 >> 0x20);
  if ((int)local_56c[0] < 0) {
    uVar17 = (uint)(short)-(short)local_56c[0];
    puVar8 = auStack_374 + 1;
  }
  else {
    FUN_012ff7d0(local_56c + 1,local_56c[0]);
    FUN_012ff7d0(auStack_4c4 + 1,uVar17);
    puVar8 = local_418;
  }
  FUN_012ff7d0(puVar8,uVar17);
  if (sVar20 < 0) {
    uVar14 = -(int)sVar20 & 0xffff;
    FUN_012ff94c(local_56c + 1,uVar14);
    FUN_012ff94c(auStack_4c4 + 1,uVar14);
    puVar8 = local_418;
  }
  else {
    uVar14 = (uint)((ulonglong)lVar4 >> 0x20) & 0x7fff;
    puVar8 = auStack_374 + 1;
  }
  FUN_012ff94c(puVar8,uVar14);
  FUN_01bed4e2(auStack_d4 + 1,local_56c + 1,0xa4);
  uVar17 = local_2d0;
  uVar15 = local_378;
  uVar14 = local_4c8;
  uVar18 = auStack_d4[0x29];
  if (auStack_d4[0x29] < local_378) {
    uVar18 = local_378;
  }
  if (uVar18 < 0x29) {
    if (uVar18 == 0) {
      uVar18 = 0;
    }
    else {
      uVar13 = uVar18;
      puVar8 = auStack_d4 + 1;
      puVar12 = local_418;
      bVar5 = false;
      do {
        uVar19 = *puVar8;
        uVar21 = *puVar12;
        bVar2 = CARRY4(uVar21 + uVar19,(uint)bVar5);
        *puVar8 = uVar21 + uVar19 + (uint)bVar5;
        uVar13 = uVar13 - 1;
        puVar8 = puVar8 + 1;
        puVar12 = puVar12 + 1;
        bVar5 = CARRY4(uVar21,uVar19) || bVar2;
      } while (uVar13 != 0);
      if (CARRY4(uVar21,uVar19) || bVar2) {
        if (uVar18 == 0x28) goto LAB_012ff744;
        auStack_d4[uVar18 + 1] = 1;
        uVar18 = uVar18 + 1;
      }
    }
    auStack_d4[0x29] = uVar18;
    if (uVar18 <= local_2d0) {
      uVar18 = local_2d0;
    }
    if (0x28 < uVar18) goto LAB_012ff640;
    puVar8 = auStack_d4 + 1;
    iVar11 = uVar18 << 2;
    do {
      if (iVar11 == 0) {
        cVar6 = '\0';
        if (auStack_d4 + 1 != (uint *)((int)puVar8 + iVar11)) {
          cVar6 = -1;
        }
        goto LAB_012fed4c;
      }
      uVar13 = *(uint *)((int)auStack_374 + iVar11);
      uVar18 = *(uint *)((int)auStack_d4 + iVar11);
      iVar11 = iVar11 + -4;
    } while (uVar13 == uVar18);
    cVar6 = (uVar13 >= uVar18) - (uVar13 < uVar18);
LAB_012fed4c:
    if (cVar6 < cVar3) {
      sVar20 = sVar20 + 1;
    }
    else {
      if (0x28 < local_4c8) {
                    /* WARNING: Subroutine does not return */
        FUN_012faff4(0,local_4c8,0x28,&DAT_01ce4690);
      }
      if (local_4c8 == 0) {
        uVar14 = 0;
      }
      else {
        iVar11 = local_4c8 << 2;
        uVar18 = 0;
        puVar12 = local_56c + 1;
        do {
          iVar11 = iVar11 + -4;
          lVar4 = (ulonglong)*puVar12 * 10 + (ulonglong)uVar18;
          uVar18 = (uint)((ulonglong)lVar4 >> 0x20);
          *puVar12 = (uint)lVar4;
          puVar12 = puVar12 + 1;
        } while (iVar11 != 0);
        if (uVar18 != 0) {
          if (uVar14 == 0x28) goto LAB_012ff744;
          local_56c[uVar14 + 1] = uVar18;
          uVar14 = uVar14 + 1;
        }
      }
      uVar18 = local_420;
      local_4c8 = uVar14;
      if (0x28 < local_420) goto LAB_012ff640;
      uVar14 = 0;
      if (local_420 != 0) {
        iVar11 = local_420 << 2;
        do {
          puVar10 = puVar10 + 1;
          iVar11 = iVar11 + -4;
          lVar4 = (ulonglong)*puVar10 * 10 + (ulonglong)uVar14;
          uVar14 = (uint)((ulonglong)lVar4 >> 0x20);
          *puVar10 = (uint)lVar4;
        } while (iVar11 != 0);
        if (uVar14 == 0) {
          uVar14 = uVar18;
        }
        else {
          if (uVar18 == 0x28) goto LAB_012ff744;
          auStack_4c4[uVar18 + 1] = uVar14;
          uVar14 = uVar18 + 1;
        }
      }
      local_420 = uVar14;
      uVar14 = 0;
      if (uVar15 != 0) {
        iVar11 = uVar15 << 2;
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
          uVar14 = uVar15;
        }
        else {
          if (uVar15 == 0x28) {
LAB_012ff744:
                    /* WARNING: Subroutine does not return */
            FUN_012fb12c(0x28,0x28,&DAT_01ce4690);
          }
          local_418[uVar15] = uVar14;
          uVar14 = uVar15 + 1;
        }
      }
      local_378 = uVar14;
    }
    uVar15 = local_378;
    uVar14 = local_4c8;
    puVar10 = auStack_374 + 1;
    FUN_01bed4e2(auStack_2cc + 1,puVar10,0xa4);
    FUN_012ff7d0(auStack_2cc + 1,1);
    FUN_01bed4e2(auStack_224 + 1,puVar10,0xa4);
    FUN_012ff7d0(auStack_224 + 1,2);
    FUN_01bed4e2(auStack_17c + 1,puVar10,0xa4);
    FUN_012ff7d0(auStack_17c + 1,3);
    uVar18 = uVar14;
    if (uVar14 < local_d8) {
      uVar18 = local_d8;
    }
    if (uVar18 < 0x29) {
      uVar13 = 0;
      do {
        iVar11 = uVar18 << 2;
        do {
          if (iVar11 == 0) {
            bVar22 = 0;
            if (auStack_17c + 1 != (uint *)((int)(auStack_17c + 1) + iVar11)) goto LAB_012ff014;
            goto LAB_012fefb4;
          }
          puVar12 = (uint *)((int)local_56c + iVar11);
          puVar10 = (uint *)((int)auStack_17c + iVar11);
          iVar11 = iVar11 + -4;
        } while (*puVar12 == *puVar10);
        bVar22 = 0;
        if (*puVar10 <= *puVar12) {
LAB_012fefb4:
          if (uVar18 != 0) {
            puVar10 = local_56c;
            puVar12 = auStack_17c;
            uVar14 = uVar18;
            bVar5 = true;
            do {
              puVar12 = puVar12 + 1;
              puVar10 = puVar10 + 1;
              uVar21 = *puVar10;
              uVar19 = ~*puVar12;
              bVar2 = CARRY4(uVar21 + uVar19,(uint)bVar5);
              *puVar10 = uVar21 + uVar19 + (uint)bVar5;
              uVar14 = uVar14 - 1;
              bVar5 = CARRY4(uVar21,uVar19) || bVar2;
            } while (uVar14 != 0);
            if (!CARRY4(uVar21,uVar19) && !bVar2) goto LAB_012ff684;
          }
          bVar22 = 8;
          local_4c8 = uVar18;
          uVar14 = uVar18;
        }
LAB_012ff014:
        uVar18 = uVar14;
        if (uVar14 < local_180) {
          uVar18 = local_180;
        }
        if (0x28 < uVar18) break;
        iVar11 = uVar18 << 2;
        do {
          if (iVar11 == 0) {
            if (auStack_224 + 1 == (uint *)((int)auStack_224 + iVar11 + 4)) goto LAB_012ff058;
            goto LAB_012ff0c8;
          }
          puVar12 = (uint *)((int)local_56c + iVar11);
          puVar10 = (uint *)((int)auStack_224 + iVar11);
          iVar11 = iVar11 + -4;
        } while (*puVar12 == *puVar10);
        if (*puVar10 <= *puVar12) {
LAB_012ff058:
          if (uVar18 != 0) {
            puVar10 = local_56c;
            puVar12 = auStack_224;
            uVar14 = uVar18;
            bVar5 = true;
            do {
              puVar12 = puVar12 + 1;
              puVar10 = puVar10 + 1;
              uVar19 = *puVar10;
              uVar21 = ~*puVar12;
              bVar2 = CARRY4(uVar19 + uVar21,(uint)bVar5);
              *puVar10 = uVar19 + uVar21 + (uint)bVar5;
              uVar14 = uVar14 - 1;
              bVar5 = CARRY4(uVar19,uVar21) || bVar2;
            } while (uVar14 != 0);
            if (!CARRY4(uVar19,uVar21) && !bVar2) goto LAB_012ff684;
          }
          bVar22 = bVar22 | 4;
          local_4c8 = uVar18;
          uVar14 = uVar18;
        }
LAB_012ff0c8:
        puVar10 = auStack_2cc + 1;
        uVar18 = uVar14;
        if (uVar14 < local_228) {
          uVar18 = local_228;
        }
        if (0x28 < uVar18) {
                    /* WARNING: Subroutine does not return */
          FUN_012faff4(0,uVar18,0x28,&DAT_01ce4690);
        }
        local_56c[0] = uVar15;
        iVar11 = uVar18 << 2;
        do {
          if (iVar11 == 0) {
            if (puVar10 == (uint *)((int)puVar10 + iVar11)) goto LAB_012ff10c;
            goto LAB_012ff178;
          }
          puVar1 = (uint *)((int)local_56c + iVar11);
          puVar12 = (uint *)((int)auStack_2cc + iVar11);
          iVar11 = iVar11 + -4;
        } while (*puVar1 == *puVar12);
        if (*puVar12 <= *puVar1) {
LAB_012ff10c:
          if (uVar18 != 0) {
            puVar12 = local_56c;
            uVar14 = uVar18;
            bVar5 = true;
            do {
              puVar12 = puVar12 + 1;
              uVar15 = *puVar12;
              uVar19 = ~*puVar10;
              bVar2 = CARRY4(uVar15 + uVar19,(uint)bVar5);
              *puVar12 = uVar15 + uVar19 + (uint)bVar5;
              uVar14 = uVar14 - 1;
              puVar10 = puVar10 + 1;
              bVar5 = CARRY4(uVar15,uVar19) || bVar2;
            } while (uVar14 != 0);
            if (!CARRY4(uVar15,uVar19) && !bVar2) goto LAB_012ff684;
          }
          bVar22 = bVar22 + 2;
          local_4c8 = uVar18;
          uVar14 = uVar18;
        }
LAB_012ff178:
        puVar10 = auStack_374 + 1;
        uVar15 = uVar14;
        if (uVar14 < uVar17) {
          uVar15 = uVar17;
        }
        if (0x28 < uVar15) {
                    /* WARNING: Subroutine does not return */
          FUN_012faff4(0,uVar15,0x28,&DAT_01ce4690);
        }
        iVar11 = uVar15 << 2;
        do {
          if (iVar11 == 0) {
            if (puVar10 == (uint *)((int)puVar10 + iVar11)) goto LAB_012ff1b8;
            goto LAB_012ff218;
          }
          puVar1 = (uint *)((int)local_56c + iVar11);
          puVar12 = (uint *)((int)auStack_374 + iVar11);
          iVar11 = iVar11 + -4;
        } while (*puVar1 == *puVar12);
        if (*puVar1 < *puVar12) {
LAB_012ff218:
          uVar15 = uVar14;
        }
        else {
LAB_012ff1b8:
          if (uVar15 != 0) {
            puVar12 = local_56c;
            uVar14 = uVar15;
            bVar5 = true;
            do {
              puVar12 = puVar12 + 1;
              uVar18 = *puVar12;
              uVar19 = ~*puVar10;
              bVar2 = CARRY4(uVar18 + uVar19,(uint)bVar5);
              *puVar12 = uVar18 + uVar19 + (uint)bVar5;
              uVar14 = uVar14 - 1;
              puVar10 = puVar10 + 1;
              bVar5 = CARRY4(uVar18,uVar19) || bVar2;
            } while (uVar14 != 0);
            if (!CARRY4(uVar18,uVar19) && !bVar2) {
LAB_012ff684:
                    /* WARNING: Subroutine does not return */
              FUN_012fb0ec("assertion failed: noborrow",0x1a,&DAT_01ce4690);
            }
          }
          bVar22 = bVar22 + 1;
          local_4c8 = uVar15;
        }
        uVar19 = local_420;
        if (uVar13 == 0x11) {
                    /* WARNING: Subroutine does not return */
          FUN_012fb12c(0x11,0x11,&DAT_01ce4940);
        }
        param_3[uVar13] = bVar22 + 0x30;
        uVar18 = uVar15;
        if (uVar15 < local_420) {
          uVar18 = local_420;
        }
        if (0x28 < uVar18) break;
        local_57c = uVar13 + 1;
        iVar11 = uVar18 << 2;
        do {
          if (iVar11 == 0) {
            cVar6 = '\0';
            goto LAB_012ff2a8;
          }
          uVar18 = *(uint *)((int)local_56c + iVar11);
          uVar14 = *(uint *)((int)auStack_4c4 + iVar11);
          iVar11 = iVar11 + -4;
        } while (uVar18 == uVar14);
        cVar6 = (uVar18 >= uVar14) - (uVar18 < uVar14);
LAB_012ff2a8:
        FUN_01bed4e2(puVar8,local_56c + 1,0xa4);
        uVar18 = auStack_d4[0x29];
        if (auStack_d4[0x29] < local_56c[0]) {
          uVar18 = local_56c[0];
        }
        if (0x28 < uVar18) break;
        if (uVar18 == 0) {
          uVar18 = 0;
        }
        else {
          uVar14 = uVar18;
          puVar10 = puVar8;
          puVar12 = local_418;
          bVar5 = false;
          do {
            uVar16 = *puVar10;
            uVar21 = *puVar12;
            bVar2 = CARRY4(uVar21 + uVar16,(uint)bVar5);
            *puVar10 = uVar21 + uVar16 + (uint)bVar5;
            uVar14 = uVar14 - 1;
            puVar10 = puVar10 + 1;
            puVar12 = puVar12 + 1;
            bVar5 = CARRY4(uVar21,uVar16) || bVar2;
          } while (uVar14 != 0);
          if (CARRY4(uVar21,uVar16) || bVar2) {
            if (uVar18 == 0x28) goto LAB_012ff744;
            puVar8[uVar18] = 1;
            uVar18 = uVar18 + 1;
          }
        }
        auStack_d4[0x29] = uVar18;
        if (uVar18 <= uVar17) {
          uVar18 = uVar17;
        }
        if (0x28 < uVar18) break;
        iVar11 = uVar18 << 2;
        do {
          if (iVar11 == 0) {
            cVar7 = '\0';
            goto LAB_012ff3cc;
          }
          uVar18 = *(uint *)((int)auStack_374 + iVar11);
          uVar14 = *(uint *)((int)auStack_d4 + iVar11);
          iVar11 = iVar11 + -4;
        } while (uVar18 == uVar14);
        cVar7 = (uVar18 >= uVar14) - (uVar18 < uVar14);
LAB_012ff3cc:
        if (cVar6 < cVar3) {
          if (cVar3 <= cVar7) goto LAB_012ff5d4;
          iVar11 = FUN_012ff7d0(local_56c + 1,1);
          uVar18 = local_4c8;
          if (local_4c8 < uVar17) {
            uVar18 = uVar17;
          }
          if (uVar18 < 0x29) {
            iVar9 = uVar18 << 2;
            goto LAB_012ff550;
          }
          break;
        }
        if (cVar7 < cVar3) goto LAB_012ff584;
        uVar14 = 0;
        if (uVar15 != 0) {
          puVar10 = local_56c;
          iVar11 = uVar15 << 2;
          uVar14 = 0;
          do {
            puVar10 = puVar10 + 1;
            iVar11 = iVar11 + -4;
            lVar4 = (ulonglong)*puVar10 * 10 + (ulonglong)uVar14;
            uVar14 = (uint)((ulonglong)lVar4 >> 0x20);
            *puVar10 = (uint)lVar4;
          } while (iVar11 != 0);
          if (uVar14 == 0) {
            uVar14 = uVar15;
          }
          else {
            if (uVar15 == 0x28) goto LAB_012ff744;
            local_56c[uVar15 + 1] = uVar14;
            uVar14 = uVar15 + 1;
          }
        }
        local_4c8 = uVar14;
        uVar15 = 0;
        if (uVar19 != 0) {
          iVar11 = uVar19 << 2;
          uVar15 = 0;
          puVar10 = auStack_4c4 + 1;
          do {
            iVar11 = iVar11 + -4;
            lVar4 = (ulonglong)*puVar10 * 10 + (ulonglong)uVar15;
            uVar15 = (uint)((ulonglong)lVar4 >> 0x20);
            *puVar10 = (uint)lVar4;
            puVar10 = puVar10 + 1;
          } while (iVar11 != 0);
          if (uVar15 == 0) {
            uVar15 = uVar19;
          }
          else {
            if (uVar19 == 0x28) goto LAB_012ff744;
            (auStack_4c4 + 1)[uVar19] = uVar15;
            uVar15 = uVar19 + 1;
          }
        }
        local_420 = uVar15;
        if (local_56c[0] == 0) {
          uVar15 = 0;
        }
        else {
          iVar11 = local_56c[0] << 2;
          uVar18 = 0;
          puVar10 = local_418;
          do {
            iVar11 = iVar11 + -4;
            lVar4 = (ulonglong)*puVar10 * 10 + (ulonglong)uVar18;
            uVar18 = (uint)((ulonglong)lVar4 >> 0x20);
            *puVar10 = (uint)lVar4;
            puVar10 = puVar10 + 1;
          } while (iVar11 != 0);
          uVar15 = local_56c[0];
          if (uVar18 != 0) {
            if (local_56c[0] == 0x28) goto LAB_012ff744;
            local_418[local_56c[0]] = uVar18;
            uVar15 = local_56c[0] + 1;
          }
        }
        local_378 = uVar15;
        uVar18 = uVar14;
        if (uVar14 < local_d8) {
          uVar18 = local_d8;
        }
        uVar13 = local_57c;
      } while (uVar18 < 0x29);
    }
  }
LAB_012ff640:
                    /* WARNING: Subroutine does not return */
  FUN_012faff4(0,uVar18,0x28,&DAT_01ce4690);
  while( true ) {
    uVar14 = *(uint *)(iVar11 + -4 + iVar9);
    puVar10 = (uint *)((int)auStack_374 + iVar9);
    iVar9 = iVar9 + -4;
    if (uVar14 != *puVar10) break;
LAB_012ff550:
    if (iVar9 == 0) {
      if (auStack_374 + 1 != (uint *)((int)auStack_374 + iVar9 + 4)) goto LAB_012ff5d4;
      goto LAB_012ff584;
    }
  }
  if (*puVar10 <= uVar14) {
LAB_012ff584:
    uVar14 = uVar13;
    do {
      uVar15 = uVar14;
      if (uVar15 == 0xffffffff) {
        *param_3 = 0x31;
        FUN_01bed93e(param_3 + 1,0x30,uVar13);
        if (0xf < uVar13) {
                    /* WARNING: Subroutine does not return */
          FUN_012fb12c(local_57c,0x11,&DAT_01ce4950);
        }
        sVar20 = sVar20 + 1;
        param_3[local_57c] = 0x30;
        local_57c = uVar13 + 2;
        goto LAB_012ff628;
      }
      uVar14 = uVar15 - 1;
    } while (param_3[uVar15] == '9');
    param_3[uVar15] = param_3[uVar15] + '\x01';
    FUN_01bed93e(param_3 + uVar15 + 1,0x30,local_57c - (uVar15 + 1));
  }
LAB_012ff5d4:
  if (0x10 < uVar13) {
                    /* WARNING: Subroutine does not return */
    FUN_012faff4(0,local_57c,0x11,&DAT_01ce4960);
  }
LAB_012ff628:
  *param_1 = param_3;
  *(short *)(param_1 + 2) = sVar20;
  param_1[1] = local_57c;
  return;
}


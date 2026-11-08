// FUN_012793d8 @ 012793d8 size=1448 calls_out=7 calls_in=1
// strings: Hash table capacity overflow

uint FUN_012793d8(undefined4 *param_1,undefined4 *param_2)

{
  char cVar1;
  undefined1 uVar2;
  byte bVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  uint uVar10;
  uint uVar11;
  uint *puVar12;
  uint uVar13;
  int iVar14;
  uint *puVar15;
  int iVar16;
  uint uVar17;
  uint uVar18;
  uint *puVar19;
  undefined4 uVar20;
  int iVar21;
  int iVar22;
  uint uVar23;
  bool bVar24;
  undefined4 *local_50;
  undefined4 local_4c;
  undefined4 local_48;
  uint *local_44;
  uint local_40;
  int local_3c;
  int local_38;
  uint *local_34;
  uint local_30;
  int local_2c;
  undefined4 local_28;
  
  iVar22 = param_1[3];
  uVar4 = iVar22 + 1;
  if (iVar22 == -1) {
LAB_01279958:
                    /* WARNING: Subroutine does not return */
    FUN_012fb100("Hash table capacity overflow",0x39,&DAT_01cf1724);
  }
  uVar23 = param_1[1];
  uVar13 = uVar23 + 1;
  uVar10 = uVar23;
  if (7 < uVar23) {
    uVar10 = (uVar13 & 0xfffffff8) - (uVar13 >> 3);
  }
  if (uVar10 >> 1 < uVar4) {
    if (uVar4 < uVar10 + 1) {
      uVar4 = uVar10 + 1;
    }
    if (uVar4 < 0xf) {
      iVar14 = (uVar4 & 8) + 8;
      if (uVar4 < 4) {
        iVar14 = 4;
      }
    }
    else {
      if (0x1fffffff < uVar4) goto LAB_01279958;
      iVar14 = (int)((ulonglong)(uVar4 << 3) * 0x24924925 >> 0x20);
      iVar14 = (0xffffffffU >> LZCOUNT((iVar14 + (uVar4 * 8 - iVar14 >> 1) >> 2) - 1)) + 1;
    }
    FUN_01278db4(&local_34,0x11,iVar14);
    if (local_34 == (uint *)0x0) {
      return local_30;
    }
    FUN_01bed93e(local_34,0xff,local_30 + 5);
    local_40 = local_30;
    local_48 = 4;
    iVar14 = 0;
    local_38 = local_28;
    local_3c = local_2c;
    local_44 = local_34;
    local_4c = 0x11;
    local_50 = param_1 + 4;
    if (iVar22 != 0) {
      puVar15 = (uint *)*param_1;
      iVar21 = 0;
      uVar4 = ~*puVar15 & 0x80808080;
      uVar6 = *param_2;
      uVar7 = param_2[1];
      uVar8 = param_2[2];
      uVar9 = param_2[3];
      puVar12 = puVar15;
      iVar5 = local_2c;
      iVar14 = iVar22;
      do {
        if (uVar4 == 0) {
          do {
            puVar12 = puVar12 + 1;
            iVar21 = iVar21 + 4;
          } while ((*puVar12 & 0x80808080) == 0x80808080);
          uVar4 = *puVar12 & 0x80808080 ^ 0x80808080;
        }
        uVar13 = iVar21 + ((uint)LZCOUNT(uVar4 << 0x18 | (uVar4 >> 8 & 0xff) << 0x10 |
                                         (uVar4 >> 0x10 & 0xff) << 8 | uVar4 >> 0x18) >> 3);
        uVar10 = FUN_01a308e4(uVar6,uVar7,uVar8,uVar9,(int)puVar15 + uVar13 * -0x11 + -0x11,iVar5,
                              iVar14);
        uVar23 = local_30 & uVar10;
        uVar18 = *(uint *)((int)local_34 + uVar23) & 0x80808080;
        if (uVar18 == 0) {
          iVar16 = 4;
          do {
            uVar23 = uVar23 + iVar16;
            iVar16 = iVar16 + 4;
            uVar23 = uVar23 & local_30;
            uVar18 = *(uint *)((int)local_34 + uVar23) & 0x80808080;
          } while (uVar18 == 0);
        }
        uVar23 = uVar23 + ((uint)LZCOUNT(uVar18 << 0x18 | (uVar18 >> 8 & 0xff) << 0x10 |
                                         (uVar18 >> 0x10 & 0xff) << 8 | uVar18 >> 0x18) >> 3) &
                 local_30;
        if (-1 < *(char *)((int)local_34 + uVar23)) {
          uVar23 = *local_34 & 0x80808080;
          uVar23 = (uint)LZCOUNT((*local_34 & 0x80) << 0x18 | (uVar23 >> 8 & 0xff) << 0x10 |
                                 (uVar23 >> 0x10 & 0xff) << 8 | uVar23 >> 0x18) >> 3;
        }
        uVar4 = uVar4 - 1 & uVar4;
        bVar3 = (byte)(uVar10 >> 0x19);
        *(byte *)((int)local_34 + uVar23) = bVar3;
        iVar22 = iVar22 + -1;
        *(byte *)((int)local_34 + (uVar23 - 4 & local_30) + 4) = bVar3;
        local_2c = iVar5;
        FUN_01bed4e2((int)local_34 + ~uVar23 * 0x11,(int)puVar15 + ~uVar13 * 0x11,0x11);
        iVar5 = local_2c;
      } while (iVar22 != 0);
    }
    local_38 = iVar14;
    local_3c = local_2c - iVar14;
    iVar22 = 0;
    do {
      puVar12 = (uint *)param_1[iVar22];
      param_1[iVar22] = (&local_44)[iVar22];
      iVar14 = iVar22 + 1;
      (&local_44)[iVar22] = puVar12;
      iVar22 = iVar14;
    } while (iVar14 != 4);
    FUN_016660b8(&local_50);
  }
  else {
    if (uVar13 == 0) {
      uVar4 = 0;
    }
    else {
      uVar4 = uVar13 >> 2;
      if ((uVar13 & 3) != 0) {
        uVar4 = (uVar13 >> 2) + 1;
      }
      puVar12 = (uint *)*param_1;
      iVar22 = 0;
      do {
        puVar12[-iVar22] = (~(puVar12[-iVar22] >> 7) & 0x1010101) + (puVar12[-iVar22] | 0x7f7f7f7f);
        iVar22 = iVar22 + -1;
      } while (-iVar22 != uVar4);
      if (uVar13 < 4) {
        FUN_01bed864(puVar12 + 1,puVar12);
      }
      else {
        *(uint *)((int)puVar12 + uVar13) = *puVar12;
      }
      uVar6 = *param_2;
      iVar22 = 0;
      uVar7 = param_2[1];
      uVar8 = param_2[2];
      uVar9 = param_2[3];
      uVar4 = 0;
      uVar10 = uVar23;
      do {
        puVar15 = puVar12;
        if (*(char *)((int)puVar12 + uVar4) == -0x80) {
          iVar14 = (int)puVar12 + ~uVar4 * 0x11;
          puVar19 = puVar12;
          while( true ) {
            uVar18 = FUN_01a308e4(uVar6,uVar7,uVar8,uVar9,(int)puVar19 + uVar4 * -0x11 + -0x11);
            uVar11 = uVar10 & uVar18;
            uVar17 = *(uint *)((int)puVar19 + uVar11) & 0x80808080;
            uVar13 = uVar11;
            if (uVar17 == 0) {
              iVar5 = 4;
              do {
                uVar13 = uVar13 + iVar5 & uVar10;
                iVar5 = iVar5 + 4;
                uVar17 = *(uint *)((int)puVar19 + uVar13) & 0x80808080;
              } while (uVar17 == 0);
            }
            uVar13 = uVar13 + ((uint)LZCOUNT(uVar17 << 0x18 | (uVar17 >> 8 & 0xff) << 0x10 |
                                             (uVar17 >> 0x10 & 0xff) << 8 | uVar17 >> 0x18) >> 3) &
                     uVar10;
            if (-1 < *(char *)((int)puVar19 + uVar13)) {
              uVar13 = *puVar19 & 0x80808080;
              uVar13 = (uint)LZCOUNT((*puVar19 & 0x80) << 0x18 | (uVar13 >> 8 & 0xff) << 0x10 |
                                     (uVar13 >> 0x10 & 0xff) << 8 | uVar13 >> 0x18) >> 3;
            }
            bVar3 = (byte)(uVar18 >> 0x18);
            if (((uVar13 - uVar11 ^ uVar4 - uVar11) & uVar10) < 4) {
              bVar3 = bVar3 >> 1;
              *(byte *)((int)puVar19 + uVar4) = bVar3;
              puVar15 = (uint *)*param_1;
              *(byte *)((int)puVar15 + (uVar10 & uVar4 - 4) + 4) = bVar3;
              goto LAB_0127966c;
            }
            cVar1 = *(char *)((int)puVar19 + uVar13);
            bVar3 = bVar3 >> 1;
            *(byte *)((int)puVar19 + uVar13) = bVar3;
            puVar15 = (uint *)*param_1;
            *(byte *)((int)puVar15 + (uVar13 - 4 & uVar10) + 4) = bVar3;
            iVar5 = (int)puVar19 + ~uVar13 * 0x11;
            if (cVar1 == -1) break;
            iVar21 = 0x11;
            do {
              uVar20 = *(undefined4 *)((int)puVar12 + (iVar22 - iVar21));
              *(undefined4 *)((int)puVar12 + (iVar22 - iVar21)) =
                   *(undefined4 *)((int)puVar19 + (uVar13 * -0x11 - iVar21));
              *(undefined4 *)((int)puVar19 + (uVar13 * -0x11 - iVar21)) = uVar20;
              iVar21 = iVar21 + -4;
            } while (iVar21 != 1);
            uVar2 = *(undefined1 *)(iVar5 + 0x10);
            *(undefined1 *)(iVar5 + 0x10) = *(undefined1 *)(iVar14 + 0x10);
            *(undefined1 *)(iVar14 + 0x10) = uVar2;
            puVar19 = (uint *)*param_1;
            uVar10 = param_1[1];
          }
          uVar10 = param_1[1];
          *(undefined1 *)((int)puVar15 + uVar4) = 0xff;
          *(undefined1 *)((int)puVar15 + (uVar10 & uVar4 - 4) + 4) = 0xff;
          FUN_01bed4e2(iVar5,iVar14,0x11);
        }
LAB_0127966c:
        iVar22 = iVar22 + -0x11;
        bVar24 = uVar4 != uVar23;
        uVar4 = uVar4 + 1;
        puVar12 = puVar15;
      } while (bVar24);
      uVar4 = param_1[1];
      if (7 < uVar4) {
        uVar4 = (uVar4 + 1 & 0xfffffff8) - (uVar4 + 1 >> 3);
      }
    }
    param_1[2] = uVar4 - param_1[3];
  }
  return 0x80000001;
}


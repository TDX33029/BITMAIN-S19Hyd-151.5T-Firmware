// FUN_01a67a80 @ 01a67a80 size=1420 calls_out=7 calls_in=1
// strings: Hash table capacity overflow

uint FUN_01a67a80(undefined4 *param_1,undefined4 *param_2)

{
  char cVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  uint *puVar12;
  uint uVar13;
  int iVar14;
  int iVar15;
  uint uVar16;
  undefined4 uVar17;
  uint *puVar18;
  uint uVar19;
  uint *puVar20;
  int iVar21;
  int iVar22;
  bool bVar23;
  int iVar24;
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
  
  iVar21 = param_1[3];
  uVar3 = iVar21 + 1;
  if (iVar21 == -1) {
LAB_01a67fe0:
                    /* WARNING: Subroutine does not return */
    FUN_012fb100("Hash table capacity overflow",0x39,&DAT_01cf1724);
  }
  uVar19 = param_1[1];
  uVar13 = uVar19 + 1;
  uVar9 = uVar19;
  if (7 < uVar19) {
    uVar9 = (uVar13 & 0xfffffff8) - (uVar13 >> 3);
  }
  if (uVar9 >> 1 < uVar3) {
    if (uVar3 < uVar9 + 1) {
      uVar3 = uVar9 + 1;
    }
    if (uVar3 < 0xf) {
      iVar15 = (uVar3 & 8) + 8;
      if (uVar3 < 4) {
        iVar15 = 4;
      }
    }
    else {
      if (0x1fffffff < uVar3) goto LAB_01a67fe0;
      iVar15 = (int)((ulonglong)(uVar3 << 3) * 0x24924925 >> 0x20);
      iVar15 = (0xffffffffU >> LZCOUNT((iVar15 + (uVar3 * 8 - iVar15 >> 1) >> 2) - 1)) + 1;
    }
    FUN_019790d4(&local_34,0xc,4,iVar15);
    if (local_34 == (uint *)0x0) {
      return local_30;
    }
    FUN_01bed93e(local_34,0xff,local_30 + 5);
    local_38 = local_28;
    local_40 = local_30;
    iVar15 = 0;
    local_3c = local_2c;
    local_44 = local_34;
    local_48 = 4;
    local_4c = 0xc;
    local_50 = param_1 + 4;
    if (iVar21 != 0) {
      puVar20 = (uint *)*param_1;
      uVar5 = *param_2;
      uVar6 = param_2[1];
      uVar7 = param_2[2];
      uVar8 = param_2[3];
      iVar22 = 0;
      uVar3 = ~*puVar20 & 0x80808080;
      puVar12 = puVar20;
      iVar24 = local_2c;
      iVar15 = iVar21;
      do {
        if (uVar3 == 0) {
          do {
            puVar12 = puVar12 + 1;
            iVar22 = iVar22 + 4;
          } while ((*puVar12 & 0x80808080) == 0x80808080);
          uVar3 = *puVar12 & 0x80808080 ^ 0x80808080;
        }
        iVar11 = iVar22 + ((uint)LZCOUNT(uVar3 << 0x18 | (uVar3 >> 8 & 0xff) << 0x10 |
                                         (uVar3 >> 0x10 & 0xff) << 8 | uVar3 >> 0x18) >> 3);
        uVar9 = FUN_01656218(uVar5,uVar6,uVar7,uVar8,puVar20[iVar11 * -3 + -3],iVar24,iVar15);
        uVar13 = local_30 & uVar9;
        uVar19 = *(uint *)((int)local_34 + uVar13) & 0x80808080;
        if (uVar19 == 0) {
          iVar14 = 4;
          do {
            uVar13 = uVar13 + iVar14;
            iVar14 = iVar14 + 4;
            uVar13 = uVar13 & local_30;
            uVar19 = *(uint *)((int)local_34 + uVar13) & 0x80808080;
          } while (uVar19 == 0);
        }
        uVar13 = uVar13 + ((uint)LZCOUNT(uVar19 << 0x18 | (uVar19 >> 8 & 0xff) << 0x10 |
                                         (uVar19 >> 0x10 & 0xff) << 8 | uVar19 >> 0x18) >> 3) &
                 local_30;
        if (-1 < *(char *)((int)local_34 + uVar13)) {
          uVar13 = *local_34 & 0x80808080;
          uVar13 = (uint)LZCOUNT((*local_34 & 0x80) << 0x18 | (uVar13 >> 8 & 0xff) << 0x10 |
                                 (uVar13 >> 0x10 & 0xff) << 8 | uVar13 >> 0x18) >> 3;
        }
        uVar3 = uVar3 - 1 & uVar3;
        bVar2 = (byte)(uVar9 >> 0x19);
        *(byte *)((int)local_34 + uVar13) = bVar2;
        iVar21 = iVar21 + -1;
        *(byte *)((int)local_34 + (uVar13 - 4 & local_30) + 4) = bVar2;
        local_2c = iVar24;
        FUN_01bed4e2(local_34 + uVar13 * -3 + -3,puVar20 + iVar11 * -3 + -3,0xc);
        iVar24 = local_2c;
      } while (iVar21 != 0);
    }
    local_38 = iVar15;
    local_3c = local_2c - iVar15;
    iVar21 = 0;
    do {
      puVar12 = (uint *)param_1[iVar21];
      param_1[iVar21] = (&local_44)[iVar21];
      iVar15 = iVar21 + 1;
      (&local_44)[iVar21] = puVar12;
      iVar21 = iVar15;
    } while (iVar15 != 4);
    FUN_016660b8(&local_50);
  }
  else {
    if (uVar13 == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = uVar13 >> 2;
      if ((uVar13 & 3) != 0) {
        uVar3 = (uVar13 >> 2) + 1;
      }
      puVar12 = (uint *)*param_1;
      iVar21 = 0;
      do {
        puVar12[-iVar21] = (~(puVar12[-iVar21] >> 7) & 0x1010101) + (puVar12[-iVar21] | 0x7f7f7f7f);
        iVar21 = iVar21 + -1;
      } while (-iVar21 != uVar3);
      if (uVar13 < 4) {
        FUN_01bed864(puVar12 + 1,puVar12);
      }
      else {
        *(uint *)((int)puVar12 + uVar13) = *puVar12;
      }
      uVar5 = *param_2;
      iVar21 = 0;
      uVar6 = param_2[1];
      uVar7 = param_2[2];
      uVar8 = param_2[3];
      uVar3 = uVar19;
      uVar9 = 0;
      do {
        puVar20 = puVar12;
        if (*(char *)((int)puVar12 + uVar9) == -0x80) {
          puVar18 = puVar12;
          while( true ) {
            uVar4 = FUN_01656218(uVar5,uVar6,uVar7,uVar8,puVar18[uVar9 * -3 + -3]);
            uVar10 = uVar3 & uVar4;
            uVar16 = *(uint *)((int)puVar18 + uVar10) & 0x80808080;
            uVar13 = uVar10;
            if (uVar16 == 0) {
              iVar15 = 4;
              do {
                uVar13 = uVar13 + iVar15 & uVar3;
                iVar15 = iVar15 + 4;
                uVar16 = *(uint *)((int)puVar18 + uVar13) & 0x80808080;
              } while (uVar16 == 0);
            }
            uVar13 = uVar13 + ((uint)LZCOUNT(uVar16 << 0x18 | (uVar16 >> 8 & 0xff) << 0x10 |
                                             (uVar16 >> 0x10 & 0xff) << 8 | uVar16 >> 0x18) >> 3) &
                     uVar3;
            if (-1 < *(char *)((int)puVar18 + uVar13)) {
              uVar13 = *puVar18 & 0x80808080;
              uVar13 = (uint)LZCOUNT((*puVar18 & 0x80) << 0x18 | (uVar13 >> 8 & 0xff) << 0x10 |
                                     (uVar13 >> 0x10 & 0xff) << 8 | uVar13 >> 0x18) >> 3;
            }
            bVar2 = (byte)(uVar4 >> 0x18);
            if (((uVar13 - uVar10 ^ uVar9 - uVar10) & uVar3) < 4) {
              bVar2 = bVar2 >> 1;
              *(byte *)((int)puVar18 + uVar9) = bVar2;
              puVar20 = (uint *)*param_1;
              *(byte *)((int)puVar20 + (uVar3 & uVar9 - 4) + 4) = bVar2;
              goto LAB_01a67cec;
            }
            cVar1 = *(char *)((int)puVar18 + uVar13);
            bVar2 = bVar2 >> 1;
            *(byte *)((int)puVar18 + uVar13) = bVar2;
            puVar20 = (uint *)*param_1;
            *(byte *)((int)puVar20 + (uVar13 - 4 & uVar3) + 4) = bVar2;
            if (cVar1 == -1) break;
            iVar15 = -0xc;
            do {
              uVar17 = *(undefined4 *)((int)puVar12 + iVar15 + iVar21);
              *(undefined4 *)((int)puVar12 + iVar15 + iVar21) =
                   *(undefined4 *)((int)puVar18 + iVar15 + uVar13 * -0xc);
              *(undefined4 *)((int)puVar18 + iVar15 + uVar13 * -0xc) = uVar17;
              iVar15 = iVar15 + 4;
            } while (iVar15 != 0);
            puVar18 = (uint *)*param_1;
            uVar3 = param_1[1];
          }
          uVar3 = param_1[1];
          *(undefined1 *)((int)puVar20 + uVar9) = 0xff;
          *(undefined1 *)((int)puVar20 + (uVar3 & uVar9 - 4) + 4) = 0xff;
          FUN_01bed4e2(puVar18 + uVar13 * -3 + -3,puVar12 + (uVar9 + 1) * -3,0xc);
        }
LAB_01a67cec:
        iVar21 = iVar21 + -0xc;
        bVar23 = uVar9 != uVar19;
        puVar12 = puVar20;
        uVar9 = uVar9 + 1;
      } while (bVar23);
      uVar3 = param_1[1];
      if (7 < uVar3) {
        uVar3 = (uVar3 + 1 & 0xfffffff8) - (uVar3 + 1 >> 3);
      }
    }
    param_1[2] = uVar3 - param_1[3];
  }
  return 0x80000001;
}


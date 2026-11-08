// FUN_018ca624 @ 018ca624 size=1376 calls_out=6 calls_in=1
// strings: Hash table capacity overflow

uint FUN_018ca624(undefined4 *param_1,undefined4 *param_2)

{
  char cVar1;
  undefined2 uVar2;
  byte bVar3;
  uint uVar4;
  undefined2 *puVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  uint uVar10;
  uint uVar11;
  undefined2 *puVar12;
  uint *puVar13;
  uint uVar14;
  int iVar15;
  int iVar16;
  uint uVar17;
  uint uVar18;
  uint *puVar19;
  int iVar20;
  int iVar21;
  uint uVar22;
  uint *puVar23;
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
  
  iVar20 = param_1[3];
  uVar4 = iVar20 + 1;
  if (iVar20 == -1) {
LAB_018cab5c:
                    /* WARNING: Subroutine does not return */
    FUN_012fb100("Hash table capacity overflow",0x39,&DAT_01cf1724);
  }
  uVar22 = param_1[1];
  uVar14 = uVar22 + 1;
  uVar10 = uVar22;
  if (7 < uVar22) {
    uVar10 = (uVar14 & 0xfffffff8) - (uVar14 >> 3);
  }
  if (uVar10 >> 1 < uVar4) {
    if (uVar4 < uVar10 + 1) {
      uVar4 = uVar10 + 1;
    }
    if (uVar4 < 0xf) {
      iVar16 = (uVar4 & 8) + 8;
      if (uVar4 < 4) {
        iVar16 = 4;
      }
    }
    else {
      if (0x1fffffff < uVar4) goto LAB_018cab5c;
      iVar16 = (int)((ulonglong)(uVar4 << 3) * 0x24924925 >> 0x20);
      iVar16 = (0xffffffffU >> LZCOUNT((iVar16 + (uVar4 * 8 - iVar16 >> 1) >> 2) - 1)) + 1;
    }
    FUN_01ae72e4(&local_34,2,4,iVar16);
    if (local_34 == (uint *)0x0) {
      return local_30;
    }
    FUN_01bed93e(local_34,0xff,local_30 + 5);
    local_40 = local_30;
    iVar16 = 0;
    local_4c = 2;
    local_38 = local_28;
    local_3c = local_2c;
    local_44 = local_34;
    local_48 = 4;
    local_50 = param_1 + 4;
    if (iVar20 != 0) {
      puVar23 = (uint *)*param_1;
      uVar4 = ~*puVar23 & 0x80808080;
      uVar6 = *param_2;
      iVar21 = 0;
      uVar7 = param_2[1];
      uVar8 = param_2[2];
      uVar9 = param_2[3];
      puVar13 = puVar23;
      iVar16 = iVar20;
      do {
        if (uVar4 == 0) {
          do {
            puVar13 = puVar13 + 1;
            iVar21 = iVar21 + 4;
          } while ((*puVar13 & 0x80808080) == 0x80808080);
          uVar4 = *puVar13 & 0x80808080 ^ 0x80808080;
        }
        uVar10 = iVar21 + ((uint)LZCOUNT(uVar4 << 0x18 | (uVar4 >> 8 & 0xff) << 0x10 |
                                         (uVar4 >> 0x10 & 0xff) << 8 | uVar4 >> 0x18) >> 3);
        uVar14 = FUN_018bf2d8(uVar6,uVar7,uVar8,uVar9,
                              *(undefined2 *)((int)puVar23 + uVar10 * -2 + -2),local_2c,iVar16);
        uVar22 = local_30 & uVar14;
        uVar18 = *(uint *)((int)local_34 + uVar22) & 0x80808080;
        if (uVar18 == 0) {
          iVar15 = 4;
          do {
            uVar22 = uVar22 + iVar15;
            iVar15 = iVar15 + 4;
            uVar22 = uVar22 & local_30;
            uVar18 = *(uint *)((int)local_34 + uVar22) & 0x80808080;
          } while (uVar18 == 0);
        }
        uVar22 = uVar22 + ((uint)LZCOUNT(uVar18 << 0x18 | (uVar18 >> 8 & 0xff) << 0x10 |
                                         (uVar18 >> 0x10 & 0xff) << 8 | uVar18 >> 0x18) >> 3) &
                 local_30;
        if (-1 < *(char *)((int)local_34 + uVar22)) {
          uVar22 = *local_34 & 0x80808080;
          uVar22 = (uint)LZCOUNT((*local_34 & 0x80) << 0x18 | (uVar22 >> 8 & 0xff) << 0x10 |
                                 (uVar22 >> 0x10 & 0xff) << 8 | uVar22 >> 0x18) >> 3;
        }
        uVar4 = uVar4 - 1 & uVar4;
        bVar3 = (byte)(uVar14 >> 0x19);
        *(byte *)((int)local_34 + uVar22) = bVar3;
        iVar20 = iVar20 + -1;
        *(byte *)((int)local_34 + (uVar22 - 4 & local_30) + 4) = bVar3;
        *(undefined2 *)((int)local_34 + ~uVar22 * 2) = *(undefined2 *)((int)puVar23 + ~uVar10 * 2);
      } while (iVar20 != 0);
    }
    local_38 = iVar16;
    local_3c = local_2c - iVar16;
    iVar20 = 0;
    do {
      puVar13 = (uint *)param_1[iVar20];
      param_1[iVar20] = (&local_44)[iVar20];
      iVar16 = iVar20 + 1;
      (&local_44)[iVar20] = puVar13;
      iVar20 = iVar16;
    } while (iVar16 != 4);
    FUN_016660b8(&local_50);
  }
  else {
    if (uVar14 == 0) {
      uVar4 = 0;
    }
    else {
      uVar4 = uVar14 >> 2;
      if ((uVar14 & 3) != 0) {
        uVar4 = (uVar14 >> 2) + 1;
      }
      puVar13 = (uint *)*param_1;
      iVar20 = 0;
      do {
        puVar13[-iVar20] = (~(puVar13[-iVar20] >> 7) & 0x1010101) + (puVar13[-iVar20] | 0x7f7f7f7f);
        iVar20 = iVar20 + -1;
      } while (-iVar20 != uVar4);
      if (uVar14 < 4) {
        FUN_01bed864(puVar13 + 1,puVar13);
      }
      else {
        *(uint *)((int)puVar13 + uVar14) = *puVar13;
      }
      uVar6 = *param_2;
      uVar9 = param_2[3];
      uVar7 = param_2[1];
      uVar8 = param_2[2];
      uVar4 = 0;
      uVar10 = uVar22;
      do {
        puVar23 = puVar13;
        if (*(char *)((int)puVar13 + uVar4) == -0x80) {
          puVar19 = puVar13;
          while( true ) {
            uVar18 = FUN_018bf2d8(uVar6,uVar7,uVar8,uVar9,
                                  *(undefined2 *)((int)puVar19 + uVar4 * -2 + -2));
            uVar11 = uVar10 & uVar18;
            uVar17 = *(uint *)((int)puVar19 + uVar11) & 0x80808080;
            uVar14 = uVar11;
            if (uVar17 == 0) {
              iVar20 = 4;
              do {
                uVar14 = uVar14 + iVar20 & uVar10;
                iVar20 = iVar20 + 4;
                uVar17 = *(uint *)((int)puVar19 + uVar14) & 0x80808080;
              } while (uVar17 == 0);
            }
            uVar14 = uVar14 + ((uint)LZCOUNT(uVar17 << 0x18 | (uVar17 >> 8 & 0xff) << 0x10 |
                                             (uVar17 >> 0x10 & 0xff) << 8 | uVar17 >> 0x18) >> 3) &
                     uVar10;
            if (-1 < *(char *)((int)puVar19 + uVar14)) {
              uVar14 = *puVar19 & 0x80808080;
              uVar14 = (uint)LZCOUNT((*puVar19 & 0x80) << 0x18 | (uVar14 >> 8 & 0xff) << 0x10 |
                                     (uVar14 >> 0x10 & 0xff) << 8 | uVar14 >> 0x18) >> 3;
            }
            bVar3 = (byte)(uVar18 >> 0x18);
            if (((uVar14 - uVar11 ^ uVar4 - uVar11) & uVar10) < 4) {
              bVar3 = bVar3 >> 1;
              *(byte *)((int)puVar19 + uVar4) = bVar3;
              puVar23 = (uint *)*param_1;
              *(byte *)((int)puVar23 + (uVar10 & uVar4 - 4) + 4) = bVar3;
              goto LAB_018ca874;
            }
            cVar1 = *(char *)((int)puVar19 + uVar14);
            bVar3 = bVar3 >> 1;
            *(byte *)((int)puVar19 + uVar14) = bVar3;
            puVar23 = (uint *)*param_1;
            *(byte *)((int)puVar23 + (uVar14 - 4 & uVar10) + 4) = bVar3;
            if (cVar1 == -1) break;
            puVar5 = (undefined2 *)((int)puVar13 + ~uVar4 * 2);
            puVar12 = (undefined2 *)((int)puVar19 + ~uVar14 * 2);
            uVar2 = *puVar5;
            *puVar5 = *puVar12;
            *puVar12 = uVar2;
            puVar19 = (uint *)*param_1;
            uVar10 = param_1[1];
          }
          uVar10 = param_1[1];
          *(undefined1 *)((int)puVar23 + uVar4) = 0xff;
          *(undefined1 *)((int)puVar23 + (uVar10 & uVar4 - 4) + 4) = 0xff;
          *(undefined2 *)((int)puVar19 + ~uVar14 * 2) = *(undefined2 *)((int)puVar13 + ~uVar4 * 2);
        }
LAB_018ca874:
        bVar24 = uVar4 != uVar22;
        uVar4 = uVar4 + 1;
        puVar13 = puVar23;
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


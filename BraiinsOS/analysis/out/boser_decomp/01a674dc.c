// FUN_01a674dc @ 01a674dc size=1436 calls_out=7 calls_in=1
// strings: Hash table capacity overflow

uint FUN_01a674dc(undefined4 *param_1,undefined4 *param_2)

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
  uint *puVar14;
  int iVar15;
  int iVar16;
  uint uVar17;
  undefined4 uVar18;
  uint *puVar19;
  int iVar20;
  uint uVar21;
  int iVar22;
  bool bVar23;
  int iVar24;
  undefined4 *local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  uint *local_44;
  uint local_40;
  int local_3c;
  int local_38;
  uint *local_34;
  uint local_30;
  int local_2c;
  undefined4 local_28;
  
  iVar20 = param_1[3];
  uVar3 = iVar20 + 1;
  if (iVar20 == -1) {
LAB_01a67a4c:
                    /* WARNING: Subroutine does not return */
    FUN_012fb100("Hash table capacity overflow",0x39,&DAT_01cf1724);
  }
  uVar21 = param_1[1];
  uVar13 = uVar21 + 1;
  uVar9 = uVar21;
  if (7 < uVar21) {
    uVar9 = (uVar13 & 0xfffffff8) - (uVar13 >> 3);
  }
  if (uVar9 >> 1 < uVar3) {
    if (uVar3 < uVar9 + 1) {
      uVar3 = uVar9 + 1;
    }
    if (uVar3 < 0xf) {
      iVar16 = (uVar3 & 8) + 8;
      if (uVar3 < 4) {
        iVar16 = 4;
      }
    }
    else {
      if (0x1fffffff < uVar3) goto LAB_01a67a4c;
      iVar16 = (int)((ulonglong)(uVar3 << 3) * 0x24924925 >> 0x20);
      iVar16 = (0xffffffffU >> LZCOUNT((iVar16 + (uVar3 * 8 - iVar16 >> 1) >> 2) - 1)) + 1;
    }
    FUN_019790d4(&local_34,0xc,4,iVar16);
    if (local_34 == (uint *)0x0) {
      return local_30;
    }
    FUN_01bed93e(local_34,0xff,local_30 + 5);
    local_40 = local_30;
    local_38 = local_28;
    uStack_4c = 0xc;
    uStack_48 = 4;
    iVar16 = 0;
    local_3c = local_2c;
    local_44 = local_34;
    local_50 = param_1 + 4;
    if (iVar20 != 0) {
      puVar14 = (uint *)*param_1;
      iVar22 = 0;
      uVar3 = ~*puVar14 & 0x80808080;
      uVar5 = *param_2;
      uVar6 = param_2[1];
      uVar7 = param_2[2];
      uVar8 = param_2[3];
      puVar12 = puVar14;
      iVar24 = local_2c;
      iVar16 = iVar20;
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
        uVar9 = FUN_00701e18(uVar5,uVar6,uVar7,uVar8,puVar14[iVar11 * -3 + -3],
                             puVar14[iVar11 * -3 + -2],iVar24,iVar16);
        uVar13 = local_30 & uVar9;
        uVar21 = *(uint *)((int)local_34 + uVar13) & 0x80808080;
        if (uVar21 == 0) {
          iVar15 = 4;
          do {
            uVar13 = uVar13 + iVar15;
            iVar15 = iVar15 + 4;
            uVar13 = uVar13 & local_30;
            uVar21 = *(uint *)((int)local_34 + uVar13) & 0x80808080;
          } while (uVar21 == 0);
        }
        uVar13 = uVar13 + ((uint)LZCOUNT(uVar21 << 0x18 | (uVar21 >> 8 & 0xff) << 0x10 |
                                         (uVar21 >> 0x10 & 0xff) << 8 | uVar21 >> 0x18) >> 3) &
                 local_30;
        if (-1 < *(char *)((int)local_34 + uVar13)) {
          uVar13 = *local_34 & 0x80808080;
          uVar13 = (uint)LZCOUNT((*local_34 & 0x80) << 0x18 | (uVar13 >> 8 & 0xff) << 0x10 |
                                 (uVar13 >> 0x10 & 0xff) << 8 | uVar13 >> 0x18) >> 3;
        }
        uVar3 = uVar3 - 1 & uVar3;
        bVar2 = (byte)(uVar9 >> 0x19);
        *(byte *)((int)local_34 + uVar13) = bVar2;
        iVar20 = iVar20 + -1;
        *(byte *)((int)local_34 + (uVar13 - 4 & local_30) + 4) = bVar2;
        local_2c = iVar24;
        FUN_01bed4e2(local_34 + uVar13 * -3 + -3,puVar14 + iVar11 * -3 + -3,0xc);
        iVar24 = local_2c;
      } while (iVar20 != 0);
    }
    local_38 = iVar16;
    local_3c = local_2c - iVar16;
    iVar20 = 0;
    do {
      puVar12 = (uint *)param_1[iVar20];
      param_1[iVar20] = (&local_44)[iVar20];
      iVar16 = iVar20 + 1;
      (&local_44)[iVar20] = puVar12;
      iVar20 = iVar16;
    } while (iVar16 != 4);
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
      iVar20 = 0;
      do {
        puVar12[-iVar20] = (~(puVar12[-iVar20] >> 7) & 0x1010101) + (puVar12[-iVar20] | 0x7f7f7f7f);
        iVar20 = iVar20 + -1;
      } while (-iVar20 != uVar3);
      if (uVar13 < 4) {
        FUN_01bed864(puVar12 + 1,puVar12);
      }
      else {
        *(uint *)((int)puVar12 + uVar13) = *puVar12;
      }
      uVar5 = *param_2;
      iVar20 = 0;
      uVar6 = param_2[1];
      uVar7 = param_2[2];
      uVar8 = param_2[3];
      uVar3 = uVar21;
      uVar9 = 0;
      do {
        puVar14 = puVar12;
        if (*(char *)((int)puVar12 + uVar9) == -0x80) {
          puVar19 = puVar12;
          while( true ) {
            uVar4 = FUN_00701e18(uVar5,uVar6,uVar7,uVar8,puVar19[uVar9 * -3 + -3],
                                 puVar19[uVar9 * -3 + -2]);
            uVar10 = uVar3 & uVar4;
            uVar17 = *(uint *)((int)puVar19 + uVar10) & 0x80808080;
            uVar13 = uVar10;
            if (uVar17 == 0) {
              iVar16 = 4;
              do {
                uVar13 = uVar13 + iVar16 & uVar3;
                iVar16 = iVar16 + 4;
                uVar17 = *(uint *)((int)puVar19 + uVar13) & 0x80808080;
              } while (uVar17 == 0);
            }
            uVar13 = uVar13 + ((uint)LZCOUNT(uVar17 << 0x18 | (uVar17 >> 8 & 0xff) << 0x10 |
                                             (uVar17 >> 0x10 & 0xff) << 8 | uVar17 >> 0x18) >> 3) &
                     uVar3;
            if (-1 < *(char *)((int)puVar19 + uVar13)) {
              uVar13 = *puVar19 & 0x80808080;
              uVar13 = (uint)LZCOUNT((*puVar19 & 0x80) << 0x18 | (uVar13 >> 8 & 0xff) << 0x10 |
                                     (uVar13 >> 0x10 & 0xff) << 8 | uVar13 >> 0x18) >> 3;
            }
            bVar2 = (byte)(uVar4 >> 0x18);
            if (((uVar13 - uVar10 ^ uVar9 - uVar10) & uVar3) < 4) {
              bVar2 = bVar2 >> 1;
              *(byte *)((int)puVar19 + uVar9) = bVar2;
              puVar14 = (uint *)*param_1;
              *(byte *)((int)puVar14 + (uVar3 & uVar9 - 4) + 4) = bVar2;
              goto LAB_01a67748;
            }
            cVar1 = *(char *)((int)puVar19 + uVar13);
            bVar2 = bVar2 >> 1;
            *(byte *)((int)puVar19 + uVar13) = bVar2;
            puVar14 = (uint *)*param_1;
            *(byte *)((int)puVar14 + (uVar13 - 4 & uVar3) + 4) = bVar2;
            if (cVar1 == -1) break;
            iVar16 = -0xc;
            do {
              uVar18 = *(undefined4 *)((int)puVar12 + iVar16 + iVar20);
              *(undefined4 *)((int)puVar12 + iVar16 + iVar20) =
                   *(undefined4 *)((int)puVar19 + iVar16 + uVar13 * -0xc);
              *(undefined4 *)((int)puVar19 + iVar16 + uVar13 * -0xc) = uVar18;
              iVar16 = iVar16 + 4;
            } while (iVar16 != 0);
            puVar19 = (uint *)*param_1;
            uVar3 = param_1[1];
          }
          uVar3 = param_1[1];
          *(undefined1 *)((int)puVar14 + uVar9) = 0xff;
          *(undefined1 *)((int)puVar14 + (uVar3 & uVar9 - 4) + 4) = 0xff;
          FUN_01bed4e2(puVar19 + uVar13 * -3 + -3,puVar12 + (uVar9 + 1) * -3,0xc);
        }
LAB_01a67748:
        iVar20 = iVar20 + -0xc;
        bVar23 = uVar9 != uVar21;
        puVar12 = puVar14;
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


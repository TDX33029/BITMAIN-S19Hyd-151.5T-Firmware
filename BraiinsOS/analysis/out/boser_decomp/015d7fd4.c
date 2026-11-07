// FUN_015d7fd4 @ 015d7fd4 size=1424 calls_out=7 calls_in=1
// strings: Hash table capacity overflow

uint FUN_015d7fd4(undefined4 *param_1,undefined4 *param_2)

{
  char cVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint *puVar6;
  uint uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  int iVar12;
  int iVar13;
  uint uVar14;
  undefined4 uVar15;
  uint uVar16;
  uint *puVar17;
  int iVar18;
  uint *puVar19;
  int iVar20;
  uint uVar21;
  bool bVar22;
  int iVar23;
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
  
  iVar18 = param_1[3];
  uVar3 = iVar18 + 1;
  if (iVar18 == -1) {
LAB_015d853c:
                    /* WARNING: Subroutine does not return */
    FUN_012fb100("Hash table capacity overflow",0x39,&DAT_01cf1724);
  }
  uVar21 = param_1[1];
  uVar7 = uVar21 + 1;
  uVar4 = uVar21;
  if (7 < uVar21) {
    uVar4 = (uVar7 & 0xfffffff8) - (uVar7 >> 3);
  }
  if (uVar4 >> 1 < uVar3) {
    if (uVar3 < uVar4 + 1) {
      uVar3 = uVar4 + 1;
    }
    if (uVar3 < 0xf) {
      iVar13 = (uVar3 & 8) + 8;
      if (uVar3 < 4) {
        iVar13 = 4;
      }
    }
    else {
      if (0x1fffffff < uVar3) goto LAB_015d853c;
      iVar13 = (int)((ulonglong)(uVar3 << 3) * 0x24924925 >> 0x20);
      iVar13 = (0xffffffffU >> LZCOUNT((iVar13 + (uVar3 * 8 - iVar13 >> 1) >> 2) - 1)) + 1;
    }
    FUN_014533a8(&local_34,0x50,8,iVar13);
    if (local_34 == (uint *)0x0) {
      return local_30;
    }
    FUN_01bed93e(local_34,0xff,local_30 + 5);
    local_38 = local_28;
    local_40 = local_30;
    iVar13 = 0;
    local_3c = local_2c;
    local_44 = local_34;
    local_48 = 8;
    local_4c = 0x50;
    local_50 = param_1 + 4;
    if (iVar18 != 0) {
      puVar19 = (uint *)*param_1;
      uVar8 = *param_2;
      uVar9 = param_2[1];
      uVar10 = param_2[2];
      uVar11 = param_2[3];
      uVar3 = ~*puVar19 & 0x80808080;
      iVar20 = 0;
      puVar6 = puVar19;
      iVar23 = local_2c;
      iVar13 = iVar18;
      do {
        if (uVar3 == 0) {
          do {
            puVar6 = puVar6 + 1;
            iVar20 = iVar20 + 4;
          } while ((*puVar6 & 0x80808080) == 0x80808080);
          uVar3 = *puVar6 & 0x80808080 ^ 0x80808080;
        }
        uVar7 = iVar20 + ((uint)LZCOUNT(uVar3 << 0x18 | (uVar3 >> 8 & 0xff) << 0x10 |
                                        (uVar3 >> 0x10 & 0xff) << 8 | uVar3 >> 0x18) >> 3);
        uVar4 = FUN_01adafd4(uVar8,uVar9,uVar10,uVar11,puVar19[uVar7 * -0x14 + -0x13],
                             puVar19[uVar7 * -0x14 + -0x12],iVar23,iVar13);
        uVar21 = local_30 & uVar4;
        uVar16 = *(uint *)((int)local_34 + uVar21) & 0x80808080;
        if (uVar16 == 0) {
          iVar12 = 4;
          do {
            uVar21 = uVar21 + iVar12;
            iVar12 = iVar12 + 4;
            uVar21 = uVar21 & local_30;
            uVar16 = *(uint *)((int)local_34 + uVar21) & 0x80808080;
          } while (uVar16 == 0);
        }
        uVar21 = uVar21 + ((uint)LZCOUNT(uVar16 << 0x18 | (uVar16 >> 8 & 0xff) << 0x10 |
                                         (uVar16 >> 0x10 & 0xff) << 8 | uVar16 >> 0x18) >> 3) &
                 local_30;
        if (-1 < *(char *)((int)local_34 + uVar21)) {
          uVar21 = *local_34 & 0x80808080;
          uVar21 = (uint)LZCOUNT((*local_34 & 0x80) << 0x18 | (uVar21 >> 8 & 0xff) << 0x10 |
                                 (uVar21 >> 0x10 & 0xff) << 8 | uVar21 >> 0x18) >> 3;
        }
        uVar3 = uVar3 - 1 & uVar3;
        bVar2 = (byte)(uVar4 >> 0x19);
        *(byte *)((int)local_34 + uVar21) = bVar2;
        iVar18 = iVar18 + -1;
        *(byte *)((int)local_34 + (uVar21 - 4 & local_30) + 4) = bVar2;
        local_2c = iVar23;
        FUN_01bed4e2(local_34 + ~uVar21 * 0x14,puVar19 + ~uVar7 * 0x14,0x50);
        iVar23 = local_2c;
      } while (iVar18 != 0);
    }
    local_38 = iVar13;
    local_3c = local_2c - iVar13;
    iVar18 = 0;
    do {
      puVar6 = (uint *)param_1[iVar18];
      param_1[iVar18] = (&local_44)[iVar18];
      iVar13 = iVar18 + 1;
      (&local_44)[iVar18] = puVar6;
      iVar18 = iVar13;
    } while (iVar13 != 4);
    FUN_016660b8(&local_50);
  }
  else {
    if (uVar7 == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = uVar7 >> 2;
      if ((uVar7 & 3) != 0) {
        uVar3 = (uVar7 >> 2) + 1;
      }
      puVar6 = (uint *)*param_1;
      iVar18 = 0;
      do {
        puVar6[-iVar18] = (~(puVar6[-iVar18] >> 7) & 0x1010101) + (puVar6[-iVar18] | 0x7f7f7f7f);
        iVar18 = iVar18 + -1;
      } while (-iVar18 != uVar3);
      if (uVar7 < 4) {
        FUN_01bed864(puVar6 + 1,puVar6);
      }
      else {
        *(uint *)((int)puVar6 + uVar7) = *puVar6;
      }
      uVar8 = *param_2;
      iVar18 = 0;
      uVar9 = param_2[1];
      uVar10 = param_2[2];
      uVar11 = param_2[3];
      uVar3 = 0;
      uVar4 = uVar21;
      do {
        puVar19 = puVar6;
        if (*(char *)((int)puVar6 + uVar3) == -0x80) {
          puVar17 = puVar6;
          while( true ) {
            uVar16 = FUN_01adafd4(uVar8,uVar9,uVar10,uVar11,puVar17[uVar3 * -0x14 + -0x13],
                                  puVar17[uVar3 * -0x14 + -0x12]);
            uVar5 = uVar4 & uVar16;
            uVar14 = *(uint *)((int)puVar17 + uVar5) & 0x80808080;
            uVar7 = uVar5;
            if (uVar14 == 0) {
              iVar13 = 4;
              do {
                uVar7 = uVar7 + iVar13 & uVar4;
                iVar13 = iVar13 + 4;
                uVar14 = *(uint *)((int)puVar17 + uVar7) & 0x80808080;
              } while (uVar14 == 0);
            }
            uVar7 = uVar7 + ((uint)LZCOUNT(uVar14 << 0x18 | (uVar14 >> 8 & 0xff) << 0x10 |
                                           (uVar14 >> 0x10 & 0xff) << 8 | uVar14 >> 0x18) >> 3) &
                    uVar4;
            if (-1 < *(char *)((int)puVar17 + uVar7)) {
              uVar7 = *puVar17 & 0x80808080;
              uVar7 = (uint)LZCOUNT((*puVar17 & 0x80) << 0x18 | (uVar7 >> 8 & 0xff) << 0x10 |
                                    (uVar7 >> 0x10 & 0xff) << 8 | uVar7 >> 0x18) >> 3;
            }
            bVar2 = (byte)(uVar16 >> 0x18);
            if (((uVar7 - uVar5 ^ uVar3 - uVar5) & uVar4) < 4) {
              bVar2 = bVar2 >> 1;
              *(byte *)((int)puVar17 + uVar3) = bVar2;
              puVar19 = (uint *)*param_1;
              *(byte *)((int)puVar19 + (uVar4 & uVar3 - 4) + 4) = bVar2;
              goto LAB_015d8244;
            }
            cVar1 = *(char *)((int)puVar17 + uVar7);
            bVar2 = bVar2 >> 1;
            *(byte *)((int)puVar17 + uVar7) = bVar2;
            puVar19 = (uint *)*param_1;
            *(byte *)((int)puVar19 + (uVar7 - 4 & uVar4) + 4) = bVar2;
            if (cVar1 == -1) break;
            iVar13 = -0x50;
            do {
              uVar15 = *(undefined4 *)((int)puVar6 + iVar13 + iVar18);
              *(undefined4 *)((int)puVar6 + iVar13 + iVar18) =
                   *(undefined4 *)((int)puVar17 + iVar13 + uVar7 * -0x50);
              *(undefined4 *)((int)puVar17 + iVar13 + uVar7 * -0x50) = uVar15;
              iVar13 = iVar13 + 4;
            } while (iVar13 != 0);
            puVar17 = (uint *)*param_1;
            uVar4 = param_1[1];
          }
          uVar4 = param_1[1];
          *(undefined1 *)((int)puVar19 + uVar3) = 0xff;
          *(undefined1 *)((int)puVar19 + (uVar4 & uVar3 - 4) + 4) = 0xff;
          FUN_01bed4e2(puVar17 + ~uVar7 * 0x14,puVar6 + ~uVar3 * 0x14,0x50);
        }
LAB_015d8244:
        iVar18 = iVar18 + -0x50;
        bVar22 = uVar3 != uVar21;
        uVar3 = uVar3 + 1;
        puVar6 = puVar19;
      } while (bVar22);
      uVar3 = param_1[1];
      if (7 < uVar3) {
        uVar3 = (uVar3 + 1 & 0xfffffff8) - (uVar3 + 1 >> 3);
      }
    }
    param_1[2] = uVar3 - param_1[3];
  }
  return 0x80000001;
}


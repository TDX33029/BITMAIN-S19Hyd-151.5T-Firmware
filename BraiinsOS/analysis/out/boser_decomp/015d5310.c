// FUN_015d5310 @ 015d5310 size=1400 calls_out=7 calls_in=1
// strings: Hash table capacity overflow

uint FUN_015d5310(undefined4 *param_1,undefined4 *param_2)

{
  char cVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint *puVar6;
  uint uVar7;
  undefined4 uVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  uint uVar16;
  uint *puVar17;
  int iVar18;
  uint *puVar19;
  uint uVar20;
  int iVar21;
  bool bVar22;
  int iVar23;
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
  
  iVar21 = param_1[3];
  uVar3 = iVar21 + 1;
  if (iVar21 == -1) {
LAB_015d5860:
                    /* WARNING: Subroutine does not return */
    FUN_012fb100("Hash table capacity overflow",0x39,&DAT_01cf1724);
  }
  uVar20 = param_1[1];
  uVar7 = uVar20 + 1;
  uVar4 = uVar20;
  if (7 < uVar20) {
    uVar4 = (uVar7 & 0xfffffff8) - (uVar7 >> 3);
  }
  if (uVar4 >> 1 < uVar3) {
    if (uVar3 < uVar4 + 1) {
      uVar3 = uVar4 + 1;
    }
    if (uVar3 < 0xf) {
      iVar10 = (uVar3 & 8) + 8;
      if (uVar3 < 4) {
        iVar10 = 4;
      }
    }
    else {
      if (0x1fffffff < uVar3) goto LAB_015d5860;
      iVar10 = (int)((ulonglong)(uVar3 << 3) * 0x24924925 >> 0x20);
      iVar10 = (0xffffffffU >> LZCOUNT((iVar10 + (uVar3 * 8 - iVar10 >> 1) >> 2) - 1)) + 1;
    }
    FUN_014533a8(&local_34,0xb0,8,iVar10);
    if (local_34 == (uint *)0x0) {
      return local_30;
    }
    FUN_01bed93e(local_34,0xff,local_30 + 5);
    local_40 = local_30;
    local_38 = local_28;
    uStack_4c = 0xb0;
    uStack_48 = 8;
    iVar10 = 0;
    local_3c = local_2c;
    local_44 = local_34;
    local_50 = param_1 + 4;
    if (iVar21 != 0) {
      puVar19 = (uint *)*param_1;
      uVar13 = *param_2;
      iVar18 = 0;
      uVar14 = param_2[1];
      uVar3 = ~*puVar19 & 0x80808080;
      uVar15 = param_2[2];
      uVar8 = param_2[3];
      puVar6 = puVar19;
      iVar23 = local_2c;
      iVar10 = iVar21;
      do {
        if (uVar3 == 0) {
          do {
            puVar6 = puVar6 + 1;
            iVar18 = iVar18 + 4;
          } while ((*puVar6 & 0x80808080) == 0x80808080);
          uVar3 = *puVar6 & 0x80808080 ^ 0x80808080;
        }
        uVar4 = iVar18 + ((uint)LZCOUNT(uVar3 << 0x18 | (uVar3 >> 8 & 0xff) << 0x10 |
                                        (uVar3 >> 0x10 & 0xff) << 8 | uVar3 >> 0x18) >> 3);
        uVar7 = FUN_01adafd4(uVar13,uVar14,uVar15,uVar8,puVar19[uVar4 * -0x2c + -0x2b],
                             puVar19[uVar4 * -0x2c + -0x2a],iVar23,iVar10);
        uVar20 = local_30 & uVar7;
        uVar16 = *(uint *)((int)local_34 + uVar20) & 0x80808080;
        if (uVar16 == 0) {
          iVar9 = 4;
          do {
            uVar20 = uVar20 + iVar9;
            iVar9 = iVar9 + 4;
            uVar20 = uVar20 & local_30;
            uVar16 = *(uint *)((int)local_34 + uVar20) & 0x80808080;
          } while (uVar16 == 0);
        }
        uVar20 = uVar20 + ((uint)LZCOUNT(uVar16 << 0x18 | (uVar16 >> 8 & 0xff) << 0x10 |
                                         (uVar16 >> 0x10 & 0xff) << 8 | uVar16 >> 0x18) >> 3) &
                 local_30;
        if (-1 < *(char *)((int)local_34 + uVar20)) {
          uVar20 = *local_34 & 0x80808080;
          uVar20 = (uint)LZCOUNT((*local_34 & 0x80) << 0x18 | (uVar20 >> 8 & 0xff) << 0x10 |
                                 (uVar20 >> 0x10 & 0xff) << 8 | uVar20 >> 0x18) >> 3;
        }
        uVar3 = uVar3 - 1 & uVar3;
        bVar2 = (byte)(uVar7 >> 0x19);
        *(byte *)((int)local_34 + uVar20) = bVar2;
        iVar21 = iVar21 + -1;
        *(byte *)((int)local_34 + (uVar20 - 4 & local_30) + 4) = bVar2;
        local_2c = iVar23;
        FUN_01bed4e2(local_34 + ~uVar20 * 0x2c,puVar19 + ~uVar4 * 0x2c,0xb0);
        iVar23 = local_2c;
      } while (iVar21 != 0);
    }
    local_38 = iVar10;
    local_3c = local_2c - iVar10;
    iVar21 = 0;
    do {
      puVar6 = (uint *)param_1[iVar21];
      param_1[iVar21] = (&local_44)[iVar21];
      iVar10 = iVar21 + 1;
      (&local_44)[iVar21] = puVar6;
      iVar21 = iVar10;
    } while (iVar10 != 4);
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
      iVar21 = 0;
      do {
        puVar6[-iVar21] = (~(puVar6[-iVar21] >> 7) & 0x1010101) + (puVar6[-iVar21] | 0x7f7f7f7f);
        iVar21 = iVar21 + -1;
      } while (-iVar21 != uVar3);
      if (uVar7 < 4) {
        FUN_01bed864(puVar6 + 1,puVar6);
      }
      else {
        *(uint *)((int)puVar6 + uVar7) = *puVar6;
      }
      uVar8 = *param_2;
      iVar21 = 0;
      uVar13 = param_2[1];
      uVar14 = param_2[2];
      uVar15 = param_2[3];
      uVar3 = 0;
      uVar4 = uVar20;
      do {
        puVar19 = puVar6;
        if (*(char *)((int)puVar6 + uVar3) == -0x80) {
          puVar17 = puVar6;
          while( true ) {
            uVar16 = FUN_01adafd4(uVar8,uVar13,uVar14,uVar15,puVar17[uVar3 * -0x2c + -0x2b],
                                  puVar17[uVar3 * -0x2c + -0x2a]);
            uVar5 = uVar4 & uVar16;
            uVar11 = *(uint *)((int)puVar17 + uVar5) & 0x80808080;
            uVar7 = uVar5;
            if (uVar11 == 0) {
              iVar10 = 4;
              do {
                uVar7 = uVar7 + iVar10 & uVar4;
                iVar10 = iVar10 + 4;
                uVar11 = *(uint *)((int)puVar17 + uVar7) & 0x80808080;
              } while (uVar11 == 0);
            }
            uVar7 = uVar7 + ((uint)LZCOUNT(uVar11 << 0x18 | (uVar11 >> 8 & 0xff) << 0x10 |
                                           (uVar11 >> 0x10 & 0xff) << 8 | uVar11 >> 0x18) >> 3) &
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
              goto LAB_015d5570;
            }
            cVar1 = *(char *)((int)puVar17 + uVar7);
            bVar2 = bVar2 >> 1;
            *(byte *)((int)puVar17 + uVar7) = bVar2;
            puVar19 = (uint *)*param_1;
            *(byte *)((int)puVar19 + (uVar7 - 4 & uVar4) + 4) = bVar2;
            if (cVar1 == -1) break;
            iVar10 = -0xb0;
            do {
              uVar12 = *(undefined4 *)((int)puVar6 + iVar10 + iVar21);
              *(undefined4 *)((int)puVar6 + iVar10 + iVar21) =
                   *(undefined4 *)((int)puVar17 + iVar10 + uVar7 * -0xb0);
              *(undefined4 *)((int)puVar17 + iVar10 + uVar7 * -0xb0) = uVar12;
              iVar10 = iVar10 + 4;
            } while (iVar10 != 0);
            puVar17 = (uint *)*param_1;
            uVar4 = param_1[1];
          }
          uVar4 = param_1[1];
          *(undefined1 *)((int)puVar19 + uVar3) = 0xff;
          *(undefined1 *)((int)puVar19 + (uVar4 & uVar3 - 4) + 4) = 0xff;
          FUN_01bed4e2(puVar17 + ~uVar7 * 0x2c,puVar6 + ~uVar3 * 0x2c,0xb0);
        }
LAB_015d5570:
        iVar21 = iVar21 + -0xb0;
        bVar22 = uVar3 != uVar20;
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


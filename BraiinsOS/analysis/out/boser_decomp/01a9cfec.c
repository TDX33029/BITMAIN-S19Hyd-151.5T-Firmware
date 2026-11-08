// FUN_01a9cfec @ 01a9cfec size=1348 calls_out=7 calls_in=1
// strings: Hash table capacity overflow

uint FUN_01a9cfec(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6)

{
  char cVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint *puVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  undefined4 uVar13;
  uint *puVar14;
  int iVar15;
  int iVar16;
  uint uVar17;
  uint *puVar18;
  bool bVar19;
  int iVar20;
  uint *local_44;
  uint local_40;
  int local_3c;
  int local_38;
  uint *local_34;
  uint local_30;
  int local_2c;
  undefined4 local_28;
  
  iVar15 = param_1[3];
  uVar3 = iVar15 + 1;
  if (iVar15 == -1) {
LAB_01a9d508:
                    /* WARNING: Subroutine does not return */
    FUN_012fb100("Hash table capacity overflow",0x39,&DAT_01cf1724);
  }
  uVar17 = param_1[1];
  uVar9 = uVar17 + 1;
  uVar6 = uVar17;
  if (7 < uVar17) {
    uVar6 = (uVar9 & 0xfffffff8) - (uVar9 >> 3);
  }
  if (uVar6 >> 1 < uVar3) {
    if (uVar3 < uVar6 + 1) {
      uVar3 = uVar6 + 1;
    }
    if (uVar3 < 0xf) {
      iVar11 = (uVar3 & 8) + 8;
      if (uVar3 < 4) {
        iVar11 = 4;
      }
    }
    else {
      if (0x1fffffff < uVar3) goto LAB_01a9d508;
      iVar11 = (int)((ulonglong)(uVar3 << 3) * 0x24924925 >> 0x20);
      iVar11 = (0xffffffffU >> LZCOUNT((iVar11 + (uVar3 * 8 - iVar11 >> 1) >> 2) - 1)) + 1;
    }
    FUN_019790d4(&local_34,0x10,4,iVar11);
    if (local_34 == (uint *)0x0) {
      return local_30;
    }
    FUN_01bed93e(local_34,0xff,local_30 + 5);
    local_38 = local_28;
    local_40 = local_30;
    iVar11 = 0;
    local_3c = local_2c;
    local_44 = local_34;
    if (iVar15 != 0) {
      puVar18 = (uint *)*param_1;
      iVar16 = 0;
      uVar3 = ~*puVar18 & 0x80808080;
      puVar8 = puVar18;
      iVar20 = local_2c;
      iVar11 = iVar15;
      do {
        if (uVar3 == 0) {
          do {
            puVar8 = puVar8 + 1;
            iVar16 = iVar16 + 4;
          } while ((*puVar8 & 0x80808080) == 0x80808080);
          uVar3 = *puVar8 & 0x80808080 ^ 0x80808080;
        }
        iVar5 = iVar16 + ((uint)LZCOUNT(uVar3 << 0x18 | (uVar3 >> 8 & 0xff) << 0x10 |
                                        (uVar3 >> 0x10 & 0xff) << 8 | uVar3 >> 0x18) >> 3);
        uVar6 = FUN_01adafd4(param_3,param_4,param_5,param_6,puVar18[iVar5 * -4 + -3],
                             puVar18[iVar5 * -4 + -2],iVar20,iVar11);
        uVar9 = local_30 & uVar6;
        uVar17 = *(uint *)((int)local_34 + uVar9) & 0x80808080;
        if (uVar17 == 0) {
          iVar10 = 4;
          do {
            uVar9 = uVar9 + iVar10;
            iVar10 = iVar10 + 4;
            uVar9 = uVar9 & local_30;
            uVar17 = *(uint *)((int)local_34 + uVar9) & 0x80808080;
          } while (uVar17 == 0);
        }
        uVar9 = uVar9 + ((uint)LZCOUNT(uVar17 << 0x18 | (uVar17 >> 8 & 0xff) << 0x10 |
                                       (uVar17 >> 0x10 & 0xff) << 8 | uVar17 >> 0x18) >> 3) &
                local_30;
        if (-1 < *(char *)((int)local_34 + uVar9)) {
          uVar9 = *local_34 & 0x80808080;
          uVar9 = (uint)LZCOUNT((*local_34 & 0x80) << 0x18 | (uVar9 >> 8 & 0xff) << 0x10 |
                                (uVar9 >> 0x10 & 0xff) << 8 | uVar9 >> 0x18) >> 3;
        }
        uVar3 = uVar3 - 1 & uVar3;
        bVar2 = (byte)(uVar6 >> 0x19);
        *(byte *)((int)local_34 + uVar9) = bVar2;
        iVar15 = iVar15 + -1;
        *(byte *)((int)local_34 + (uVar9 - 4 & local_30) + 4) = bVar2;
        local_2c = iVar20;
        FUN_01bed4e2(local_34 + uVar9 * -4 + -4,puVar18 + iVar5 * -4 + -4,0x10);
        iVar20 = local_2c;
      } while (iVar15 != 0);
    }
    local_38 = iVar11;
    local_3c = local_2c - iVar11;
    iVar15 = 0;
    do {
      puVar8 = (uint *)param_1[iVar15];
      param_1[iVar15] = (&local_44)[iVar15];
      iVar11 = iVar15 + 1;
      (&local_44)[iVar15] = puVar8;
      iVar15 = iVar11;
    } while (iVar11 != 4);
    if ((local_40 != 0) && (iVar15 = local_40 * 0x10 + 0x10, local_40 + iVar15 != -5)) {
      thunk_FUN_01be4678((int)local_44 - iVar15);
    }
  }
  else {
    if (uVar9 == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = uVar9 >> 2;
      if ((uVar9 & 3) != 0) {
        uVar3 = (uVar9 >> 2) + 1;
      }
      puVar8 = (uint *)*param_1;
      iVar15 = 0;
      do {
        puVar8[-iVar15] = (~(puVar8[-iVar15] >> 7) & 0x1010101) + (puVar8[-iVar15] | 0x7f7f7f7f);
        iVar15 = iVar15 + -1;
      } while (-iVar15 != uVar3);
      if (uVar9 < 4) {
        FUN_01bed864(puVar8 + 1,puVar8);
      }
      else {
        *(uint *)((int)puVar8 + uVar9) = *puVar8;
      }
      iVar15 = 0;
      uVar3 = 0;
      uVar6 = uVar17;
      do {
        puVar18 = puVar8;
        if (*(char *)((int)puVar8 + uVar3) == -0x80) {
          puVar14 = puVar8;
          while( true ) {
            uVar4 = FUN_01adafd4(param_3,param_4,param_5,param_6,puVar14[uVar3 * -4 + -3],
                                 puVar14[uVar3 * -4 + -2]);
            uVar7 = uVar6 & uVar4;
            uVar12 = *(uint *)((int)puVar14 + uVar7) & 0x80808080;
            uVar9 = uVar7;
            if (uVar12 == 0) {
              iVar11 = 4;
              do {
                uVar9 = uVar9 + iVar11 & uVar6;
                iVar11 = iVar11 + 4;
                uVar12 = *(uint *)((int)puVar14 + uVar9) & 0x80808080;
              } while (uVar12 == 0);
            }
            uVar9 = uVar9 + ((uint)LZCOUNT(uVar12 << 0x18 | (uVar12 >> 8 & 0xff) << 0x10 |
                                           (uVar12 >> 0x10 & 0xff) << 8 | uVar12 >> 0x18) >> 3) &
                    uVar6;
            if (-1 < *(char *)((int)puVar14 + uVar9)) {
              uVar9 = *puVar14 & 0x80808080;
              uVar9 = (uint)LZCOUNT((*puVar14 & 0x80) << 0x18 | (uVar9 >> 8 & 0xff) << 0x10 |
                                    (uVar9 >> 0x10 & 0xff) << 8 | uVar9 >> 0x18) >> 3;
            }
            bVar2 = (byte)(uVar4 >> 0x18);
            if (((uVar9 - uVar7 ^ uVar3 - uVar7) & uVar6) < 4) {
              bVar2 = bVar2 >> 1;
              *(byte *)((int)puVar14 + uVar3) = bVar2;
              puVar18 = (uint *)*param_1;
              *(byte *)((int)puVar18 + (uVar6 & uVar3 - 4) + 4) = bVar2;
              goto LAB_01a9d230;
            }
            cVar1 = *(char *)((int)puVar14 + uVar9);
            bVar2 = bVar2 >> 1;
            *(byte *)((int)puVar14 + uVar9) = bVar2;
            puVar18 = (uint *)*param_1;
            *(byte *)((int)puVar18 + (uVar9 - 4 & uVar6) + 4) = bVar2;
            if (cVar1 == -1) break;
            iVar11 = -0x10;
            do {
              uVar13 = *(undefined4 *)((int)puVar8 + iVar11 + iVar15);
              *(undefined4 *)((int)puVar8 + iVar11 + iVar15) =
                   *(undefined4 *)((int)puVar14 + iVar11 + uVar9 * -0x10);
              *(undefined4 *)((int)puVar14 + iVar11 + uVar9 * -0x10) = uVar13;
              iVar11 = iVar11 + 4;
            } while (iVar11 != 0);
            puVar14 = (uint *)*param_1;
            uVar6 = param_1[1];
          }
          *(undefined1 *)((int)puVar18 + uVar3) = 0xff;
          uVar6 = param_1[1];
          *(undefined1 *)((int)puVar18 + (uVar6 & uVar3 - 4) + 4) = 0xff;
          FUN_01bed4e2(puVar14 + uVar9 * -4 + -4,puVar8 + ~uVar3 * 4,0x10);
        }
LAB_01a9d230:
        iVar15 = iVar15 + -0x10;
        bVar19 = uVar3 != uVar17;
        uVar3 = uVar3 + 1;
        puVar8 = puVar18;
      } while (bVar19);
      uVar3 = param_1[1];
      iVar15 = param_1[3];
      if (7 < uVar3) {
        uVar3 = (uVar3 + 1 & 0xfffffff8) - (uVar3 + 1 >> 3);
      }
    }
    param_1[2] = uVar3 - iVar15;
  }
  return 0x80000001;
}


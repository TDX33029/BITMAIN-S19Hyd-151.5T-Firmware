// FUN_015305b0 @ 015305b0 size=1232 calls_out=6 calls_in=1
// strings: Hash table capacity overflow

uint FUN_015305b0(undefined4 *param_1,undefined4 param_2)

{
  char cVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint *puVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  undefined4 uVar12;
  uint uVar13;
  uint uVar14;
  uint *puVar15;
  uint *puVar16;
  int iVar17;
  int iVar18;
  bool bVar19;
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
LAB_01530a58:
                    /* WARNING: Subroutine does not return */
    FUN_012fb100("Hash table capacity overflow",0x39,&DAT_01cf1724);
  }
  uVar14 = param_1[1];
  uVar8 = uVar14 + 1;
  uVar5 = uVar14;
  if (7 < uVar14) {
    uVar5 = (uVar8 & 0xfffffff8) - (uVar8 >> 3);
  }
  if (uVar5 >> 1 < uVar3) {
    if (uVar3 < uVar5 + 1) {
      uVar3 = uVar5 + 1;
    }
    if (uVar3 < 0xf) {
      iVar10 = (uVar3 & 8) + 8;
      if (uVar3 < 4) {
        iVar10 = 4;
      }
    }
    else {
      if (0x1fffffff < uVar3) goto LAB_01530a58;
      iVar10 = (int)((ulonglong)(uVar3 << 3) * 0x24924925 >> 0x20);
      iVar10 = (0xffffffffU >> LZCOUNT((iVar10 + (uVar3 * 8 - iVar10 >> 1) >> 2) - 1)) + 1;
    }
    FUN_019790d4(&local_34,4,4,iVar10);
    if (local_34 == (uint *)0x0) {
      return local_30;
    }
    FUN_01bed93e(local_34,0xff,local_30 + 5);
    local_40 = local_30;
    iVar10 = 0;
    local_38 = local_28;
    local_3c = local_2c;
    local_44 = local_34;
    local_48 = 4;
    local_4c = 4;
    local_50 = param_1 + 4;
    if (iVar18 != 0) {
      puVar15 = (uint *)*param_1;
      iVar17 = 0;
      uVar3 = ~*puVar15 & 0x80808080;
      puVar7 = puVar15;
      iVar10 = iVar18;
      do {
        if (uVar3 == 0) {
          do {
            puVar7 = puVar7 + 1;
            iVar17 = iVar17 + 4;
          } while ((*puVar7 & 0x80808080) == 0x80808080);
          uVar3 = *puVar7 & 0x80808080 ^ 0x80808080;
        }
        uVar8 = iVar17 + ((uint)LZCOUNT(uVar3 << 0x18 | (uVar3 >> 8 & 0xff) << 0x10 |
                                        (uVar3 >> 0x10 & 0xff) << 8 | uVar3 >> 0x18) >> 3);
        uVar12 = *(undefined4 *)(puVar15[-1 - uVar8] + 8);
        uVar5 = FUN_01676068(param_2,*(undefined4 *)(puVar15[-1 - uVar8] + 4),uVar12,uVar12,local_2c
                             ,iVar10);
        uVar14 = local_30 & uVar5;
        uVar13 = *(uint *)((int)local_34 + uVar14) & 0x80808080;
        if (uVar13 == 0) {
          iVar9 = 4;
          do {
            uVar14 = uVar14 + iVar9;
            iVar9 = iVar9 + 4;
            uVar14 = uVar14 & local_30;
            uVar13 = *(uint *)((int)local_34 + uVar14) & 0x80808080;
          } while (uVar13 == 0);
        }
        uVar14 = uVar14 + ((uint)LZCOUNT(uVar13 << 0x18 | (uVar13 >> 8 & 0xff) << 0x10 |
                                         (uVar13 >> 0x10 & 0xff) << 8 | uVar13 >> 0x18) >> 3) &
                 local_30;
        if (-1 < *(char *)((int)local_34 + uVar14)) {
          uVar14 = *local_34 & 0x80808080;
          uVar14 = (uint)LZCOUNT((*local_34 & 0x80) << 0x18 | (uVar14 >> 8 & 0xff) << 0x10 |
                                 (uVar14 >> 0x10 & 0xff) << 8 | uVar14 >> 0x18) >> 3;
        }
        uVar3 = uVar3 - 1 & uVar3;
        bVar2 = (byte)(uVar5 >> 0x19);
        *(byte *)((int)local_34 + uVar14) = bVar2;
        iVar18 = iVar18 + -1;
        *(byte *)((int)local_34 + (uVar14 - 4 & local_30) + 4) = bVar2;
        local_34[~uVar14] = puVar15[~uVar8];
      } while (iVar18 != 0);
    }
    local_38 = iVar10;
    local_3c = local_2c - iVar10;
    iVar18 = 0;
    do {
      puVar7 = (uint *)param_1[iVar18];
      param_1[iVar18] = (&local_44)[iVar18];
      iVar10 = iVar18 + 1;
      (&local_44)[iVar18] = puVar7;
      iVar18 = iVar10;
    } while (iVar10 != 4);
    FUN_016660b8(&local_50);
  }
  else {
    if (uVar8 == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = uVar8 >> 2;
      if ((uVar8 & 3) != 0) {
        uVar3 = (uVar8 >> 2) + 1;
      }
      puVar7 = (uint *)*param_1;
      iVar18 = 0;
      do {
        puVar7[-iVar18] = (~(puVar7[-iVar18] >> 7) & 0x1010101) + (puVar7[-iVar18] | 0x7f7f7f7f);
        iVar18 = iVar18 + -1;
      } while (-iVar18 != uVar3);
      if (uVar8 < 4) {
        FUN_01bed864(puVar7 + 1,puVar7);
      }
      else {
        *(uint *)((int)puVar7 + uVar8) = *puVar7;
      }
      uVar3 = 0;
      uVar5 = uVar14;
      do {
        puVar15 = puVar7;
        if (*(char *)((int)puVar7 + uVar3) == -0x80) {
          uVar8 = ~uVar3;
          puVar16 = puVar7;
          while( true ) {
            uVar4 = FUN_01676068(param_2,*(undefined4 *)(puVar16[-1 - uVar3] + 4),
                                 *(undefined4 *)(puVar16[-1 - uVar3] + 8));
            uVar6 = uVar5 & uVar4;
            uVar11 = *(uint *)((int)puVar16 + uVar6) & 0x80808080;
            uVar13 = uVar6;
            if (uVar11 == 0) {
              iVar18 = 4;
              do {
                uVar13 = uVar13 + iVar18;
                iVar18 = iVar18 + 4;
                uVar13 = uVar13 & uVar5;
                uVar11 = *(uint *)((int)puVar16 + uVar13) & 0x80808080;
              } while (uVar11 == 0);
            }
            uVar13 = uVar13 + ((uint)LZCOUNT(uVar11 << 0x18 | (uVar11 >> 8 & 0xff) << 0x10 |
                                             (uVar11 >> 0x10 & 0xff) << 8 | uVar11 >> 0x18) >> 3) &
                     uVar5;
            if (-1 < *(char *)((int)puVar16 + uVar13)) {
              uVar13 = *puVar16 & 0x80808080;
              uVar13 = (uint)LZCOUNT((*puVar16 & 0x80) << 0x18 | (uVar13 >> 8 & 0xff) << 0x10 |
                                     (uVar13 >> 0x10 & 0xff) << 8 | uVar13 >> 0x18) >> 3;
            }
            bVar2 = (byte)(uVar4 >> 0x18);
            if (((uVar13 - uVar6 ^ uVar3 - uVar6) & uVar5) < 4) {
              bVar2 = bVar2 >> 1;
              *(byte *)((int)puVar16 + uVar3) = bVar2;
              puVar15 = (uint *)*param_1;
              *(byte *)((int)puVar15 + (uVar5 & uVar3 - 4) + 4) = bVar2;
              goto LAB_015307b8;
            }
            cVar1 = *(char *)((int)puVar16 + uVar13);
            bVar2 = bVar2 >> 1;
            *(byte *)((int)puVar16 + uVar13) = bVar2;
            puVar15 = (uint *)*param_1;
            *(byte *)((int)puVar15 + (uVar13 - 4 & uVar5) + 4) = bVar2;
            uVar13 = ~uVar13;
            if (cVar1 == -1) break;
            uVar5 = puVar7[uVar8];
            puVar7[uVar8] = puVar16[uVar13];
            puVar16[uVar13] = uVar5;
            puVar16 = (uint *)*param_1;
            uVar5 = param_1[1];
          }
          uVar5 = param_1[1];
          *(undefined1 *)((int)puVar15 + uVar3) = 0xff;
          *(undefined1 *)((int)puVar15 + (uVar5 & uVar3 - 4) + 4) = 0xff;
          puVar16[uVar13] = puVar7[uVar8];
        }
LAB_015307b8:
        bVar19 = uVar3 != uVar14;
        uVar3 = uVar3 + 1;
        puVar7 = puVar15;
      } while (bVar19);
      uVar3 = param_1[1];
      if (7 < uVar3) {
        uVar3 = (uVar3 + 1 & 0xfffffff8) - (uVar3 + 1 >> 3);
      }
    }
    param_1[2] = uVar3 - param_1[3];
  }
  return 0x80000001;
}


// FUN_01aaf2d0 @ 01aaf2d0 size=1304 calls_out=6 calls_in=1
// strings: Hash table capacity overflow

uint FUN_01aaf2d0(undefined4 *param_1)

{
  char cVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  uint *puVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  undefined4 uVar10;
  uint *puVar11;
  int iVar12;
  uint uVar13;
  uint *puVar14;
  int iVar15;
  uint uVar16;
  bool bVar17;
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
  
  iVar8 = param_1[3];
  uVar3 = iVar8 + 1;
  if (iVar8 == -1) {
LAB_01aaf7c0:
                    /* WARNING: Subroutine does not return */
    FUN_012fb100("Hash table capacity overflow",0x39,&DAT_01cf1724);
  }
  uVar13 = param_1[1];
  uVar6 = uVar13 + 1;
  uVar4 = uVar13;
  if (7 < uVar13) {
    uVar4 = (uVar6 & 0xfffffff8) - (uVar6 >> 3);
  }
  if (uVar4 >> 1 < uVar3) {
    if (uVar3 < uVar4 + 1) {
      uVar3 = uVar4 + 1;
    }
    if (uVar3 < 0xf) {
      iVar7 = (uVar3 & 8) + 8;
      if (uVar3 < 4) {
        iVar7 = 4;
      }
    }
    else {
      if (0x1fffffff < uVar3) goto LAB_01aaf7c0;
      iVar7 = (int)((ulonglong)(uVar3 << 3) * 0x24924925 >> 0x20);
      iVar7 = (0xffffffffU >> LZCOUNT((iVar7 + (uVar3 * 8 - iVar7 >> 1) >> 2) - 1)) + 1;
    }
    FUN_016c94c4(&local_34,0x18,4,iVar7);
    if (local_34 == (uint *)0x0) {
      return local_30;
    }
    FUN_01bed93e(local_34,0xff,local_30 + 5);
    local_38 = local_28;
    local_3c = local_2c;
    local_40 = local_30;
    local_44 = local_34;
    local_48 = 4;
    local_4c = 0x18;
    iVar7 = 0;
    local_50 = param_1 + 4;
    if (iVar8 != 0) {
      puVar14 = (uint *)*param_1;
      iVar12 = 0;
      uVar3 = ~*puVar14 & 0x80808080;
      puVar5 = puVar14;
      iVar7 = iVar8;
      do {
        if (uVar3 == 0) {
          do {
            puVar5 = puVar5 + 1;
            iVar12 = iVar12 + 4;
          } while ((*puVar5 & 0x80808080) == 0x80808080);
          uVar3 = *puVar5 & 0x80808080 ^ 0x80808080;
        }
        uVar4 = iVar12 + ((uint)LZCOUNT(uVar3 << 0x18 | (uVar3 >> 8 & 0xff) << 0x10 |
                                        (uVar3 >> 0x10 & 0xff) << 8 | uVar3 >> 0x18) >> 3);
        uVar6 = local_30 & puVar14[uVar4 * -6 + -4];
        uVar13 = *(uint *)((int)local_34 + uVar6) & 0x80808080;
        if (uVar13 == 0) {
          iVar15 = 4;
          do {
            uVar6 = uVar6 + iVar15;
            iVar15 = iVar15 + 4;
            uVar6 = uVar6 & local_30;
            uVar13 = *(uint *)((int)local_34 + uVar6) & 0x80808080;
          } while (uVar13 == 0);
        }
        uVar6 = uVar6 + ((uint)LZCOUNT(uVar13 << 0x18 | (uVar13 >> 8 & 0xff) << 0x10 |
                                       (uVar13 >> 0x10 & 0xff) << 8 | uVar13 >> 0x18) >> 3) &
                local_30;
        if (-1 < *(char *)((int)local_34 + uVar6)) {
          uVar6 = *local_34 & 0x80808080;
          uVar6 = (uint)LZCOUNT((*local_34 & 0x80) << 0x18 | (uVar6 >> 8 & 0xff) << 0x10 |
                                (uVar6 >> 0x10 & 0xff) << 8 | uVar6 >> 0x18) >> 3;
        }
        uVar3 = uVar3 - 1 & uVar3;
        bVar2 = (byte)(puVar14[uVar4 * -6 + -4] >> 0x19);
        *(byte *)((int)local_34 + uVar6) = bVar2;
        *(byte *)((int)local_34 + (uVar6 - 4 & local_30) + 4) = bVar2;
        iVar7 = iVar7 + -1;
        FUN_01bed4e2(local_34 + ~uVar6 * 6,puVar14 + ~uVar4 * 6,0x18);
      } while (iVar7 != 0);
      iVar7 = iVar8;
    }
    local_38 = iVar7;
    local_3c = local_2c - iVar7;
    iVar8 = 0;
    do {
      puVar5 = (uint *)param_1[iVar8];
      param_1[iVar8] = (&local_44)[iVar8];
      iVar7 = iVar8 + 1;
      (&local_44)[iVar8] = puVar5;
      iVar8 = iVar7;
    } while (iVar7 != 4);
    FUN_016660b8(&local_50);
  }
  else {
    if (uVar6 == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = uVar6 >> 2;
      if ((uVar6 & 3) != 0) {
        uVar3 = (uVar6 >> 2) + 1;
      }
      puVar5 = (uint *)*param_1;
      iVar8 = 0;
      do {
        puVar5[-iVar8] = (~(puVar5[-iVar8] >> 7) & 0x1010101) + (puVar5[-iVar8] | 0x7f7f7f7f);
        iVar8 = iVar8 + -1;
      } while (-iVar8 != uVar3);
      if (uVar6 < 4) {
        FUN_01bed864(puVar5 + 1,puVar5);
      }
      else {
        *(uint *)((int)puVar5 + uVar6) = *puVar5;
      }
      iVar8 = 0;
      uVar3 = 0;
      uVar4 = uVar13;
      do {
        puVar14 = puVar5;
        if (*(char *)((int)puVar5 + uVar3) == -0x80) {
          puVar11 = puVar5;
          while( true ) {
            uVar9 = uVar4 & puVar11[uVar3 * -6 + -4];
            uVar16 = *(uint *)((int)puVar11 + uVar9) & 0x80808080;
            uVar6 = uVar9;
            if (uVar16 == 0) {
              iVar7 = 4;
              do {
                uVar6 = uVar6 + iVar7 & uVar4;
                uVar16 = *(uint *)((int)puVar11 + uVar6) & 0x80808080;
                iVar7 = iVar7 + 4;
              } while (uVar16 == 0);
            }
            uVar6 = uVar6 + ((uint)LZCOUNT(uVar16 << 0x18 | (uVar16 >> 8 & 0xff) << 0x10 |
                                           (uVar16 >> 0x10 & 0xff) << 8 | uVar16 >> 0x18) >> 3) &
                    uVar4;
            if (-1 < *(char *)((int)puVar11 + uVar6)) {
              uVar6 = *puVar11 & 0x80808080;
              uVar6 = (uint)LZCOUNT((*puVar11 & 0x80) << 0x18 | (uVar6 >> 8 & 0xff) << 0x10 |
                                    (uVar6 >> 0x10 & 0xff) << 8 | uVar6 >> 0x18) >> 3;
            }
            bVar2 = (byte)(puVar11[uVar3 * -6 + -4] >> 0x18);
            if (((uVar6 - uVar9 ^ uVar3 - uVar9) & uVar4) < 4) {
              bVar2 = bVar2 >> 1;
              *(byte *)((int)puVar11 + uVar3) = bVar2;
              puVar14 = (uint *)*param_1;
              *(byte *)((int)puVar14 + (uVar4 & uVar3 - 4) + 4) = bVar2;
              goto LAB_01aaf4fc;
            }
            cVar1 = *(char *)((int)puVar11 + uVar6);
            bVar2 = bVar2 >> 1;
            *(byte *)((int)puVar11 + uVar6) = bVar2;
            puVar14 = (uint *)*param_1;
            *(byte *)((int)puVar14 + (uVar6 - 4 & uVar4) + 4) = bVar2;
            if (cVar1 == -1) break;
            iVar7 = -0x18;
            do {
              uVar10 = *(undefined4 *)((int)puVar5 + iVar7 + iVar8);
              *(undefined4 *)((int)puVar5 + iVar7 + iVar8) =
                   *(undefined4 *)((int)puVar11 + iVar7 + uVar6 * -0x18);
              *(undefined4 *)((int)puVar11 + iVar7 + uVar6 * -0x18) = uVar10;
              iVar7 = iVar7 + 4;
            } while (iVar7 != 0);
            puVar11 = (uint *)*param_1;
            uVar4 = param_1[1];
          }
          uVar4 = param_1[1];
          *(undefined1 *)((int)puVar14 + uVar3) = 0xff;
          *(undefined1 *)((int)puVar14 + (uVar4 & uVar3 - 4) + 4) = 0xff;
          FUN_01bed4e2(puVar11 + ~uVar6 * 6,puVar5 + ~uVar3 * 6,0x18);
        }
LAB_01aaf4fc:
        iVar8 = iVar8 + -0x18;
        bVar17 = uVar3 != uVar13;
        uVar3 = uVar3 + 1;
        puVar5 = puVar14;
      } while (bVar17);
      uVar3 = param_1[1];
      if (7 < uVar3) {
        uVar3 = (uVar3 + 1 & 0xfffffff8) - (uVar3 + 1 >> 3);
      }
    }
    param_1[2] = uVar3 - param_1[3];
  }
  return 0x80000001;
}


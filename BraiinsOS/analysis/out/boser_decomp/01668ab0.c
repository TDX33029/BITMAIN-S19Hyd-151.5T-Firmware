// FUN_01668ab0 @ 01668ab0 size=1288 calls_out=7 calls_in=1
// strings: Hash table capacity overflow

uint FUN_01668ab0(undefined4 *param_1,undefined4 param_2)

{
  char cVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  undefined4 uVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  uint *puVar13;
  uint *puVar14;
  uint *puVar15;
  bool bVar16;
  int local_54;
  undefined4 *local_50;
  undefined4 local_4c;
  undefined4 local_48;
  uint *local_44;
  uint uStack_40;
  int local_3c;
  int local_38;
  uint *local_34;
  uint local_30;
  int local_2c;
  undefined4 local_28;
  
  local_54 = param_1[3];
  uVar3 = local_54 + 1;
  if (local_54 == -1) {
LAB_01668f90:
                    /* WARNING: Subroutine does not return */
    FUN_012fb100("Hash table capacity overflow",0x39,&DAT_01cf1724);
  }
  uVar12 = param_1[1];
  uVar6 = uVar12 + 1;
  uVar4 = uVar12;
  if (7 < uVar12) {
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
      if (0x1fffffff < uVar3) goto LAB_01668f90;
      iVar7 = (int)((ulonglong)(uVar3 << 3) * 0x24924925 >> 0x20);
      iVar7 = (0xffffffffU >> LZCOUNT((iVar7 + (uVar3 * 8 - iVar7 >> 1) >> 2) - 1)) + 1;
    }
    FUN_016502cc(&local_34,0x10,iVar7);
    if (local_34 == (uint *)0x0) {
      return local_30;
    }
    FUN_01bed93e(local_34,0xff,local_30 + 5);
    local_38 = local_28;
    local_44 = local_34;
    uStack_40 = local_30;
    local_3c = local_2c;
    local_48 = 4;
    iVar7 = 0;
    local_4c = 0x10;
    local_50 = param_1 + 4;
    if (local_54 != 0) {
      iVar7 = 0;
      puVar14 = (uint *)*param_1;
      uVar3 = ~*puVar14 & 0x80808080;
      puVar15 = puVar14;
      do {
        if (uVar3 == 0) {
          do {
            puVar14 = puVar14 + 1;
            iVar7 = iVar7 + 4;
          } while ((*puVar14 & 0x80808080) == 0x80808080);
          uVar3 = *puVar14 & 0x80808080 ^ 0x80808080;
        }
        uVar4 = iVar7 + ((uint)LZCOUNT(uVar3 << 0x18 | (uVar3 >> 8 & 0xff) << 0x10 |
                                       (uVar3 >> 0x10 & 0xff) << 8 | uVar3 >> 0x18) >> 3);
        uVar6 = FUN_016767c0(param_2,puVar15 + uVar4 * -4 + -4);
        uVar12 = local_30 & uVar6;
        uVar10 = *(uint *)((int)local_34 + uVar12) & 0x80808080;
        if (uVar10 == 0) {
          iVar11 = 4;
          do {
            uVar12 = uVar12 + iVar11;
            iVar11 = iVar11 + 4;
            uVar12 = uVar12 & local_30;
            uVar10 = *(uint *)((int)local_34 + uVar12) & 0x80808080;
          } while (uVar10 == 0);
        }
        uVar12 = uVar12 + ((uint)LZCOUNT(uVar10 << 0x18 | (uVar10 >> 8 & 0xff) << 0x10 |
                                         (uVar10 >> 0x10 & 0xff) << 8 | uVar10 >> 0x18) >> 3) &
                 local_30;
        if (-1 < *(char *)((int)local_34 + uVar12)) {
          uVar12 = *local_34 & 0x80808080;
          uVar12 = (uint)LZCOUNT((*local_34 & 0x80) << 0x18 | (uVar12 >> 8 & 0xff) << 0x10 |
                                 (uVar12 >> 0x10 & 0xff) << 8 | uVar12 >> 0x18) >> 3;
        }
        uVar3 = uVar3 - 1 & uVar3;
        bVar2 = (byte)(uVar6 >> 0x19);
        *(byte *)((int)local_34 + uVar12) = bVar2;
        *(byte *)((int)local_34 + (uVar12 - 4 & local_30) + 4) = bVar2;
        puVar15 = (uint *)*param_1;
        local_54 = local_54 + -1;
        FUN_01bed4e2(local_34 + ~uVar12 * 4,puVar15 + ~uVar4 * 4,0x10);
      } while (local_54 != 0);
      iVar7 = param_1[3];
    }
    local_38 = iVar7;
    local_3c = local_2c - iVar7;
    iVar7 = 0;
    do {
      puVar15 = (uint *)param_1[iVar7];
      param_1[iVar7] = (&local_44)[iVar7];
      iVar11 = iVar7 + 1;
      (&local_44)[iVar7] = puVar15;
      iVar7 = iVar11;
    } while (iVar11 != 4);
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
      puVar15 = (uint *)*param_1;
      iVar7 = 0;
      do {
        puVar15[-iVar7] = (~(puVar15[-iVar7] >> 7) & 0x1010101) + (puVar15[-iVar7] | 0x7f7f7f7f);
        iVar7 = iVar7 + -1;
      } while (-iVar7 != uVar3);
      if (uVar6 < 4) {
        FUN_01bed864(puVar15 + 1,puVar15);
      }
      else {
        *(uint *)((int)puVar15 + uVar6) = *puVar15;
      }
      iVar7 = 0;
      uVar3 = 0;
      uVar4 = uVar12;
      do {
        puVar14 = puVar15;
        if (*(char *)((int)puVar15 + uVar3) == -0x80) {
          puVar13 = puVar15;
          while( true ) {
            uVar10 = FUN_016767c0(param_2,puVar13 + uVar3 * -4 + -4);
            uVar5 = uVar4 & uVar10;
            uVar8 = *(uint *)((int)puVar13 + uVar5) & 0x80808080;
            uVar6 = uVar5;
            if (uVar8 == 0) {
              iVar11 = 4;
              do {
                uVar6 = uVar6 + iVar11 & uVar4;
                iVar11 = iVar11 + 4;
                uVar8 = *(uint *)((int)puVar13 + uVar6) & 0x80808080;
              } while (uVar8 == 0);
            }
            uVar6 = uVar6 + ((uint)LZCOUNT(uVar8 << 0x18 | (uVar8 >> 8 & 0xff) << 0x10 |
                                           (uVar8 >> 0x10 & 0xff) << 8 | uVar8 >> 0x18) >> 3) &
                    uVar4;
            if (-1 < *(char *)((int)puVar13 + uVar6)) {
              uVar6 = *puVar13 & 0x80808080;
              uVar6 = (uint)LZCOUNT((*puVar13 & 0x80) << 0x18 | (uVar6 >> 8 & 0xff) << 0x10 |
                                    (uVar6 >> 0x10 & 0xff) << 8 | uVar6 >> 0x18) >> 3;
            }
            bVar2 = (byte)(uVar10 >> 0x18);
            if (((uVar6 - uVar5 ^ uVar3 - uVar5) & uVar4) < 4) {
              bVar2 = bVar2 >> 1;
              *(byte *)((int)puVar13 + uVar3) = bVar2;
              puVar14 = (uint *)*param_1;
              *(byte *)((int)puVar14 + (uVar4 & uVar3 - 4) + 4) = bVar2;
              goto LAB_01668ce4;
            }
            cVar1 = *(char *)((int)puVar13 + uVar6);
            bVar2 = bVar2 >> 1;
            *(byte *)((int)puVar13 + uVar6) = bVar2;
            puVar14 = (uint *)*param_1;
            *(byte *)((int)puVar14 + (uVar6 - 4 & uVar4) + 4) = bVar2;
            if (cVar1 == -1) break;
            iVar11 = -0x10;
            do {
              uVar9 = *(undefined4 *)((int)puVar15 + iVar11 + iVar7);
              *(undefined4 *)((int)puVar15 + iVar11 + iVar7) =
                   *(undefined4 *)((int)puVar13 + iVar11 + uVar6 * -0x10);
              *(undefined4 *)((int)puVar13 + iVar11 + uVar6 * -0x10) = uVar9;
              iVar11 = iVar11 + 4;
            } while (iVar11 != 0);
            puVar13 = (uint *)*param_1;
            uVar4 = param_1[1];
          }
          uVar4 = param_1[1];
          *(undefined1 *)((int)puVar14 + uVar3) = 0xff;
          *(undefined1 *)((int)puVar14 + (uVar4 & uVar3 - 4) + 4) = 0xff;
          FUN_01bed4e2(puVar13 + ~uVar6 * 4,puVar15 + ~uVar3 * 4,0x10);
        }
LAB_01668ce4:
        iVar7 = iVar7 + -0x10;
        bVar16 = uVar3 != uVar12;
        uVar3 = uVar3 + 1;
        puVar15 = puVar14;
      } while (bVar16);
      uVar3 = param_1[1];
      if (7 < uVar3) {
        uVar3 = (uVar3 + 1 & 0xfffffff8) - (uVar3 + 1 >> 3);
      }
    }
    param_1[2] = uVar3 - param_1[3];
  }
  return 0x80000001;
}


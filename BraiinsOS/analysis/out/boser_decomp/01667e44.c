// FUN_01667e44 @ 01667e44 size=1340 calls_out=7 calls_in=1
// strings: Hash table capacity overflow

uint FUN_01667e44(undefined4 *param_1,undefined4 param_2)

{
  char cVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint *puVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  undefined4 uVar11;
  uint uVar12;
  uint *puVar13;
  uint *puVar14;
  int iVar15;
  int iVar16;
  uint uVar17;
  bool bVar18;
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
  
  iVar16 = param_1[3];
  uVar3 = iVar16 + 1;
  if (iVar16 == -1) {
LAB_01668358:
                    /* WARNING: Subroutine does not return */
    FUN_012fb100("Hash table capacity overflow",0x39,&DAT_01cf1724);
  }
  uVar17 = param_1[1];
  uVar7 = uVar17 + 1;
  uVar4 = uVar17;
  if (7 < uVar17) {
    uVar4 = (uVar7 & 0xfffffff8) - (uVar7 >> 3);
  }
  if (uVar4 >> 1 < uVar3) {
    if (uVar3 < uVar4 + 1) {
      uVar3 = uVar4 + 1;
    }
    if (uVar3 < 0xf) {
      iVar8 = (uVar3 & 8) + 8;
      if (uVar3 < 4) {
        iVar8 = 4;
      }
    }
    else {
      if (0x1fffffff < uVar3) goto LAB_01668358;
      iVar8 = (int)((ulonglong)(uVar3 << 3) * 0x24924925 >> 0x20);
      iVar8 = (0xffffffffU >> LZCOUNT((iVar8 + (uVar3 * 8 - iVar8 >> 1) >> 2) - 1)) + 1;
    }
    FUN_016502cc(&local_34,0x28,iVar8);
    if (local_34 == (uint *)0x0) {
      return local_30;
    }
    FUN_01bed93e(local_34,0xff,local_30 + 5);
    local_40 = local_30;
    local_48 = 4;
    local_38 = local_28;
    local_3c = local_2c;
    local_44 = local_34;
    local_4c = 0x28;
    iVar8 = 0;
    local_50 = param_1 + 4;
    if (iVar16 != 0) {
      puVar13 = (uint *)*param_1;
      iVar15 = 0;
      uVar3 = ~*puVar13 & 0x80808080;
      iVar8 = iVar16;
      puVar6 = puVar13;
      do {
        if (uVar3 == 0) {
          do {
            puVar6 = puVar6 + 1;
            iVar15 = iVar15 + 4;
          } while ((*puVar6 & 0x80808080) == 0x80808080);
          uVar3 = *puVar6 & 0x80808080 ^ 0x80808080;
        }
        uVar7 = iVar15 + ((uint)LZCOUNT(uVar3 << 0x18 | (uVar3 >> 8 & 0xff) << 0x10 |
                                        (uVar3 >> 0x10 & 0xff) << 8 | uVar3 >> 0x18) >> 3);
        uVar4 = FUN_01676700(param_2,puVar13[uVar7 * -10 + -9],puVar13[uVar7 * -10 + -8]);
        uVar17 = local_30 & uVar4;
        uVar12 = *(uint *)((int)local_34 + uVar17) & 0x80808080;
        if (uVar12 == 0) {
          iVar9 = 4;
          do {
            uVar17 = uVar17 + iVar9;
            iVar9 = iVar9 + 4;
            uVar17 = uVar17 & local_30;
            uVar12 = *(uint *)((int)local_34 + uVar17) & 0x80808080;
          } while (uVar12 == 0);
        }
        uVar17 = uVar17 + ((uint)LZCOUNT(uVar12 << 0x18 | (uVar12 >> 8 & 0xff) << 0x10 |
                                         (uVar12 >> 0x10 & 0xff) << 8 | uVar12 >> 0x18) >> 3) &
                 local_30;
        if (-1 < *(char *)((int)local_34 + uVar17)) {
          uVar17 = *local_34 & 0x80808080;
          uVar17 = (uint)LZCOUNT((*local_34 & 0x80) << 0x18 | (uVar17 >> 8 & 0xff) << 0x10 |
                                 (uVar17 >> 0x10 & 0xff) << 8 | uVar17 >> 0x18) >> 3;
        }
        uVar3 = uVar3 - 1 & uVar3;
        bVar2 = (byte)(uVar4 >> 0x19);
        *(byte *)((int)local_34 + uVar17) = bVar2;
        iVar8 = iVar8 + -1;
        *(byte *)((int)local_34 + (uVar17 - 4 & local_30) + 4) = bVar2;
        FUN_01bed4e2(local_34 + ~uVar17 * 10,puVar13 + ~uVar7 * 10,0x28);
      } while (iVar8 != 0);
      iVar8 = iVar16;
    }
    local_38 = iVar8;
    local_3c = local_2c - iVar8;
    iVar16 = 0;
    do {
      puVar6 = (uint *)param_1[iVar16];
      param_1[iVar16] = (&local_44)[iVar16];
      iVar8 = iVar16 + 1;
      (&local_44)[iVar16] = puVar6;
      iVar16 = iVar8;
    } while (iVar8 != 4);
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
      iVar16 = 0;
      do {
        puVar6[-iVar16] = (~(puVar6[-iVar16] >> 7) & 0x1010101) + (puVar6[-iVar16] | 0x7f7f7f7f);
        iVar16 = iVar16 + -1;
      } while (-iVar16 != uVar3);
      if (uVar7 < 4) {
        FUN_01bed864(puVar6 + 1,puVar6);
      }
      else {
        *(uint *)((int)puVar6 + uVar7) = *puVar6;
      }
      iVar16 = 0;
      uVar3 = 0;
      uVar4 = uVar17;
      do {
        puVar13 = puVar6;
        if (*(char *)((int)puVar6 + uVar3) == -0x80) {
          puVar14 = puVar6;
          while( true ) {
            uVar12 = FUN_01676700(param_2,puVar14[uVar3 * -10 + -9],puVar14[uVar3 * -10 + -8]);
            uVar5 = uVar4 & uVar12;
            uVar10 = *(uint *)((int)puVar14 + uVar5) & 0x80808080;
            uVar7 = uVar5;
            if (uVar10 == 0) {
              iVar8 = 4;
              do {
                uVar7 = uVar7 + iVar8 & uVar4;
                iVar8 = iVar8 + 4;
                uVar10 = *(uint *)((int)puVar14 + uVar7) & 0x80808080;
              } while (uVar10 == 0);
            }
            uVar7 = uVar7 + ((uint)LZCOUNT(uVar10 << 0x18 | (uVar10 >> 8 & 0xff) << 0x10 |
                                           (uVar10 >> 0x10 & 0xff) << 8 | uVar10 >> 0x18) >> 3) &
                    uVar4;
            if (-1 < *(char *)((int)puVar14 + uVar7)) {
              uVar7 = *puVar14 & 0x80808080;
              uVar7 = (uint)LZCOUNT((*puVar14 & 0x80) << 0x18 | (uVar7 >> 8 & 0xff) << 0x10 |
                                    (uVar7 >> 0x10 & 0xff) << 8 | uVar7 >> 0x18) >> 3;
            }
            bVar2 = (byte)(uVar12 >> 0x18);
            if (((uVar7 - uVar5 ^ uVar3 - uVar5) & uVar4) < 4) {
              bVar2 = bVar2 >> 1;
              *(byte *)((int)puVar14 + uVar3) = bVar2;
              puVar13 = (uint *)*param_1;
              *(byte *)((int)puVar13 + (uVar4 & uVar3 - 4) + 4) = bVar2;
              goto LAB_0166808c;
            }
            cVar1 = *(char *)((int)puVar14 + uVar7);
            bVar2 = bVar2 >> 1;
            *(byte *)((int)puVar14 + uVar7) = bVar2;
            puVar13 = (uint *)*param_1;
            *(byte *)((int)puVar13 + (uVar7 - 4 & uVar4) + 4) = bVar2;
            if (cVar1 == -1) break;
            iVar8 = -0x28;
            do {
              uVar11 = *(undefined4 *)((int)puVar6 + iVar8 + iVar16);
              *(undefined4 *)((int)puVar6 + iVar8 + iVar16) =
                   *(undefined4 *)((int)puVar14 + iVar8 + uVar7 * -0x28);
              *(undefined4 *)((int)puVar14 + iVar8 + uVar7 * -0x28) = uVar11;
              iVar8 = iVar8 + 4;
            } while (iVar8 != 0);
            puVar14 = (uint *)*param_1;
            uVar4 = param_1[1];
          }
          uVar4 = param_1[1];
          *(undefined1 *)((int)puVar13 + uVar3) = 0xff;
          *(undefined1 *)((int)puVar13 + (uVar4 & uVar3 - 4) + 4) = 0xff;
          FUN_01bed4e2(puVar14 + ~uVar7 * 10,puVar6 + ~uVar3 * 10,0x28);
        }
LAB_0166808c:
        iVar16 = iVar16 + -0x28;
        bVar18 = uVar3 != uVar17;
        uVar3 = uVar3 + 1;
        puVar6 = puVar13;
      } while (bVar18);
      uVar3 = param_1[1];
      if (7 < uVar3) {
        uVar3 = (uVar3 + 1 & 0xfffffff8) - (uVar3 + 1 >> 3);
      }
    }
    param_1[2] = uVar3 - param_1[3];
  }
  return 0x80000001;
}


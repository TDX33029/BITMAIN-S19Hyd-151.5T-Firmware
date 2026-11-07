// FUN_0152f0dc @ 0152f0dc size=1324 calls_out=7 calls_in=1
// strings: Hash table capacity overflow

uint FUN_0152f0dc(undefined4 *param_1,undefined4 param_2)

{
  char cVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint *puVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  undefined4 uVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  uint *puVar14;
  uint *puVar15;
  bool bVar16;
  int local_54;
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
  
  local_54 = param_1[3];
  uVar3 = local_54 + 1;
  if (local_54 == -1) {
LAB_0152f5e0:
                    /* WARNING: Subroutine does not return */
    FUN_012fb100("Hash table capacity overflow",0x39,&DAT_01cf1724);
  }
  uVar13 = param_1[1];
  uVar7 = uVar13 + 1;
  uVar4 = uVar13;
  if (7 < uVar13) {
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
      if (0x1fffffff < uVar3) goto LAB_0152f5e0;
      iVar8 = (int)((ulonglong)(uVar3 << 3) * 0x24924925 >> 0x20);
      iVar8 = (0xffffffffU >> LZCOUNT((iVar8 + (uVar3 * 8 - iVar8 >> 1) >> 2) - 1)) + 1;
    }
    FUN_019790d4(&local_34,0x1c,4,iVar8);
    if (local_34 == (uint *)0x0) {
      return local_30;
    }
    FUN_01bed93e(local_34,0xff,local_30 + 5);
    iVar8 = 0;
    local_38 = local_28;
    local_3c = local_2c;
    local_40 = local_30;
    local_44 = local_34;
    local_48 = 4;
    local_4c = 0x1c;
    local_50 = param_1 + 4;
    if (local_54 != 0) {
      puVar15 = (uint *)*param_1;
      iVar8 = 0;
      uVar3 = ~*puVar15 & 0x80808080;
      puVar6 = puVar15;
      do {
        if (uVar3 == 0) {
          do {
            puVar6 = puVar6 + 1;
            iVar8 = iVar8 + 4;
          } while ((*puVar6 & 0x80808080) == 0x80808080);
          uVar3 = *puVar6 & 0x80808080 ^ 0x80808080;
        }
        uVar4 = iVar8 + ((uint)LZCOUNT(uVar3 << 0x18 | (uVar3 >> 8 & 0xff) << 0x10 |
                                       (uVar3 >> 0x10 & 0xff) << 8 | uVar3 >> 0x18) >> 3);
        uVar7 = FUN_0155d0d0(param_2,puVar15 + uVar4 * -7 + -7);
        uVar13 = local_30 & uVar7;
        uVar11 = *(uint *)((int)local_34 + uVar13) & 0x80808080;
        if (uVar11 == 0) {
          iVar12 = 4;
          do {
            uVar13 = uVar13 + iVar12;
            iVar12 = iVar12 + 4;
            uVar13 = uVar13 & local_30;
            uVar11 = *(uint *)((int)local_34 + uVar13) & 0x80808080;
          } while (uVar11 == 0);
        }
        uVar13 = uVar13 + ((uint)LZCOUNT(uVar11 << 0x18 | (uVar11 >> 8 & 0xff) << 0x10 |
                                         (uVar11 >> 0x10 & 0xff) << 8 | uVar11 >> 0x18) >> 3) &
                 local_30;
        if (-1 < *(char *)((int)local_34 + uVar13)) {
          uVar13 = *local_34 & 0x80808080;
          uVar13 = (uint)LZCOUNT((*local_34 & 0x80) << 0x18 | (uVar13 >> 8 & 0xff) << 0x10 |
                                 (uVar13 >> 0x10 & 0xff) << 8 | uVar13 >> 0x18) >> 3;
        }
        uVar3 = uVar3 - 1 & uVar3;
        bVar2 = (byte)(uVar7 >> 0x19);
        *(byte *)((int)local_34 + uVar13) = bVar2;
        *(byte *)((int)local_34 + (uVar13 - 4 & local_30) + 4) = bVar2;
        puVar15 = (uint *)*param_1;
        local_54 = local_54 + -1;
        FUN_01bed4e2(local_34 + ~uVar13 * 7,puVar15 + ~uVar4 * 7,0x1c);
      } while (local_54 != 0);
      iVar8 = param_1[3];
    }
    local_38 = iVar8;
    local_3c = local_2c - iVar8;
    iVar8 = 0;
    do {
      puVar6 = (uint *)param_1[iVar8];
      param_1[iVar8] = (&local_44)[iVar8];
      iVar12 = iVar8 + 1;
      (&local_44)[iVar8] = puVar6;
      iVar8 = iVar12;
    } while (iVar12 != 4);
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
      iVar8 = 0;
      do {
        puVar6[-iVar8] = (~(puVar6[-iVar8] >> 7) & 0x1010101) + (puVar6[-iVar8] | 0x7f7f7f7f);
        iVar8 = iVar8 + -1;
      } while (-iVar8 != uVar3);
      if (uVar7 < 4) {
        FUN_01bed864(puVar6 + 1,puVar6);
      }
      else {
        *(uint *)((int)puVar6 + uVar7) = *puVar6;
      }
      iVar8 = 0;
      uVar3 = 0;
      uVar4 = uVar13;
      do {
        puVar15 = puVar6;
        if (*(char *)((int)puVar6 + uVar3) == -0x80) {
          puVar14 = puVar6;
          while( true ) {
            uVar11 = FUN_0155d0d0(param_2,puVar14 + uVar3 * -7 + -7);
            uVar5 = uVar4 & uVar11;
            uVar9 = *(uint *)((int)puVar14 + uVar5) & 0x80808080;
            uVar7 = uVar5;
            if (uVar9 == 0) {
              iVar12 = 4;
              do {
                uVar7 = uVar7 + iVar12 & uVar4;
                iVar12 = iVar12 + 4;
                uVar9 = *(uint *)((int)puVar14 + uVar7) & 0x80808080;
              } while (uVar9 == 0);
            }
            uVar7 = uVar7 + ((uint)LZCOUNT(uVar9 << 0x18 | (uVar9 >> 8 & 0xff) << 0x10 |
                                           (uVar9 >> 0x10 & 0xff) << 8 | uVar9 >> 0x18) >> 3) &
                    uVar4;
            if (-1 < *(char *)((int)puVar14 + uVar7)) {
              uVar7 = *puVar14 & 0x80808080;
              uVar7 = (uint)LZCOUNT((*puVar14 & 0x80) << 0x18 | (uVar7 >> 8 & 0xff) << 0x10 |
                                    (uVar7 >> 0x10 & 0xff) << 8 | uVar7 >> 0x18) >> 3;
            }
            bVar2 = (byte)(uVar11 >> 0x18);
            if (((uVar7 - uVar5 ^ uVar3 - uVar5) & uVar4) < 4) {
              bVar2 = bVar2 >> 1;
              *(byte *)((int)puVar14 + uVar3) = bVar2;
              puVar15 = (uint *)*param_1;
              *(byte *)((int)puVar15 + (uVar4 & uVar3 - 4) + 4) = bVar2;
              goto LAB_0152f31c;
            }
            cVar1 = *(char *)((int)puVar14 + uVar7);
            bVar2 = bVar2 >> 1;
            *(byte *)((int)puVar14 + uVar7) = bVar2;
            puVar15 = (uint *)*param_1;
            *(byte *)((int)puVar15 + (uVar7 - 4 & uVar4) + 4) = bVar2;
            if (cVar1 == -1) break;
            iVar12 = -0x1c;
            do {
              uVar10 = *(undefined4 *)((int)puVar6 + iVar12 + iVar8);
              *(undefined4 *)((int)puVar6 + iVar12 + iVar8) =
                   *(undefined4 *)((int)puVar14 + iVar12 + uVar7 * -0x1c);
              *(undefined4 *)((int)puVar14 + iVar12 + uVar7 * -0x1c) = uVar10;
              iVar12 = iVar12 + 4;
            } while (iVar12 != 0);
            puVar14 = (uint *)*param_1;
            uVar4 = param_1[1];
          }
          uVar4 = param_1[1];
          *(undefined1 *)((int)puVar15 + uVar3) = 0xff;
          *(undefined1 *)((int)puVar15 + (uVar4 & uVar3 - 4) + 4) = 0xff;
          FUN_01bed4e2(puVar14 + ~uVar7 * 7,puVar6 + ~uVar3 * 7,0x1c);
        }
LAB_0152f31c:
        iVar8 = iVar8 + -0x1c;
        bVar16 = uVar3 != uVar13;
        uVar3 = uVar3 + 1;
        puVar6 = puVar15;
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


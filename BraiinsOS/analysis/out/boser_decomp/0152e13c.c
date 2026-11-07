// FUN_0152e13c @ 0152e13c size=1340 calls_out=7 calls_in=1
// strings: Hash table capacity overflow

uint FUN_0152e13c(undefined4 *param_1,uint param_2,undefined4 param_3)

{
  char cVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint *puVar6;
  uint uVar7;
  int iVar8;
  undefined4 uVar9;
  uint uVar10;
  int iVar11;
  uint *puVar12;
  uint *puVar13;
  uint uVar14;
  uint uVar15;
  bool bVar16;
  undefined4 *local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  uint *local_44;
  uint local_40;
  int local_3c;
  uint local_38;
  uint *local_34;
  uint local_30;
  int local_2c;
  undefined4 local_28;
  
  uVar15 = param_1[3];
  uVar3 = uVar15 + param_2;
  if (CARRY4(uVar15,param_2)) {
LAB_0152e650:
                    /* WARNING: Subroutine does not return */
    FUN_012fb100("Hash table capacity overflow",0x39,&DAT_01cf1724);
  }
  uVar14 = param_1[1];
  uVar7 = uVar14 + 1;
  uVar4 = uVar14;
  if (7 < uVar14) {
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
      if (0x1fffffff < uVar3) goto LAB_0152e650;
      iVar8 = (int)((ulonglong)(uVar3 << 3) * 0x24924925 >> 0x20);
      iVar8 = (0xffffffffU >> LZCOUNT((iVar8 + (uVar3 * 8 - iVar8 >> 1) >> 2) - 1)) + 1;
    }
    FUN_019790d4(&local_34,0x28,8,iVar8);
    if (local_34 == (uint *)0x0) {
      return local_30;
    }
    FUN_01bed93e(local_34,0xff,local_30 + 5);
    local_40 = local_30;
    uStack_4c = 0x28;
    uStack_48 = 8;
    local_38 = local_28;
    local_3c = local_2c;
    local_44 = local_34;
    uVar3 = 0;
    local_50 = param_1 + 4;
    if (uVar15 != 0) {
      puVar12 = (uint *)*param_1;
      iVar8 = 0;
      uVar4 = ~*puVar12 & 0x80808080;
      uVar3 = uVar15;
      puVar6 = puVar12;
      do {
        if (uVar4 == 0) {
          do {
            puVar6 = puVar6 + 1;
            iVar8 = iVar8 + 4;
          } while ((*puVar6 & 0x80808080) == 0x80808080);
          uVar4 = *puVar6 & 0x80808080 ^ 0x80808080;
        }
        uVar14 = iVar8 + ((uint)LZCOUNT(uVar4 << 0x18 | (uVar4 >> 8 & 0xff) << 0x10 |
                                        (uVar4 >> 0x10 & 0xff) << 8 | uVar4 >> 0x18) >> 3);
        uVar7 = FUN_01676700(param_3,puVar12[uVar14 * -10 + -9],puVar12[uVar14 * -10 + -8]);
        uVar5 = local_30 & uVar7;
        uVar10 = *(uint *)((int)local_34 + uVar5) & 0x80808080;
        if (uVar10 == 0) {
          iVar11 = 4;
          do {
            uVar5 = uVar5 + iVar11;
            iVar11 = iVar11 + 4;
            uVar5 = uVar5 & local_30;
            uVar10 = *(uint *)((int)local_34 + uVar5) & 0x80808080;
          } while (uVar10 == 0);
        }
        uVar5 = uVar5 + ((uint)LZCOUNT(uVar10 << 0x18 | (uVar10 >> 8 & 0xff) << 0x10 |
                                       (uVar10 >> 0x10 & 0xff) << 8 | uVar10 >> 0x18) >> 3) &
                local_30;
        if (-1 < *(char *)((int)local_34 + uVar5)) {
          uVar5 = *local_34 & 0x80808080;
          uVar5 = (uint)LZCOUNT((*local_34 & 0x80) << 0x18 | (uVar5 >> 8 & 0xff) << 0x10 |
                                (uVar5 >> 0x10 & 0xff) << 8 | uVar5 >> 0x18) >> 3;
        }
        uVar4 = uVar4 - 1 & uVar4;
        bVar2 = (byte)(uVar7 >> 0x19);
        *(byte *)((int)local_34 + uVar5) = bVar2;
        uVar3 = uVar3 - 1;
        *(byte *)((int)local_34 + (uVar5 - 4 & local_30) + 4) = bVar2;
        FUN_01bed4e2(local_34 + ~uVar5 * 10,puVar12 + ~uVar14 * 10,0x28);
      } while (uVar3 != 0);
      uVar3 = uVar15;
    }
    local_38 = uVar3;
    local_3c = local_2c - uVar3;
    iVar8 = 0;
    do {
      puVar6 = (uint *)param_1[iVar8];
      param_1[iVar8] = (&local_44)[iVar8];
      iVar11 = iVar8 + 1;
      (&local_44)[iVar8] = puVar6;
      iVar8 = iVar11;
    } while (iVar11 != 4);
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
      uVar15 = uVar14;
      do {
        puVar12 = puVar6;
        if (*(char *)((int)puVar6 + uVar3) == -0x80) {
          puVar13 = puVar6;
          while( true ) {
            uVar7 = FUN_01676700(param_3,puVar13[uVar3 * -10 + -9],puVar13[uVar3 * -10 + -8]);
            uVar5 = uVar15 & uVar7;
            uVar10 = *(uint *)((int)puVar13 + uVar5) & 0x80808080;
            uVar4 = uVar5;
            if (uVar10 == 0) {
              iVar11 = 4;
              do {
                uVar4 = uVar4 + iVar11 & uVar15;
                iVar11 = iVar11 + 4;
                uVar10 = *(uint *)((int)puVar13 + uVar4) & 0x80808080;
              } while (uVar10 == 0);
            }
            uVar4 = uVar4 + ((uint)LZCOUNT(uVar10 << 0x18 | (uVar10 >> 8 & 0xff) << 0x10 |
                                           (uVar10 >> 0x10 & 0xff) << 8 | uVar10 >> 0x18) >> 3) &
                    uVar15;
            if (-1 < *(char *)((int)puVar13 + uVar4)) {
              uVar4 = *puVar13 & 0x80808080;
              uVar4 = (uint)LZCOUNT((*puVar13 & 0x80) << 0x18 | (uVar4 >> 8 & 0xff) << 0x10 |
                                    (uVar4 >> 0x10 & 0xff) << 8 | uVar4 >> 0x18) >> 3;
            }
            bVar2 = (byte)(uVar7 >> 0x18);
            if (((uVar4 - uVar5 ^ uVar3 - uVar5) & uVar15) < 4) {
              bVar2 = bVar2 >> 1;
              *(byte *)((int)puVar13 + uVar3) = bVar2;
              puVar12 = (uint *)*param_1;
              *(byte *)((int)puVar12 + (uVar15 & uVar3 - 4) + 4) = bVar2;
              goto LAB_0152e384;
            }
            cVar1 = *(char *)((int)puVar13 + uVar4);
            bVar2 = bVar2 >> 1;
            *(byte *)((int)puVar13 + uVar4) = bVar2;
            puVar12 = (uint *)*param_1;
            *(byte *)((int)puVar12 + (uVar4 - 4 & uVar15) + 4) = bVar2;
            if (cVar1 == -1) break;
            iVar11 = -0x28;
            do {
              uVar9 = *(undefined4 *)((int)puVar6 + iVar11 + iVar8);
              *(undefined4 *)((int)puVar6 + iVar11 + iVar8) =
                   *(undefined4 *)((int)puVar13 + iVar11 + uVar4 * -0x28);
              *(undefined4 *)((int)puVar13 + iVar11 + uVar4 * -0x28) = uVar9;
              iVar11 = iVar11 + 4;
            } while (iVar11 != 0);
            puVar13 = (uint *)*param_1;
            uVar15 = param_1[1];
          }
          uVar15 = param_1[1];
          *(undefined1 *)((int)puVar12 + uVar3) = 0xff;
          *(undefined1 *)((int)puVar12 + (uVar15 & uVar3 - 4) + 4) = 0xff;
          FUN_01bed4e2(puVar13 + ~uVar4 * 10,puVar6 + ~uVar3 * 10,0x28);
        }
LAB_0152e384:
        iVar8 = iVar8 + -0x28;
        bVar16 = uVar3 != uVar14;
        uVar3 = uVar3 + 1;
        puVar6 = puVar12;
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


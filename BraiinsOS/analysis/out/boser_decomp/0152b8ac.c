// FUN_0152b8ac @ 0152b8ac size=1232 calls_out=6 calls_in=1
// strings: Hash table capacity overflow

uint FUN_0152b8ac(int *param_1,undefined4 param_2)

{
  char cVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  undefined4 *puVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  uint *puVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  bool bVar15;
  int local_54;
  int *local_50;
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
LAB_0152bd54:
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
      if (0x1fffffff < uVar3) goto LAB_0152bd54;
      iVar8 = (int)((ulonglong)(uVar3 << 3) * 0x24924925 >> 0x20);
      iVar8 = (0xffffffffU >> LZCOUNT((iVar8 + (uVar3 * 8 - iVar8 >> 1) >> 2) - 1)) + 1;
    }
    FUN_019790d4(&local_34,4,4,iVar8);
    if (local_34 == (uint *)0x0) {
      return local_30;
    }
    FUN_01bed93e(local_34,0xff,local_30 + 5);
    local_38 = local_28;
    local_40 = local_30;
    iVar8 = 0;
    local_3c = local_2c;
    local_44 = local_34;
    local_48 = 4;
    local_4c = 4;
    local_50 = param_1 + 4;
    if (local_54 != 0) {
      puVar11 = (uint *)*param_1;
      iVar8 = 0;
      uVar3 = ~*puVar11 & 0x80808080;
      do {
        if (uVar3 == 0) {
          do {
            puVar11 = puVar11 + 1;
            iVar8 = iVar8 + 4;
          } while ((*puVar11 & 0x80808080) == 0x80808080);
          uVar3 = *puVar11 & 0x80808080 ^ 0x80808080;
        }
        uVar14 = iVar8 + ((uint)LZCOUNT(uVar3 << 0x18 | (uVar3 >> 8 & 0xff) << 0x10 |
                                        (uVar3 >> 0x10 & 0xff) << 8 | uVar3 >> 0x18) >> 3);
        uVar4 = FUN_0155c9a8(param_2,*param_1 + uVar14 * -4 + -4);
        uVar7 = local_30 & uVar4;
        uVar13 = *(uint *)((int)local_34 + uVar7) & 0x80808080;
        if (uVar13 == 0) {
          iVar12 = 4;
          do {
            uVar7 = uVar7 + iVar12;
            iVar12 = iVar12 + 4;
            uVar7 = uVar7 & local_30;
            uVar13 = *(uint *)((int)local_34 + uVar7) & 0x80808080;
          } while (uVar13 == 0);
        }
        uVar7 = uVar7 + ((uint)LZCOUNT(uVar13 << 0x18 | (uVar13 >> 8 & 0xff) << 0x10 |
                                       (uVar13 >> 0x10 & 0xff) << 8 | uVar13 >> 0x18) >> 3) &
                local_30;
        if (-1 < *(char *)((int)local_34 + uVar7)) {
          uVar7 = *local_34 & 0x80808080;
          uVar7 = (uint)LZCOUNT((*local_34 & 0x80) << 0x18 | (uVar7 >> 8 & 0xff) << 0x10 |
                                (uVar7 >> 0x10 & 0xff) << 8 | uVar7 >> 0x18) >> 3;
        }
        uVar3 = uVar3 - 1 & uVar3;
        local_54 = local_54 + -1;
        bVar2 = (byte)(uVar4 >> 0x19);
        *(byte *)((int)local_34 + uVar7) = bVar2;
        *(byte *)((int)local_34 + (uVar7 - 4 & local_30) + 4) = bVar2;
        local_34[~uVar7] = *(uint *)(*param_1 + ~uVar14 * 4);
      } while (local_54 != 0);
      iVar8 = param_1[3];
    }
    local_38 = iVar8;
    local_3c = local_2c - iVar8;
    iVar8 = 0;
    do {
      puVar11 = (uint *)param_1[iVar8];
      param_1[iVar8] = (int)(&local_44)[iVar8];
      iVar12 = iVar8 + 1;
      (&local_44)[iVar8] = puVar11;
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
      puVar5 = (undefined4 *)*param_1;
      iVar8 = 0;
      do {
        puVar5[-iVar8] = (~((uint)puVar5[-iVar8] >> 7) & 0x1010101) + (puVar5[-iVar8] | 0x7f7f7f7f);
        iVar8 = iVar8 + -1;
      } while (-iVar8 != uVar3);
      if (uVar7 < 4) {
        FUN_01bed864(puVar5 + 1);
      }
      else {
        *(undefined4 *)((int)puVar5 + uVar7) = *puVar5;
      }
      local_48 = 4;
      local_4c = 0;
      uVar3 = 0;
      local_50 = param_1;
      do {
        iVar8 = *param_1;
        if (*(char *)(iVar8 + uVar3) == -0x80) {
          uVar4 = ~uVar3;
          iVar12 = iVar8;
          while( true ) {
            uVar14 = FUN_0155c9a8(param_2,iVar12 + uVar3 * -4 + -4);
            puVar11 = (uint *)*param_1;
            uVar9 = param_1[1];
            uVar6 = uVar9 & uVar14;
            uVar10 = *(uint *)((int)puVar11 + uVar6) & 0x80808080;
            uVar7 = uVar6;
            if (uVar10 == 0) {
              iVar12 = 4;
              do {
                uVar7 = uVar7 + iVar12;
                iVar12 = iVar12 + 4;
                uVar7 = uVar7 & uVar9;
                uVar10 = *(uint *)((int)puVar11 + uVar7) & 0x80808080;
              } while (uVar10 == 0);
            }
            uVar7 = uVar7 + ((uint)LZCOUNT(uVar10 << 0x18 | (uVar10 >> 8 & 0xff) << 0x10 |
                                           (uVar10 >> 0x10 & 0xff) << 8 | uVar10 >> 0x18) >> 3) &
                    uVar9;
            if (-1 < *(char *)((int)puVar11 + uVar7)) {
              uVar7 = *puVar11 & 0x80808080;
              uVar7 = (uint)LZCOUNT((*puVar11 & 0x80) << 0x18 | (uVar7 >> 8 & 0xff) << 0x10 |
                                    (uVar7 >> 0x10 & 0xff) << 8 | uVar7 >> 0x18) >> 3;
            }
            bVar2 = (byte)(uVar14 >> 0x18);
            if (((uVar7 - uVar6 ^ uVar3 - uVar6) & uVar9) < 4) {
              bVar2 = bVar2 >> 1;
              *(byte *)((int)puVar11 + uVar3) = bVar2;
              *(byte *)(*param_1 + (uVar9 & uVar3 - 4) + 4) = bVar2;
              goto LAB_0152bab8;
            }
            cVar1 = *(char *)((int)puVar11 + uVar7);
            bVar2 = bVar2 >> 1;
            *(byte *)((int)puVar11 + uVar7) = bVar2;
            *(byte *)(*param_1 + (uVar7 - 4 & uVar9) + 4) = bVar2;
            uVar7 = ~uVar7;
            if (cVar1 == -1) break;
            uVar14 = *(uint *)(iVar8 + uVar4 * 4);
            *(uint *)(iVar8 + uVar4 * 4) = puVar11[uVar7];
            puVar11[uVar7] = uVar14;
            iVar12 = *param_1;
          }
          uVar14 = param_1[1];
          *(undefined1 *)(*param_1 + uVar3) = 0xff;
          *(undefined1 *)(*param_1 + (uVar14 & uVar3 - 4) + 4) = 0xff;
          puVar11[uVar7] = *(uint *)(iVar8 + uVar4 * 4);
        }
LAB_0152bab8:
        bVar15 = uVar3 != uVar13;
        uVar3 = uVar3 + 1;
      } while (bVar15);
      uVar3 = param_1[1];
      if (7 < uVar3) {
        uVar3 = (uVar3 + 1 & 0xfffffff8) - (uVar3 + 1 >> 3);
      }
    }
    param_1[2] = uVar3 - param_1[3];
  }
  return 0x80000001;
}


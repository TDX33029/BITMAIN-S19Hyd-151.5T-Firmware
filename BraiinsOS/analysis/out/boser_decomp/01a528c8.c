// FUN_01a528c8 @ 01a528c8 size=1196 calls_out=5 calls_in=3
// strings: Hash table capacity overflow

uint FUN_01a528c8(int *param_1,uint param_2,int param_3,uint param_4)

{
  char cVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  undefined4 *puVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint *puVar11;
  uint *puVar12;
  uint uVar13;
  int iVar14;
  uint uVar15;
  uint uVar16;
  bool bVar17;
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
  
  uVar9 = param_1[3] + param_2;
  if (CARRY4(param_1[3],param_2)) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb100("Hash table capacity overflow",0x39,&DAT_01d30868);
  }
  uVar3 = param_1[1];
  uVar7 = uVar3 + 1;
  if (7 < uVar3) {
    uVar3 = (uVar7 & 0xfffffff8) - (uVar7 >> 3);
  }
  if (uVar3 >> 1 < uVar9) {
    if (uVar9 < uVar3 + 1) {
      uVar9 = uVar3 + 1;
    }
    FUN_01a527b8(&local_34,4,uVar9);
    if (local_34 == (uint *)0x0) {
      return local_30;
    }
    local_50 = param_1 + 4;
    iVar14 = param_1[3];
    local_38 = local_28;
    iVar6 = 0;
    local_3c = local_2c;
    local_40 = local_30;
    local_44 = local_34;
    local_48 = 4;
    local_4c = 4;
    if (iVar14 != 0) {
      puVar12 = (uint *)*param_1;
      iVar6 = 0;
      uVar9 = ~*puVar12 & 0x80808080;
      do {
        if (uVar9 == 0) {
          do {
            puVar12 = puVar12 + 1;
            iVar6 = iVar6 + 4;
          } while ((*puVar12 & 0x80808080) == 0x80808080);
          uVar9 = *puVar12 & 0x80808080 ^ 0x80808080;
        }
        uVar7 = iVar6 + ((uint)LZCOUNT(uVar9 << 0x18 | (uVar9 >> 8 & 0xff) << 0x10 |
                                       (uVar9 >> 0x10 & 0xff) << 8 | uVar9 >> 0x18) >> 3);
        uVar3 = *(uint *)(*param_1 + uVar7 * -4 + -4);
        if (param_4 <= uVar3) {
                    /* WARNING: Subroutine does not return */
          FUN_012fb12c(uVar3,param_4,&DAT_01d30858);
        }
        uVar16 = *(uint *)(param_3 + uVar3 * 0xc0 + 0xb8);
        uVar13 = local_30 & uVar16;
        uVar3 = *(uint *)((int)local_34 + uVar13) & 0x80808080;
        if (uVar3 == 0) {
          iVar4 = 4;
          do {
            uVar13 = uVar13 + iVar4;
            iVar4 = iVar4 + 4;
            uVar13 = uVar13 & local_30;
            uVar3 = *(uint *)((int)local_34 + uVar13) & 0x80808080;
          } while (uVar3 == 0);
        }
        uVar3 = uVar13 + ((uint)LZCOUNT(uVar3 << 0x18 | (uVar3 >> 8 & 0xff) << 0x10 |
                                        (uVar3 >> 0x10 & 0xff) << 8 | uVar3 >> 0x18) >> 3) &
                local_30;
        if (-1 < *(char *)((int)local_34 + uVar3)) {
          uVar3 = *local_34 & 0x80808080;
          uVar3 = (uint)LZCOUNT((*local_34 & 0x80) << 0x18 | (uVar3 >> 8 & 0xff) << 0x10 |
                                (uVar3 >> 0x10 & 0xff) << 8 | uVar3 >> 0x18) >> 3;
        }
        uVar9 = uVar9 - 1 & uVar9;
        bVar2 = (byte)(uVar16 >> 0x19);
        *(byte *)((int)local_34 + uVar3) = bVar2;
        iVar14 = iVar14 + -1;
        *(byte *)((int)local_34 + (uVar3 - 4 & local_30) + 4) = bVar2;
        local_34[~uVar3] = *(uint *)(*param_1 + ~uVar7 * 4);
      } while (iVar14 != 0);
      iVar6 = param_1[3];
    }
    local_3c = local_2c - iVar6;
    local_38 = iVar6;
    iVar6 = 0;
    do {
      puVar12 = (uint *)param_1[iVar6];
      param_1[iVar6] = (int)(&local_44)[iVar6];
      iVar14 = iVar6 + 1;
      (&local_44)[iVar6] = puVar12;
      iVar6 = iVar14;
    } while (iVar14 != 4);
    FUN_01a52db4(&local_50);
    return 0x80000001;
  }
  if (uVar7 != 0) {
    uVar9 = uVar7 >> 2;
    if ((uVar7 & 3) != 0) {
      uVar9 = (uVar7 >> 2) + 1;
    }
    puVar5 = (undefined4 *)*param_1;
    iVar6 = 0;
    do {
      puVar5[-iVar6] = (~((uint)puVar5[-iVar6] >> 7) & 0x1010101) + (puVar5[-iVar6] | 0x7f7f7f7f);
      iVar6 = iVar6 + -1;
    } while (-iVar6 != uVar9);
    if (3 < uVar7) {
      *(undefined4 *)((int)puVar5 + uVar7) = *puVar5;
      goto LAB_01a52b74;
    }
  }
  FUN_01bed864(*param_1 + 4);
LAB_01a52b74:
  uVar3 = param_1[1];
  local_48 = 4;
  uVar9 = 0;
  local_4c = 0;
  if (uVar3 != 0xffffffff) {
    do {
      puVar12 = (uint *)*param_1;
      if (*(char *)((int)puVar12 + uVar9) == -0x80) {
        uVar7 = ~uVar9;
        puVar11 = puVar12;
        while( true ) {
          uVar13 = puVar11[-1 - uVar9];
          if (param_4 <= uVar13) {
            local_50 = param_1;
                    /* WARNING: Subroutine does not return */
            FUN_012fb12c(uVar13,param_4,&DAT_01d30858);
          }
          uVar8 = param_1[1];
          uVar16 = *(uint *)(param_3 + uVar13 * 0xc0 + 0xb8);
          uVar10 = uVar8 & uVar16;
          uVar15 = *(uint *)((int)puVar11 + uVar10) & 0x80808080;
          uVar13 = uVar10;
          if (uVar15 == 0) {
            iVar6 = 4;
            do {
              uVar13 = uVar13 + iVar6 & uVar8;
              uVar15 = *(uint *)((int)puVar11 + uVar13) & 0x80808080;
              iVar6 = iVar6 + 4;
            } while (uVar15 == 0);
          }
          uVar13 = uVar13 + ((uint)LZCOUNT(uVar15 << 0x18 | (uVar15 >> 8 & 0xff) << 0x10 |
                                           (uVar15 >> 0x10 & 0xff) << 8 | uVar15 >> 0x18) >> 3) &
                   uVar8;
          if (-1 < *(char *)((int)puVar11 + uVar13)) {
            uVar13 = *puVar11 & 0x80808080;
            uVar13 = (uint)LZCOUNT((*puVar11 & 0x80) << 0x18 | (uVar13 >> 8 & 0xff) << 0x10 |
                                   (uVar13 >> 0x10 & 0xff) << 8 | uVar13 >> 0x18) >> 3;
          }
          bVar2 = (byte)(uVar16 >> 0x18);
          if (((uVar13 - uVar10 ^ uVar9 - uVar10) & uVar8) < 4) {
            bVar2 = bVar2 >> 1;
            *(byte *)((int)puVar11 + uVar9) = bVar2;
            *(byte *)((int)puVar11 + (uVar8 & uVar9 - 4) + 4) = bVar2;
            goto LAB_01a52cd4;
          }
          cVar1 = *(char *)((int)puVar11 + uVar13);
          bVar2 = bVar2 >> 1;
          *(byte *)((int)puVar11 + uVar13) = bVar2;
          *(byte *)((int)puVar11 + (uVar13 - 4 & uVar8) + 4) = bVar2;
          uVar13 = ~uVar13;
          if (cVar1 == -1) break;
          uVar16 = puVar12[uVar7];
          puVar12[uVar7] = puVar11[uVar13];
          puVar11[uVar13] = uVar16;
          puVar11 = (uint *)*param_1;
        }
        iVar6 = *param_1;
        uVar16 = param_1[1];
        *(undefined1 *)(iVar6 + uVar9) = 0xff;
        *(undefined1 *)(iVar6 + (uVar16 & uVar9 - 4) + 4) = 0xff;
        puVar11[uVar13] = puVar12[uVar7];
      }
LAB_01a52cd4:
      bVar17 = uVar9 != uVar3;
      uVar9 = uVar9 + 1;
    } while (bVar17);
    uVar9 = param_1[1];
    if (7 < uVar9) {
      uVar9 = (uVar9 + 1 & 0xfffffff8) - (uVar9 + 1 >> 3);
    }
  }
  param_1[2] = uVar9 - param_1[3];
  return 0x80000001;
}


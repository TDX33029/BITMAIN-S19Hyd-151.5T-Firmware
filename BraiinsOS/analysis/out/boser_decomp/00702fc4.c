// FUN_00702fc4 @ 00702fc4 size=1184 calls_out=5 calls_in=3
// strings: Hash table capacity overflow

uint FUN_00702fc4(int *param_1,uint param_2,int param_3,uint param_4)

{
  char cVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  undefined4 *puVar5;
  uint uVar6;
  int iVar7;
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
  
  uVar6 = param_1[3] + param_2;
  if (CARRY4(param_1[3],param_2)) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb100("Hash table capacity overflow",0x39,&DAT_01d30868);
  }
  uVar3 = param_1[1];
  uVar8 = uVar3 + 1;
  if (7 < uVar3) {
    uVar3 = (uVar8 & 0xfffffff8) - (uVar8 >> 3);
  }
  if (uVar3 >> 1 < uVar6) {
    if (uVar6 < uVar3 + 1) {
      uVar6 = uVar3 + 1;
    }
    FUN_00702ec8(&local_34,uVar6);
    if (local_34 == (uint *)0x0) {
      return local_30;
    }
    local_50 = param_1 + 4;
    iVar14 = param_1[3];
    local_38 = local_28;
    iVar7 = 0;
    local_48 = 4;
    local_4c = 4;
    local_3c = local_2c;
    local_40 = local_30;
    local_44 = local_34;
    if (iVar14 != 0) {
      puVar12 = (uint *)*param_1;
      iVar7 = 0;
      uVar6 = ~*puVar12 & 0x80808080;
      do {
        if (uVar6 == 0) {
          do {
            puVar12 = puVar12 + 1;
            iVar7 = iVar7 + 4;
          } while ((*puVar12 & 0x80808080) == 0x80808080);
          uVar6 = *puVar12 & 0x80808080 ^ 0x80808080;
        }
        uVar8 = iVar7 + ((uint)LZCOUNT(uVar6 << 0x18 | (uVar6 >> 8 & 0xff) << 0x10 |
                                       (uVar6 >> 0x10 & 0xff) << 8 | uVar6 >> 0x18) >> 3);
        uVar3 = *(uint *)(*param_1 + uVar8 * -4 + -4);
        if (param_4 <= uVar3) {
                    /* WARNING: Subroutine does not return */
          FUN_012fb12c(uVar3,param_4,&DAT_01d30858);
        }
        uVar16 = *(uint *)(param_3 + uVar3 * 0x40 + 0x38);
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
        uVar6 = uVar6 - 1 & uVar6;
        bVar2 = (byte)(uVar16 >> 0x19);
        *(byte *)((int)local_34 + uVar3) = bVar2;
        iVar14 = iVar14 + -1;
        *(byte *)((int)local_34 + (uVar3 - 4 & local_30) + 4) = bVar2;
        local_34[~uVar3] = *(uint *)(*param_1 + ~uVar8 * 4);
      } while (iVar14 != 0);
      iVar7 = param_1[3];
    }
    local_3c = local_2c - iVar7;
    local_38 = iVar7;
    iVar7 = 0;
    do {
      puVar12 = (uint *)param_1[iVar7];
      param_1[iVar7] = (int)(&local_44)[iVar7];
      iVar14 = iVar7 + 1;
      (&local_44)[iVar7] = puVar12;
      iVar7 = iVar14;
    } while (iVar14 != 4);
    FUN_01a52db4(&local_50);
    return 0x80000001;
  }
  if (uVar8 != 0) {
    uVar6 = uVar8 >> 2;
    if ((uVar8 & 3) != 0) {
      uVar6 = (uVar8 >> 2) + 1;
    }
    puVar5 = (undefined4 *)*param_1;
    iVar7 = 0;
    do {
      puVar5[-iVar7] = (~((uint)puVar5[-iVar7] >> 7) & 0x1010101) + (puVar5[-iVar7] | 0x7f7f7f7f);
      iVar7 = iVar7 + -1;
    } while (-iVar7 != uVar6);
    if (3 < uVar8) {
      *(undefined4 *)((int)puVar5 + uVar8) = *puVar5;
      goto LAB_00703260;
    }
  }
  FUN_01bed864(*param_1 + 4);
LAB_00703260:
  uVar3 = param_1[1];
  local_48 = 4;
  uVar6 = 0;
  local_4c = 0;
  if (uVar3 != 0xffffffff) {
    do {
      puVar12 = (uint *)*param_1;
      if (*(char *)((int)puVar12 + uVar6) == -0x80) {
        uVar8 = ~uVar6;
        puVar11 = puVar12;
        while( true ) {
          uVar13 = puVar11[-1 - uVar6];
          if (param_4 <= uVar13) {
            local_50 = param_1;
                    /* WARNING: Subroutine does not return */
            FUN_012fb12c(uVar13,param_4,&DAT_01d30858);
          }
          uVar9 = param_1[1];
          uVar16 = *(uint *)(param_3 + uVar13 * 0x40 + 0x38);
          uVar10 = uVar9 & uVar16;
          uVar15 = *(uint *)((int)puVar11 + uVar10) & 0x80808080;
          uVar13 = uVar10;
          if (uVar15 == 0) {
            iVar7 = 4;
            do {
              uVar13 = uVar13 + iVar7 & uVar9;
              uVar15 = *(uint *)((int)puVar11 + uVar13) & 0x80808080;
              iVar7 = iVar7 + 4;
            } while (uVar15 == 0);
          }
          uVar13 = uVar13 + ((uint)LZCOUNT(uVar15 << 0x18 | (uVar15 >> 8 & 0xff) << 0x10 |
                                           (uVar15 >> 0x10 & 0xff) << 8 | uVar15 >> 0x18) >> 3) &
                   uVar9;
          if (-1 < *(char *)((int)puVar11 + uVar13)) {
            uVar13 = *puVar11 & 0x80808080;
            uVar13 = (uint)LZCOUNT((*puVar11 & 0x80) << 0x18 | (uVar13 >> 8 & 0xff) << 0x10 |
                                   (uVar13 >> 0x10 & 0xff) << 8 | uVar13 >> 0x18) >> 3;
          }
          bVar2 = (byte)(uVar16 >> 0x18);
          if (((uVar13 - uVar10 ^ uVar6 - uVar10) & uVar9) < 4) {
            bVar2 = bVar2 >> 1;
            *(byte *)((int)puVar11 + uVar6) = bVar2;
            *(byte *)((int)puVar11 + (uVar9 & uVar6 - 4) + 4) = bVar2;
            goto LAB_007033c0;
          }
          cVar1 = *(char *)((int)puVar11 + uVar13);
          bVar2 = bVar2 >> 1;
          *(byte *)((int)puVar11 + uVar13) = bVar2;
          *(byte *)((int)puVar11 + (uVar13 - 4 & uVar9) + 4) = bVar2;
          uVar13 = ~uVar13;
          if (cVar1 == -1) break;
          uVar16 = puVar12[uVar8];
          puVar12[uVar8] = puVar11[uVar13];
          puVar11[uVar13] = uVar16;
          puVar11 = (uint *)*param_1;
        }
        iVar7 = *param_1;
        uVar16 = param_1[1];
        *(undefined1 *)(iVar7 + uVar6) = 0xff;
        *(undefined1 *)(iVar7 + (uVar16 & uVar6 - 4) + 4) = 0xff;
        puVar11[uVar13] = puVar12[uVar8];
      }
LAB_007033c0:
      bVar17 = uVar6 != uVar3;
      uVar6 = uVar6 + 1;
    } while (bVar17);
    uVar6 = param_1[1];
    if (7 < uVar6) {
      uVar6 = (uVar6 + 1 & 0xfffffff8) - (uVar6 + 1 >> 3);
    }
  }
  param_1[2] = uVar6 - param_1[3];
  return 0x80000001;
}


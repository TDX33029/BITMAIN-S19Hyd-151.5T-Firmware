// FUN_00945a14 @ 00945a14 size=1168 calls_out=5 calls_in=1
// strings: Hash table capacity overflow

undefined4 FUN_00945a14(int *param_1,int param_2,uint param_3)

{
  char cVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  undefined4 *puVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  uint *puVar12;
  uint *puVar13;
  uint uVar14;
  int iVar15;
  uint uVar16;
  bool bVar17;
  int *local_5c;
  undefined4 local_58;
  undefined4 local_54;
  uint *local_50;
  uint local_4c;
  int local_48;
  int local_44;
  int *local_40;
  undefined4 local_3c;
  undefined4 local_38;
  uint *local_34;
  uint uStack_30;
  int iStack_2c;
  undefined4 uStack_28;
  
  uVar8 = param_1[3] + 1;
  if (0xfffffffe < (uint)param_1[3]) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb100("Hash table capacity overflow",0x39,&DAT_01d30868);
  }
  uVar3 = param_1[1];
  uVar6 = uVar3 + 1;
  if (7 < uVar3) {
    uVar3 = (uVar6 & 0xfffffff8) - (uVar6 >> 3);
  }
  if (uVar3 >> 1 < uVar8) {
    if (uVar8 < uVar3 + 1) {
      uVar8 = uVar3 + 1;
    }
    FUN_00944484(&local_40,param_1 + 4,uVar8);
    if (local_40 == (int *)0x0) {
      return local_3c;
    }
    local_50 = local_34;
    local_4c = uStack_30;
    local_48 = iStack_2c;
    local_44 = uStack_28;
    iVar15 = param_1[3];
    local_58 = local_3c;
    iVar4 = 0;
    local_54 = local_38;
    local_5c = local_40;
    if (iVar15 != 0) {
      puVar13 = (uint *)*param_1;
      iVar4 = 0;
      uVar8 = ~*puVar13 & 0x80808080;
      do {
        if (uVar8 == 0) {
          do {
            puVar13 = puVar13 + 1;
            iVar4 = iVar4 + 4;
          } while ((*puVar13 & 0x80808080) == 0x80808080);
          uVar8 = *puVar13 & 0x80808080 ^ 0x80808080;
        }
        uVar6 = iVar4 + ((uint)LZCOUNT(uVar8 << 0x18 | (uVar8 >> 8 & 0xff) << 0x10 |
                                       (uVar8 >> 0x10 & 0xff) << 8 | uVar8 >> 0x18) >> 3);
        uVar3 = *(uint *)(*param_1 + uVar6 * -4 + -4);
        if (param_3 <= uVar3) {
                    /* WARNING: Subroutine does not return */
          FUN_012fb12c(uVar3,param_3,&DAT_01d30858);
        }
        uVar3 = *(uint *)(uVar3 * 0x1d8 + param_2 + 0x1d4);
        uVar14 = uStack_30 & uVar3;
        uVar10 = *(uint *)((int)local_34 + uVar14) & 0x80808080;
        if (uVar10 == 0) {
          iVar9 = 4;
          do {
            uVar14 = uVar14 + iVar9;
            iVar9 = iVar9 + 4;
            uVar14 = uVar14 & uStack_30;
            uVar10 = *(uint *)((int)local_34 + uVar14) & 0x80808080;
          } while (uVar10 == 0);
        }
        uVar10 = uVar14 + ((uint)LZCOUNT(uVar10 << 0x18 | (uVar10 >> 8 & 0xff) << 0x10 |
                                         (uVar10 >> 0x10 & 0xff) << 8 | uVar10 >> 0x18) >> 3) &
                 uStack_30;
        if (-1 < *(char *)((int)local_34 + uVar10)) {
          uVar10 = *local_34 & 0x80808080;
          uVar10 = (uint)LZCOUNT((*local_34 & 0x80) << 0x18 | (uVar10 >> 8 & 0xff) << 0x10 |
                                 (uVar10 >> 0x10 & 0xff) << 8 | uVar10 >> 0x18) >> 3;
        }
        uVar8 = uVar8 - 1 & uVar8;
        bVar2 = (byte)(uVar3 >> 0x19);
        *(byte *)((int)local_34 + uVar10) = bVar2;
        iVar15 = iVar15 + -1;
        *(byte *)((int)local_34 + (uVar10 - 4 & uStack_30) + 4) = bVar2;
        local_34[~uVar10] = *(uint *)(*param_1 + ~uVar6 * 4);
      } while (iVar15 != 0);
      iVar4 = param_1[3];
    }
    local_44 = iVar4;
    local_48 = iStack_2c - iVar4;
    iVar4 = 0;
    do {
      puVar13 = (uint *)param_1[iVar4];
      param_1[iVar4] = (int)(&local_50)[iVar4];
      iVar15 = iVar4 + 1;
      (&local_50)[iVar4] = puVar13;
      iVar4 = iVar15;
    } while (iVar15 != 4);
    FUN_01a52db4(&local_5c);
    return 0x80000001;
  }
  if (uVar6 != 0) {
    uVar8 = uVar6 >> 2;
    if ((uVar6 & 3) != 0) {
      uVar8 = (uVar6 >> 2) + 1;
    }
    puVar5 = (undefined4 *)*param_1;
    iVar4 = 0;
    do {
      puVar5[-iVar4] = (~((uint)puVar5[-iVar4] >> 7) & 0x1010101) + (puVar5[-iVar4] | 0x7f7f7f7f);
      iVar4 = iVar4 + -1;
    } while (-iVar4 != uVar8);
    if (3 < uVar6) {
      *(undefined4 *)((int)puVar5 + uVar6) = *puVar5;
      goto LAB_00945c9c;
    }
  }
  FUN_01bed864(*param_1 + 4);
LAB_00945c9c:
  uVar3 = param_1[1];
  local_38 = 4;
  uVar8 = 0;
  local_3c = 0;
  if (uVar3 != 0xffffffff) {
    do {
      puVar13 = (uint *)*param_1;
      if (*(char *)((int)puVar13 + uVar8) == -0x80) {
        uVar6 = ~uVar8;
        puVar12 = puVar13;
        while( true ) {
          uVar10 = puVar12[-1 - uVar8];
          if (param_3 <= uVar10) {
            local_40 = param_1;
                    /* WARNING: Subroutine does not return */
            FUN_012fb12c(uVar10,param_3,&DAT_01d30858);
          }
          uVar14 = param_1[1];
          uVar7 = *(uint *)(uVar10 * 0x1d8 + param_2 + 0x1d4);
          uVar16 = uVar14 & uVar7;
          uVar11 = *(uint *)((int)puVar12 + uVar16) & 0x80808080;
          uVar10 = uVar16;
          if (uVar11 == 0) {
            iVar4 = 4;
            do {
              uVar10 = uVar10 + iVar4 & uVar14;
              uVar11 = *(uint *)((int)puVar12 + uVar10) & 0x80808080;
              iVar4 = iVar4 + 4;
            } while (uVar11 == 0);
          }
          uVar10 = uVar10 + ((uint)LZCOUNT(uVar11 << 0x18 | (uVar11 >> 8 & 0xff) << 0x10 |
                                           (uVar11 >> 0x10 & 0xff) << 8 | uVar11 >> 0x18) >> 3) &
                   uVar14;
          if (-1 < *(char *)((int)puVar12 + uVar10)) {
            uVar10 = *puVar12 & 0x80808080;
            uVar10 = (uint)LZCOUNT((*puVar12 & 0x80) << 0x18 | (uVar10 >> 8 & 0xff) << 0x10 |
                                   (uVar10 >> 0x10 & 0xff) << 8 | uVar10 >> 0x18) >> 3;
          }
          bVar2 = (byte)(uVar7 >> 0x18);
          if (((uVar10 - uVar16 ^ uVar8 - uVar16) & uVar14) < 4) {
            bVar2 = bVar2 >> 1;
            *(byte *)((int)puVar12 + uVar8) = bVar2;
            *(byte *)((int)puVar12 + (uVar14 & uVar8 - 4) + 4) = bVar2;
            goto LAB_00945e04;
          }
          cVar1 = *(char *)((int)puVar12 + uVar10);
          bVar2 = bVar2 >> 1;
          *(byte *)((int)puVar12 + uVar10) = bVar2;
          *(byte *)((int)puVar12 + (uVar10 - 4 & uVar14) + 4) = bVar2;
          uVar10 = ~uVar10;
          if (cVar1 == -1) break;
          uVar14 = puVar13[uVar6];
          puVar13[uVar6] = puVar12[uVar10];
          puVar12[uVar10] = uVar14;
          puVar12 = (uint *)*param_1;
        }
        iVar4 = *param_1;
        uVar14 = param_1[1];
        *(undefined1 *)(iVar4 + uVar8) = 0xff;
        *(undefined1 *)(iVar4 + (uVar14 & uVar8 - 4) + 4) = 0xff;
        puVar12[uVar10] = puVar13[uVar6];
      }
LAB_00945e04:
      bVar17 = uVar8 != uVar3;
      uVar8 = uVar8 + 1;
    } while (bVar17);
    uVar8 = param_1[1];
    if (7 < uVar8) {
      uVar8 = (uVar8 + 1 & 0xfffffff8) - (uVar8 + 1 >> 3);
    }
  }
  param_1[2] = uVar8 - param_1[3];
  return 0x80000001;
}


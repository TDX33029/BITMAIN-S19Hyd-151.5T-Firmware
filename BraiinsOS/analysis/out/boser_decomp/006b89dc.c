// FUN_006b89dc @ 006b89dc size=1144 calls_out=5 calls_in=2
// strings: Hash table capacity overflow

undefined4 FUN_006b89dc(int *param_1,uint param_2,int param_3,uint param_4)

{
  char cVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  undefined4 *puVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  uint *puVar12;
  uint *puVar13;
  uint uVar14;
  uint uVar15;
  int iVar16;
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
    FUN_00944484(&local_40,param_1 + 4,uVar9);
    if (local_40 == (int *)0x0) {
      return local_3c;
    }
    local_50 = local_34;
    local_4c = uStack_30;
    local_48 = iStack_2c;
    local_44 = uStack_28;
    iVar16 = param_1[3];
    local_58 = local_3c;
    iVar4 = 0;
    local_54 = local_38;
    local_5c = local_40;
    if (iVar16 != 0) {
      puVar13 = (uint *)*param_1;
      iVar4 = 0;
      uVar9 = ~*puVar13 & 0x80808080;
      do {
        if (uVar9 == 0) {
          do {
            puVar13 = puVar13 + 1;
            iVar4 = iVar4 + 4;
          } while ((*puVar13 & 0x80808080) == 0x80808080);
          uVar9 = *puVar13 & 0x80808080 ^ 0x80808080;
        }
        uVar7 = iVar4 + ((uint)LZCOUNT(uVar9 << 0x18 | (uVar9 >> 8 & 0xff) << 0x10 |
                                       (uVar9 >> 0x10 & 0xff) << 8 | uVar9 >> 0x18) >> 3);
        uVar3 = *(uint *)(*param_1 + uVar7 * -4 + -4);
        if (param_4 <= uVar3) {
                    /* WARNING: Subroutine does not return */
          FUN_012fb12c(uVar3,param_4,&DAT_01d30858);
        }
        uVar3 = *(uint *)(param_3 + uVar3 * 0x10 + 0xc);
        uVar14 = uStack_30 & uVar3;
        uVar6 = *(uint *)((int)local_34 + uVar14) & 0x80808080;
        if (uVar6 == 0) {
          iVar10 = 4;
          do {
            uVar14 = uVar14 + iVar10;
            iVar10 = iVar10 + 4;
            uVar14 = uVar14 & uStack_30;
            uVar6 = *(uint *)((int)local_34 + uVar14) & 0x80808080;
          } while (uVar6 == 0);
        }
        uVar6 = uVar14 + ((uint)LZCOUNT(uVar6 << 0x18 | (uVar6 >> 8 & 0xff) << 0x10 |
                                        (uVar6 >> 0x10 & 0xff) << 8 | uVar6 >> 0x18) >> 3) &
                uStack_30;
        if (-1 < *(char *)((int)local_34 + uVar6)) {
          uVar6 = *local_34 & 0x80808080;
          uVar6 = (uint)LZCOUNT((*local_34 & 0x80) << 0x18 | (uVar6 >> 8 & 0xff) << 0x10 |
                                (uVar6 >> 0x10 & 0xff) << 8 | uVar6 >> 0x18) >> 3;
        }
        uVar9 = uVar9 - 1 & uVar9;
        bVar2 = (byte)(uVar3 >> 0x19);
        *(byte *)((int)local_34 + uVar6) = bVar2;
        iVar16 = iVar16 + -1;
        *(byte *)((int)local_34 + (uVar6 - 4 & uStack_30) + 4) = bVar2;
        local_34[~uVar6] = *(uint *)(*param_1 + ~uVar7 * 4);
      } while (iVar16 != 0);
      iVar4 = param_1[3];
    }
    local_44 = iVar4;
    local_48 = iStack_2c - iVar4;
    iVar4 = 0;
    do {
      puVar13 = (uint *)param_1[iVar4];
      param_1[iVar4] = (int)(&local_50)[iVar4];
      iVar16 = iVar4 + 1;
      (&local_50)[iVar4] = puVar13;
      iVar4 = iVar16;
    } while (iVar16 != 4);
    FUN_01a52db4(&local_5c);
    return 0x80000001;
  }
  if (uVar7 != 0) {
    uVar9 = uVar7 >> 2;
    if ((uVar7 & 3) != 0) {
      uVar9 = (uVar7 >> 2) + 1;
    }
    puVar5 = (undefined4 *)*param_1;
    iVar4 = 0;
    do {
      puVar5[-iVar4] = (~((uint)puVar5[-iVar4] >> 7) & 0x1010101) + (puVar5[-iVar4] | 0x7f7f7f7f);
      iVar4 = iVar4 + -1;
    } while (-iVar4 != uVar9);
    if (3 < uVar7) {
      *(undefined4 *)((int)puVar5 + uVar7) = *puVar5;
      goto LAB_006b8c60;
    }
  }
  FUN_01bed864(*param_1 + 4);
LAB_006b8c60:
  uVar3 = param_1[1];
  local_38 = 4;
  uVar9 = 0;
  local_3c = 0;
  if (uVar3 != 0xffffffff) {
    do {
      puVar13 = (uint *)*param_1;
      if (*(char *)((int)puVar13 + uVar9) == -0x80) {
        uVar7 = ~uVar9;
        puVar12 = puVar13;
        while( true ) {
          uVar6 = puVar12[-1 - uVar9];
          if (param_4 <= uVar6) {
            local_40 = param_1;
                    /* WARNING: Subroutine does not return */
            FUN_012fb12c(uVar6,param_4,&DAT_01d30858);
          }
          uVar8 = param_1[1];
          uVar14 = *(uint *)(param_3 + uVar6 * 0x10 + 0xc);
          uVar11 = uVar8 & uVar14;
          uVar15 = *(uint *)((int)puVar12 + uVar11) & 0x80808080;
          uVar6 = uVar11;
          if (uVar15 == 0) {
            iVar4 = 4;
            do {
              uVar6 = uVar6 + iVar4 & uVar8;
              uVar15 = *(uint *)((int)puVar12 + uVar6) & 0x80808080;
              iVar4 = iVar4 + 4;
            } while (uVar15 == 0);
          }
          uVar6 = uVar6 + ((uint)LZCOUNT(uVar15 << 0x18 | (uVar15 >> 8 & 0xff) << 0x10 |
                                         (uVar15 >> 0x10 & 0xff) << 8 | uVar15 >> 0x18) >> 3) &
                  uVar8;
          if (-1 < *(char *)((int)puVar12 + uVar6)) {
            uVar6 = *puVar12 & 0x80808080;
            uVar6 = (uint)LZCOUNT((*puVar12 & 0x80) << 0x18 | (uVar6 >> 8 & 0xff) << 0x10 |
                                  (uVar6 >> 0x10 & 0xff) << 8 | uVar6 >> 0x18) >> 3;
          }
          bVar2 = (byte)(uVar14 >> 0x18);
          if (((uVar6 - uVar11 ^ uVar9 - uVar11) & uVar8) < 4) {
            bVar2 = bVar2 >> 1;
            *(byte *)((int)puVar12 + uVar9) = bVar2;
            *(byte *)((int)puVar12 + (uVar8 & uVar9 - 4) + 4) = bVar2;
            goto LAB_006b8db4;
          }
          cVar1 = *(char *)((int)puVar12 + uVar6);
          bVar2 = bVar2 >> 1;
          *(byte *)((int)puVar12 + uVar6) = bVar2;
          *(byte *)((int)puVar12 + (uVar6 - 4 & uVar8) + 4) = bVar2;
          uVar6 = ~uVar6;
          if (cVar1 == -1) break;
          uVar14 = puVar13[uVar7];
          puVar13[uVar7] = puVar12[uVar6];
          puVar12[uVar6] = uVar14;
          puVar12 = (uint *)*param_1;
        }
        iVar4 = *param_1;
        uVar14 = param_1[1];
        *(undefined1 *)(iVar4 + uVar9) = 0xff;
        *(undefined1 *)(iVar4 + (uVar14 & uVar9 - 4) + 4) = 0xff;
        puVar12[uVar6] = puVar13[uVar7];
      }
LAB_006b8db4:
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


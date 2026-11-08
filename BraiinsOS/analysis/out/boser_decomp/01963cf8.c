// FUN_01963cf8 @ 01963cf8 size=1308 calls_out=7 calls_in=0
// strings: Hash table capacity overflow

undefined4 FUN_01963cf8(int *param_1,int param_2,uint param_3)

{
  char cVar1;
  byte bVar2;
  uint uVar3;
  undefined4 *puVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  uint *puVar13;
  uint *puVar14;
  uint uVar15;
  uint uVar16;
  uint *puVar17;
  int iVar18;
  bool bVar19;
  bool bVar20;
  int *local_40;
  undefined4 local_3c;
  undefined4 local_38;
  uint *local_34;
  uint local_30;
  uint local_2c;
  int local_28;
  
  uVar3 = param_1[3] + 1;
  if (0xfffffffe < (uint)param_1[3]) {
LAB_01963e00:
                    /* WARNING: Subroutine does not return */
    FUN_012fb100("Hash table capacity overflow",0x39,&DAT_01d30868);
  }
  uVar6 = param_1[1];
  uVar8 = uVar6 + 1;
  if (7 < uVar6) {
    uVar6 = (uVar8 & 0xfffffff8) - (uVar8 >> 3);
  }
  if (uVar6 >> 1 < uVar3) {
    uVar6 = uVar6 + 1;
    if (uVar3 < uVar6) {
      uVar3 = uVar6;
    }
    if (uVar3 < 0xf) {
      uVar6 = (uVar3 & 8) + 8;
      if (uVar3 < 4) {
        uVar6 = 4;
      }
    }
    else {
      bVar20 = 0x1ffffffe < uVar3;
      bVar19 = uVar3 == 0x1fffffff;
      if (uVar3 < 0x20000000) {
        iVar18 = (int)((ulonglong)(uVar3 << 3) * 0x24924925 >> 0x20);
        iVar5 = uVar3 * 8;
        uVar3 = 0xffffffff;
        uVar6 = LZCOUNT((iVar18 + ((uint)(iVar5 - iVar18) >> 1) >> 2) - 1);
        bVar20 = 0x3ffffffd < 0xffffffffU >> uVar6;
        bVar19 = 0xffffffffU >> uVar6 == 0x3ffffffe;
      }
      if (bVar20 && !bVar19) goto LAB_01963e00;
      uVar6 = (uVar3 >> (uVar6 & 0xff)) + 1;
    }
    uVar3 = uVar6 + 4;
    uVar8 = uVar3 + uVar6 * 4;
    if ((uVar3 <= uVar8) && (uVar8 < 0x7ffffffd)) {
      iVar5 = FUN_01298504(uVar8,4);
      if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_0066439c(4,uVar8);
      }
      puVar14 = (uint *)(iVar5 + uVar6 * 4);
      FUN_01bed93e(puVar14,0xff,uVar3);
      local_30 = uVar6 - 1;
      iVar5 = param_1[3];
      local_2c = local_30;
      if (7 < local_30) {
        local_2c = (uVar6 & 0xfffffff8) - (uVar6 >> 3);
      }
      local_28 = 0;
      local_34 = puVar14;
      local_38 = 4;
      local_3c = 4;
      iVar18 = 0;
      local_40 = param_1 + 4;
      if (iVar5 != 0) {
        puVar17 = (uint *)*param_1;
        iVar11 = 0;
        uVar3 = ~*puVar17 & 0x80808080;
        puVar13 = puVar17;
        iVar18 = iVar5;
        do {
          if (uVar3 == 0) {
            do {
              puVar13 = puVar13 + 1;
              iVar11 = iVar11 + 4;
            } while ((*puVar13 & 0x80808080) == 0x80808080);
            uVar3 = *puVar13 & 0x80808080 ^ 0x80808080;
          }
          uVar8 = iVar11 + ((uint)LZCOUNT(uVar3 << 0x18 | (uVar3 >> 8 & 0xff) << 0x10 |
                                          (uVar3 >> 0x10 & 0xff) << 8 | uVar3 >> 0x18) >> 3);
          uVar6 = puVar17[-1 - uVar8];
          if (param_3 <= uVar6) {
                    /* WARNING: Subroutine does not return */
            FUN_012fb12c(uVar6,param_3,&DAT_01d30858,iVar11,iVar5,local_2c);
          }
          uVar6 = *(uint *)(param_2 + uVar6 * 0x20 + 0x1c);
          uVar15 = local_30 & uVar6;
          uVar12 = *(uint *)((int)puVar14 + uVar15) & 0x80808080;
          if (uVar12 == 0) {
            iVar9 = 4;
            do {
              uVar15 = uVar15 + iVar9;
              iVar9 = iVar9 + 4;
              uVar15 = uVar15 & local_30;
              uVar12 = *(uint *)((int)puVar14 + uVar15) & 0x80808080;
            } while (uVar12 == 0);
          }
          uVar12 = uVar15 + ((uint)LZCOUNT(uVar12 << 0x18 | (uVar12 >> 8 & 0xff) << 0x10 |
                                           (uVar12 >> 0x10 & 0xff) << 8 | uVar12 >> 0x18) >> 3) &
                   local_30;
          if (-1 < *(char *)((int)puVar14 + uVar12)) {
            uVar12 = *puVar14 & 0x80808080;
            uVar12 = (uint)LZCOUNT((*puVar14 & 0x80) << 0x18 | (uVar12 >> 8 & 0xff) << 0x10 |
                                   (uVar12 >> 0x10 & 0xff) << 8 | uVar12 >> 0x18) >> 3;
          }
          uVar3 = uVar3 - 1 & uVar3;
          bVar2 = (byte)(uVar6 >> 0x19);
          *(byte *)((int)puVar14 + uVar12) = bVar2;
          iVar18 = iVar18 + -1;
          *(byte *)((int)puVar14 + (uVar12 - 4 & local_30) + 4) = bVar2;
          puVar14[~uVar12] = puVar17[~uVar8];
        } while (iVar18 != 0);
        iVar18 = iVar5;
      }
      local_28 = iVar18;
      local_2c = local_2c - iVar18;
      iVar5 = 0;
      do {
        puVar14 = (uint *)param_1[iVar5];
        param_1[iVar5] = (int)(&local_34)[iVar5];
        iVar18 = iVar5 + 1;
        (&local_34)[iVar5] = puVar14;
        iVar5 = iVar18;
      } while (iVar18 != 4);
      FUN_01a52db4(&local_40);
      return 0x80000001;
    }
    goto LAB_01963e00;
  }
  if (uVar8 != 0) {
    uVar3 = uVar8 >> 2;
    if ((uVar8 & 3) != 0) {
      uVar3 = (uVar8 >> 2) + 1;
    }
    puVar4 = (undefined4 *)*param_1;
    iVar5 = 0;
    do {
      puVar4[-iVar5] = (~((uint)puVar4[-iVar5] >> 7) & 0x1010101) + (puVar4[-iVar5] | 0x7f7f7f7f);
      iVar5 = iVar5 + -1;
    } while (-iVar5 != uVar3);
    if (3 < uVar8) {
      *(undefined4 *)((int)puVar4 + uVar8) = *puVar4;
      goto LAB_01963e24;
    }
  }
  FUN_01bed864(*param_1 + 4);
LAB_01963e24:
  uVar6 = param_1[1];
  local_38 = 4;
  uVar3 = 0;
  local_3c = 0;
  if (uVar6 != 0xffffffff) {
    do {
      puVar14 = (uint *)*param_1;
      if (*(char *)((int)puVar14 + uVar3) == -0x80) {
        uVar8 = ~uVar3;
        puVar13 = puVar14;
        while( true ) {
          uVar12 = puVar13[-1 - uVar3];
          if (param_3 <= uVar12) {
            local_40 = param_1;
                    /* WARNING: Subroutine does not return */
            FUN_012fb12c(uVar12,param_3,&DAT_01d30858);
          }
          uVar10 = param_1[1];
          uVar15 = *(uint *)(param_2 + uVar12 * 0x20 + 0x1c);
          uVar7 = uVar10 & uVar15;
          uVar16 = *(uint *)((int)puVar13 + uVar7) & 0x80808080;
          uVar12 = uVar7;
          if (uVar16 == 0) {
            iVar5 = 4;
            do {
              uVar12 = uVar12 + iVar5 & uVar10;
              uVar16 = *(uint *)((int)puVar13 + uVar12) & 0x80808080;
              iVar5 = iVar5 + 4;
            } while (uVar16 == 0);
          }
          uVar12 = uVar12 + ((uint)LZCOUNT(uVar16 << 0x18 | (uVar16 >> 8 & 0xff) << 0x10 |
                                           (uVar16 >> 0x10 & 0xff) << 8 | uVar16 >> 0x18) >> 3) &
                   uVar10;
          if (-1 < *(char *)((int)puVar13 + uVar12)) {
            uVar12 = *puVar13 & 0x80808080;
            uVar12 = (uint)LZCOUNT((*puVar13 & 0x80) << 0x18 | (uVar12 >> 8 & 0xff) << 0x10 |
                                   (uVar12 >> 0x10 & 0xff) << 8 | uVar12 >> 0x18) >> 3;
          }
          bVar2 = (byte)(uVar15 >> 0x18);
          if (((uVar12 - uVar7 ^ uVar3 - uVar7) & uVar10) < 4) {
            bVar2 = bVar2 >> 1;
            *(byte *)((int)puVar13 + uVar3) = bVar2;
            *(byte *)((int)puVar13 + (uVar10 & uVar3 - 4) + 4) = bVar2;
            goto LAB_01963f80;
          }
          cVar1 = *(char *)((int)puVar13 + uVar12);
          bVar2 = bVar2 >> 1;
          *(byte *)((int)puVar13 + uVar12) = bVar2;
          *(byte *)((int)puVar13 + (uVar12 - 4 & uVar10) + 4) = bVar2;
          uVar12 = ~uVar12;
          if (cVar1 == -1) break;
          uVar15 = puVar14[uVar8];
          puVar14[uVar8] = puVar13[uVar12];
          puVar13[uVar12] = uVar15;
          puVar13 = (uint *)*param_1;
        }
        iVar5 = *param_1;
        uVar15 = param_1[1];
        *(undefined1 *)(iVar5 + uVar3) = 0xff;
        *(undefined1 *)(iVar5 + (uVar15 & uVar3 - 4) + 4) = 0xff;
        puVar13[uVar12] = puVar14[uVar8];
      }
LAB_01963f80:
      bVar19 = uVar3 != uVar6;
      uVar3 = uVar3 + 1;
    } while (bVar19);
    uVar3 = param_1[1];
    if (7 < uVar3) {
      uVar3 = (uVar3 + 1 & 0xfffffff8) - (uVar3 + 1 >> 3);
    }
  }
  param_1[2] = uVar3 - param_1[3];
  return 0x80000001;
}


// FUN_016df9f4 @ 016df9f4 size=680 calls_out=6 calls_in=3
// strings: 

void FUN_016df9f4(uint *param_1)

{
  int iVar1;
  uint uVar2;
  uint *puVar3;
  undefined4 *puVar4;
  undefined *puVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  int *piVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  int *local_38;
  int *local_34;
  uint *local_30;
  uint local_2c;
  int local_28;
  
  uVar8 = param_1[2];
  if (uVar8 == 0) {
    if (*param_1 == 0) {
      FUN_015f5ab8(param_1);
    }
    puVar4 = (undefined4 *)param_1[1];
    *(undefined1 *)(param_1 + 3) = 1;
    param_1[2] = 1;
    *puVar4 = 0;
    puVar4[1] = 0x10ffff;
  }
  else {
    piVar11 = (int *)param_1[1];
    if (*piVar11 == 0) {
      uVar14 = uVar8;
    }
    else {
      iVar1 = FUN_016f6948();
      if (uVar8 == *param_1) {
        FUN_015f5ab8(param_1);
        piVar11 = (int *)param_1[1];
      }
      param_1[2] = uVar8 + 1;
      piVar11[uVar8 * 2] = 0;
      (piVar11 + uVar8 * 2)[1] = iVar1;
      uVar14 = uVar8 + 1;
    }
    uVar6 = uVar8 - 1;
    if (uVar6 != 0) {
      uVar10 = uVar14 << 3 | 4;
      uVar2 = 0;
      do {
        uVar9 = uVar14 + uVar2;
        if (uVar9 <= uVar2) {
          puVar5 = &DAT_01d18848;
LAB_016dfc7c:
                    /* WARNING: Subroutine does not return */
          FUN_012fb12c(uVar2,uVar9,puVar5);
        }
        uVar12 = 0xe000;
        if ((piVar11[uVar2 * 2 + 1] != 0xd7ff) &&
           (uVar12 = piVar11[uVar2 * 2 + 1] + 1, (uVar12 ^ 0xd800) - 0x110000 < 0xffef0800))
        goto LAB_016dfc48;
        uVar7 = uVar2 + 1;
        if (uVar9 <= uVar7) {
          puVar5 = &DAT_01d18858;
          uVar2 = uVar7;
          goto LAB_016dfc7c;
        }
        uVar2 = FUN_016f6948(piVar11[uVar2 * 2 + 2]);
        uVar13 = uVar2;
        if (uVar12 >= uVar2 && uVar12 != uVar2) {
          uVar13 = uVar12;
        }
        if (uVar12 < uVar2) {
          uVar2 = uVar12;
        }
        if (uVar9 == *param_1) {
          FUN_015f5ab8(param_1);
          piVar11 = (int *)param_1[1];
        }
        param_1[2] = uVar9 + 1;
        puVar3 = (uint *)((int)piVar11 + uVar10);
        *puVar3 = uVar13;
        uVar10 = uVar10 + 8;
        puVar3[-1] = uVar2;
        uVar2 = uVar7;
      } while (uVar6 != uVar7);
      uVar14 = uVar14 + uVar7;
    }
    if (uVar14 <= uVar6) {
                    /* WARNING: Subroutine does not return */
      FUN_012fb12c(uVar6,uVar14,&DAT_01d18838);
    }
    uVar6 = piVar11[uVar6 * 2 + 1];
    if (uVar6 < 0x10ffff) {
      uVar2 = 0xe000;
      if ((uVar6 != 0xd7ff) && (uVar2 = uVar6 + 1, (uVar2 ^ 0xd800) - 0x110000 < 0xffef0800)) {
LAB_016dfc48:
                    /* WARNING: Subroutine does not return */
        FUN_012fb0cc(&DAT_01d188d8);
      }
      uVar6 = 0x10ffff;
      if (0x10ffff < uVar2) {
        uVar6 = uVar2;
      }
      uVar10 = 0x10ffff;
      if (uVar2 < 0x10ffff) {
        uVar10 = uVar2;
      }
      if (uVar14 == *param_1) {
        FUN_015f5ab8(param_1);
      }
      piVar11 = (int *)param_1[1];
      param_1[2] = uVar14 + 1;
      piVar11[uVar14 * 2] = uVar10;
      (piVar11 + uVar14 * 2)[1] = uVar6;
      uVar14 = uVar14 + 1;
    }
    if (uVar14 < uVar8) {
                    /* WARNING: Subroutine does not return */
      FUN_012faff4(0,uVar8,uVar14,&DAT_01d2fe30);
    }
    param_1[2] = 0;
    local_28 = uVar14 - uVar8;
    local_34 = piVar11 + uVar8 * 2;
    local_38 = piVar11;
    local_30 = param_1;
    local_2c = uVar8;
    FUN_016f1920(&local_38);
  }
  return;
}


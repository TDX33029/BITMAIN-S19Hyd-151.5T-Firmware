// FUN_013e10d4 @ 013e10d4 size=792 calls_out=5 calls_in=1
// strings: 

void FUN_013e10d4(uint *param_1)

{
  uint uVar1;
  uint uVar2;
  uint *puVar3;
  int iVar4;
  undefined4 *puVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  int *piVar12;
  
  uVar9 = param_1[2];
  if (uVar9 == 0) {
    if (*param_1 == 0) {
      FUN_01401514(param_1);
    }
    puVar5 = (undefined4 *)param_1[1];
    *(undefined1 *)(param_1 + 3) = 1;
    param_1[2] = 1;
    *puVar5 = 0;
    puVar5[1] = 0x10ffff;
    return;
  }
  piVar12 = (int *)param_1[1];
  iVar4 = *piVar12;
  if (iVar4 == 0) {
    uVar6 = uVar9;
    if (uVar9 == 1) {
      uVar6 = 1;
      goto LAB_013e128c;
    }
  }
  else {
    uVar7 = 0xd7ff;
    if ((iVar4 != 0xe000) && (uVar7 = iVar4 - 1, (uVar7 ^ 0xd800) - 0x110000 < 0xffef0800)) {
LAB_013e1388:
                    /* WARNING: Subroutine does not return */
      FUN_00faa444(&DAT_0189dff0);
    }
    if (uVar9 == *param_1) {
      FUN_01401514(param_1);
      piVar12 = (int *)param_1[1];
    }
    uVar6 = uVar9 + 1;
    param_1[2] = uVar6;
    piVar12[uVar9 * 2] = 0;
    (piVar12 + uVar9 * 2)[1] = uVar7;
    if (uVar9 == 1) goto LAB_013e128c;
  }
  uVar2 = uVar6 << 3 | 4;
  uVar7 = 0;
  do {
    uVar10 = uVar6 + uVar7;
    if (uVar10 <= uVar7) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa4a4(uVar7,uVar10,&DAT_0189df70);
    }
    uVar1 = 0xe000;
    if ((piVar12[uVar7 * 2 + 1] != 0xd7ff) &&
       (uVar1 = piVar12[uVar7 * 2 + 1] + 1, (uVar1 ^ 0xd800) - 0x110000 < 0xffef0800))
    goto LAB_013e137c;
    uVar8 = uVar7 + 1;
    if (uVar10 <= uVar8) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa4a4(uVar8,uVar10,&DAT_0189df80);
    }
    iVar4 = piVar12[uVar7 * 2 + 2];
    uVar7 = 0xd7ff;
    if (iVar4 != 0xe000) {
      if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa444(&DAT_0189e000);
      }
      uVar7 = iVar4 - 1;
      if ((uVar7 ^ 0xd800) - 0x110000 < 0xffef0800) goto LAB_013e1388;
    }
    uVar11 = uVar7;
    if (uVar1 < uVar7) {
      uVar11 = uVar1;
    }
    if (uVar1 >= uVar7 && uVar1 != uVar7) {
      uVar7 = uVar1;
    }
    if (uVar10 == *param_1) {
      FUN_01401514(param_1);
      piVar12 = (int *)param_1[1];
    }
    param_1[2] = uVar10 + 1;
    puVar3 = (uint *)((int)piVar12 + uVar2);
    *puVar3 = uVar7;
    uVar2 = uVar2 + 8;
    puVar3[-1] = uVar11;
    uVar7 = uVar8;
  } while (uVar9 - 1 != uVar8);
  uVar6 = uVar6 + uVar8;
LAB_013e128c:
  uVar7 = uVar9 - 1;
  if (uVar6 <= uVar7) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa4a4(uVar7,uVar6,&DAT_0189df60);
  }
  uVar7 = piVar12[uVar7 * 2 + 1];
  if (uVar7 < 0x10ffff) {
    uVar2 = 0xe000;
    if ((uVar7 != 0xd7ff) && (uVar2 = uVar7 + 1, (uVar2 ^ 0xd800) - 0x110000 < 0xffef0800)) {
LAB_013e137c:
                    /* WARNING: Subroutine does not return */
      FUN_00faa444(&DAT_0189e010);
    }
    uVar7 = 0x10ffff;
    if (0x10ffff < uVar2) {
      uVar7 = uVar2;
    }
    uVar10 = 0x10ffff;
    if (uVar2 < 0x10ffff) {
      uVar10 = uVar2;
    }
    if (uVar6 == *param_1) {
      FUN_01401514(param_1);
    }
    param_1[2] = uVar6 + 1;
    puVar3 = (uint *)(param_1[1] + uVar6 * 8);
    *puVar3 = uVar10;
    puVar3[1] = uVar7;
    uVar6 = uVar6 + 1;
  }
  if (uVar6 < uVar9) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa36c(0,uVar9,uVar6,&DAT_018af198);
  }
  param_1[2] = 0;
  if (uVar6 != uVar9) {
    FUN_016dd52c(param_1[1],param_1[1] + uVar9 * 8,(uVar6 - uVar9) * 8);
    param_1[2] = uVar6 - uVar9;
  }
  return;
}


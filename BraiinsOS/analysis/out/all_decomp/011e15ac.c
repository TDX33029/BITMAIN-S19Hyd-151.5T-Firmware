// FUN_011e15ac @ 011e15ac size=980 calls_out=7 calls_in=2
// strings: start of range should be a character boundary | end of range should be a character boundary

void FUN_011e15ac(int *param_1,uint param_2,uint param_3,undefined1 *param_4,uint param_5,
                 undefined4 param_6)

{
  int iVar1;
  undefined1 *puVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  undefined1 *puVar11;
  undefined1 *puVar12;
  undefined1 *puVar13;
  uint uVar14;
  uint uVar15;
  
  uVar8 = param_1[2];
  if (uVar8 < param_3) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa36c(0,param_3,uVar8);
  }
  if (param_3 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa36c(param_2,param_3,uVar8);
  }
  iVar1 = param_1[1];
  if (((param_2 != 0) && (param_2 < uVar8)) && (*(char *)(iVar1 + param_2) < -0x40)) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa478("start of range should be a character boundary",0x5b,param_6);
  }
  if (param_3 == 0) {
    uVar15 = 0;
    if (param_2 != 0) goto LAB_011e1778;
  }
  else {
    if ((param_3 < uVar8) && (*(char *)(iVar1 + param_3) < -0x40)) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa478("end of range should be a character boundary",0x57,param_6);
    }
    uVar15 = param_3;
    if (param_3 < param_2) {
LAB_011e1778:
                    /* WARNING: Subroutine does not return */
      FUN_00faa36c(param_2,uVar15,uVar8,&DAT_018af198);
    }
  }
  iVar10 = uVar8 - uVar15;
  param_1[2] = param_2;
  puVar13 = param_4 + param_5;
  if (iVar10 == 0) {
    if (*param_1 - param_2 < param_5) {
      FUN_011cf828(param_1,param_2,param_5,1,1);
      iVar1 = param_1[1];
      param_2 = param_1[2];
    }
    do {
      param_5 = param_5 - 1;
      *(undefined1 *)(iVar1 + param_2) = *param_4;
      param_2 = param_2 + 1;
      param_4 = param_4 + 1;
    } while (param_5 != 0);
  }
  else {
    puVar11 = param_4;
    uVar14 = uVar15;
    if (param_2 != uVar15) {
      iVar4 = param_3 - param_2;
      puVar2 = (undefined1 *)(iVar1 + param_2);
      uVar7 = param_5;
      puVar12 = param_4;
      do {
        if (uVar7 == 0) goto LAB_011e18a0;
        puVar11 = puVar12 + 1;
        uVar7 = uVar7 - 1;
        *puVar2 = *puVar12;
        iVar4 = iVar4 + -1;
        param_1[2] = param_1[2] + 1;
        puVar2 = puVar2 + 1;
        puVar12 = puVar11;
      } while (iVar4 != 0);
    }
    if (puVar13 == puVar11) {
      iVar1 = 0;
      puVar11 = puVar13;
    }
    else {
      uVar14 = (int)puVar13 - (int)puVar11;
      if (*param_1 - uVar8 < uVar14) {
        FUN_011cf828(param_1,uVar8,uVar14,1,1);
      }
      uVar14 = uVar15 + uVar14;
      FUN_016dd52c(param_1[1] + uVar14,param_1[1] + uVar15,iVar10);
      uVar7 = param_1[2];
      if (uVar7 != uVar14) {
        param_4 = param_4 + (((param_5 + param_3) - uVar7) - (int)puVar11);
        puVar2 = (undefined1 *)(param_1[1] + uVar7);
        puVar12 = puVar11;
        do {
          if (puVar12 == puVar13) goto LAB_011e18a0;
          puVar11 = puVar12 + 1;
          param_4 = param_4 + -1;
          *puVar2 = *puVar12;
          param_1[2] = param_1[2] + 1;
          puVar2 = puVar2 + 1;
          puVar12 = puVar11;
        } while (param_4 != (undefined1 *)0x0);
      }
      iVar1 = (int)puVar13 - (int)puVar11;
      uVar3 = 0;
      if (iVar1 < 0) goto LAB_011e17a4;
    }
    iVar4 = 1;
    if ((puVar13 != puVar11) && (iVar4 = thunk_FUN_016d4a50(iVar1), iVar4 == 0)) {
      uVar3 = 1;
LAB_011e17a4:
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(uVar3,iVar1);
    }
    uVar7 = uVar14;
    if (puVar11 != puVar13) {
      uVar9 = 0;
      do {
        *(undefined1 *)(iVar4 + uVar9) = puVar11[uVar9];
        uVar9 = uVar9 + 1;
      } while (puVar11 + uVar9 != puVar13);
      if (uVar9 != 0) {
        if (*param_1 - (iVar10 + uVar14) < uVar9) {
          FUN_011cf828(param_1,iVar10 + uVar14,uVar9,1,1);
        }
        uVar7 = uVar14 + uVar9;
        FUN_016dd52c(param_1[1] + uVar7,param_1[1] + uVar14,iVar10);
        iVar1 = param_1[1];
        uVar5 = param_1[2];
        if (uVar5 != uVar7) {
          uVar6 = 0;
          do {
            if (uVar9 == uVar6) break;
            *(undefined1 *)(iVar1 + uVar5 + uVar6) = *(undefined1 *)(iVar4 + uVar6);
            uVar6 = uVar6 + 1;
            param_1[2] = param_1[2] + 1;
          } while ((uVar14 - uVar5) + uVar9 != uVar6);
        }
      }
    }
    uVar14 = uVar7;
    if (puVar13 != puVar11) {
      thunk_FUN_016d3fb4(iVar4);
    }
LAB_011e18a0:
    if (uVar8 == uVar15) {
      return;
    }
    param_2 = param_1[2];
    if (uVar14 != param_2) {
      FUN_016dd52c(param_1[1] + param_2,param_1[1] + uVar14,iVar10);
    }
    param_2 = param_2 + iVar10;
  }
  param_1[2] = param_2;
  return;
}


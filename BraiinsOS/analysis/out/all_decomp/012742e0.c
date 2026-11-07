// FUN_012742e0 @ 012742e0 size=544 calls_out=5 calls_in=8
// strings: 

void FUN_012742e0(uint *param_1,uint *param_2,uint *param_3,uint param_4)

{
  int iVar1;
  uint *puVar2;
  uint *puVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint *puVar12;
  
  uVar11 = param_2[2];
  if (uVar11 < param_4) {
    puVar12 = (uint *)param_2[1];
    if (uVar11 == 0) {
      uVar7 = 0;
    }
    else {
      uVar7 = 0;
      puVar2 = puVar12;
      puVar3 = param_3;
      uVar5 = uVar11;
      do {
        uVar8 = *puVar2;
        uVar9 = *puVar3;
        uVar10 = uVar9 + uVar8;
        *puVar2 = uVar10 + uVar7;
        uVar7 = (uint)(CARRY4(uVar9,uVar8) || CARRY4(uVar10,uVar7));
        uVar5 = uVar5 - 1;
        puVar2 = puVar2 + 1;
        puVar3 = puVar3 + 1;
      } while (uVar5 != 0);
    }
    uVar8 = param_4 - uVar11;
    uVar5 = uVar11;
    if (*param_2 - uVar11 < uVar8) {
      FUN_0127ade8(param_2,uVar11,uVar8);
      puVar12 = (uint *)param_2[1];
      uVar5 = param_2[2];
    }
    FUN_016dd1aa(puVar12 + uVar5,param_3 + uVar11,uVar8 * 4);
    uVar8 = uVar5 + uVar8;
    param_2[2] = uVar8;
    if (uVar8 < uVar11) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa36c(uVar11,uVar8,uVar8,&DAT_0188b604);
    }
    if (uVar8 == uVar11) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa478(&DAT_00418e0f,0x13,&DAT_0188b834);
    }
    uVar9 = puVar12[uVar11];
    puVar12[uVar11] = uVar7 + uVar9;
    if (!CARRY4(uVar7,uVar9)) goto LAB_012744a4;
    if (uVar8 - uVar11 != 1) {
      iVar1 = uVar11 * 4;
      iVar4 = (uVar5 + param_4) * 4 + uVar11 * -8 + -4;
      do {
        iVar1 = iVar1 + 4;
        iVar6 = *(int *)((int)puVar12 + iVar1);
        *(int *)((int)puVar12 + iVar1) = iVar6 + 1;
        if (iVar6 != -1) goto LAB_012744a4;
        iVar4 = iVar4 + -4;
      } while (iVar4 != 0);
    }
    uVar11 = uVar8;
    if (uVar8 == *param_2) {
LAB_01274488:
      FUN_0127ac28(param_2);
      puVar12 = (uint *)param_2[1];
    }
  }
  else {
    if (param_4 == 0) goto LAB_012744a4;
    puVar12 = (uint *)param_2[1];
    uVar5 = 0;
    uVar7 = 0;
    do {
      uVar8 = puVar12[uVar7];
      uVar10 = param_3[uVar7];
      uVar9 = uVar10 + uVar8;
      puVar12[uVar7] = uVar9 + uVar5;
      uVar5 = (uint)(CARRY4(uVar10,uVar8) || CARRY4(uVar9,uVar5));
      uVar7 = uVar7 + 1;
    } while (param_4 != uVar7);
    if (uVar5 == 0) goto LAB_012744a4;
    if (param_4 != uVar11) {
      iVar1 = param_4 << 2;
      do {
        iVar4 = *(int *)((int)puVar12 + iVar1);
        *(int *)((int)puVar12 + iVar1) = iVar4 + 1;
        if (iVar4 != -1) goto LAB_012744a4;
        iVar1 = iVar1 + 4;
      } while (uVar11 * 4 != iVar1);
    }
    if (uVar11 == *param_2) goto LAB_01274488;
  }
  puVar12[uVar11] = 1;
  param_2[2] = uVar11 + 1;
LAB_012744a4:
  uVar11 = param_2[1];
  uVar7 = param_2[2];
  *param_1 = *param_2;
  param_1[1] = uVar11;
  param_1[2] = uVar7;
  return;
}


// FUN_01273ebc @ 01273ebc size=956 calls_out=7 calls_in=2
// strings: Cannot subtract b from a because b is larger than a. | Tried to shrink to a larger capacitymax line length exceeded

void FUN_01273ebc(uint *param_1,uint *param_2,uint param_3,uint *param_4)

{
  int *piVar1;
  uint *puVar2;
  int iVar3;
  uint *puVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  uint *puVar12;
  uint uVar13;
  uint uVar14;
  undefined *puVar15;
  
  puVar12 = (uint *)param_4[1];
  uVar13 = param_4[2];
  if (param_3 <= uVar13) {
    puVar15 = &DAT_0188b754;
    if (param_3 != 0) {
      uVar5 = 0;
      puVar2 = puVar12;
      uVar8 = param_3;
      do {
        uVar7 = *puVar2;
        uVar9 = *param_2;
        uVar10 = uVar9 - uVar7;
        *puVar2 = uVar10 - uVar5;
        uVar5 = (uint)(uVar9 < uVar7 || uVar10 < uVar5);
        uVar8 = uVar8 - 1;
        puVar2 = puVar2 + 1;
        param_2 = param_2 + 1;
      } while (uVar8 != 0);
      if (uVar5 != 0) goto LAB_01273fc8;
    }
    iVar3 = param_3 << 2;
    do {
      if (uVar13 * 4 == iVar3) goto LAB_0127402c;
      piVar1 = (int *)((int)puVar12 + iVar3);
      iVar3 = iVar3 + 4;
    } while (*piVar1 == 0);
LAB_01273fc8:
                    /* WARNING: Subroutine does not return */
    FUN_00faa478("Cannot subtract b from a because b is larger than a.",0x69,puVar15);
  }
  if (uVar13 == 0) {
    uVar8 = 1;
  }
  else {
    uVar8 = 0;
    puVar2 = param_2;
    puVar4 = puVar12;
    uVar5 = uVar13;
    do {
      uVar7 = *puVar2 - *puVar4;
      uVar9 = uVar7 - uVar8;
      uVar8 = (uint)(*puVar2 < *puVar4 || uVar7 < uVar8);
      *puVar4 = uVar9;
      uVar5 = uVar5 - 1;
      puVar2 = puVar2 + 1;
      puVar4 = puVar4 + 1;
    } while (uVar5 != 0);
    uVar8 = uVar8 ^ 1;
  }
  uVar7 = param_3 - uVar13;
  uVar5 = uVar13;
  if (*param_4 - uVar13 < uVar7) {
    FUN_0127ade8(param_4,uVar13,uVar7);
    puVar12 = (uint *)param_4[1];
    uVar5 = param_4[2];
  }
  FUN_016dd1aa(puVar12 + uVar5,param_2 + uVar13,uVar7 * 4);
  uVar7 = uVar5 + uVar7;
  param_4[2] = uVar7;
  if (uVar8 == 0) {
    if (uVar7 < uVar13) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa36c(uVar13,uVar7,uVar7,&DAT_0188b5f4);
    }
    iVar3 = 0;
    if (uVar7 != uVar13) {
      iVar3 = 4;
    }
    uVar8 = (uint)(uVar7 != uVar13);
    if (uVar7 != uVar13) {
      puVar4 = puVar12 + uVar13 + uVar8;
      uVar10 = 0;
      puVar2 = puVar12 + uVar13;
      uVar9 = uVar8;
      do {
        uVar6 = *puVar2;
        uVar14 = uVar6 - 1;
        *puVar2 = uVar14 - uVar10;
        uVar9 = uVar9 - 1;
        uVar10 = (uint)(uVar6 == 0 || uVar14 < uVar10);
        puVar2 = puVar2 + 1;
      } while (uVar9 != 0);
      puVar15 = &DAT_0188b744;
      if (uVar10 != 0) {
        if (1 < uVar7 - uVar13) {
          iVar11 = (uVar5 + param_3) * 4 + uVar8 * -4 + uVar13 * -8;
          do {
            uVar13 = *puVar4;
            *puVar4 = uVar13 - 1;
            if (uVar13 != 0) goto LAB_01274114;
            puVar4 = puVar4 + 1;
            iVar11 = iVar11 + -4;
          } while (iVar11 != 0);
        }
        goto LAB_01273fc8;
      }
    }
LAB_01274114:
    puVar15 = &DAT_0188b744;
    do {
      if (iVar3 == 4) {
        uVar8 = *param_4;
        uVar13 = uVar7;
        goto joined_r0x01274148;
      }
      piVar1 = (int *)(&DAT_00568c80 + iVar3);
      iVar3 = iVar3 + 4;
    } while (*piVar1 == 0);
    goto LAB_01273fc8;
  }
  uVar13 = uVar7;
LAB_0127402c:
  uVar8 = *param_4;
joined_r0x01274148:
  if (uVar13 == 0) {
joined_r0x01274154:
    uVar13 = 0;
    if (uVar8 >> 2 == 0) goto LAB_012741f0;
  }
  else if (puVar12[uVar13 - 1] == 0) {
    iVar3 = uVar13 << 2;
    uVar5 = uVar13 & 0x3fffffff;
    do {
      uVar7 = uVar5;
      if (iVar3 == 0) goto joined_r0x01274154;
      iVar11 = iVar3 + -4;
      iVar3 = iVar3 + -4;
      uVar5 = uVar7 - 1;
    } while (*(int *)((int)puVar12 + iVar11) == 0);
    if (uVar7 < uVar13) {
      uVar13 = uVar7;
    }
    if (uVar8 >> 2 <= uVar13) goto LAB_012741f0;
  }
  else if (uVar8 >> 2 <= uVar13) goto LAB_012741f0;
  if (uVar8 < uVar13) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa478("Tried to shrink to a larger capacitymax line length exceeded",0x49,&DAT_018ad594);
  }
  if (uVar8 != 0) {
    if (uVar13 == 0) {
      thunk_FUN_016d3fb4(puVar12);
      *param_1 = 0;
      param_1[1] = 4;
      param_1[2] = 0;
      return;
    }
    uVar8 = thunk_FUN_016d4ea4(puVar12,uVar13 << 2);
    if (uVar8 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(4,uVar13 << 2);
    }
    *param_1 = uVar13;
    param_1[1] = uVar8;
    param_1[2] = uVar13;
    return;
  }
  uVar8 = 0;
LAB_012741f0:
  *param_1 = uVar8;
  param_1[1] = (uint)puVar12;
  param_1[2] = uVar13;
  return;
}


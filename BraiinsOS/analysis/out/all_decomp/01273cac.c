// FUN_01273cac @ 01273cac size=512 calls_out=4 calls_in=8
// strings: Cannot subtract b from a because b is larger than a. | Tried to shrink to a larger capacitymax line length exceeded

void FUN_01273cac(uint *param_1,uint *param_2,uint param_3)

{
  int iVar1;
  uint *puVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint *puVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint *puVar10;
  uint uVar11;
  uint *puVar12;
  
  uVar9 = param_1[2];
  puVar10 = (uint *)param_1[1];
  uVar5 = uVar9;
  if (param_3 < uVar9) {
    uVar5 = param_3;
  }
  if (uVar5 != 0) {
    puVar12 = puVar10 + uVar5;
    uVar3 = uVar5;
    puVar2 = param_2;
    puVar6 = puVar10;
    uVar8 = 0;
    do {
      uVar11 = *puVar6 - *puVar2;
      uVar7 = (uint)(*puVar6 < *puVar2 || uVar11 < uVar8);
      *puVar6 = uVar11 - uVar8;
      uVar3 = uVar3 - 1;
      puVar2 = puVar2 + 1;
      puVar6 = puVar6 + 1;
      uVar8 = uVar7;
    } while (uVar3 != 0);
    if (uVar7 != 0) {
      if (param_3 < uVar9) {
        iVar4 = uVar9 * 4 + uVar5 * -4;
        do {
          uVar3 = *puVar12;
          *puVar12 = uVar3 - 1;
          if (uVar3 != 0) goto LAB_01273d6c;
          puVar12 = puVar12 + 1;
          iVar4 = iVar4 + -4;
        } while (iVar4 != 0);
      }
      goto LAB_01273d90;
    }
  }
LAB_01273d6c:
  iVar4 = param_3 * 4 + uVar5 * -4;
  puVar2 = param_2 + uVar5;
  do {
    if (iVar4 == 0) {
      if (uVar9 == 0) {
        uVar9 = 0;
        goto LAB_01273dfc;
      }
      if (puVar10[uVar9 - 1] != 0) goto LAB_01273dfc;
      iVar4 = uVar9 << 2;
      uVar5 = uVar9 & 0x3fffffff;
      goto LAB_01273dcc;
    }
    uVar5 = *puVar2;
    iVar4 = iVar4 + -4;
    puVar2 = puVar2 + 1;
  } while (uVar5 == 0);
LAB_01273d90:
                    /* WARNING: Subroutine does not return */
  FUN_00faa478("Cannot subtract b from a because b is larger than a.",0x69,&DAT_0188b744);
  while( true ) {
    iVar1 = iVar4 + -4;
    iVar4 = iVar4 + -4;
    uVar5 = uVar3 - 1;
    if (*(int *)((int)puVar10 + iVar1) != 0) break;
LAB_01273dcc:
    uVar3 = uVar5;
    if (iVar4 == 0) {
      uVar3 = 0;
      goto LAB_01273e50;
    }
  }
  if (uVar9 < uVar3) {
LAB_01273dfc:
    uVar3 = uVar9;
    uVar9 = *param_1;
    if (uVar9 >> 2 <= uVar3) {
      return;
    }
  }
  else {
LAB_01273e50:
    param_1[2] = uVar3;
    uVar9 = *param_1;
    if (uVar9 >> 2 <= uVar3) {
      return;
    }
  }
  if (uVar9 < uVar3) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa478("Tried to shrink to a larger capacitymax line length exceeded",0x49,&DAT_018ad594);
  }
  if (uVar9 == 0) {
    return;
  }
  if (uVar3 == 0) {
    thunk_FUN_016d3fb4(puVar10);
    *param_1 = 0;
    param_1[1] = 4;
    return;
  }
  uVar9 = thunk_FUN_016d4ea4(puVar10,uVar3 << 2);
  if (uVar9 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(4,uVar3 << 2);
  }
  *param_1 = uVar3;
  param_1[1] = uVar9;
  return;
}


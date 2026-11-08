// FUN_008cf540 @ 008cf540 size=456 calls_out=3 calls_in=1
// strings: 

void FUN_008cf540(int *param_1,int *param_2)

{
  byte bVar1;
  short sVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  undefined4 uVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  int local_30;
  int iStack_2c;
  int local_28;
  
  iVar13 = param_2[8];
  uVar11 = param_2[9];
  uVar14 = param_2[10];
  uVar8 = param_2[0xb];
  bVar1 = *(byte *)(param_2 + 0xc);
  if (*param_2 != 0) {
    piVar3 = (int *)param_2[1];
    if (piVar3 != (int *)param_2[3]) {
      iVar5 = *piVar3;
      param_2[1] = (int)(piVar3 + 4);
      if (iVar5 != 2) goto LAB_008cf65c;
    }
    if (param_2[2] != 0) {
      thunk_FUN_016d3fb4(*param_2);
    }
    *param_2 = 0;
  }
  if (bVar1 != 2) {
    if ((bVar1 & 1) != 0) {
      uVar8 = 0;
    }
    uVar6 = uVar14 - uVar8;
    *(undefined1 *)(param_2 + 0xc) = 0;
    uVar9 = uVar6 - 1;
    uVar12 = uVar11;
    if (uVar8 <= uVar14 && uVar11 < uVar6) {
      uVar12 = uVar9;
    }
    param_2[10] = uVar12;
    if (uVar8 <= uVar14 && uVar11 < uVar6) {
      uVar10 = *(undefined4 *)(iVar13 + 0xb8);
      iVar13 = *(int *)(iVar13 + 0xbc);
      piVar3 = (int *)thunk_FUN_016d4a50(0x20);
      if (piVar3 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00600874(4,0x20);
      }
      iVar5 = 1;
      *(undefined2 *)((int)piVar3 + 0x1a) = 0x100;
      *(undefined2 *)((int)piVar3 + 10) = 0x100;
      param_2[3] = (int)(piVar3 + 8);
      iVar13 = (uVar9 - iVar13) + 1;
      piVar3[1] = iVar13;
      *(undefined1 *)(piVar3 + 7) = 1;
      sVar2 = ((short)uVar10 - (short)iVar13) + 0xe;
      piVar3[5] = uVar9;
      *(undefined1 *)(piVar3 + 3) = 1;
      piVar3[4] = 1;
      *piVar3 = 1;
      *param_2 = (int)piVar3;
      param_2[1] = (int)(piVar3 + 4);
      param_2[2] = 2;
      *(short *)(piVar3 + 6) = sVar2;
      *(short *)(piVar3 + 2) = sVar2;
LAB_008cf65c:
      iVar4 = piVar3[1];
      iVar7 = piVar3[2];
      iVar13 = piVar3[3];
      *param_1 = iVar5;
      param_1[1] = iVar4;
      param_1[2] = iVar7;
      param_1[3] = iVar13;
      return;
    }
    *(undefined1 *)(param_2 + 0xc) = 2;
  }
  if (param_2[4] == 0) {
    *param_1 = 2;
    return;
  }
  piVar3 = (int *)param_2[5];
  if (piVar3 != (int *)param_2[7]) {
    iVar13 = *piVar3;
    local_30 = piVar3[1];
    iStack_2c = piVar3[2];
    local_28 = piVar3[3];
    param_2[5] = (int)(piVar3 + 4);
    if (iVar13 != 2) goto LAB_008cf6d8;
  }
  if (param_2[6] != 0) {
    thunk_FUN_016d3fb4();
  }
  iVar13 = 2;
  param_2[4] = 0;
LAB_008cf6d8:
  *param_1 = iVar13;
  param_1[1] = local_30;
  param_1[2] = iStack_2c;
  param_1[3] = local_28;
  return;
}


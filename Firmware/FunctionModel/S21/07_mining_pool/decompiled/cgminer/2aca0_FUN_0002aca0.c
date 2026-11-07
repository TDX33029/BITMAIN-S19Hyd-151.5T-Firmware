// FUN_0002aca0 @ 0002aca0  size=188  callers=1
// program: cgminer


void FUN_0002aca0(int *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int *piVar4;
  int *piVar3;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int *piVar9;
  
  iVar5 = DAT_00072e70;
  iVar8 = DAT_00072e70 + -1;
  if (0 < DAT_00072e70) {
    piVar9 = DAT_00072f14 + DAT_00072e70;
    piVar3 = DAT_00072f14;
    do {
      piVar4 = piVar3 + 1;
      iVar6 = *(int *)(*piVar3 + 4);
      if (param_1[1] < iVar6) {
        *(int *)(*piVar3 + 4) = iVar6 + -1;
      }
      piVar3 = piVar4;
    } while (piVar9 != piVar4);
  }
  iVar6 = *param_1;
  if (iVar6 < iVar8) {
    iVar5 = (iVar6 + 1) * 4;
    iVar7 = iVar6 + 1;
    while( true ) {
      iVar2 = iVar7;
      iVar7 = iVar5 + -4;
      puVar1 = (undefined4 *)((int)DAT_00072f14 + iVar5);
      iVar5 = iVar5 + 4;
      *(undefined4 *)((int)DAT_00072f14 + iVar7) = *puVar1;
      **(int **)((int)DAT_00072f14 + iVar7) = iVar6;
      if (iVar2 == iVar8) break;
      iVar7 = iVar2 + 1;
      iVar6 = iVar2;
    }
    iVar5 = DAT_00072e70;
  }
  *param_1 = iVar5;
  *(undefined1 *)((int)param_1 + 0x69) = 1;
  DAT_00072e70 = DAT_00072e70 + -1;
  return;
}


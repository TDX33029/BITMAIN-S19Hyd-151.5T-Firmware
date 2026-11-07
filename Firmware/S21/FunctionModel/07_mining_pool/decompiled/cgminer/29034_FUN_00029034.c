// FUN_00029034 @ 00029034  size=136  callers=1
// program: cgminer


int FUN_00029034(int param_1)

{
  int iVar1;
  int iVar2;
  int *piVar4;
  int *piVar3;
  int *piVar5;
  int iVar6;
  undefined8 uVar7;
  
  iVar6 = *(int *)(param_1 + 0x9c);
  if (0 < DAT_00072e70) {
    piVar5 = DAT_00072f14 + DAT_00072e70;
    piVar3 = DAT_00072f14;
    do {
      piVar4 = piVar3 + 1;
      iVar1 = *piVar3;
      if ((((*(char *)(iVar1 + 0x61) == '\0') && (*(int *)(iVar1 + 100) == 1)) &&
          (uVar7 = FUN_00029010(iVar1), iVar1 = (int)((ulonglong)uVar7 >> 0x20), (int)uVar7 == 0))
         && (iVar2 = *(int *)(iVar1 + 0x9c), iVar2 < iVar6)) {
        param_1 = iVar1;
        iVar6 = iVar2;
      }
      piVar3 = piVar4;
    } while (piVar4 != piVar5);
    iVar6 = *(int *)(param_1 + 0x9c);
  }
  *(int *)(param_1 + 0x9c) = iVar6 + 1;
  return param_1;
}


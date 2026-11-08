// FUN_00029148 @ 00029148  size=244  callers=3
// program: cgminer


int FUN_00029148(int param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  char acStack_808 [2048];
  
  if (DAT_00072e70 < 1) {
LAB_000290bc:
    if (((DAT_00072da0 != '\0') || (DAT_000686f0 != '\0')) || (2 < DAT_00067848)) {
      snprintf(acStack_808,0x800,"WTF No pool %d found!",param_1);
      FUN_0001dd98(3,acStack_808,0);
    }
    return DAT_00072f14[param_1];
  }
  iVar1 = *DAT_00072f14;
  if (*(int *)(iVar1 + 4) != param_1) {
    iVar3 = 0;
    piVar2 = DAT_00072f14;
    do {
      iVar3 = iVar3 + 1;
      if (iVar3 == DAT_00072e70) goto LAB_000290bc;
      piVar2 = piVar2 + 1;
      iVar1 = *piVar2;
    } while (*(int *)(iVar1 + 4) != param_1);
  }
  return iVar1;
}


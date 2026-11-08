// FUN_0001d1e8 @ 0001d1e8  size=136  callers=2
// program: cgminer


int FUN_0001d1e8(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0xc);
  if (iVar2 == 0) {
    if (*(char *)(param_1 + 4) == '\0') {
      FUN_0001cb54();
      iVar2 = *(int *)(param_1 + 0xc);
      if (iVar2 != 0) goto LAB_0001d1fc;
    }
    return 0;
  }
LAB_0001d1fc:
  iVar1 = *(int *)(iVar2 + 8);
  *(int *)(param_1 + 0xc) = iVar1;
  if (iVar1 == 0) {
    if (*(char *)(param_1 + 0x2c) != '\0') {
      *(undefined4 *)(param_1 + 0x10) = 0;
    }
  }
  else {
    *(undefined4 *)(iVar1 + 4) = 0;
  }
  *(undefined4 *)(iVar2 + 8) = 0;
  *(undefined4 *)(iVar2 + 4) = 0;
  *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + -1;
  return iVar2;
}


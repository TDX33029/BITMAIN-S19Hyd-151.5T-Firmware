// FUN_00026080 @ 00026080  size=140  callers=2
// program: cgminer


int FUN_00026080(int param_1)

{
  int iVar1;
  
  if (*(char *)(param_1 + 0x291) != '\0') {
    FUN_00021370();
  }
  iVar1 = FUN_00024a8c(param_1);
  if ((((iVar1 == 0) || (iVar1 = FUN_00021e14(param_1), iVar1 == 0)) ||
      ((*(char *)(param_1 + 0x244) != '\0' && (iVar1 = FUN_000270d0(param_1), iVar1 == 0)))) ||
     (iVar1 = FUN_000274c8(param_1), iVar1 == 0)) {
    iVar1 = 0;
    FUN_00031f80(param_1);
  }
  else {
    FUN_0002ffe4(param_1);
  }
  return iVar1;
}


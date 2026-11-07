// FUN_00030008 @ 00030008  size=148  callers=2
// program: cgminer


undefined1 FUN_00030008(int param_1)

{
  int iVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 100) != 1) {
    return 0;
  }
  if ((((DAT_00068af4 - 3U < 2) ||
       (((*(char *)(param_1 + 0x290) != '\0' && (*(char *)(param_1 + 0x61) != '\0')) ||
        (iVar1 = FUN_0002fbd8(), param_1 == iVar1)))) || (*(int *)(param_1 + 0x2ec) != 0)) ||
     ((DAT_00068af4 == 0 && (iVar2 = *(int *)(param_1 + 4), iVar1 = FUN_0002fd70(), iVar2 < iVar1)))
     ) {
    return 1;
  }
  return DAT_00068b88;
}


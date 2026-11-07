// FUN_00048f14 @ 00048f14  size=36  callers=3
// program: cgminer


undefined4 FUN_00048f14(int *param_1)

{
  undefined4 uVar1;
  
  if ((param_1 == (int *)0x0) || (*param_1 != 0)) {
    return 0;
  }
  uVar1 = FUN_00046898(param_1 + 2);
  return uVar1;
}


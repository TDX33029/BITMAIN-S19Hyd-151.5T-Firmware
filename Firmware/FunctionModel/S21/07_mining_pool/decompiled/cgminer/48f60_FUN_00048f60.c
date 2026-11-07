// FUN_00048f60 @ 00048f60  size=52  callers=3
// program: cgminer


undefined4 FUN_00048f60(int *param_1,int param_2)

{
  undefined4 uVar1;
  
  if ((param_1 == (int *)0x0) || (*param_1 != 0 || param_2 == 0)) {
    return 0;
  }
  uVar1 = FUN_00046910(param_1 + 2);
  return uVar1;
}


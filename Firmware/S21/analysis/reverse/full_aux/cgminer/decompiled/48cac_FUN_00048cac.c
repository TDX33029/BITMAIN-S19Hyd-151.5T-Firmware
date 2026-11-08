// FUN_00048cac @ 00048cac  size=40  callers=15
// program: cgminer


undefined4 FUN_00048cac(int *param_1,int param_2)

{
  undefined4 uVar1;
  
  if ((param_1 == (int *)0x0 || param_2 == 0) || (*param_1 != 0)) {
    return 0;
  }
  uVar1 = FUN_000466bc(param_1 + 2);
  return uVar1;
}


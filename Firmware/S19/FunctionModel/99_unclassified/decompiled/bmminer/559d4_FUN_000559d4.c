// FUN_000559d4 @ 000559d4  size=40  callers=11
// program: bmminer


undefined4 FUN_000559d4(int *param_1,int param_2)

{
  undefined4 uVar1;
  
  if ((param_1 == (int *)0x0 || param_2 == 0) || (*param_1 != 0)) {
    return 0;
  }
  uVar1 = FUN_000533e8(param_1 + 2);
  return uVar1;
}


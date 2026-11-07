// FUN_000802b4 @ 000802b4  size=92  callers=1
// program: bmminer


undefined4 FUN_000802b4(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  if ((param_1 == 0) || (iVar1 = FUN_0007e790(param_1,param_2), iVar1 == 0)) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_00080200(param_1,param_2);
  }
  return uVar2;
}


// FUN_00049578 @ 00049578  size=64  callers=1
// program: cgminer


undefined4 FUN_00049578(int *param_1)

{
  undefined4 uVar1;
  
  if (param_1 != (int *)0x0) {
    if (*param_1 == 3) {
      uVar1 = FUN_0004accc(param_1[2],param_1[3]);
      return uVar1;
    }
    if (*param_1 == 4) {
      return (int)*(undefined8 *)(param_1 + 2);
    }
  }
  return 0;
}


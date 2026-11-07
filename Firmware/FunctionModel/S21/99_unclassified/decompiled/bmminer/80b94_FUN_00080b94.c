// FUN_00080b94 @ 00080b94  size=152  callers=0
// program: bmminer


undefined4 FUN_00080b94(int *param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if ((param_1 == (int *)0x0) || (*param_1 != 3)) {
    if ((param_1 == (int *)0x0) || (*param_1 != 4)) {
      uVar1 = 0;
    }
    else {
      uVar1 = FUN_000809f0(param_1);
    }
  }
  else {
    uVar2 = FUN_000807e0(param_1);
    uVar1 = FUN_00098c24((int)uVar2,(int)((ulonglong)uVar2 >> 0x20));
  }
  return uVar1;
}


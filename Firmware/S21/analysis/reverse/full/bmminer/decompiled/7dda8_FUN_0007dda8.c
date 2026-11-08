// FUN_0007dda8 @ 0007dda8  size=136  callers=1
// program: bmminer


undefined1 FUN_0007dda8(int *param_1)

{
  undefined1 uVar1;
  
  if (param_1[1] == 0) {
    uVar1 = 0;
  }
  else {
    param_1[1] = param_1[1] + -1;
    uVar1 = *(undefined1 *)(*param_1 + param_1[1]);
    *(undefined1 *)(*param_1 + param_1[1]) = 0;
  }
  return uVar1;
}


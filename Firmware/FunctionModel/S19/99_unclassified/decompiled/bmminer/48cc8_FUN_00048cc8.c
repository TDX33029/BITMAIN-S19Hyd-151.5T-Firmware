// FUN_00048cc8 @ 00048cc8  size=44  callers=1
// program: bmminer


undefined4 FUN_00048cc8(undefined4 *param_1)

{
  undefined4 uVar1;
  
  if (param_1 == (undefined4 *)0x0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_00049650(*param_1);
    free(param_1);
  }
  return uVar1;
}


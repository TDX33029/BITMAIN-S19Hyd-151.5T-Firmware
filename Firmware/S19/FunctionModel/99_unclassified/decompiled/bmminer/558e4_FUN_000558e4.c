// FUN_000558e4 @ 000558e4  size=108  callers=5
// program: bmminer


undefined4 * FUN_000558e4(int param_1,undefined4 param_2,int param_3)

{
  undefined4 *puVar1;
  
  if ((param_1 == 0) || ((param_3 == 0 && (param_1 = FUN_00055054(), param_1 == 0)))) {
    return (undefined4 *)0x0;
  }
  puVar1 = (undefined4 *)FUN_00055024(0x10);
  if (puVar1 == (undefined4 *)0x0) {
    FUN_0005503c(param_1);
    return (undefined4 *)0x0;
  }
  puVar1[2] = param_1;
  puVar1[3] = param_2;
  *puVar1 = 2;
  puVar1[1] = 1;
  return puVar1;
}


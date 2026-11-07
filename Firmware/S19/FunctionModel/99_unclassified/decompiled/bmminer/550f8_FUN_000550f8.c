// FUN_000550f8 @ 000550f8  size=52  callers=5
// program: bmminer


undefined4 FUN_000550f8(undefined4 *param_1)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  
  param_1[2] = 0x10;
  param_1[1] = 0;
  puVar1 = (undefined1 *)FUN_00055024();
  *param_1 = puVar1;
  if (puVar1 == (undefined1 *)0x0) {
    uVar2 = 0xffffffff;
  }
  else {
    *puVar1 = 0;
    uVar2 = 0;
  }
  return uVar2;
}


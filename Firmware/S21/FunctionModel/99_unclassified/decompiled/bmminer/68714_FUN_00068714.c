// FUN_00068714 @ 00068714  size=132  callers=6
// program: bmminer


undefined4 * FUN_00068714(undefined4 param_1)

{
  undefined4 *puVar1;
  
  puVar1 = malloc(0x18);
  *puVar1 = FUN_000685ac;
  puVar1[2] = FUN_00068650;
  puVar1[1] = FUN_00068680;
  puVar1[3] = param_1;
  puVar1[4] = 0;
  puVar1[5] = 0;
  return puVar1;
}


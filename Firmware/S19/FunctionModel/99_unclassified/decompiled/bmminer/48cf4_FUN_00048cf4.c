// FUN_00048cf4 @ 00048cf4  size=72  callers=5
// program: bmminer


void FUN_00048cf4(undefined4 param_1)

{
  undefined4 *puVar1;
  
  puVar1 = malloc(0x18);
  puVar1[3] = param_1;
  *puVar1 = &LAB_00048b44;
  puVar1[2] = &LAB_00048ac4;
  puVar1[1] = FUN_00048ae0;
  puVar1[4] = 0;
  puVar1[5] = 0;
  return;
}


// FUN_00048bbc @ 00048bbc  size=108  callers=5
// program: cgminer


undefined4 * FUN_00048bbc(int param_1,undefined4 param_2,int param_3)

{
  undefined4 *puVar1;
  
  if ((param_1 == 0) || ((param_3 == 0 && (param_1 = FUN_00048328(), param_1 == 0)))) {
    return (undefined4 *)0x0;
  }
  puVar1 = (undefined4 *)FUN_000482f8(0x10);
  if (puVar1 == (undefined4 *)0x0) {
    FUN_00048310(param_1);
    return (undefined4 *)0x0;
  }
  puVar1[2] = param_1;
  puVar1[3] = param_2;
  *puVar1 = 2;
  puVar1[1] = 1;
  return puVar1;
}


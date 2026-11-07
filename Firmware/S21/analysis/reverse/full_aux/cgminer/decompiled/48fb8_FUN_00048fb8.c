// FUN_00048fb8 @ 00048fb8  size=96  callers=13
// program: cgminer


undefined4 * FUN_00048fb8(void)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = (undefined4 *)FUN_000482f8(0x14);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = 1;
    puVar1[1] = 1;
    puVar1[3] = 0;
    puVar1[2] = 8;
    iVar2 = FUN_000482f8(0x20);
    puVar1[4] = iVar2;
    if (iVar2 == 0) {
      FUN_00048310(puVar1);
      puVar1 = (undefined4 *)0x0;
    }
  }
  return puVar1;
}


// FUN_00055ce0 @ 00055ce0  size=96  callers=8
// program: bmminer


undefined4 * FUN_00055ce0(void)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = (undefined4 *)FUN_00055024(0x14);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = 1;
    puVar1[1] = 1;
    puVar1[3] = 0;
    puVar1[2] = 8;
    iVar2 = FUN_00055024(0x20);
    puVar1[4] = iVar2;
    if (iVar2 == 0) {
      FUN_0005503c(puVar1);
      puVar1 = (undefined4 *)0x0;
    }
  }
  return puVar1;
}


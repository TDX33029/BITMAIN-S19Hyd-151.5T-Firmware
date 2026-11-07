// FUN_00055950 @ 00055950  size=104  callers=3
// program: bmminer


undefined4 * FUN_00055950(void)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  
  puVar1 = (undefined4 *)FUN_00055024(0x24);
  puVar3 = puVar1;
  if (puVar1 != (undefined4 *)0x0) {
    if (DAT_0050fc7c == 0) {
      FUN_000536d0();
    }
    puVar1[1] = 1;
    *puVar1 = 0;
    iVar2 = FUN_000530c0(puVar1 + 2);
    if (iVar2 != 0) {
      puVar3 = (undefined4 *)0x0;
      FUN_0005503c(puVar1);
    }
  }
  return puVar3;
}


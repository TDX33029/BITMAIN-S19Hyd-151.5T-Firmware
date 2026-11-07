// FUN_00048c28 @ 00048c28  size=104  callers=15
// program: cgminer


undefined4 * FUN_00048c28(void)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  
  puVar1 = (undefined4 *)FUN_000482f8(0x24);
  puVar3 = puVar1;
  if (puVar1 != (undefined4 *)0x0) {
    if (DAT_00072c28 == 0) {
      FUN_000469a4();
    }
    puVar1[1] = 1;
    *puVar1 = 0;
    iVar2 = FUN_00046394(puVar1 + 2);
    if (iVar2 != 0) {
      puVar3 = (undefined4 *)0x0;
      FUN_00048310(puVar1);
    }
  }
  return puVar3;
}


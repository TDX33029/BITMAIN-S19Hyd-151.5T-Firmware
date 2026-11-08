// FUN_00046394 @ 00046394  size=124  callers=2
// program: cgminer


undefined4 FUN_00046394(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  uint uVar5;
  
  *param_1 = 0;
  param_1[2] = 3;
  puVar1 = (undefined4 *)FUN_000482f8(0x40);
  param_1[1] = puVar1;
  if (puVar1 == (undefined4 *)0x0) {
    return 0xffffffff;
  }
  uVar5 = param_1[2];
  puVar4 = param_1 + 3;
  param_1[4] = puVar4;
  param_1[3] = puVar4;
  param_1[6] = param_1 + 5;
  param_1[5] = param_1 + 5;
  if (1 << (uVar5 & 0xff) != 0) {
    puVar2 = puVar1;
    do {
      puVar2[1] = puVar4;
      puVar3 = puVar2 + 2;
      *puVar2 = puVar4;
      puVar2 = puVar3;
    } while (puVar3 != (undefined4 *)((int)puVar1 + (8 << (uVar5 & 0xff))));
  }
  return 0;
}


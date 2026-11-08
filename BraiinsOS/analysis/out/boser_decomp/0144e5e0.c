// FUN_0144e5e0 @ 0144e5e0 size=132 calls_out=0 calls_in=1
// strings: 

undefined1 * FUN_0144e5e0(undefined4 *param_1)

{
  undefined1 *puVar1;
  int iVar2;
  uint uVar3;
  byte *pbVar4;
  int *piVar5;
  
  uVar3 = param_1[4];
  iVar2 = param_1[5];
  pbVar4 = (byte *)*param_1;
  if (uVar3 < (uint)param_1[3]) {
    piVar5 = (int *)(param_1[2] + uVar3 * 8);
    do {
      if (*piVar5 == iVar2) {
        puVar1 = (undefined1 *)piVar5[1];
        param_1[4] = uVar3 + 1;
        param_1[5] = iVar2 + 1;
        return puVar1;
      }
    } while (pbVar4 == (byte *)param_1[1]);
  }
  else if (pbVar4 == (byte *)param_1[1]) {
    return &DAT_00110000;
  }
  puVar1 = (undefined1 *)(uint)*pbVar4;
  param_1[5] = iVar2 + 1;
  *param_1 = pbVar4 + 1;
  if (puVar1 + -0x41 < (undefined1 *)0x1a) {
    puVar1 = (undefined1 *)((uint)puVar1 | 0x20);
  }
  return puVar1;
}


// FUN_016dd48a @ 016dd48a size=128 calls_out=0 calls_in=6
// strings: 

uint * FUN_016dd48a(uint *param_1,byte param_2,byte *param_3)

{
  uint uVar1;
  byte *pbVar2;
  uint *puVar3;
  uint *puVar4;
  uint *puVar5;
  uint uVar6;
  
  uVar1 = (uint)param_2;
  while (((uint)param_1 & 3) != 0) {
    if (param_3 == (byte *)0x0) {
      return (uint *)0x0;
    }
    if ((byte)*param_1 == uVar1) {
      puVar4 = param_1;
      do {
        puVar3 = puVar4;
        if ((uint *)((int)param_1 + (int)param_3) == puVar3) {
          return (uint *)0x0;
        }
        puVar4 = (uint *)((int)puVar3 + 1);
      } while ((byte)*puVar3 != uVar1);
      return puVar3;
    }
    param_3 = param_3 + -1;
    param_1 = (uint *)((int)param_1 + 1);
  }
  if (param_3 == (byte *)0x0) {
    return (uint *)0x0;
  }
  pbVar2 = param_3;
  puVar4 = param_1;
  if ((byte)*param_1 != uVar1) {
    puVar3 = param_1;
    do {
      puVar4 = puVar3;
      pbVar2 = (byte *)((int)param_1 + ((int)param_3 - (int)puVar4));
      if (puVar4 == (uint *)(((uint)param_3 & 0xfffffffc) + (int)param_1)) break;
      uVar6 = uVar1 * 0x1010101 ^ *puVar4;
      puVar3 = puVar4 + 1;
    } while ((uVar6 + 0xfefefeff & ~uVar6 & 0x80808080) == 0);
  }
  puVar3 = puVar4;
  do {
    puVar5 = puVar3;
    if ((uint *)((int)puVar4 + (int)pbVar2) == puVar5) {
      return (uint *)0x0;
    }
    puVar3 = (uint *)((int)puVar5 + 1);
  } while ((byte)*puVar5 != uVar1);
  return puVar5;
}


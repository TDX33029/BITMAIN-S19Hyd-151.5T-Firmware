// FUN_01bedaee @ 01bedaee size=98 calls_out=1 calls_in=4
// strings: 

uint * FUN_01bedaee(uint *param_1,uint param_2)

{
  int iVar1;
  uint *puVar2;
  uint *puVar3;
  uint uVar4;
  uint uVar5;
  
  param_2 = param_2 & 0xff;
  if (param_2 == 0) {
    iVar1 = FUN_01bedbda();
    param_1 = (uint *)(iVar1 + (int)param_1);
  }
  else {
    while (puVar2 = param_1, ((uint)puVar2 & 3) != 0) {
      if ((byte)*puVar2 == 0) {
        return puVar2;
      }
      param_1 = (uint *)((int)puVar2 + 1);
      if ((byte)*puVar2 == param_2) {
        return puVar2;
      }
    }
    do {
      puVar3 = puVar2;
      uVar4 = *puVar3;
      uVar5 = uVar4 ^ param_2 * 0x1010101;
      puVar2 = puVar3 + 1;
    } while (((uVar4 + 0xfefefeff & ~uVar4 | uVar5 + 0xfefefeff & ~uVar5) & 0x80808080) == 0);
    while( true ) {
      param_1 = puVar3;
      if ((byte)*param_1 == 0) break;
      puVar3 = (uint *)((int)param_1 + 1);
      if ((byte)*param_1 == param_2) {
        return param_1;
      }
    }
  }
  return param_1;
}


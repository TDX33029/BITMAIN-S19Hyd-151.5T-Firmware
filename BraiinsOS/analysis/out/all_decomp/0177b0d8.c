// FUN_0177b0d8 @ 0177b0d8 size=244 calls_out=0 calls_in=12
// strings: 

uint FUN_0177b0d8(uint *param_1,uint *param_2,uint param_3)

{
  uint uVar1;
  uint *puVar2;
  uint uVar3;
  uint *puVar5;
  uint *puVar4;
  uint uVar6;
  
  if (param_3 == 0) {
    return 0;
  }
  if (param_3 - 1 < 3) {
    uVar3 = 0;
    uVar6 = 0;
  }
  else {
    uVar3 = param_3 & 0xfffffffc;
    uVar6 = 0;
    puVar2 = param_2;
    puVar4 = param_1;
    do {
      puVar5 = puVar4 + 1;
      uVar6 = *puVar2 ^ *puVar4 | uVar6;
      puVar2 = puVar2 + 1;
      puVar4 = puVar5;
    } while (puVar5 != (uint *)((int)param_1 + uVar3));
    uVar6 = uVar6 & 0xff | (uVar6 & 0xffff) >> 8 | (uVar6 & 0xffffff) >> 0x10 | uVar6 >> 0x18;
    if (param_3 == uVar3) {
      return uVar6;
    }
  }
  uVar1 = uVar3 + 1;
  uVar6 = uVar6 | *(byte *)((int)param_1 + uVar3) ^ *(byte *)((int)param_2 + uVar3);
  if (uVar1 < param_3) {
    uVar3 = uVar3 + 2;
    uVar6 = uVar6 | *(byte *)((int)param_1 + uVar1) ^ *(byte *)((int)param_2 + uVar1);
    if (uVar3 < param_3) {
      uVar6 = uVar6 | *(byte *)((int)param_2 + uVar3) ^ *(byte *)((int)param_1 + uVar3);
    }
  }
  return uVar6;
}


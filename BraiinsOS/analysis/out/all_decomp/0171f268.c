// FUN_0171f268 @ 0171f268 size=128 calls_out=0 calls_in=4
// strings: 

longlong FUN_0171f268(int param_1,uint *param_2,int param_3)

{
  uint uVar1;
  uint *puVar2;
  uint *puVar3;
  
  if (param_3 == 0) {
    return ZEXT48(param_2) << 0x20;
  }
  if (param_3 != 1) {
    puVar3 = (uint *)(param_1 + -4);
    puVar2 = param_2;
    do {
      uVar1 = *puVar2;
      puVar2 = puVar2 + 1;
      puVar3 = puVar3 + 1;
      *puVar3 = uVar1 >> 1 | *puVar2 << 0x1f;
    } while (param_2 + param_3 + -1 != puVar2);
  }
  *(uint *)(param_1 + (param_3 + 0x3fffffff) * 4) = param_2[param_3 + 0x3fffffff] >> 1;
  return 0;
}


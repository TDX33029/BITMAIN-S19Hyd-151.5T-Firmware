// FUN_01424790 @ 01424790 size=148 calls_out=0 calls_in=5
// strings: 

void FUN_01424790(char *param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  if (*param_1 == '\x01') {
    return;
  }
  uVar2 = *(uint *)(param_1 + 4);
  if (uVar2 <= param_2) {
    uVar1 = *(uint *)(param_1 + 8);
    param_1[1] = '\0';
    uVar3 = uVar1;
    if (uVar2 << 1 <= uVar1) {
      uVar3 = uVar2 << 1;
    }
    if ((int)uVar2 < 0) {
      uVar3 = uVar1;
    }
    *(uint *)(param_1 + 4) = uVar3;
    return;
  }
  uVar2 = (0xffffffffU >> (LZCOUNT(uVar2) + 2U & 0x1f)) + 1;
  if (uVar2 <= param_2) {
    param_1[1] = '\0';
    return;
  }
  if (param_1[1] == '\0') {
    param_1[1] = '\x01';
    return;
  }
  if (uVar2 < 0x2001) {
    uVar2 = 0x2000;
  }
  param_1[1] = '\0';
  *(uint *)(param_1 + 4) = uVar2;
  return;
}


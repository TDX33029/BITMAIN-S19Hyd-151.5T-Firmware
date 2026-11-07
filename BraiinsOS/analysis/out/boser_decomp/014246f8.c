// FUN_014246f8 @ 014246f8 size=132 calls_out=0 calls_in=1
// strings: 

void FUN_014246f8(uint *param_1,char *param_2)

{
  uint uVar1;
  uint uVar2;
  bool bVar3;
  
  if (*param_2 == '\0') {
    *param_1 = 1;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    param_1[4] = 0;
    param_1[5] = 0;
    return;
  }
  if (*param_2 == '\x01') {
    uVar1 = *(uint *)(param_2 + 0x10);
    uVar2 = *(uint *)(param_2 + 0x14);
  }
  else {
    uVar1 = *(uint *)(param_2 + 0x18);
    uVar2 = *(uint *)(param_2 + 0x1c);
  }
  bVar3 = uVar2 != 0xffffffff || -uVar2 - 1 < (uint)(uVar1 < 0xfffffffe);
  if (bVar3) {
    param_1[2] = uVar1;
    param_1[3] = uVar2;
  }
  else {
    uVar1 = 0;
    uVar2 = 0;
  }
  *param_1 = (uint)bVar3;
  param_1[1] = 0;
  param_1[4] = uVar1;
  param_1[5] = uVar2;
  return;
}


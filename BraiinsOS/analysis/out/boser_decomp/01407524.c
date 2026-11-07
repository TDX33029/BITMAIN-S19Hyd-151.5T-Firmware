// FUN_01407524 @ 01407524 size=88 calls_out=0 calls_in=2
// strings: 

int FUN_01407524(uint *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  do {
    uVar2 = param_1[8];
    DataMemoryBarrier(0xb);
    DataMemoryBarrier(0xb);
    DataMemoryBarrier(0xb);
  } while (param_1[8] != uVar2);
  uVar1 = uVar2 & 0xfffffffe;
  uVar3 = *param_1 & 0xfffffffe;
  if ((~uVar2 & 0x3e) == 0) {
    uVar1 = uVar1 + 2;
  }
  if ((~*param_1 & 0x3e) == 0) {
    uVar3 = uVar3 + 2;
  }
  uVar1 = uVar1 - (uVar3 & 0xffffffc1);
  return (uVar1 >> 1) - (((uVar3 & 0x3f) >> 1) + (uVar1 >> 6));
}


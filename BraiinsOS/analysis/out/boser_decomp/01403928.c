// FUN_01403928 @ 01403928 size=112 calls_out=0 calls_in=2
// strings: 

uint FUN_01403928(uint *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  do {
    uVar1 = param_1[8];
    DataMemoryBarrier(0xb);
    DataMemoryBarrier(0xb);
    DataMemoryBarrier(0xb);
  } while (param_1[8] != uVar1);
  uVar2 = param_1[0x12] - 1;
  uVar3 = uVar2 & uVar1;
  uVar2 = uVar2 & *param_1;
  if (uVar2 <= uVar3 && uVar3 != uVar2) {
    uVar3 = uVar3 - uVar2;
  }
  else if (uVar2 <= uVar3) {
    uVar3 = 0;
    if ((uVar1 & ~param_1[0x12]) != *param_1) {
      uVar3 = param_1[0x10];
    }
  }
  else {
    uVar3 = (uVar3 - uVar2) + param_1[0x10];
  }
  return uVar3;
}


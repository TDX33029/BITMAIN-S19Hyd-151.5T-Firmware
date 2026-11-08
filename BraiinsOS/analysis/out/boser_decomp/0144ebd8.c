// FUN_0144ebd8 @ 0144ebd8 size=112 calls_out=1 calls_in=2
// strings: 

undefined4 FUN_0144ebd8(int param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  
  uVar1 = *(uint *)(param_1 + 0xf0);
  if (uVar1 < 0x3c) {
    uVar2 = 0x3b;
  }
  else {
    uVar2 = uVar1;
    uVar1 = *(uint *)(param_1 + 4);
  }
  if (uVar2 - uVar1 < param_2) {
    uVar3 = 0;
    if (!CARRY4(uVar1,param_2)) {
      uVar2 = 0xffffffff >> LZCOUNT((uVar1 + param_2) - 1);
      if (uVar1 + param_2 < 2) {
        uVar2 = 0;
      }
      if (uVar2 != 0xffffffff) {
        uVar3 = FUN_0144eca8(param_1,uVar2 + 1);
      }
    }
  }
  else {
    uVar3 = 0x80000001;
  }
  return uVar3;
}


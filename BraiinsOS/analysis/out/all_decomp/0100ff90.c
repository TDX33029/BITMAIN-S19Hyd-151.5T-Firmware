// FUN_0100ff90 @ 0100ff90 size=140 calls_out=1 calls_in=3
// strings: 

uint FUN_0100ff90(uint *param_1,uint param_2,uint param_3,undefined4 param_4,int param_5)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int local_24;
  uint local_20;
  
  uVar1 = param_3 + param_2;
  if (CARRY4(param_3,param_2)) {
    uVar1 = 0;
  }
  else {
    uVar2 = *param_1;
    if (uVar1 <= uVar2 * 2) {
      uVar1 = uVar2 << 1;
    }
    uVar3 = 4;
    if (param_5 == 1) {
      uVar3 = 8;
    }
    if (uVar3 < uVar1) {
      uVar3 = uVar1;
    }
    FUN_0101001c(&local_24,uVar2,param_1[1],uVar3,param_4,param_5);
    if (local_24 == 1) {
      uVar1 = local_20;
    }
    else {
      uVar1 = 0x80000001;
      *param_1 = uVar3;
      param_1[1] = local_20;
    }
  }
  return uVar1;
}


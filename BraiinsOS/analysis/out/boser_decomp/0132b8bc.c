// FUN_0132b8bc @ 0132b8bc size=156 calls_out=1 calls_in=66
// strings: 

uint FUN_0132b8bc(uint *param_1,uint param_2,uint param_3,undefined4 param_4,uint param_5)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int local_24;
  uint local_20;
  
  uVar3 = 0;
  if ((param_5 != 0) && (uVar1 = param_3 + param_2, !CARRY4(param_3,param_2))) {
    uVar3 = *param_1;
    uVar2 = 1;
    if (uVar1 <= uVar3 * 2) {
      uVar1 = uVar3 << 1;
    }
    if (param_5 < 0x401) {
      uVar2 = 4;
    }
    if (param_5 == 1) {
      uVar2 = 8;
    }
    if (uVar2 < uVar1) {
      uVar2 = uVar1;
    }
    FUN_0132b7a4(&local_24,uVar3,param_1[1],uVar2,param_4,param_5);
    if (local_24 == 1) {
      uVar3 = local_20;
    }
    else {
      uVar3 = 0x80000001;
      *param_1 = uVar2;
      param_1[1] = local_20;
    }
  }
  return uVar3;
}


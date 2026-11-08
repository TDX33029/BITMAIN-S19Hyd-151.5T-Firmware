// FUN_00618e84 @ 00618e84 size=180 calls_out=1 calls_in=2
// strings: 

int FUN_00618e84(int param_1,int param_2,int param_3,uint param_4)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  param_4 = param_4 >> 3;
  if (param_4 != 0) {
    param_1 = FUN_00618e84(param_1,param_1 + param_4 * 0x80,param_1 + param_4 * 0xe0,param_4);
    param_2 = FUN_00618e84(param_2,param_2 + param_4 * 0x80,param_2 + param_4 * 0xe0,param_4);
    param_3 = FUN_00618e84(param_3,param_3 + param_4 * 0x80,param_3 + param_4 * 0xe0,param_4);
  }
  uVar2 = *(uint *)(param_3 + 0xc);
  uVar3 = *(uint *)(param_2 + 0xc);
  uVar4 = *(uint *)(param_1 + 0xc);
  bVar1 = uVar4 <= uVar3 &&
          (uint)(*(uint *)(param_2 + 8) <= *(uint *)(param_1 + 8)) <= uVar4 - uVar3;
  if (bVar1 != (uVar3 <= uVar2 &&
               (uint)(*(uint *)(param_3 + 8) <= *(uint *)(param_2 + 8)) <= uVar3 - uVar2)) {
    param_2 = param_3;
  }
  if (bVar1 != (uVar4 <= uVar2 &&
               (uint)(*(uint *)(param_3 + 8) <= *(uint *)(param_1 + 8)) <= uVar4 - uVar2)) {
    param_2 = param_1;
  }
  return param_2;
}


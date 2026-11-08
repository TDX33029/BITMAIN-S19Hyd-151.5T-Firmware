// FUN_007233f4 @ 007233f4 size=188 calls_out=1 calls_in=2
// strings: 

int FUN_007233f4(int param_1,int param_2,int param_3,uint param_4)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  param_4 = param_4 >> 3;
  if (param_4 != 0) {
    param_1 = FUN_007233f4(param_1,param_1 + param_4 * 0x60,param_4 * 0xa8 + param_1,param_4);
    param_2 = FUN_007233f4(param_2,param_2 + param_4 * 0x60,param_4 * 0xa8 + param_2,param_4);
    param_3 = FUN_007233f4(param_3,param_3 + param_4 * 0x60,param_4 * 0xa8 + param_3,param_4);
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


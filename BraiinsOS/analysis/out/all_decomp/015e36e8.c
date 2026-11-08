// FUN_015e36e8 @ 015e36e8 size=200 calls_out=1 calls_in=2
// strings: 

int FUN_015e36e8(int param_1,int param_2,int param_3,uint param_4)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  
  if (7 < param_4) {
    uVar2 = param_4 >> 3;
    iVar3 = uVar2 * 8 - (param_4 >> 3);
    param_1 = FUN_015e36e8(param_1,param_1 + uVar2 * 0x80,param_1 + iVar3 * 0x20,uVar2);
    param_2 = FUN_015e36e8(param_2,param_2 + uVar2 * 0x80,param_2 + iVar3 * 0x20,uVar2);
    param_3 = FUN_015e36e8(param_3,param_3 + uVar2 * 0x80,param_3 + iVar3 * 0x20,uVar2);
  }
  uVar2 = *(uint *)(param_3 + 0xc);
  uVar4 = *(uint *)(param_2 + 0xc);
  uVar5 = *(uint *)(param_1 + 0xc);
  bVar1 = uVar5 <= uVar4 &&
          (uint)(*(uint *)(param_2 + 8) <= *(uint *)(param_1 + 8)) <= uVar5 - uVar4;
  if (bVar1 != (uVar4 <= uVar2 &&
               (uint)(*(uint *)(param_3 + 8) <= *(uint *)(param_2 + 8)) <= uVar4 - uVar2)) {
    param_2 = param_3;
  }
  if (bVar1 != (uVar5 <= uVar2 &&
               (uint)(*(uint *)(param_3 + 8) <= *(uint *)(param_1 + 8)) <= uVar5 - uVar2)) {
    param_2 = param_1;
  }
  return param_2;
}


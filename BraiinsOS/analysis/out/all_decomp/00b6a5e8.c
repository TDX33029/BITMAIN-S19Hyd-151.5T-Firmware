// FUN_00b6a5e8 @ 00b6a5e8 size=216 calls_out=1 calls_in=2
// strings: 

int FUN_00b6a5e8(int param_1,int param_2,int param_3,uint param_4)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  
  if (7 < param_4) {
    uVar2 = param_4 >> 3;
    iVar5 = uVar2 * 8 - (param_4 >> 3);
    param_1 = FUN_00b6a5e8(param_1,param_1 + uVar2 * 0x40,param_1 + iVar5 * 0x10,uVar2);
    param_2 = FUN_00b6a5e8(param_2,param_2 + uVar2 * 0x40,param_2 + iVar5 * 0x10,uVar2);
    param_3 = FUN_00b6a5e8(param_3,param_3 + uVar2 * 0x40,param_3 + iVar5 * 0x10,uVar2);
  }
  uVar2 = *(uint *)(param_2 + 0xc) & 0x7fffffff;
  uVar3 = *(uint *)(param_3 + 0xc) & 0x7fffffff;
  uVar4 = *(uint *)(param_1 + 0xc) & 0x7fffffff;
  bVar1 = uVar2 <= uVar4 &&
          (uint)(*(uint *)(param_1 + 8) <= *(uint *)(param_2 + 8)) <= uVar2 - uVar4;
  if (bVar1 != (uVar3 <= uVar2 &&
               (uint)(*(uint *)(param_2 + 8) <= *(uint *)(param_3 + 8)) <= uVar3 - uVar2)) {
    param_2 = param_3;
  }
  if (bVar1 != (uVar3 <= uVar4 &&
               (uint)(*(uint *)(param_1 + 8) <= *(uint *)(param_3 + 8)) <= uVar3 - uVar4)) {
    param_2 = param_1;
  }
  return param_2;
}


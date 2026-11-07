// FUN_0128b444 @ 0128b444 size=128 calls_out=1 calls_in=1
// strings: 

uint FUN_0128b444(int param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  uVar3 = 0;
  iVar1 = FUN_01291f24(param_2,0);
  if (((*(int *)(param_1 + 0x68) != 1) || (*(uint *)(param_1 + 0x6c) == (param_2 & 0x1fff) >> 4)) &&
     ((iVar2 = FUN_01291f24(param_2,6), *(int *)(param_1 + 0x50) != 1 ||
      (*(int *)(param_1 + 0x54) == iVar2)))) {
    uVar3 = *(uint *)(param_1 + 0x58) ^ 1 | (uint)(*(int *)(param_1 + 0x5c) == iVar1);
  }
  return uVar3;
}


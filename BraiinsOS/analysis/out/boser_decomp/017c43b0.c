// FUN_017c43b0 @ 017c43b0 size=64 calls_out=0 calls_in=0
// strings: 

int FUN_017c43b0(int param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = (uint)*(byte *)(param_2 + 0x1f) - (uint)*(byte *)(param_2 + 0x1e) & 0xff;
  uVar1 = uVar2 + *(uint *)(param_2 + 0xc);
  if (CARRY4(uVar2,*(uint *)(param_2 + 0xc))) {
    uVar1 = 0xffffffff;
  }
  iVar3 = uVar1 + *(uint *)(param_2 + 0x24);
  if (CARRY4(uVar1,*(uint *)(param_2 + 0x24))) {
    iVar3 = -1;
  }
  return iVar3 + param_1;
}


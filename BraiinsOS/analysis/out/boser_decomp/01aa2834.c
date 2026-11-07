// FUN_01aa2834 @ 01aa2834 size=104 calls_out=0 calls_in=2
// strings: 

int FUN_01aa2834(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  uint *puVar3;
  uint uVar4;
  
  if (param_1 == param_2) {
    return 0;
  }
  iVar1 = 0;
  uVar2 = (uint)(param_2 - param_1) >> 4;
  puVar3 = (uint *)(param_1 + 8);
  do {
    uVar2 = uVar2 - 1;
    uVar4 = *puVar3 + ((LZCOUNT(*puVar3 | 1) ^ 0x1fU) * 9 + 0x49 >> 6) + 3;
    iVar1 = uVar4 + iVar1 + ((LZCOUNT(uVar4 | 1) ^ 0x1fU) * 9 + 0x49 >> 6);
    puVar3 = puVar3 + 4;
  } while (uVar2 != 0);
  return iVar1;
}


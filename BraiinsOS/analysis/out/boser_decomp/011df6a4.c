// FUN_011df6a4 @ 011df6a4 size=172 calls_out=0 calls_in=1
// strings: 

int FUN_011df6a4(int param_1,int param_2)

{
  int iVar1;
  uint *puVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  
  if (param_1 == param_2) {
    return 0;
  }
  puVar2 = (uint *)(param_1 + 8);
  iVar1 = 0;
  uVar5 = (uint)(param_2 - param_1) >> 4;
  do {
    uVar3 = *puVar2;
    iVar6 = 0;
    if (uVar3 != 0) {
      iVar6 = uVar3 + ((LZCOUNT(uVar3 | 1) ^ 0x1fU) * 9 + 0x49 >> 6) + 1;
    }
    if (puVar2[1] == 0) {
      iVar4 = 0;
    }
    else {
      iVar4 = ((LZCOUNT(puVar2[1] | 1) ^ 0x1fU) * 9 + 0x49 >> 6) + 1;
    }
    puVar2 = puVar2 + 4;
    uVar5 = uVar5 - 1;
    iVar1 = iVar4 + iVar6 + iVar1 + ((LZCOUNT(iVar4 + iVar6 | 1) ^ 0x1fU) * 9 + 0x49 >> 6);
  } while (uVar5 != 0);
  return iVar1;
}


// FUN_011df264 @ 011df264 size=144 calls_out=0 calls_in=1
// strings: 

int FUN_011df264(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  uint *puVar3;
  int iVar4;
  int iVar5;
  
  if (param_1 == param_2) {
    return 0;
  }
  puVar3 = (uint *)(param_1 + 4);
  iVar1 = 0;
  uVar2 = (uint)(param_2 - param_1) >> 3;
  do {
    iVar5 = 0;
    if (puVar3[-1] != 0) {
      iVar5 = ((LZCOUNT(puVar3[-1] | 1) ^ 0x1fU) * 9 + 0x49 >> 6) + 1;
    }
    if (*puVar3 == 0) {
      iVar4 = 0;
    }
    else {
      iVar4 = ((LZCOUNT(*puVar3 | 1) ^ 0x1fU) * 9 + 0x49 >> 6) + 1;
    }
    puVar3 = puVar3 + 2;
    uVar2 = uVar2 - 1;
    iVar1 = iVar1 + iVar5 + iVar4 + 1;
  } while (uVar2 != 0);
  return iVar1;
}


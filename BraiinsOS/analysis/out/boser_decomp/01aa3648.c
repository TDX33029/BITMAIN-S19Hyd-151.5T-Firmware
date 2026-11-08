// FUN_01aa3648 @ 01aa3648 size=184 calls_out=0 calls_in=1
// strings: 

int FUN_01aa3648(int param_1,int param_2)

{
  int iVar1;
  uint *puVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  
  if (param_1 == param_2) {
    return 0;
  }
  uVar6 = (uint)(param_2 - param_1) / 0x18;
  puVar2 = (uint *)(param_1 + 0x14);
  iVar1 = 0;
  do {
    uVar3 = puVar2[-3];
    iVar5 = 0;
    if (uVar3 != 0) {
      iVar5 = uVar3 + ((LZCOUNT(uVar3 | 1) ^ 0x1fU) * 9 + 0x49 >> 6) + 1;
    }
    uVar3 = *puVar2;
    if (uVar3 == 0) {
      iVar4 = 0;
    }
    else {
      iVar4 = uVar3 + ((LZCOUNT(uVar3 | 1) ^ 0x1fU) * 9 + 0x49 >> 6) + 1;
    }
    puVar2 = puVar2 + 6;
    uVar6 = uVar6 - 1;
    iVar1 = iVar4 + iVar5 + iVar1 + ((LZCOUNT(iVar4 + iVar5 | 1) ^ 0x1fU) * 9 + 0x49 >> 6);
  } while (uVar6 != 0);
  return iVar1;
}


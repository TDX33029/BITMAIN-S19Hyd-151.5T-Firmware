// FUN_011df180 @ 011df180 size=228 calls_out=0 calls_in=1
// strings: 

int FUN_011df180(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  uint *puVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  if (param_1 == param_2) {
    return 0;
  }
  uVar2 = (uint)(param_2 - param_1) / 0x24;
  puVar3 = (uint *)(param_1 + 0x20);
  iVar1 = 0;
  do {
    uVar4 = puVar3[-6];
    iVar6 = 0;
    if (uVar4 != 0) {
      iVar6 = uVar4 + ((LZCOUNT(uVar4 | 1) ^ 0x1fU) * 9 + 0x49 >> 6) + 1;
    }
    uVar4 = puVar3[-3];
    iVar7 = 0;
    iVar5 = 0;
    if (uVar4 != 0) {
      iVar5 = uVar4 + ((LZCOUNT(uVar4 | 1) ^ 0x1fU) * 9 + 0x49 >> 6) + 1;
    }
    uVar4 = *puVar3;
    if (uVar4 != 0) {
      iVar7 = uVar4 + ((LZCOUNT(uVar4 | 1) ^ 0x1fU) * 9 + 0x49 >> 6) + 1;
    }
    puVar3 = puVar3 + 9;
    uVar4 = iVar5 + iVar6 + iVar7;
    uVar2 = uVar2 - 1;
    iVar1 = uVar4 + iVar1 + ((LZCOUNT(uVar4 | 1) ^ 0x1fU) * 9 + 0x49 >> 6);
  } while (uVar2 != 0);
  return iVar1;
}


// FUN_011df750 @ 011df750 size=292 calls_out=0 calls_in=3
// strings: 

int FUN_011df750(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  char *pcVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  
  if (param_1 == param_2) {
    return 0;
  }
  uVar2 = (uint)(param_2 - param_1) / 0x34;
  iVar1 = 0;
  pcVar3 = (char *)(param_1 + 0x30);
  do {
    iVar7 = 0;
    if (*(int *)(pcVar3 + -0x18) != -0x80000000) {
      iVar7 = *(uint *)(pcVar3 + -0x10) +
              ((LZCOUNT(*(uint *)(pcVar3 + -0x10) | 1) ^ 0x1fU) * 9 + 0x49 >> 6) + 1;
    }
    uVar4 = *(uint *)(pcVar3 + -0x28);
    iVar8 = 0;
    iVar6 = 0;
    if (uVar4 != 0) {
      iVar6 = uVar4 + ((LZCOUNT(uVar4 | 1) ^ 0x1fU) * 9 + 0x49 >> 6) + 1;
    }
    uVar4 = *(uint *)(pcVar3 + -0x1c);
    if (uVar4 != 0) {
      iVar8 = uVar4 + ((LZCOUNT(uVar4 | 1) ^ 0x1fU) * 9 + 0x49 >> 6) + 1;
    }
    iVar5 = 0;
    if (*(int *)(pcVar3 + -0xc) != -0x80000000) {
      iVar5 = *(uint *)(pcVar3 + -4) +
              ((LZCOUNT(*(uint *)(pcVar3 + -4) | 1) ^ 0x1fU) * 9 + 0x49 >> 6) + 1;
    }
    uVar4 = iVar6 + iVar7 + iVar8 + iVar5;
    if (*pcVar3 != '\x02') {
      uVar4 = uVar4 + 2;
    }
    uVar2 = uVar2 - 1;
    iVar1 = uVar4 + iVar1 + ((LZCOUNT(uVar4 | 1) ^ 0x1fU) * 9 + 0x49 >> 6);
    pcVar3 = pcVar3 + 0x34;
  } while (uVar2 != 0);
  return iVar1;
}


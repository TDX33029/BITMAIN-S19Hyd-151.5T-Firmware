// FUN_01aa2700 @ 01aa2700 size=308 calls_out=1 calls_in=2
// strings: 

int FUN_01aa2700(int param_1,int param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  char *pcVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  
  if (param_1 == param_2) {
    iVar6 = 0;
  }
  else {
    pcVar8 = (char *)(param_1 + 0x20);
    iVar6 = 0;
    uVar7 = (uint)(param_2 - param_1) / 0x24;
    do {
      iVar10 = 0;
      if (*(int *)(pcVar8 + -0x18) != -0x80000000) {
        iVar10 = *(uint *)(pcVar8 + -0x10) +
                 ((LZCOUNT(*(uint *)(pcVar8 + -0x10) | 1) ^ 0x1fU) * 9 + 0x49 >> 6) + 1;
      }
      iVar2 = 0;
      iVar9 = 0;
      if (*(int *)(pcVar8 + -0x20) == 1) {
        uVar4 = *(uint *)(pcVar8 + -0x1c);
        uVar5 = LZCOUNT(uVar4 | 1) | 0x20;
        if ((int)uVar4 < 0) {
          uVar5 = LZCOUNT((int)uVar4 >> 0x1f);
        }
        iVar9 = ((uVar5 ^ 0x3f) * 9 + 0x49 >> 6) + 1;
      }
      if (*(int *)(pcVar8 + -0xc) != -0x80000000) {
        iVar11 = *(int *)(pcVar8 + -4);
        cVar1 = *pcVar8;
        iVar3 = FUN_01aa2d9c(*(int *)(pcVar8 + -8),*(int *)(pcVar8 + -8) + iVar11 * 0x60);
        iVar2 = iVar11 * 2 + 2;
        if (cVar1 == '\x02') {
          iVar2 = iVar11 << 1;
        }
        iVar2 = iVar2 + iVar3 + ((LZCOUNT(iVar2 + iVar3 | 1) ^ 0x1fU) * 9 + 0x49 >> 6) + 1;
      }
      pcVar8 = pcVar8 + 0x24;
      uVar4 = iVar9 + iVar10 + iVar2;
      uVar7 = uVar7 - 1;
      iVar6 = uVar4 + iVar6 + ((LZCOUNT(uVar4 | 1) ^ 0x1fU) * 9 + 0x49 >> 6);
    } while (uVar7 != 0);
  }
  return iVar6;
}


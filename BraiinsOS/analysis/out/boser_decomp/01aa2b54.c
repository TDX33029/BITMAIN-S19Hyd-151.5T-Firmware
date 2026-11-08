// FUN_01aa2b54 @ 01aa2b54 size=408 calls_out=1 calls_in=0
// strings: 

int FUN_01aa2b54(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
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
    pcVar8 = (char *)(param_1 + 0x3d);
    iVar6 = 0;
    uVar7 = (uint)(param_2 - param_1) >> 6;
    do {
      iVar9 = 0;
      if (*(int *)(pcVar8 + -0x25) != -0x80000000) {
        iVar9 = *(uint *)(pcVar8 + -0x1d) +
                ((LZCOUNT(*(uint *)(pcVar8 + -0x1d) | 1) ^ 0x1fU) * 9 + 0x49 >> 6) + 1;
      }
      iVar10 = 0;
      iVar11 = 0;
      if (*(int *)(pcVar8 + -0x19) != -0x80000000) {
        iVar11 = *(uint *)(pcVar8 + -0x11) +
                 ((LZCOUNT(*(uint *)(pcVar8 + -0x11) | 1) ^ 0x1fU) * 9 + 0x49 >> 6) + 1;
      }
      if (*(int *)(pcVar8 + -0xd) != -0x80000000) {
        iVar10 = *(uint *)(pcVar8 + -5) +
                 ((LZCOUNT(*(uint *)(pcVar8 + -5) | 1) ^ 0x1fU) * 9 + 0x49 >> 6) + 1;
      }
      iVar1 = 0;
      if (*(uint *)(pcVar8 + -0x3d) != 2) {
        if ((*(uint *)(pcVar8 + -0x3d) & 1) != 0) {
          uVar2 = *(uint *)(pcVar8 + -0x39);
          uVar4 = LZCOUNT(uVar2 | 1) | 0x20;
          if ((int)uVar2 < 0) {
            uVar4 = LZCOUNT((int)uVar2 >> 0x1f);
          }
          iVar1 = ((uVar4 ^ 0x3f) * 9 + 0x49 >> 6) + 2;
        }
        iVar5 = *(int *)(pcVar8 + -0x2d);
        if (pcVar8[-0x29] != '\x02') {
          iVar1 = iVar1 + 3;
        }
        iVar3 = FUN_01aa2d9c(*(int *)(pcVar8 + -0x31),*(int *)(pcVar8 + -0x31) + iVar5 * 0x60);
        uVar2 = iVar1 + iVar5 * 2 + iVar3;
        iVar1 = uVar2 + ((LZCOUNT(uVar2 | 1) ^ 0x1fU) * 9 + 0x49 >> 6) + 1;
      }
      uVar2 = iVar11 + iVar9 + iVar10 + iVar1;
      if (pcVar8[-1] != '\x02') {
        uVar2 = uVar2 + 2;
      }
      if (*pcVar8 != '\x02') {
        uVar2 = uVar2 + 2;
      }
      pcVar8 = pcVar8 + 0x40;
      uVar7 = uVar7 - 1;
      iVar6 = uVar2 + iVar6 + ((LZCOUNT(uVar2 | 1) ^ 0x1fU) * 9 + 0x49 >> 6);
    } while (uVar7 != 0);
  }
  return iVar6;
}


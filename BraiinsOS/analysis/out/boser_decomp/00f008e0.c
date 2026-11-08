// FUN_00f008e0 @ 00f008e0 size=336 calls_out=0 calls_in=1
// strings: 

int FUN_00f008e0(int param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint *puVar7;
  int iVar8;
  int iVar9;
  
  iVar3 = 0;
  iVar2 = 0;
  if (*(int *)(param_1 + 0xc) != -0x7fffffff) {
    iVar3 = 2;
  }
  if (-0x7fffffff < *(int *)(param_1 + 0xc)) {
    uVar1 = *(uint *)(param_1 + 0x14);
    iVar3 = 0;
    iVar9 = 0;
    if (uVar1 != 0) {
      iVar9 = uVar1 + ((LZCOUNT(uVar1 | 1) ^ 0x1fU) * 9 + 0x49 >> 6) + 1;
    }
    uVar1 = *(uint *)(param_1 + 0x20);
    if (uVar1 != 0) {
      iVar3 = uVar1 + ((LZCOUNT(uVar1 | 1) ^ 0x1fU) * 9 + 0x49 >> 6) + 1;
    }
    uVar1 = *(uint *)(param_1 + 0x2c);
    iVar4 = 0;
    iVar5 = 0;
    if (uVar1 != 0) {
      iVar5 = uVar1 + ((LZCOUNT(uVar1 | 1) ^ 0x1fU) * 9 + 0x49 >> 6) + 1;
    }
    iVar6 = *(int *)(param_1 + 0x38);
    if (iVar6 != 0) {
      iVar4 = 0;
      puVar7 = (uint *)(*(int *)(param_1 + 0x34) + 8);
      iVar8 = iVar6;
      do {
        iVar8 = iVar8 + -1;
        iVar4 = *puVar7 + iVar4 + ((LZCOUNT(*puVar7 | 1) ^ 0x1fU) * 9 + 0x49 >> 6);
        puVar7 = puVar7 + 3;
      } while (iVar8 != 0);
    }
    uVar1 = iVar3 + iVar9 + iVar5 + iVar6 + iVar4;
    iVar3 = uVar1 + ((LZCOUNT(uVar1 | 1) ^ 0x1fU) * 9 + 0x49 >> 6) + 1;
  }
  uVar1 = *(uint *)(param_1 + 8);
  if (uVar1 != 0) {
    iVar2 = uVar1 + ((LZCOUNT(uVar1 | 1) ^ 0x1fU) * 9 + 0x49 >> 6) + 1;
  }
  return iVar2 + iVar3;
}


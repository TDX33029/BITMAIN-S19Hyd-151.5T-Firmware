// FUN_009eaf28 @ 009eaf28 size=340 calls_out=4 calls_in=0
// strings: 

void FUN_009eaf28(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  undefined4 *puVar7;
  int iVar8;
  int iVar9;
  
  iVar4 = *(int *)(param_1 + 8);
  iVar5 = *(int *)(param_1 + 0xc);
  iVar3 = 0;
  while (iVar3 != iVar5) {
    iVar1 = iVar4 + iVar3 * 0x1c;
    if ((*(uint *)(iVar1 + 0x10) & 0x7fffffff) != 0) {
      thunk_FUN_016d3fb4(*(undefined4 *)(iVar1 + 0x14));
    }
    iVar8 = *(int *)(iVar1 + 8);
    iVar3 = iVar3 + 1;
    puVar7 = (undefined4 *)(iVar8 + 4);
    for (iVar9 = *(int *)(iVar1 + 0xc); iVar9 != 0; iVar9 = iVar9 + -1) {
      if (puVar7[-1] != 0) {
        thunk_FUN_016d3fb4(*puVar7);
      }
      puVar7 = puVar7 + 3;
    }
    if (*(int *)(iVar1 + 4) != 0) {
      thunk_FUN_016d3fb4(iVar8);
    }
  }
  if (*(int *)(param_1 + 4) != 0) {
    thunk_FUN_016d3fb4(iVar4);
  }
  uVar2 = *(undefined4 *)(param_1 + 0x18);
  FUN_00a055a0(uVar2,*(undefined4 *)(param_1 + 0x1c));
  if (*(int *)(param_1 + 0x14) != 0) {
    thunk_FUN_016d3fb4(uVar2);
  }
  FUN_009ff3ac(param_1 + 0x30);
  FUN_009ff4b0(param_1 + 0x60);
  iVar3 = 0;
  uVar6 = 0;
  do {
    iVar4 = *(int *)(param_1 + 0x80 + iVar3);
    if (iVar4 != 0) {
      puVar7 = (undefined4 *)(iVar4 + 8);
      iVar5 = 1 << (uVar6 & 0xff);
      do {
        if ((*(char *)(puVar7 + 2) == '\x01') && (puVar7[-1] != 0)) {
          thunk_FUN_016d3fb4(*puVar7);
        }
        puVar7 = puVar7 + 5;
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
      thunk_FUN_016d3fb4(iVar4);
    }
    iVar3 = iVar3 + 4;
    uVar6 = uVar6 + 1;
  } while (iVar3 != 0x7c);
  return;
}


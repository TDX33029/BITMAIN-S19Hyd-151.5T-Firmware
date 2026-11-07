// FUN_00ce1dd8 @ 00ce1dd8 size=140 calls_out=1 calls_in=4
// strings: 

void FUN_00ce1dd8(int param_1,int param_2)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar3 = 0;
  while (iVar3 != param_2) {
    iVar1 = param_1 + iVar3 * 0x18;
    iVar4 = *(int *)(iVar1 + 0xc);
    puVar2 = (undefined4 *)(iVar4 + 0x10);
    for (iVar5 = *(int *)(iVar1 + 0x10); iVar5 != 0; iVar5 = iVar5 + -1) {
      if (puVar2[-4] != 0) {
        thunk_FUN_016d3fb4(puVar2[-3]);
      }
      if (puVar2[-1] != 0) {
        thunk_FUN_016d3fb4(*puVar2);
      }
      puVar2 = puVar2 + 6;
    }
    iVar3 = iVar3 + 1;
    if (*(int *)(iVar1 + 8) != 0) {
      thunk_FUN_016d3fb4(iVar4);
    }
  }
  return;
}


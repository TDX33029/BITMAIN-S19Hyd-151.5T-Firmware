// FUN_00a6074c @ 00a6074c size=160 calls_out=1 calls_in=2
// strings: 

void FUN_00a6074c(int param_1,int param_2)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = 0;
  while (iVar3 != param_2) {
    iVar1 = param_1 + iVar3 * 0x20;
    puVar2 = (undefined4 *)(*(int *)(iVar1 + 0x14) + 0x10);
    for (iVar4 = *(int *)(iVar1 + 0x18); iVar4 != 0; iVar4 = iVar4 + -1) {
      if (puVar2[-4] != 0) {
        thunk_FUN_016d3fb4(puVar2[-3]);
      }
      if (puVar2[-1] != 0) {
        thunk_FUN_016d3fb4(*puVar2);
      }
      if (puVar2[2] != 0) {
        thunk_FUN_016d3fb4(puVar2[3]);
      }
      puVar2 = puVar2 + 10;
    }
    iVar3 = iVar3 + 1;
    if (*(int *)(iVar1 + 0x10) != 0) {
      thunk_FUN_016d3fb4(*(undefined4 *)(iVar1 + 0x14));
    }
  }
  return;
}


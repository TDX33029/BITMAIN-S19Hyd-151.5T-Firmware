// FUN_00a60ec0 @ 00a60ec0 size=164 calls_out=1 calls_in=1
// strings: 

void FUN_00a60ec0(int param_1,int param_2)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = 0;
  while (iVar3 != param_2) {
    iVar1 = param_1 + iVar3 * 0x18;
    puVar2 = (undefined4 *)(*(int *)(iVar1 + 0xc) + 0x10);
    for (iVar4 = *(int *)(iVar1 + 0x10); iVar4 != 0; iVar4 = iVar4 + -1) {
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
    if (*(int *)(iVar1 + 8) != 0) {
      thunk_FUN_016d3fb4(*(undefined4 *)(iVar1 + 0xc));
    }
  }
  return;
}


// FUN_0094abc0 @ 0094abc0 size=216 calls_out=1 calls_in=11
// strings: 

void FUN_0094abc0(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  
  if (param_2 == 0) {
    return;
  }
  iVar4 = 0;
  do {
    iVar3 = param_1 + iVar4 * 0x30;
    if (*(int *)(iVar3 + 0x10) != 0) {
      thunk_FUN_016d3fb4(*(undefined4 *)(iVar3 + 0x14));
    }
    iVar1 = *(int *)(iVar3 + 0x20);
    if (iVar1 != -0x80000000) {
      iVar2 = *(int *)(iVar3 + 0x28);
      if (iVar2 != 0) {
        puVar5 = (undefined4 *)(*(int *)(iVar3 + 0x24) + 0x10);
        do {
          if (puVar5[-4] != 0) {
            thunk_FUN_016d3fb4(puVar5[-3]);
          }
          if (puVar5[-1] != 0) {
            thunk_FUN_016d3fb4(*puVar5);
          }
          if ((puVar5[2] & 0x7fffffff) != 0) {
            thunk_FUN_016d3fb4(puVar5[3]);
          }
          puVar5 = puVar5 + 10;
          iVar2 = iVar2 + -1;
        } while (iVar2 != 0);
        iVar1 = *(int *)(iVar3 + 0x20);
      }
      if (iVar1 != 0) {
        thunk_FUN_016d3fb4(*(undefined4 *)(iVar3 + 0x24));
      }
    }
    iVar4 = iVar4 + 1;
  } while (iVar4 != param_2);
  return;
}


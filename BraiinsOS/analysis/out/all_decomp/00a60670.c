// FUN_00a60670 @ 00a60670 size=220 calls_out=1 calls_in=1
// strings: 

void FUN_00a60670(int param_1,int param_2)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
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
      iVar5 = *(int *)(iVar3 + 0x24);
      iVar6 = *(int *)(iVar3 + 0x28);
      if (iVar6 != 0) {
        puVar2 = (undefined4 *)(iVar5 + 0x10);
        do {
          if (puVar2[-4] != 0) {
            thunk_FUN_016d3fb4(puVar2[-3]);
          }
          if (puVar2[-1] != 0) {
            thunk_FUN_016d3fb4(*puVar2);
          }
          if ((puVar2[2] & 0x7fffffff) != 0) {
            thunk_FUN_016d3fb4(puVar2[3]);
          }
          puVar2 = puVar2 + 10;
          iVar6 = iVar6 + -1;
        } while (iVar6 != 0);
        iVar1 = *(int *)(iVar3 + 0x20);
      }
      if (iVar1 != 0) {
        thunk_FUN_016d3fb4(iVar5);
      }
    }
    iVar4 = iVar4 + 1;
  } while (iVar4 != param_2);
  return;
}


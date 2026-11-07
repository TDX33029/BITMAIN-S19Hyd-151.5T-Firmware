// FUN_00f20d88 @ 00f20d88 size=224 calls_out=1 calls_in=4
// strings: 

void FUN_00f20d88(int param_1,int param_2)

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
  iVar3 = 0;
  do {
    iVar4 = param_1 + iVar3 * 0x30;
    if (*(int *)(iVar4 + 0x10) != 0) {
      thunk_FUN_016d3fb4(*(undefined4 *)(iVar4 + 0x14));
    }
    iVar1 = *(int *)(iVar4 + 0x20);
    if (iVar1 != -0x80000000) {
      iVar5 = *(int *)(iVar4 + 0x24);
      iVar6 = *(int *)(iVar4 + 0x28);
      if (iVar6 != 0) {
        puVar2 = (undefined4 *)(iVar5 + 0x10);
        do {
          while( true ) {
            if (puVar2[-4] != 0) {
              thunk_FUN_016d3fb4(puVar2[-3]);
            }
            if (puVar2[-1] != 0) {
              thunk_FUN_016d3fb4(*puVar2);
            }
            if (puVar2[2] != -0x80000000 && puVar2[2] != 0) break;
            puVar2 = puVar2 + 10;
            iVar6 = iVar6 + -1;
            if (iVar6 == 0) goto LAB_00f20e48;
          }
          thunk_FUN_016d3fb4(puVar2[3]);
          puVar2 = puVar2 + 10;
          iVar6 = iVar6 + -1;
        } while (iVar6 != 0);
LAB_00f20e48:
        iVar1 = *(int *)(iVar4 + 0x20);
      }
      if (iVar1 != 0) {
        thunk_FUN_016d3fb4(iVar5);
      }
    }
    iVar3 = iVar3 + 1;
    if (iVar3 == param_2) {
      return;
    }
  } while( true );
}


// FUN_01633b88 @ 01633b88 size=144 calls_out=2 calls_in=0
// strings: 

void FUN_01633b88(int param_1,int param_2)

{
  ushort *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  if (param_2 != 0) {
    iVar2 = 0;
    do {
      iVar4 = iVar2 + 1;
      puVar1 = (ushort *)(param_1 + iVar2 * 0x14);
      if (1 < *puVar1) {
        if (*puVar1 == 2) {
          FUN_01633c80(puVar1 + 6);
        }
        else {
          iVar5 = *(int *)(puVar1 + 6);
          iVar6 = *(int *)(puVar1 + 8);
          iVar3 = iVar6 + 1;
          iVar2 = iVar5;
          while (iVar3 = iVar3 + -1, iVar3 != 0) {
            FUN_01633c80(iVar2);
            iVar2 = iVar2 + 8;
          }
          if (iVar6 != 0) {
            thunk_FUN_016d3fb4(iVar5);
          }
        }
      }
      iVar2 = iVar4;
    } while (iVar4 != param_2);
  }
  return;
}


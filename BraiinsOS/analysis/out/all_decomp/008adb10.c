// FUN_008adb10 @ 008adb10 size=156 calls_out=2 calls_in=1
// strings: 

void FUN_008adb10(int param_1,int param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  for (iVar3 = 0; param_2 != iVar3; iVar3 = iVar3 + 1) {
    piVar1 = (int *)(param_1 + iVar3 * 0x3c);
    iVar4 = piVar1[1];
    puVar2 = (undefined4 *)(iVar4 + 4);
    for (iVar5 = piVar1[2]; iVar5 != 0; iVar5 = iVar5 + -1) {
      if (puVar2[-1] != 0) {
        thunk_FUN_016d3fb4(*puVar2);
      }
      puVar2 = puVar2 + 3;
    }
    if (*piVar1 != 0) {
      thunk_FUN_016d3fb4(iVar4);
    }
    FUN_008e7734(piVar1 + 3);
  }
  return;
}


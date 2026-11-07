// FUN_0168f260 @ 0168f260 size=260 calls_out=1 calls_in=1
// strings: 

void FUN_0168f260(int param_1,int param_2)

{
  undefined4 *puVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  
  iVar2 = 0;
  while (iVar2 != param_2) {
    piVar3 = (int *)(param_1 + iVar2 * 0x18);
    puVar1 = (undefined4 *)(piVar3[1] + 0x40);
    for (iVar4 = piVar3[2]; iVar4 != 0; iVar4 = iVar4 + -1) {
      if (puVar1[-0x10] != 0) {
        thunk_FUN_016d3fb4(puVar1[-0xf]);
      }
      if ((puVar1[-0xd] != -0x7ffffffd) && (0 < (int)puVar1[-0xd])) {
        thunk_FUN_016d3fb4(puVar1[-0xc]);
      }
      if ((puVar1[-10] != -0x7ffffffd) && (0 < (int)puVar1[-10])) {
        thunk_FUN_016d3fb4(puVar1[-9]);
      }
      if ((puVar1[-7] != -0x7ffffffd) && (0 < (int)puVar1[-7])) {
        thunk_FUN_016d3fb4(puVar1[-6]);
      }
      if ((puVar1[-4] != -0x7ffffffd) && (0 < (int)puVar1[-4])) {
        thunk_FUN_016d3fb4(puVar1[-3]);
      }
      if ((puVar1[-1] != -0x7ffffffd) && (0 < (int)puVar1[-1])) {
        thunk_FUN_016d3fb4(*puVar1);
      }
      puVar1 = puVar1 + 0x12;
    }
    iVar2 = iVar2 + 1;
    if (*piVar3 != 0) {
      thunk_FUN_016d3fb4(piVar3[1]);
    }
  }
  return;
}


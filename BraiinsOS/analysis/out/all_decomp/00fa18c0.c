// FUN_00fa18c0 @ 00fa18c0 size=76 calls_out=1 calls_in=0
// strings: 

void FUN_00fa18c0(int param_1,int param_2)

{
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)(param_1 + 4);
  for (iVar1 = ((uint)(param_2 - param_1) >> 2) * -0x55555555; iVar1 != 0; iVar1 = iVar1 + -1) {
    if (puVar2[-1] != 0) {
      thunk_FUN_016d3fb4(*puVar2);
    }
    puVar2 = puVar2 + 3;
  }
  return;
}


// FUN_00f24c48 @ 00f24c48 size=116 calls_out=2 calls_in=2
// strings: 

void FUN_00f24c48(int param_1,int param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  
  if (param_2 != 0) {
    puVar2 = (undefined4 *)(param_1 + 4);
    iVar3 = 0;
    do {
      puVar1 = (undefined4 *)*puVar2;
      iVar3 = iVar3 + 1;
      if (puVar2[-1] == -0x80000000) {
        (**(code **)*puVar1)(puVar1);
      }
      else {
        FUN_00f15518(puVar1,puVar2[1]);
        if (puVar2[-1] != 0) {
          thunk_FUN_016d3fb4(*puVar2);
        }
      }
      puVar2 = puVar2 + 3;
    } while (param_2 != iVar3);
  }
  return;
}


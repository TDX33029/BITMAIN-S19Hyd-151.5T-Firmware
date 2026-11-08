// FUN_00f15518 @ 00f15518 size=92 calls_out=1 calls_in=11
// strings: 

void FUN_00f15518(int param_1,int param_2)

{
  code *pcVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  
  if (param_2 != 0) {
    puVar2 = (undefined4 *)(param_1 + 4);
    param_2 = 1 - param_2;
    do {
      uVar3 = puVar2[-1];
      puVar4 = (undefined4 *)*puVar2;
      pcVar1 = (code *)*puVar4;
      if (pcVar1 != (code *)0x0) {
        (*pcVar1)(uVar3);
      }
      if (puVar4[1] != 0) {
        thunk_FUN_016d3fb4(uVar3);
      }
      param_2 = param_2 + 1;
      puVar2 = puVar2 + 2;
    } while (param_2 != 1);
  }
  return;
}


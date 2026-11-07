// FUN_006e65ec @ 006e65ec size=124 calls_out=2 calls_in=1
// strings: 

void FUN_006e65ec(int param_1)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  byte local_20 [4];
  undefined4 *local_1c;
  
  if (*(int *)(param_1 + 0x18) != -0x80000000) {
    FUN_006e5938(local_20,param_1);
    if ((4 < local_20[0]) || (local_20[0] == 3)) {
      uVar2 = *local_1c;
      puVar3 = (undefined4 *)local_1c[1];
      pcVar1 = (code *)*puVar3;
      if (pcVar1 != (code *)0x0) {
        (*pcVar1)(uVar2);
      }
      if (puVar3[1] != 0) {
        thunk_FUN_016d3fb4(uVar2);
      }
      thunk_FUN_016d3fb4(local_1c);
      return;
    }
  }
  return;
}


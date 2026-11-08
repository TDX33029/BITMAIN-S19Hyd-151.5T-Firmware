// FUN_00a7a2c8 @ 00a7a2c8 size=136 calls_out=2 calls_in=4
// strings: 

void FUN_00a7a2c8(int param_1)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  byte local_20 [4];
  undefined4 *local_1c;
  
  if (*(char *)(param_1 + 0x2c) != '\0') {
    FUN_01645c74(local_20,param_1);
    if (local_20[0] == 4) {
      *(undefined1 *)(param_1 + 0x2c) = 0;
      return;
    }
    if (2 < local_20[0]) {
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
    }
  }
  return;
}


// FUN_0076e1d8 @ 0076e1d8 size=116 calls_out=2 calls_in=2
// strings: 

void FUN_0076e1d8(int param_1)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  char local_20 [4];
  undefined4 *local_1c;
  
  if (*(int *)(param_1 + 0x30) != -0x80000000) {
    FUN_0076dfdc(local_20,param_1);
    if ((local_20[0] != '\x04') && (local_20[0] == '\x03')) {
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


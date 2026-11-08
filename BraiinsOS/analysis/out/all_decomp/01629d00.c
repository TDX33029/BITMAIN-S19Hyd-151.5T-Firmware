// FUN_01629d00 @ 01629d00 size=132 calls_out=2 calls_in=5
// strings: 

void FUN_01629d00(undefined4 *param_1)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  byte local_20 [4];
  undefined4 *local_1c;
  
  if (*(char *)(param_1 + 2) == '\0') {
    FUN_015f438c(local_20,*param_1,param_1[1]);
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


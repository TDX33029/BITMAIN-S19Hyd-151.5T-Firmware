// FUN_00bd1f78 @ 00bd1f78 size=128 calls_out=3 calls_in=4
// strings: 

void FUN_00bd1f78(int param_1)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  
  if (*(char *)(param_1 + 8) == '\x03') {
    if (*(int *)(param_1 + 0xc) != 0) {
      FUN_00c8204c(*(int *)(param_1 + 0xc),*(undefined4 *)(param_1 + 0x10),1);
      return;
    }
  }
  else if (*(char *)(param_1 + 8) == '\x04') {
    if (*(char *)(param_1 + 0x1c) == '\x03') {
      uVar2 = *(undefined4 *)(param_1 + 0x14);
      puVar3 = *(undefined4 **)(param_1 + 0x18);
      pcVar1 = (code *)*puVar3;
      if (pcVar1 != (code *)0x0) {
        (*pcVar1)(uVar2);
      }
      if (puVar3[1] != 0) {
        thunk_FUN_016d3fb4(uVar2);
      }
    }
    FUN_00c822ec(*(undefined4 *)(param_1 + 4));
    return;
  }
  return;
}


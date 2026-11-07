// FUN_00c85398 @ 00c85398 size=140 calls_out=3 calls_in=2
// strings: 

void FUN_00c85398(int param_1)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  
  if (*(char *)(param_1 + 0x48) == '\x03') {
    if (*(char *)(param_1 + 0x28) == '\x04') {
      if (*(char *)(param_1 + 0x44) == '\x03') {
        uVar2 = *(undefined4 *)(param_1 + 0x3c);
        puVar3 = *(undefined4 **)(param_1 + 0x40);
        pcVar1 = (code *)*puVar3;
        if (pcVar1 != (code *)0x0) {
          (*pcVar1)(uVar2);
        }
        if (puVar3[1] != 0) {
          thunk_FUN_016d3fb4(uVar2);
        }
      }
      FUN_00c822ec(*(undefined4 *)(param_1 + 0x24));
      return;
    }
    if ((*(char *)(param_1 + 0x28) == '\x03') && (*(int *)(param_1 + 0x2c) != 0)) {
      FUN_00c8204c(*(int *)(param_1 + 0x2c),*(undefined4 *)(param_1 + 0x30),1);
      return;
    }
  }
  return;
}


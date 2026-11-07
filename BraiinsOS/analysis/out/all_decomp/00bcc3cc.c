// FUN_00bcc3cc @ 00bcc3cc size=128 calls_out=3 calls_in=2
// strings: 

void FUN_00bcc3cc(int param_1)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  
  if (*(char *)(param_1 + 0x18) == '\x03') {
    if (*(int *)(param_1 + 0x20) != 0) {
      FUN_00c8204c(*(int *)(param_1 + 0x20),*(undefined4 *)(param_1 + 0x24),1);
      return;
    }
  }
  else if (*(char *)(param_1 + 0x18) == '\x04') {
    if (*(char *)(param_1 + 0x34) == '\x03') {
      uVar2 = *(undefined4 *)(param_1 + 0x28);
      puVar3 = *(undefined4 **)(param_1 + 0x2c);
      pcVar1 = (code *)*puVar3;
      if (pcVar1 != (code *)0x0) {
        (*pcVar1)(uVar2);
      }
      if (puVar3[1] != 0) {
        thunk_FUN_016d3fb4(uVar2);
      }
    }
    FUN_00c822ec(*(undefined4 *)(param_1 + 0x14));
    return;
  }
  return;
}


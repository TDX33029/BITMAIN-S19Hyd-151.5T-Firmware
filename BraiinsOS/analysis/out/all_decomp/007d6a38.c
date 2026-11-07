// FUN_007d6a38 @ 007d6a38 size=236 calls_out=2 calls_in=3
// strings: 

void FUN_007d6a38(int param_1)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  
  if (*(char *)(param_1 + 0x21) == '\x03') {
    if (*(char *)(param_1 + 0x49) == '\x03') {
      uVar2 = *(undefined4 *)(param_1 + 0x2c);
      puVar3 = *(undefined4 **)(param_1 + 0x30);
      pcVar1 = (code *)*puVar3;
      if (pcVar1 != (code *)0x0) {
        (*pcVar1)(uVar2);
      }
      if (puVar3[1] != 0) {
        thunk_FUN_016d3fb4(uVar2);
      }
      *(undefined1 *)(param_1 + 0x48) = 0;
      *(undefined1 *)(param_1 + 0x20) = 0;
      return;
    }
  }
  else {
    if (*(char *)(param_1 + 0x21) != '\x04') {
      return;
    }
    if (*(char *)(param_1 + 0x30) == '\x04') {
      if (*(char *)(param_1 + 0x59) == '\x03') {
        uVar2 = *(undefined4 *)(param_1 + 0x3c);
        puVar3 = *(undefined4 **)(param_1 + 0x40);
        pcVar1 = (code *)*puVar3;
        if (pcVar1 != (code *)0x0) {
          (*pcVar1)(uVar2);
        }
        if (puVar3[1] != 0) {
          thunk_FUN_016d3fb4(uVar2);
        }
        *(undefined1 *)(param_1 + 0x58) = 0;
      }
    }
    else if (*(char *)(param_1 + 0x30) == '\x03') {
      FUN_00a07b4c(param_1 + 0x38);
    }
    if (*(undefined4 **)(param_1 + 0x18) != (undefined4 *)0x0) {
      (**(code **)**(undefined4 **)(param_1 + 0x18))();
    }
  }
  *(undefined1 *)(param_1 + 0x20) = 0;
  return;
}


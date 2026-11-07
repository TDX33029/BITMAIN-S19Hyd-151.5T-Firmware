// FUN_010ea3a4 @ 010ea3a4 size=88 calls_out=2 calls_in=2
// strings: 

void FUN_010ea3a4(int param_1)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  
  if (*(char *)(param_1 + 0x20) != '\x03') {
    if (*(char *)(param_1 + 0x20) == '\x05') {
      FUN_00bd234c(param_1 + 0x24);
      return;
    }
    return;
  }
  uVar2 = *(undefined4 *)(param_1 + 0x24);
  puVar3 = *(undefined4 **)(param_1 + 0x28);
  pcVar1 = (code *)*puVar3;
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)(uVar2);
  }
  if (puVar3[1] == 0) {
    return;
  }
  thunk_FUN_01be4678(uVar2);
  return;
}


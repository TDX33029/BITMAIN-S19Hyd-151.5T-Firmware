// FUN_00f2ddc8 @ 00f2ddc8 size=88 calls_out=2 calls_in=2
// strings: 

void FUN_00f2ddc8(int param_1)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  
  if (*(char *)(param_1 + 0x14) != '\0') {
    if (*(char *)(param_1 + 0x14) == '\x03') {
      FUN_01139b38(*(undefined4 *)(param_1 + 0xc),*(undefined4 *)(param_1 + 0x10));
      return;
    }
    return;
  }
  uVar2 = *(undefined4 *)(param_1 + 4);
  puVar3 = *(undefined4 **)(param_1 + 8);
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


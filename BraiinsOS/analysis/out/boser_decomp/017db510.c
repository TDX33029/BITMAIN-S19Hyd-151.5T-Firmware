// FUN_017db510 @ 017db510 size=96 calls_out=3 calls_in=3
// strings: 

void FUN_017db510(int param_1)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  
  if (*(char *)(param_1 + 0x108) == '\x14') {
    puVar3 = *(undefined4 **)(param_1 + 0x110);
    uVar2 = *(undefined4 *)(param_1 + 0x10c);
    pcVar1 = (code *)*puVar3;
    if (pcVar1 != (code *)0x0) {
      (*pcVar1)(uVar2);
    }
    if (puVar3[1] != 0) {
      thunk_FUN_01be4678(uVar2);
    }
  }
  else {
    FUN_0177fbb4();
  }
  FUN_017cea70(param_1);
  if (*(char *)(param_1 + 0xf4) != '\x14') {
    FUN_0177fbb4();
  }
  FUN_019bb7e0(*(undefined4 *)(param_1 + 0xe8),*(undefined4 *)(param_1 + 0xec));
  return;
}


// FUN_0179992c @ 0179992c size=24 calls_out=1 calls_in=2
// strings: 

void FUN_0179992c(int param_1)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  
  FUN_00b76614();
  if (*(char *)(param_1 + 0x118) == '\x14') {
    puVar3 = *(undefined4 **)(param_1 + 0x120);
    uVar2 = *(undefined4 *)(param_1 + 0x11c);
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
  FUN_01781388(param_1 + 0x10);
  if (*(char *)(param_1 + 0x104) != '\x14') {
    FUN_0177fbb4();
  }
  FUN_019bb7e0(*(undefined4 *)(param_1 + 0xf8),*(undefined4 *)(param_1 + 0xfc));
  return;
}


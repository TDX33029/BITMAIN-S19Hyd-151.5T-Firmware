// FUN_0069d8a4 @ 0069d8a4 size=80 calls_out=2 calls_in=103
// strings: 

void FUN_0069d8a4(char param_1,undefined4 *param_2)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  
  if (param_1 != '\x03') {
    return;
  }
  uVar2 = *param_2;
  puVar3 = (undefined4 *)param_2[1];
  pcVar1 = (code *)*puVar3;
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)(uVar2);
  }
  if (puVar3[1] != 0) {
    thunk_FUN_01be4678(uVar2);
  }
  thunk_FUN_01be4678(param_2);
  return;
}


// FUN_01705ae8 @ 01705ae8 size=68 calls_out=1 calls_in=9
// strings: 

void FUN_01705ae8(char *param_1)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  
  if (*param_1 != '\0') {
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


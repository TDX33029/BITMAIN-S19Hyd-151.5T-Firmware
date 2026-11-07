// FUN_0165b864 @ 0165b864 size=84 calls_out=4 calls_in=2
// strings: 

void FUN_0165b864(int param_1)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  
  puVar3 = *(undefined4 **)(param_1 + 0x2f4);
  uVar2 = *(undefined4 *)(param_1 + 0x2f0);
  pcVar1 = (code *)*puVar3;
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)(uVar2);
  }
  if (puVar3[1] != 0) {
    thunk_FUN_01be4678(uVar2);
  }
  FUN_014fe178(param_1 + 0x2fc);
  FUN_0165b904(param_1);
  thunk_FUN_01be4678(param_1);
  return;
}


// FUN_00abbc74 @ 00abbc74 size=80 calls_out=2 calls_in=3
// strings: 

void FUN_00abbc74(char *param_1)

{
  code *pcVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  
  if (*param_1 != '\x03') {
    return;
  }
  puVar2 = *(undefined4 **)(param_1 + 4);
  uVar3 = *puVar2;
  puVar4 = (undefined4 *)puVar2[1];
  pcVar1 = (code *)*puVar4;
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)(uVar3);
  }
  if (puVar4[1] != 0) {
    thunk_FUN_01be4678(uVar3);
  }
  thunk_FUN_01be4678(puVar2);
  return;
}


// FUN_0179b50c @ 0179b50c size=72 calls_out=3 calls_in=0
// strings: 

void FUN_0179b50c(int param_1)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  
  uVar2 = *(undefined4 *)(param_1 + 0xd0);
  puVar3 = *(undefined4 **)(param_1 + 0xd4);
  pcVar1 = (code *)*puVar3;
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)(uVar2);
  }
  if (puVar3[1] != 0) {
    thunk_FUN_01be4678(uVar2);
  }
  FUN_005f4234(param_1);
  FUN_012840cc(param_1 + 0xe0);
  return;
}


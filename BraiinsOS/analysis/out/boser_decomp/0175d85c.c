// FUN_0175d85c @ 0175d85c size=56 calls_out=1 calls_in=67
// strings: 

void FUN_0175d85c(undefined4 *param_1)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  
  uVar2 = *param_1;
  puVar3 = (undefined4 *)param_1[1];
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


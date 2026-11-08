// FUN_00b92e6c @ 00b92e6c size=168 calls_out=3 calls_in=1
// strings: 

void FUN_00b92e6c(int *param_1)

{
  undefined4 *puVar1;
  code *pcVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  
  if (*param_1 == 7 && param_1[1] == 0) {
    FUN_00b6fd3c(param_1 + 2);
    return;
  }
  FUN_00b6fd3c(param_1 + 4);
  if (param_1[0x19] != 0) {
    thunk_FUN_01be4678(param_1[0x18]);
  }
  thunk_FUN_01be4678(param_1[0x20]);
  puVar1 = (undefined4 *)param_1[0x33];
  if ((char)param_1[0x32] != '\x03') {
    return;
  }
  uVar3 = *puVar1;
  puVar4 = (undefined4 *)puVar1[1];
  pcVar2 = (code *)*puVar4;
  if (pcVar2 != (code *)0x0) {
    (*pcVar2)(uVar3);
  }
  if (puVar4[1] != 0) {
    thunk_FUN_01be4678(uVar3);
  }
  thunk_FUN_01be4678(puVar1);
  return;
}


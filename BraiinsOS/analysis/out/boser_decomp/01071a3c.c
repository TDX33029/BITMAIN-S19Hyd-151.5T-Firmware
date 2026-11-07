// FUN_01071a3c @ 01071a3c size=192 calls_out=5 calls_in=19
// strings: 

void FUN_01071a3c(int *param_1)

{
  code *pcVar1;
  uint uVar2;
  int iVar3;
  undefined4 *puVar4;
  
  iVar3 = param_1[0x38];
  puVar4 = (undefined4 *)param_1[0x39];
  pcVar1 = (code *)*puVar4;
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)(iVar3);
  }
  if (puVar4[1] != 0) {
    thunk_FUN_01be4678(iVar3);
  }
  FUN_005f6438(param_1[0x34],param_1[0x35]);
  uVar2 = param_1[0x10];
  if ((uVar2 != 3 || param_1[0x11] != 0) &&
     ((uint)-param_1[0x11] < (uint)(uVar2 < 4) || (uVar2 & 6) != 4)) {
    FUN_01071bb4();
  }
  FUN_012840cc(param_1 + 0x2c);
  if (*param_1 != 3 || param_1[1] != 0) {
    FUN_0142e6dc(param_1);
  }
  FUN_012840cc(param_1 + 0x30);
  return;
}


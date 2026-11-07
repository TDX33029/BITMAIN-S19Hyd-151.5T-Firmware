// FUN_01a8d084 @ 01a8d084 size=240 calls_out=4 calls_in=4
// strings: 

void FUN_01a8d084(int *param_1)

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
  iVar3 = param_1[0x34];
  if (iVar3 != 0) {
    puVar4 = (undefined4 *)param_1[0x35];
    pcVar1 = (code *)*puVar4;
    if (pcVar1 != (code *)0x0) {
      (*pcVar1)(iVar3);
    }
    if (puVar4[1] != 0) {
      thunk_FUN_01be4678(iVar3);
    }
  }
  uVar2 = param_1[0x10];
  if ((uVar2 != 3 || param_1[0x11] != 0) &&
     ((uint)-param_1[0x11] < (uint)(uVar2 < 4) || (uVar2 & 6) != 4)) {
    FUN_005f6588();
  }
  FUN_012840cc(param_1 + 0x2c);
  if (*param_1 != 3 || param_1[1] != 0) {
    FUN_0142e6dc(param_1);
  }
  FUN_012840cc(param_1 + 0x30);
  return;
}


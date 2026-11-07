// FUN_014459c8 @ 014459c8 size=152 calls_out=4 calls_in=2
// strings: 

void FUN_014459c8(int *param_1)

{
  code *pcVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  
  if (*param_1 == 0) {
    if (param_1[1] != 0) {
      FUN_0134c054(param_1[3],param_1[1],4,0x20);
      return;
    }
    if ((char)param_1[2] == '\x03') {
      puVar2 = (undefined4 *)param_1[3];
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
  }
  else if (param_1[4] != 0) {
    FUN_01443048(param_1[4],param_1[5]);
    return;
  }
  return;
}


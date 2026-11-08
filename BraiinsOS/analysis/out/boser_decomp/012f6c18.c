// FUN_012f6c18 @ 012f6c18 size=152 calls_out=3 calls_in=1
// strings: 

void FUN_012f6c18(int *param_1)

{
  undefined4 *puVar1;
  code *pcVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  
  if (*param_1 == 3) {
    if (1 < (uint)param_1[1]) {
      if (param_1[1] == 2) {
        puVar1 = (undefined4 *)param_1[2];
      }
      else {
        if ((char)param_1[2] != '\x03') {
          return;
        }
        puVar1 = (undefined4 *)param_1[3];
        uVar3 = *puVar1;
        puVar4 = (undefined4 *)puVar1[1];
        pcVar2 = (code *)*puVar4;
        if (pcVar2 != (code *)0x0) {
          (*pcVar2)(uVar3);
        }
        if (puVar4[1] != 0) {
          thunk_FUN_01be4678(uVar3);
        }
      }
      thunk_FUN_01be4678(puVar1);
      return;
    }
  }
  else if ((*param_1 == 7) && (param_1[1] - 1U < 2)) {
    FUN_0134bd64(param_1[3],param_1[4]);
    return;
  }
  return;
}


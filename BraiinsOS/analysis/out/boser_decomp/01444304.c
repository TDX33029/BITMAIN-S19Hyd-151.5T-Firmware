// FUN_01444304 @ 01444304 size=184 calls_out=3 calls_in=1
// strings: 

void FUN_01444304(int *param_1)

{
  code *pcVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  
  if (*param_1 != 2) {
    if (*param_1 == 0) {
      if (param_1[1] != 0) {
        FUN_0134c054(param_1[3],param_1[1],4,0x20);
        return;
      }
      if ((char)param_1[2] == '\x03') {
        puVar2 = (undefined4 *)param_1[3];
        uVar4 = *puVar2;
        puVar3 = (undefined4 *)puVar2[1];
        pcVar1 = (code *)*puVar3;
        if (pcVar1 != (code *)0x0) {
          (*pcVar1)(uVar4);
        }
        if (puVar3[1] != 0) {
          thunk_FUN_01be4678(uVar4);
        }
LAB_01444350:
        thunk_FUN_01be4678(puVar2);
        return;
      }
    }
    else {
      puVar2 = (undefined4 *)param_1[4];
      if (puVar2 != (undefined4 *)0x0) {
        puVar3 = (undefined4 *)param_1[5];
        pcVar1 = (code *)*puVar3;
        if (pcVar1 != (code *)0x0) {
          (*pcVar1)(puVar2);
        }
        if (puVar3[1] != 0) goto LAB_01444350;
      }
    }
  }
  return;
}


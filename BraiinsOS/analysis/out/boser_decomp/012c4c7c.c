// FUN_012c4c7c @ 012c4c7c size=128 calls_out=2 calls_in=2
// strings: 

void FUN_012c4c7c(int *param_1)

{
  code *pcVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  
  if (*param_1 == 1) {
    if ((char)param_1[1] != '\x03') goto LAB_012c4cf0;
    puVar2 = (undefined4 *)param_1[2];
    uVar3 = *puVar2;
    puVar4 = (undefined4 *)puVar2[1];
    pcVar1 = (code *)*puVar4;
    if (pcVar1 != (code *)0x0) {
      (*pcVar1)(uVar3);
    }
    if (puVar4[1] != 0) {
      thunk_FUN_01be4678(uVar3);
    }
  }
  else {
    if ((*param_1 != 0) || (param_1[2] == 0)) goto LAB_012c4cf0;
    puVar2 = (undefined4 *)param_1[1];
  }
  thunk_FUN_01be4678(puVar2);
LAB_012c4cf0:
  thunk_FUN_01be4678(param_1);
  return;
}


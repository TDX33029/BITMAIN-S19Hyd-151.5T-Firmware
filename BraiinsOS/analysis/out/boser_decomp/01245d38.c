// FUN_01245d38 @ 01245d38 size=128 calls_out=2 calls_in=2
// strings: 

void FUN_01245d38(undefined4 *param_1)

{
  code *pcVar1;
  int *piVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  
  piVar2 = (int *)*param_1;
  if (*piVar2 == 1) {
    if ((char)piVar2[1] != '\x03') goto LAB_01245dac;
    puVar3 = (undefined4 *)piVar2[2];
    uVar4 = *puVar3;
    puVar5 = (undefined4 *)puVar3[1];
    pcVar1 = (code *)*puVar5;
    if (pcVar1 != (code *)0x0) {
      (*pcVar1)(uVar4);
    }
    if (puVar5[1] != 0) {
      thunk_FUN_01be4678(uVar4);
    }
  }
  else {
    if ((*piVar2 != 0) || (piVar2[2] == 0)) goto LAB_01245dac;
    puVar3 = (undefined4 *)piVar2[1];
  }
  thunk_FUN_01be4678(puVar3);
LAB_01245dac:
  thunk_FUN_01be4678(piVar2);
  return;
}


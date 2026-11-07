// FUN_014f2098 @ 014f2098 size=148 calls_out=3 calls_in=1
// strings: 

void FUN_014f2098(int *param_1)

{
  code *pcVar1;
  int *piVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  
  if (*param_1 != 3) {
    FUN_014c9d44();
    return;
  }
  piVar2 = (int *)param_1[1];
  if (*piVar2 == 1) {
    if ((char)piVar2[1] != '\x03') goto LAB_014f2120;
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
    if ((*piVar2 != 0) || (piVar2[2] == 0)) goto LAB_014f2120;
    puVar3 = (undefined4 *)piVar2[1];
  }
  thunk_FUN_01be4678(puVar3);
LAB_014f2120:
  thunk_FUN_01be4678(piVar2);
  return;
}


// FUN_01be65d0 @ 01be65d0 size=48 calls_out=1 calls_in=6
// strings: 

uint FUN_01be65d0(int param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  uint uVar3;
  
  if (param_1 == 0x17) {
    uVar3 = (uint)DAT_01d53572;
  }
  else {
    for (piVar2 = DAT_01d53578; *piVar2 != 0; piVar2 = piVar2 + 2) {
      if (*piVar2 == param_1) {
        return piVar2[1];
      }
    }
    puVar1 = (undefined4 *)FUN_01be3244();
    *puVar1 = 2;
    uVar3 = 0;
  }
  return uVar3;
}


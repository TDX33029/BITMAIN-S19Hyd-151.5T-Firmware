// FUN_016d636c @ 016d636c size=48 calls_out=1 calls_in=7
// strings: 

uint FUN_016d636c(int param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  uint uVar3;
  
  if (param_1 == 0x17) {
    uVar3 = (uint)DAT_018ddb0a;
  }
  else {
    for (piVar2 = DAT_018ddb10; *piVar2 != 0; piVar2 = piVar2 + 2) {
      if (*piVar2 == param_1) {
        return piVar2[1];
      }
    }
    puVar1 = (undefined4 *)FUN_016d2bc8();
    *puVar1 = 2;
    uVar3 = 0;
  }
  return uVar3;
}


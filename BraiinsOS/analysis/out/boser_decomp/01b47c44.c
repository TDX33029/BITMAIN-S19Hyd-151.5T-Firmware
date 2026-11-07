// FUN_01b47c44 @ 01b47c44 size=188 calls_out=5 calls_in=4
// strings: 

ulonglong FUN_01b47c44(int param_1,int param_2,int param_3)

{
  int iVar1;
  ulonglong uVar2;
  
  if (param_2 == 0x74) {
    uVar2 = FUN_01b479ac();
    return uVar2;
  }
  if (param_2 < 0x75) {
    if (param_2 == 6) {
      uVar2 = FUN_01b478a4();
      return uVar2;
    }
    if (param_2 == 0x1c) {
      uVar2 = FUN_01b068a0();
      return uVar2;
    }
  }
  else if (param_2 == 0x198) {
    uVar2 = FUN_01b47a30();
    return uVar2;
  }
  iVar1 = FUN_01b47c28(param_1,param_2);
  if (iVar1 == 0) {
    return 0;
  }
  *(int *)(param_1 + 8) = param_3;
  return (ulonglong)(param_3 != 0);
}


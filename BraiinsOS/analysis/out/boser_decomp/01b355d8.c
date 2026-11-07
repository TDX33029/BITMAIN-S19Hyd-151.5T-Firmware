// FUN_01b355d8 @ 01b355d8 size=148 calls_out=5 calls_in=7
// strings: 

bool FUN_01b355d8(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  bool bVar2;
  
  FUN_01b706b4(param_2);
  iVar1 = *param_1;
  FUN_01b70714(param_2);
  if (iVar1 == 0) {
    FUN_01b706e4(param_2);
    iVar1 = *param_1;
    if (iVar1 == 0) {
      iVar1 = FUN_01b35574(param_3,param_4);
      *param_1 = iVar1;
    }
    bVar2 = iVar1 != 0;
    FUN_01b70744(param_2);
  }
  else {
    bVar2 = true;
  }
  return bVar2;
}


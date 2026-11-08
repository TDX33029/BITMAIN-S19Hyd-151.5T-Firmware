// FUN_00fb1280 @ 00fb1280 size=52 calls_out=2 calls_in=2
// strings: 

void FUN_00fb1280(int *param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  if (*param_1 != 0 || param_1[1] != 0) {
    FUN_00b91e68(param_1[2],param_1[3]);
    return;
  }
  if ((char)param_1[2] != '\x04') {
    FUN_0183a528(param_1 + 2);
    return;
  }
  uVar1 = FUN_01beaf68(param_1[3]);
  iVar2 = thunk_FUN_01bee080(6,uVar1,0,0,0,0,0);
  if (iVar2 == -4) {
    iVar2 = 0;
  }
  FUN_01be3b5a(iVar2);
  return;
}


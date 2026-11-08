// FUN_014b4d20 @ 014b4d20 size=72 calls_out=2 calls_in=1
// strings: 

void FUN_014b4d20(int *param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  if (*param_1 != 0 || param_1[1] != 0) {
    return;
  }
  if (param_1[2] != 0 || param_1[3] != 0) {
    FUN_00b91e68(param_1[4],param_1[5]);
    return;
  }
  if ((char)param_1[4] != '\x04') {
    FUN_0069d8a4((char)param_1[4],param_1[5]);
    return;
  }
  uVar1 = FUN_01beaf68(param_1[5]);
  iVar2 = thunk_FUN_01bee080(6,uVar1,0,0,0,0,0);
  if (iVar2 == -4) {
    iVar2 = 0;
  }
  FUN_01be3b5a(iVar2);
  return;
}


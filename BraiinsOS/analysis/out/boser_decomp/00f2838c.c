// FUN_00f2838c @ 00f2838c size=24 calls_out=1 calls_in=1
// strings: 

void FUN_00f2838c(char *param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  if (*param_1 != '\x04') {
    FUN_0183a528();
    return;
  }
  uVar1 = FUN_01beaf68(*(undefined4 *)(param_1 + 4));
  iVar2 = thunk_FUN_01bee080(6,uVar1,0,0,0,0,0);
  if (iVar2 == -4) {
    iVar2 = 0;
  }
  FUN_01be3b5a(iVar2);
  return;
}


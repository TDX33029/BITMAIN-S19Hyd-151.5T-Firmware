// FUN_00a21f3c @ 00a21f3c size=104 calls_out=1 calls_in=1
// strings: managementId

undefined4 FUN_00a21f3c(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  if (param_2 != 0xc) {
    return 2;
  }
  iVar1 = thunk_FUN_01bed842(param_1 + 8,"managementId",0xc);
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    iVar1 = thunk_FUN_01bed842(param_1 + 8,&DAT_004c11a8,0xc);
    uVar2 = 2;
    if (iVar1 == 0) {
      uVar2 = 1;
    }
  }
  return uVar2;
}


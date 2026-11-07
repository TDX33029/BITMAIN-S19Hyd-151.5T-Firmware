// FUN_014b1a5c @ 014b1a5c size=32 calls_out=1 calls_in=2
// strings: 

void FUN_014b1a5c(char *param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  if (*param_1 != '\x04') {
    FUN_0069d8a4(*param_1,*(undefined4 *)(param_1 + 4));
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


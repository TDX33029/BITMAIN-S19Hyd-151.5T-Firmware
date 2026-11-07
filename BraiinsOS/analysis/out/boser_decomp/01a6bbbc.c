// FUN_01a6bbbc @ 01a6bbbc size=36 calls_out=1 calls_in=10
// strings: 

void FUN_01a6bbbc(undefined4 *param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  if (*(char *)(param_1 + 6) == '\0') {
    uVar1 = FUN_01beaf68(*param_1);
    iVar2 = thunk_FUN_01bee080(6,uVar1,0,0,0,0,0);
    if (iVar2 == -4) {
      iVar2 = 0;
    }
    FUN_01be3b5a(iVar2);
    return;
  }
  if (*(char *)(param_1 + 6) == '\x03') {
    FUN_00b76614(param_1 + 1);
    return;
  }
  return;
}


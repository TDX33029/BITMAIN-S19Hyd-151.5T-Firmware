// FUN_00ddc2fc @ 00ddc2fc size=32 calls_out=3 calls_in=1
// strings: 

void FUN_00ddc2fc(int param_1)

{
  if (*(int *)(param_1 + 0xac) == -0x80000000) {
    FUN_00ddc31c();
    return;
  }
  if (*(int *)(param_1 + 0xac) == -0x7fffffff) {
    FUN_006e6fb4();
    return;
  }
  FUN_00db1274();
  return;
}


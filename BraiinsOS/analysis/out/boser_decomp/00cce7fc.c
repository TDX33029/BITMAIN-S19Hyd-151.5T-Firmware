// FUN_00cce7fc @ 00cce7fc size=60 calls_out=3 calls_in=2
// strings: 

void FUN_00cce7fc(undefined4 *param_1)

{
  if (*(char *)(param_1 + 0x12) == '\0') {
    FUN_019bb7e0(*param_1,param_1[1]);
    FUN_006a41c0(param_1 + 3);
    return;
  }
  if (*(char *)(param_1 + 0x12) == '\x03') {
    FUN_00cce7ac(param_1 + 8);
    return;
  }
  return;
}


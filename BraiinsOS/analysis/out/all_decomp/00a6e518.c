// FUN_00a6e518 @ 00a6e518 size=116 calls_out=2 calls_in=1
// strings: 

void FUN_00a6e518(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  ulonglong uVar2;
  char local_18;
  char local_17;
  undefined4 local_14;
  
  FUN_00a6bf5c(&local_18);
  if (local_18 == '\x01') {
    *param_1 = 2;
    param_1[1] = local_14;
    return;
  }
  if (local_17 == '\0') {
    *param_1 = 0;
    return;
  }
  uVar2 = FUN_00a6e1d4(*param_2);
  if ((uVar2 & 1) == 0) {
    uVar1 = 1;
  }
  else {
    uVar1 = 2;
  }
  *param_1 = uVar1;
  param_1[1] = (int)(uVar2 >> 0x20);
  return;
}


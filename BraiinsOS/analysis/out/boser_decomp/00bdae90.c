// FUN_00bdae90 @ 00bdae90 size=36 calls_out=2 calls_in=4
// strings: 

void FUN_00bdae90(undefined4 *param_1)

{
  if (*(char *)(param_1 + 0x1f) == '\0') {
    FUN_019bb7e0(*param_1,param_1[1]);
    return;
  }
  if (*(char *)(param_1 + 0x1f) == '\x03') {
    FUN_00bdae48(param_1 + 5);
    return;
  }
  return;
}


// FUN_00bdae48 @ 00bdae48 size=52 calls_out=2 calls_in=2
// strings: 

void FUN_00bdae48(undefined4 *param_1)

{
  if (*(char *)(param_1 + 0x19) == '\x03') {
    FUN_00bdadd0(param_1 + 4);
  }
  else if (*(char *)(param_1 + 0x19) != '\0') {
    return;
  }
  FUN_019bb7e0(*param_1,param_1[1]);
  return;
}


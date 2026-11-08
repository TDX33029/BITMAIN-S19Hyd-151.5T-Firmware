// FUN_017dc360 @ 017dc360 size=116 calls_out=1 calls_in=0
// strings: 

void FUN_017dc360(char *param_1)

{
  char cVar1;
  
  cVar1 = *param_1;
  if (cVar1 == '\x04') {
    return;
  }
  if (cVar1 != '\x03') {
    FUN_017726bc(cVar1,*(undefined4 *)(param_1 + 4));
  }
  if (*(int *)(param_1 + 8) != 0) {
    (**(code **)(*(int *)(param_1 + 8) + 0x10))
              (param_1 + 0x14,*(undefined4 *)(param_1 + 0xc),*(undefined4 *)(param_1 + 0x10));
  }
  if (*(int *)(param_1 + 0x18) == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x017dc3cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(int *)(param_1 + 0x18) + 0x10))
            (param_1 + 0x24,*(undefined4 *)(param_1 + 0x1c),*(undefined4 *)(param_1 + 0x20));
  return;
}


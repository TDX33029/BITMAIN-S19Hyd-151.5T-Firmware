// FUN_01396348 @ 01396348 size=76 calls_out=1 calls_in=2
// strings: 

void FUN_01396348(char *param_1)

{
  char cVar1;
  
  cVar1 = *param_1;
  if (cVar1 == '\x03' || cVar1 == '\0') {
    return;
  }
  if (cVar1 == '\x01') {
                    /* WARNING: Could not recover jumptable at 0x01396378. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(int *)(param_1 + 8) + 0x10))
              (param_1 + 0x14,*(undefined4 *)(param_1 + 0xc),*(undefined4 *)(param_1 + 0x10));
    return;
  }
  if (*(int *)(param_1 + 4) == -0x80000000) {
    return;
  }
  FUN_019bb7e0(*(int *)(param_1 + 4),*(undefined4 *)(param_1 + 8));
  return;
}


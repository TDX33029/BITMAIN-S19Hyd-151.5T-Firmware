// FUN_012e86c4 @ 012e86c4 size=56 calls_out=1 calls_in=1
// strings: 

void FUN_012e86c4(int *param_1)

{
  undefined4 *puVar1;
  
  if (*param_1 == 0) {
    return;
  }
  puVar1 = (undefined4 *)param_1[2];
  if (param_1[1] != 0) {
    FUN_01443048();
    return;
  }
  if (puVar1 == (undefined4 *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x012e86f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)*puVar1)(puVar1);
  return;
}


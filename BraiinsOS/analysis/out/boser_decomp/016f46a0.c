// FUN_016f46a0 @ 016f46a0 size=128 calls_out=3 calls_in=2
// strings: Scriptcfsclc

void FUN_016f46a0(undefined1 *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined1 uVar1;
  undefined8 uVar2;
  char local_1c;
  undefined1 local_1b;
  int local_18;
  undefined4 local_14;
  
  FUN_016f4508(&local_1c,"Scriptcfsclc",6);
  if (local_1c == '\x01') {
    param_1[1] = local_1b;
    uVar1 = 1;
  }
  else {
    if (local_18 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_012fb0cc(&DAT_01d16b28);
    }
    uVar2 = FUN_016f45e4(local_18,local_14,param_2,param_3);
    *(undefined8 *)(param_1 + 4) = uVar2;
    uVar1 = 0;
  }
  *param_1 = uVar1;
  return;
}


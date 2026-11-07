// FUN_014f9990 @ 014f9990 size=72 calls_out=1 calls_in=0
// strings: 

void FUN_014f9990(undefined1 *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined1 uVar1;
  char local_e;
  undefined4 local_d;
  undefined1 local_9;
  
  FUN_014f9a20(&local_e,param_3);
  uVar1 = 2;
  if (local_e == '\x01') {
    *(undefined4 *)(param_1 + 1) = local_d;
    uVar1 = 0;
    param_1[5] = local_9;
  }
  *param_1 = uVar1;
  return;
}


// FUN_008fbc6c @ 008fbc6c size=136 calls_out=2 calls_in=1
// strings: 

void FUN_008fbc6c(undefined2 *param_1,undefined4 *param_2)

{
  char local_18;
  char local_17;
  undefined4 local_14;
  
  FUN_005e5d80(&local_18);
  if (local_18 != '\x01') {
    if (local_17 == '\0') {
      *param_1 = 0x200;
      return;
    }
    FUN_00916498(&local_18,*param_2);
    if (local_18 != '\x01') {
      *(char *)((int)param_1 + 1) = local_17;
      *(undefined1 *)param_1 = 0;
      return;
    }
  }
  *(undefined4 *)(param_1 + 2) = local_14;
  *(undefined1 *)param_1 = 1;
  return;
}


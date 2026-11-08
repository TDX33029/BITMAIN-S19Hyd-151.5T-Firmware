// FUN_01225398 @ 01225398 size=124 calls_out=2 calls_in=1
// strings: 

void FUN_01225398(undefined2 *param_1,undefined4 *param_2)

{
  undefined1 uVar1;
  char local_18;
  char local_17;
  undefined4 local_14;
  
  FUN_01965170(&local_18);
  if (local_18 != '\x01') {
    if (local_17 == '\0') {
      *param_1 = 0x400;
      return;
    }
    FUN_01229da0(&local_18,*param_2);
    if (local_18 == '\0') {
      *(char *)((int)param_1 + 1) = local_17;
      uVar1 = 0;
      goto LAB_012253c8;
    }
  }
  *(undefined4 *)(param_1 + 2) = local_14;
  uVar1 = 1;
LAB_012253c8:
  *(undefined1 *)param_1 = uVar1;
  return;
}


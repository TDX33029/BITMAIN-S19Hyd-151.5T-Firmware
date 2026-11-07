// FUN_01270c50 @ 01270c50 size=124 calls_out=2 calls_in=1
// strings: 

void FUN_01270c50(undefined2 *param_1,undefined4 *param_2)

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
    FUN_0126e450(&local_18,*param_2);
    if (local_18 == '\0') {
      *(char *)((int)param_1 + 1) = local_17;
      uVar1 = 0;
      goto LAB_01270c80;
    }
  }
  *(undefined4 *)(param_1 + 2) = local_14;
  uVar1 = 1;
LAB_01270c80:
  *(undefined1 *)param_1 = uVar1;
  return;
}


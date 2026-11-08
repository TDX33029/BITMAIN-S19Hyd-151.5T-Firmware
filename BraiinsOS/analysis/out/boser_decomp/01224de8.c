// FUN_01224de8 @ 01224de8 size=124 calls_out=2 calls_in=1
// strings: 

void FUN_01224de8(undefined2 *param_1,undefined4 *param_2)

{
  undefined1 uVar1;
  char local_18;
  char local_17;
  undefined4 local_14;
  
  FUN_01965170(&local_18);
  if (local_18 != '\x01') {
    if (local_17 == '\0') {
      *param_1 = 0x300;
      return;
    }
    FUN_0123158c(&local_18,*param_2);
    if (local_18 == '\0') {
      *(char *)((int)param_1 + 1) = local_17;
      uVar1 = 0;
      goto LAB_01224e18;
    }
  }
  *(undefined4 *)(param_1 + 2) = local_14;
  uVar1 = 1;
LAB_01224e18:
  *(undefined1 *)param_1 = uVar1;
  return;
}


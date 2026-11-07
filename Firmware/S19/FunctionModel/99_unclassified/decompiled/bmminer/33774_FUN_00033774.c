// FUN_00033774 @ 00033774  size=92  callers=2
// program: bmminer


void FUN_00033774(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 local_b8;
  undefined4 local_b4;
  undefined4 auStack_30 [9];
  
  puVar2 = (undefined4 *)0x87cc4;
  puVar1 = auStack_30;
  do {
    puVar2 = puVar2 + 1;
    *puVar1 = *puVar2;
    puVar1 = puVar1 + 1;
  } while (puVar2 != (undefined4 *)0x87ce4);
  local_b8 = 0;
  local_b4 = 0;
  FUN_000335dc(&local_b8,param_1,param_2);
  FUN_00033688(&local_b8,param_3);
  return;
}


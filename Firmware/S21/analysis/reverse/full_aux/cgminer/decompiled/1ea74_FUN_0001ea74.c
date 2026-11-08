// FUN_0001ea74 @ 0001ea74  size=92  callers=3
// program: cgminer


void FUN_0001ea74(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 local_b8;
  undefined4 local_b4;
  undefined4 auStack_30 [9];
  
  puVar2 = (undefined4 *)0x67948;
  puVar1 = auStack_30;
  do {
    puVar2 = puVar2 + 1;
    *puVar1 = *puVar2;
    puVar1 = puVar1 + 1;
  } while (puVar2 != (undefined4 *)0x67968);
  local_b8 = 0;
  local_b4 = 0;
  FUN_0001e8dc(&local_b8,param_1,param_2);
  FUN_0001e988(&local_b8,param_3);
  return;
}


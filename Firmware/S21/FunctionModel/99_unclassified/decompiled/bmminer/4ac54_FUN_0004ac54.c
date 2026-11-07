// FUN_0004ac54 @ 0004ac54  size=92  callers=2
// program: bmminer


void FUN_0004ac54(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 local_b8;
  undefined4 local_b4;
  undefined4 auStack_30 [9];
  
  puVar2 = (undefined4 *)0xbe744;
  puVar1 = auStack_30;
  do {
    puVar2 = puVar2 + 1;
    *puVar1 = *puVar2;
    puVar1 = puVar1 + 1;
  } while (puVar2 != (undefined4 *)0xbe764);
  local_b8 = 0;
  local_b4 = 0;
  FUN_0004aabc(&local_b8,param_1,param_2);
  FUN_0004ab68(&local_b8,param_3);
  return;
}


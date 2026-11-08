// FUN_0078452c @ 0078452c size=152 calls_out=2 calls_in=1
// strings: 

void FUN_0078452c(uint *param_1)

{
  undefined1 uVar1;
  undefined4 in_stack_00000000;
  uint in_stack_00000004;
  undefined4 *puVar2;
  undefined4 local_28;
  uint local_24;
  uint local_20;
  uint local_1c;
  uint local_18;
  uint local_14;
  
  local_1c = in_stack_00000004;
  local_24 = in_stack_00000004;
  puVar2 = &local_28;
  local_20 = 0;
  local_28 = in_stack_00000000;
  FUN_019df8a4(&local_18);
  if ((local_18 & 0xff) == 4) {
    if (local_24 < local_20) {
                    /* WARNING: Subroutine does not return */
      FUN_012faff4(0,local_20,local_24,&DAT_01d2e4e0,puVar2);
    }
    uVar1 = 4;
    param_1[1] = local_20;
  }
  else {
    if ((local_18 & 0xff) != 5) {
      *param_1 = local_18;
      param_1[1] = local_14;
      return;
    }
    uVar1 = 5;
  }
  *(undefined1 *)param_1 = uVar1;
  return;
}


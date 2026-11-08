// FUN_0116c358 @ 0116c358 size=224 calls_out=3 calls_in=2
// strings: 

void FUN_0116c358(undefined4 *param_1)

{
  uint uVar1;
  uint uVar2;
  int *in_stack_00000000;
  int *piVar3;
  int local_30;
  uint local_2c;
  uint local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  
  local_2c = in_stack_00000000[1];
  uVar2 = in_stack_00000000[2];
  if (local_2c < uVar2) {
                    /* WARNING: Subroutine does not return */
    FUN_012faff4(uVar2,local_2c,local_2c,&DAT_01d2cefc);
  }
  local_24 = 0;
  local_2c = local_2c - uVar2;
  local_28 = 0;
  local_30 = *in_stack_00000000 + uVar2;
  piVar3 = &local_30;
  FUN_019df8a4(&local_20);
  if ((char)local_20 == '\x04') {
    if (local_2c < local_28) {
                    /* WARNING: Subroutine does not return */
      FUN_012faff4(0,local_28,local_2c,&DAT_01d2e4e0,piVar3);
    }
    uVar1 = local_28 + uVar2;
    if (CARRY4(local_28,uVar2)) {
                    /* WARNING: Subroutine does not return */
      FUN_0130739c(&DAT_00570520,8,&DAT_01d2cf0c);
    }
    uVar2 = in_stack_00000000[3];
    *(undefined1 *)param_1 = 4;
    if (uVar2 <= uVar1) {
      uVar2 = uVar1;
    }
    in_stack_00000000[2] = uVar1;
    in_stack_00000000[3] = uVar2;
  }
  else {
    *param_1 = local_20;
    param_1[1] = local_1c;
  }
  return;
}


// FUN_00f922f8 @ 00f922f8 size=192 calls_out=4 calls_in=0
// strings: 

void FUN_00f922f8(undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 in_stack_00000000;
  int in_stack_00000004;
  
  if (in_stack_00000004 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(0,in_stack_00000004);
  }
  if (in_stack_00000004 == 0) {
    iVar3 = 0;
    iVar1 = 1;
  }
  else {
    iVar1 = thunk_FUN_016d4a50(in_stack_00000004);
    iVar3 = in_stack_00000004;
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(1,in_stack_00000004);
    }
  }
  FUN_016dd1aa(iVar1,in_stack_00000000,in_stack_00000004);
  puVar2 = (undefined4 *)thunk_FUN_016d4a50(0x14);
  if (puVar2 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(4,0x14);
  }
  puVar2[3] = iVar1;
  puVar2[1] = 1;
  puVar2[2] = iVar3;
  *puVar2 = 1;
  puVar2[4] = in_stack_00000004;
  *param_1 = puVar2;
  param_1[1] = &DAT_018806f4;
  param_1[2] = 0x56e16461;
  param_1[3] = 0x2215d2c8;
  param_1[4] = 0xffbf8770;
  param_1[5] = 0xc81b5277;
  return;
}


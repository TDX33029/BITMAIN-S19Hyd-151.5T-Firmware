// FUN_00f8d218 @ 00f8d218 size=340 calls_out=4 calls_in=1
// strings: BTC Tools v0.1Lua Configuration Interface

void FUN_00f8d218(undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(undefined1 *)(param_2 + 5)) {
  case 0:
    uVar2 = *param_2;
    param_2[2] = uVar2;
    *(undefined1 *)(param_2 + 4) = 0;
    param_2[3] = param_2[1];
    break;
  case 1:
                    /* WARNING: Subroutine does not return */
    FUN_013079f0(&DAT_01c1d058);
  case 2:
                    /* WARNING: Subroutine does not return */
    FUN_01307a10(&DAT_01c1d058);
  case 3:
    if (*(char *)(param_2 + 4) != '\0') {
      if (*(char *)(param_2 + 4) == '\x01') {
                    /* WARNING: Subroutine does not return */
        FUN_013079f0(&DAT_01c1aaf0);
      }
                    /* WARNING: Subroutine does not return */
      FUN_01307a10(&DAT_01c1aaf0);
    }
    uVar2 = param_2[2];
  }
  iVar1 = FUN_0160ab20(uVar2);
  if (((iVar1 == 0) || (*(int *)(iVar1 + 8) != 0xe)) ||
     (iVar1 = thunk_FUN_01bed842(*(undefined4 *)(iVar1 + 4),
                                 "BTC Tools v0.1Lua Configuration Interface",0xe), iVar1 != 0)) {
    uVar2 = 0;
  }
  else {
    uVar2 = 3;
  }
  *param_1 = uVar2;
  *(undefined2 *)(param_1 + 0x11) = 400;
  param_1[0x12] = 1;
  *(undefined1 *)((int)param_1 + 0x46) = 2;
  param_1[0x10] = 0;
  *(undefined2 *)(param_1 + 0xe) = 0;
  param_1[6] = 2;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 4;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 4;
  param_1[0xd] = 0;
  *(undefined1 *)(param_2 + 4) = 1;
  *(undefined1 *)(param_2 + 5) = 1;
  param_1[1] = 0;
  param_1[0x13] = &DAT_01c07674;
  return;
}


// FUN_0086bd04 @ 0086bd04 size=300 calls_out=5 calls_in=0
// strings: 

undefined4 FUN_0086bd04(int *param_1)

{
  undefined1 uVar1;
  int iVar2;
  ulonglong uVar3;
  undefined *puStack_3c;
  undefined4 uStack_38;
  int local_34;
  undefined4 local_30 [6];
  
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch((char)param_1[0x13]) {
  case '\0':
    iVar2 = *param_1;
    param_1[1] = iVar2;
    *(undefined1 *)(param_1 + 0x12) = 0;
    break;
  case '\x01':
                    /* WARNING: Subroutine does not return */
    FUN_00fb7ca0(&DAT_01861238);
  case '\x02':
                    /* WARNING: Subroutine does not return */
    FUN_00fb7cc0(&DAT_01861238);
  case '\x03':
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch((char)param_1[0x12]) {
    case '\0':
      iVar2 = param_1[1];
      break;
    case '\x01':
                    /* WARNING: Subroutine does not return */
      FUN_00fb7ca0(&DAT_0186158c);
    case '\x02':
                    /* WARNING: Subroutine does not return */
      FUN_00fb7cc0(&DAT_0186158c);
    case '\x03':
      goto switchD_0086bd58_caseD_3;
    }
  }
  uVar1 = *(undefined1 *)(iVar2 + 9);
  param_1[0xd] = iVar2 + 0x10;
  *(undefined4 *)((int)param_1 + 0x3f) = 0;
  *(undefined1 *)((int)param_1 + 0x43) = 0;
  *(undefined1 *)((int)param_1 + 0x46) = uVar1;
  *(undefined2 *)(param_1 + 0x11) = 1;
switchD_0086bd58_caseD_3:
  uVar3 = FUN_0086b490(param_1 + 2);
  local_34 = (int)(uVar3 >> 0x20);
  if ((uVar3 & 1) != 0) {
    *(undefined1 *)(param_1 + 0x13) = 3;
    *(undefined1 *)(param_1 + 0x12) = 3;
    return 1;
  }
  FUN_0086b3e4(param_1 + 2);
  if (local_34 != 0) {
    local_30[0] = 3;
    puStack_3c = &DAT_003442b3;
    uStack_38 = 0x22;
    FUN_0080807c(&puStack_3c,local_30);
  }
  *(undefined1 *)(param_1 + 0x13) = 1;
  *(undefined1 *)(param_1 + 0x12) = 1;
  return 0;
}


// FUN_00db2ac0 @ 00db2ac0 size=220 calls_out=6 calls_in=1
// strings: Missing tunnel handler

longlong FUN_00db2ac0(int *param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 unaff_r6;
  
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch((char)param_1[3]) {
  case '\0':
    param_1[1] = *param_1 + 0x230;
    param_1[2] = -1;
    break;
  case '\x01':
                    /* WARNING: Subroutine does not return */
    FUN_00fb7ca0(&DAT_01878d88);
  case '\x02':
                    /* WARNING: Subroutine does not return */
    FUN_00fb7cc0(&DAT_01878d88);
  }
  uVar1 = FUN_00e43b0c(param_1 + 1);
  if (uVar1 == 0) {
    *(undefined1 *)(param_1 + 3) = 3;
    return CONCAT44(unaff_r6,2);
  }
  iVar2 = param_1[1];
  if (iVar2 != 0) {
    FUN_00e43e74(iVar2,param_1[2],1);
  }
  if (*(int *)(uVar1 + 0x20) == 2 && *(int *)(uVar1 + 0x24) == 0) {
    uVar3 = FUN_00f155bc("Missing tunnel handler",0x16);
    FUN_00e44114(uVar1);
    *(undefined1 *)(param_1 + 3) = 1;
    return CONCAT44(uVar3,1);
  }
  *(undefined1 *)(param_1 + 3) = 1;
  return (ulonglong)uVar1 << 0x20;
}


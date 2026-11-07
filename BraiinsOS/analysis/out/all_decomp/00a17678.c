// FUN_00a17678 @ 00a17678 size=168 calls_out=5 calls_in=2
// strings: 

longlong FUN_00a17678(int *param_1)

{
  int iVar1;
  int iVar2;
  undefined4 unaff_r5;
  uint uVar3;
  
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch((char)param_1[3]) {
  case '\0':
    param_1[1] = *param_1 + 0x14;
    param_1[2] = -1;
    break;
  case '\x01':
                    /* WARNING: Subroutine does not return */
    FUN_00fb7ca0(&DAT_01870844);
  case '\x02':
                    /* WARNING: Subroutine does not return */
    FUN_00fb7cc0(&DAT_01870844);
  }
  iVar1 = FUN_00aa0cf8(param_1 + 1);
  if (iVar1 == 0) {
    *(undefined1 *)(param_1 + 3) = 3;
    return CONCAT44(unaff_r5,1);
  }
  iVar2 = param_1[1];
  if (iVar2 != 0) {
    FUN_00aa0a58(iVar2,param_1[2],1);
  }
  uVar3 = *(uint *)(iVar1 + 0x28);
  FUN_00aa13c0();
  *(undefined1 *)(param_1 + 3) = 1;
  return (ulonglong)uVar3 << 0x20;
}


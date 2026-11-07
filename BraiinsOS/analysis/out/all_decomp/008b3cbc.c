// FUN_008b3cbc @ 008b3cbc size=152 calls_out=3 calls_in=0
// strings: 

longlong FUN_008b3cbc(int *param_1)

{
  uint uVar1;
  int iVar2;
  
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch((char)param_1[3]) {
  case '\0':
    iVar2 = *param_1;
    param_1[1] = iVar2;
    param_1[2] = 0;
    break;
  case '\x01':
                    /* WARNING: Subroutine does not return */
    FUN_00fb7ca0(&DAT_01863cdc);
  case '\x02':
                    /* WARNING: Subroutine does not return */
    FUN_00fb7cc0(&DAT_01863cdc);
  case '\x03':
    if ((char)param_1[2] != '\0') {
      if ((char)param_1[2] == '\x01') {
                    /* WARNING: Subroutine does not return */
        FUN_00fb7ca0(&DAT_01863aac);
      }
                    /* WARNING: Subroutine does not return */
      FUN_00fb7cc0(&DAT_01863aac);
    }
    iVar2 = param_1[1];
  }
  uVar1 = FUN_010ed318(*(undefined4 *)(iVar2 + 0x100),*(undefined4 *)(iVar2 + 0x104),0);
  *(undefined1 *)(param_1 + 3) = 1;
  *(undefined1 *)(param_1 + 2) = 1;
  return (ulonglong)uVar1 << 0x20;
}


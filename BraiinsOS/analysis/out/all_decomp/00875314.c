// FUN_00875314 @ 00875314 size=256 calls_out=6 calls_in=1
// strings: 

longlong FUN_00875314(int *param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined4 unaff_r5;
  ulonglong uVar4;
  
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch((char)param_1[0x1c]) {
  case '\0':
    iVar1 = *param_1;
    if (*(int *)(iVar1 + 0x94) == 0) {
      uVar2 = FUN_00847a0c();
      param_1[1] = 1;
      param_1[2] = uVar2;
      goto LAB_008753f8;
    }
    iVar3 = **(int **)(iVar1 + 0x90);
    *(undefined1 *)(param_1 + 0x1b) = 0;
    param_1[1] = 0;
    param_1[2] = iVar3;
    param_1[3] = iVar1;
    param_1[4] = iVar3;
    break;
  case '\x01':
                    /* WARNING: Subroutine does not return */
    FUN_00fb7ca0(&DAT_01861b00);
  case '\x02':
                    /* WARNING: Subroutine does not return */
    FUN_00fb7cc0(&DAT_01861b00);
  }
  uVar4 = FUN_00876384(param_1 + 3);
  uVar2 = (uint)(uVar4 >> 0x20);
  if ((uVar4 & 1) != 0) {
    *(undefined1 *)(param_1 + 0x1c) = 3;
    return CONCAT44(unaff_r5,1);
  }
  if ((char)param_1[0x1b] == '\x03') {
    if ((char)param_1[0x1a] == '\x03') {
      FUN_00875460(param_1 + 9);
      *(undefined1 *)((int)param_1 + 0x69) = 0;
    }
    else if (((char)param_1[0x1a] == '\0') && (param_1[5] != 0)) {
      thunk_FUN_016d3fb4(param_1[6]);
    }
  }
LAB_008753f8:
  *(undefined1 *)(param_1 + 0x1c) = 1;
  return (ulonglong)uVar2 << 0x20;
}


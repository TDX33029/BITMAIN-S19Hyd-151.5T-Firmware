// FUN_00d35a90 @ 00d35a90 size=52 calls_out=1 calls_in=4
// strings: 

void FUN_00d35a90(undefined1 *param_1)

{
  int iVar1;
  
  iVar1 = 0x18;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*param_1) {
  default:
    return;
  case 2:
    break;
  case 3:
    iVar1 = 0x10;
    break;
  case 4:
    iVar1 = 4;
  }
  FUN_019bb7e0(*(undefined4 *)(param_1 + iVar1),*(undefined4 *)((int)(param_1 + iVar1) + 4));
  return;
}


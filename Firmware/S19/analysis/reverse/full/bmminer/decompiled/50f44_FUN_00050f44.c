// FUN_00050f44 @ 00050f44  size=104  callers=4
// program: bmminer


undefined4 FUN_00050f44(undefined1 *param_1)

{
  int iVar1;
  uint local_14;
  
  iVar1 = 0x259;
  local_14 = 0;
  do {
    FUN_00045bc4(0xc,&local_14);
    if (local_14 >> 0x1e == 2) {
      *param_1 = (char)local_14;
      return 1;
    }
    usleep(5000);
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  return 0;
}


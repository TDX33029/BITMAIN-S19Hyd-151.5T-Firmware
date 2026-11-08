// FUN_007db9f0 @ 007db9f0 size=264 calls_out=7 calls_in=0
// strings: 

void FUN_007db9f0(undefined1 *param_1,int *param_2,undefined4 param_3)

{
  undefined1 uVar1;
  int iVar2;
  ulonglong uVar3;
  
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch((char)param_2[0x47]) {
  case '\0':
    iVar2 = param_2[0x46];
    DataMemoryBarrier(0xb);
    if (DAT_018d8068 == 0) {
      FUN_009b1d68(*(undefined4 *)(iVar2 + 0x50),0);
    }
    FUN_007db840(iVar2,0);
    param_2[0x44] = iVar2;
    *(undefined2 *)(param_2 + 0x45) = 0;
    break;
  case '\x01':
                    /* WARNING: Subroutine does not return */
    FUN_00fb7ca0(&DAT_0185e4bc);
  case '\x02':
                    /* WARNING: Subroutine does not return */
    FUN_00fb7cc0(&DAT_0185e4bc);
  }
  uVar3 = FUN_007db370(param_2,param_3);
  iVar2 = (int)(uVar3 >> 0x20);
  if ((uVar3 & 1) != 0) {
    *param_1 = 5;
    *(undefined1 *)(param_2 + 0x47) = 3;
    return;
  }
  if (*(char *)((int)param_2 + 0x115) == '\x03') {
    if ((char)param_2[0x42] == '\x03') {
      FUN_007d42e4(param_2 + 6);
    }
    else if (((char)param_2[0x42] == '\0') && (*param_2 != 0)) {
      thunk_FUN_016d3fb4(param_2[1]);
    }
  }
  uVar1 = 3;
  if (iVar2 == 0) {
    uVar1 = 4;
  }
  *(int *)(param_1 + 4) = iVar2;
  *param_1 = uVar1;
  *(undefined1 *)(param_2 + 0x47) = 1;
  return;
}


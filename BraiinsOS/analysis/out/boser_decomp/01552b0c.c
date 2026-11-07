// FUN_01552b0c @ 01552b0c size=152 calls_out=3 calls_in=0
// strings: 

void FUN_01552b0c(int *param_1)

{
  int iVar1;
  int local_c;
  
  local_c = param_1[1];
  iVar1 = *param_1;
  *param_1 = 1;
  param_1[1] = 2;
  if (iVar1 != 1) {
    if ((char)param_1[3] == '\0') {
      FUN_0155296c(param_1[2]);
      return;
    }
    FUN_0069af44(local_c);
    return;
  }
  if (local_c == 2) {
                    /* WARNING: Subroutine does not return */
    FUN_01304210(1,&DAT_005288a8,&local_c,0);
  }
  DataMemoryBarrier(0xb);
  *(int *)(param_1[2] + 0x2f8) = local_c;
  return;
}


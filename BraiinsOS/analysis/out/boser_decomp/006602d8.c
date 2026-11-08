// FUN_006602d8 @ 006602d8 size=96 calls_out=1 calls_in=2
// strings: 

int FUN_006602d8(int param_1,byte *param_2,int param_3)

{
  int iVar1;
  int local_c;
  
  if (*(int *)(param_1 + 0x10) != param_3) {
    local_c = param_3;
                    /* WARNING: Subroutine does not return */
    FUN_01304210(0,(int *)(param_1 + 0x10),&local_c,0);
  }
  iVar1 = 0;
  for (; param_3 != 0; param_3 = param_3 + -1) {
    iVar1 = (uint)*param_2 + iVar1 * 2;
    param_2 = param_2 + 1;
  }
  return iVar1;
}


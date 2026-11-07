// FUN_00f03100 @ 00f03100 size=80 calls_out=1 calls_in=3
// strings: 

void FUN_00f03100(int *param_1,int param_2)

{
  int iVar1;
  int local_c;
  
  iVar1 = *param_1;
  if (iVar1 == param_2) {
    local_c = param_2;
                    /* WARNING: Subroutine does not return */
    FUN_00fa8e24(param_1,&local_c,&DAT_018ac72c);
  }
  *(undefined4 *)(param_2 + 8) = 0;
  *(int *)(param_2 + 0xc) = iVar1;
  if (iVar1 != 0) {
    *(int *)(iVar1 + 8) = param_2;
  }
  *param_1 = param_2;
  if (param_1[1] == 0) {
    param_1[1] = param_2;
  }
  return;
}


// FUN_012a2d4c @ 012a2d4c size=124 calls_out=3 calls_in=0
// strings: 

void FUN_012a2d4c(int *param_1,int param_2,undefined4 param_3)

{
  int local_28;
  int iStack_24;
  int iStack_20;
  
  if (*(uint *)(param_2 + 0x28) < *(uint *)(param_2 + 0x2c)) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa36c(0,*(uint *)(param_2 + 0x2c),*(uint *)(param_2 + 0x28),&DAT_01890988);
  }
  FUN_01299290(param_2);
  FUN_01299d5c(&local_28,param_2,param_3);
  if (local_28 == 4) {
    *param_1 = 4;
    return;
  }
  *param_1 = local_28;
  param_1[1] = iStack_24;
  param_1[2] = iStack_20;
  return;
}


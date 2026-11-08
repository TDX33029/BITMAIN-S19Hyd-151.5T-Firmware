// FUN_012a64b0 @ 012a64b0 size=260 calls_out=5 calls_in=0
// strings: 

void FUN_012a64b0(int *param_1,int param_2,undefined4 param_3)

{
  uint local_48;
  undefined4 local_44;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  int local_28;
  int local_24;
  int local_20;
  
  local_2c = 0;
  local_30 = 0;
  local_34 = 1;
  local_48 = 0x80000000;
  local_44 = param_3;
  if (*(uint *)(param_2 + 0x28) < *(uint *)(param_2 + 0x2c)) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa36c(0,*(uint *)(param_2 + 0x2c),*(uint *)(param_2 + 0x28),&DAT_01890988);
  }
  FUN_012993f8(param_2);
  FUN_0129a1c0(&local_28,param_2,&local_48);
  if (local_28 == 4) {
    if (0x80000000 < local_48) {
      *param_1 = 4;
      return;
    }
    FUN_013287bc(&local_28,&local_48);
    if (local_28 == 4) {
      *param_1 = 4;
      goto joined_r0x012a6580;
    }
  }
  *param_1 = local_28;
  param_1[1] = local_24;
  param_1[2] = local_20;
joined_r0x012a6580:
  if (((int)local_48 < 0) || (local_48 == 0)) {
    return;
  }
  thunk_FUN_016d3fb4(local_44);
  return;
}


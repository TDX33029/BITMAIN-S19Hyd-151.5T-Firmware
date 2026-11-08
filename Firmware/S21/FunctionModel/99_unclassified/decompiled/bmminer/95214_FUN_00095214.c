// FUN_00095214 @ 00095214  size=188  callers=0
// program: bmminer


int FUN_00095214(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  int extraout_r1;
  int local_c;
  
  uVar1 = (**(code **)(param_1 + 0xc))(param_2);
  FUN_0009863c(uVar1,*(undefined4 *)(param_1 + 8));
  local_c = *(int *)(*(int *)(param_1 + 4) + extraout_r1 * 4);
  while( true ) {
    if (local_c == 0) {
      return 0;
    }
    iVar2 = (**(code **)(param_1 + 0x10))(param_2,*(undefined4 *)(local_c + 4));
    if (iVar2 != 0) break;
    local_c = *(int *)(local_c + 0x10);
  }
  return local_c;
}


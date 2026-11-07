// FUN_01240cd0 @ 01240cd0 size=356 calls_out=3 calls_in=1
// strings: 

void FUN_01240cd0(int *param_1,uint param_2,uint param_3,undefined4 param_4,int param_5)

{
  uint uVar1;
  undefined4 local_58;
  int local_54;
  int local_50;
  uint local_4c;
  int local_48;
  int local_44;
  int local_40;
  int iStack_3c;
  int iStack_38;
  int *local_30;
  undefined4 *local_2c;
  undefined4 *local_28;
  undefined4 *local_24;
  int *local_20;
  undefined4 *local_1c;
  
  local_54 = param_5;
  local_58 = param_4;
  if (*param_1 == -0x80000000) {
    local_50 = param_1[1];
    uVar1 = param_1[2];
    if (param_2 != 0) {
      if (param_2 < uVar1) {
        if (*(char *)(local_50 + param_2) < -0x40) {
LAB_01240d20:
                    /* WARNING: Subroutine does not return */
          FUN_00faa8ac(local_50,uVar1,0,param_2,&DAT_0188aba8);
        }
      }
      else if (param_2 != uVar1) goto LAB_01240d20;
    }
    local_4c = param_2;
    if (param_3 != 0) {
      if (param_3 < uVar1) {
        if (*(char *)(local_50 + param_3) < -0x40) {
LAB_01240d90:
                    /* WARNING: Subroutine does not return */
          FUN_00faa8ac(local_50,uVar1,param_3,uVar1,&DAT_0188abb8);
        }
      }
      else if (uVar1 != param_3) goto LAB_01240d90;
    }
    local_48 = local_50 + param_3;
    local_44 = uVar1 - param_3;
    local_20 = &local_48;
    local_28 = &local_58;
    local_1c = &DAT_0157d360;
    local_24 = &DAT_0157d360;
    local_2c = &DAT_0157d360;
    local_30 = &local_50;
    FUN_00600d2c(&local_40,&DAT_0057fce6,&local_30);
    *param_1 = local_40;
    param_1[1] = iStack_3c;
    param_1[2] = iStack_38;
  }
  else {
    FUN_011e15ac(param_1,param_1[3] + param_2,param_1[3] + param_3,param_4,param_5,&DAT_0188abc8);
    local_54 = param_5;
  }
  *(undefined1 *)(param_1 + 4) = 1;
  param_1[3] = (param_2 - param_3) + local_54 + param_1[3];
  return;
}


// FUN_006a060c @ 006a060c size=368 calls_out=3 calls_in=2
// strings: 

void FUN_006a060c(uint *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,code *param_6,code *param_7,undefined4 param_8,
                 undefined4 param_9)

{
  undefined1 uVar1;
  int extraout_r1;
  uint local_40;
  uint local_3c;
  uint local_38;
  uint local_30;
  uint local_2c;
  uint local_28;
  
  local_28 = 0;
  local_2c = 0;
  local_30 = 1;
  FUN_006a07b0(&local_40,param_2,param_9,param_3,param_4,&local_30,1);
  if ((char)local_40 == '\x05') {
    (*param_6)(&local_30,param_5,param_8);
    if (local_30 != 2) {
      do {
        if ((local_30 & 1) != 0) {
          local_30 = local_2c;
          local_2c = local_28;
LAB_006a075c:
          *param_1 = local_30;
          param_1[1] = local_2c;
          return;
        }
        local_40 = local_2c;
        local_3c = local_28;
        local_38 = 0;
        FUN_006a07b0(&local_30,param_2,param_9,param_3,param_4,&local_40,0);
        if (local_3c < local_38) {
                    /* WARNING: Subroutine does not return */
          FUN_012faff4(0,local_38,local_3c,&DAT_01ce29cc);
        }
        (*param_7)(param_5);
        if ((char)local_30 != '\x05') goto LAB_006a075c;
        (*param_6)(&local_30,param_5,param_8);
      } while (local_30 != 2);
    }
    FUN_012c38d0(param_9);
    if (extraout_r1 == 0) {
      uVar1 = 5;
    }
    else {
      uVar1 = 4;
    }
    *(undefined1 *)param_1 = uVar1;
  }
  else {
    *param_1 = local_40;
    param_1[1] = local_3c;
  }
  return;
}


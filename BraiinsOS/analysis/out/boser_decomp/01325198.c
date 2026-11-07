// FUN_01325198 @ 01325198 size=328 calls_out=3 calls_in=1
// strings: 

void FUN_01325198(undefined4 *param_1,int param_2,undefined4 param_3,undefined4 param_4,int param_5,
                 uint param_6,int param_7,undefined1 param_8)

{
  uint uVar1;
  undefined1 extraout_r1;
  undefined1 uVar2;
  undefined1 local_31;
  undefined4 local_30;
  char local_2c;
  undefined2 local_2b;
  uint local_28;
  
  *(undefined1 *)(param_2 + 0x18) = 9;
  if (param_7 == 0) {
    local_31 = param_8;
    FUN_01325da0(&local_30,param_2,&local_31,1,param_5,param_6,0);
    uVar1 = local_28;
    if (local_2c == '\0') {
      if (param_6 < local_28) {
                    /* WARNING: Subroutine does not return */
        FUN_012faff4(local_28,param_6,param_6,&DAT_01ce5e74);
      }
      FUN_01325da0(&local_30,param_2,param_3,param_4,param_5 + local_28,param_6 - local_28,1);
      uVar2 = extraout_r1;
      if (local_2c == '\0') {
        uVar2 = 10;
      }
      local_28 = local_28 + uVar1;
      if (local_2c == '\0') {
        *(undefined1 *)(param_2 + 0x18) = uVar2;
      }
    }
    else {
      local_30 = 0;
      if (local_2c != '\x02') {
                    /* WARNING: Subroutine does not return */
        FUN_012fb0ec(&DAT_00432186,0x27,&DAT_01ce5e74);
      }
    }
    *(undefined2 *)((int)param_1 + 5) = local_2b;
    *(char *)(param_1 + 1) = local_2c;
    param_1[2] = local_28;
    *param_1 = local_30;
  }
  else {
    FUN_01325da0(param_1,param_2,param_3,param_4,param_5,param_6,1);
    if (*(char *)(param_1 + 1) == '\0') {
      *(undefined1 *)(param_2 + 0x18) = 10;
    }
  }
  return;
}


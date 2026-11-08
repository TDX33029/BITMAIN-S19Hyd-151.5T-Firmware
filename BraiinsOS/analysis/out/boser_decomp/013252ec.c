// FUN_013252ec @ 013252ec size=420 calls_out=4 calls_in=0
// strings: 

void FUN_013252ec(int *param_1,int param_2,undefined4 param_3,undefined4 param_4,int param_5,
                 uint param_6,int param_7)

{
  uint uVar1;
  undefined1 extraout_r1;
  undefined1 uVar2;
  int iVar3;
  undefined2 local_2e;
  int local_2c;
  char local_28;
  undefined2 local_27;
  uint local_24;
  
  *(undefined1 *)(param_2 + 0x18) = 9;
  if (param_7 == 1) {
    FUN_01325198(param_1,param_2,param_3,param_4,param_5,param_6,0,0xef);
  }
  else if (param_7 == 0) {
    local_2e = 0xbbef;
    FUN_01325da0(&local_2c,param_2,&local_2e,2,param_5,param_6,0);
    uVar1 = local_24;
    if (local_28 == '\0') {
      if (param_6 < local_24) {
                    /* WARNING: Subroutine does not return */
        FUN_012faff4(local_24,param_6,param_6,&DAT_01ce5e74);
      }
      FUN_01325da0(&local_2c,param_2,param_3,param_4,param_5 + local_24,param_6 - local_24,1);
      uVar2 = extraout_r1;
      if (local_28 == '\0') {
        uVar2 = 10;
      }
      local_24 = local_24 + uVar1;
      if (local_28 == '\0') {
        *(undefined1 *)(param_2 + 0x18) = uVar2;
      }
      iVar3 = local_2c;
    }
    else {
      if (local_28 != '\x02') {
                    /* WARNING: Subroutine does not return */
        FUN_012fb0ec(&DAT_00432186,0x27,&DAT_01ce5e74);
      }
      local_28 = '\x02';
      iVar3 = 0;
      if (local_2c == 1) {
        *(undefined1 *)(param_2 + 0x18) = 8;
      }
    }
    *(undefined2 *)((int)param_1 + 5) = local_27;
    *(char *)(param_1 + 1) = local_28;
    param_1[2] = local_24;
    *param_1 = iVar3;
  }
  else {
    FUN_01325da0(param_1,param_2,param_3,param_4,param_5,param_6,1);
    if ((char)param_1[1] == '\0') {
      *(undefined1 *)(param_2 + 0x18) = 10;
    }
  }
  return;
}


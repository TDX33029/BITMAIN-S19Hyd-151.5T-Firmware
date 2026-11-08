// FUN_007a9c84 @ 007a9c84 size=220 calls_out=3 calls_in=1
// strings: full_stats | full_stats | the following required argument was not provided: full_stats

void FUN_007a9c84(undefined1 *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int local_88;
  undefined4 local_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  char *local_60;
  undefined4 local_5c;
  int local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  char **local_30;
  undefined4 *local_2c;
  int *local_28;
  undefined1 *local_24;
  
  FUN_006afb98(&local_88,param_2,"full_stats",10);
  local_5c = 10;
  local_60 = "full_stats";
  if (local_88 != 2) {
    local_28 = &local_58;
    local_58 = local_88;
    uStack_54 = local_84;
    uStack_50 = uStack_80;
    uStack_4c = uStack_7c;
    local_48 = local_78;
    uStack_44 = uStack_74;
    uStack_40 = uStack_70;
    uStack_3c = uStack_6c;
    uStack_38 = uStack_68;
    local_30 = &local_60;
    local_24 = &LAB_00f9c598;
    local_2c = &DAT_0157d360;
                    /* WARNING: Subroutine does not return */
    FUN_00faa478(&DAT_005767ed,&local_30,&DAT_01880884);
  }
  if ((char)local_84 == '\x02') {
    uVar1 = FUN_0074d96c(9,"the following required argument was not provided: full_stats",0x3c);
    *(undefined4 *)(param_1 + 4) = uVar1;
    *param_1 = 1;
    return;
  }
  param_1[1] = (char)local_84;
  *param_1 = 0;
  return;
}


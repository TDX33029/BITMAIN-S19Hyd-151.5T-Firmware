// FUN_007a9d78 @ 007a9d78 size=160 calls_out=2 calls_in=1
// strings: stats | stats

void FUN_007a9d78(undefined1 *param_1)

{
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
  int iStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  char **ppcStack_30;
  undefined4 *puStack_2c;
  int *piStack_28;
  undefined1 *puStack_24;
  
  FUN_006b0908(&local_88);
  local_60 = "stats";
  local_5c = 5;
  if (local_88 != 2) {
    piStack_28 = &iStack_58;
    iStack_58 = local_88;
    uStack_54 = local_84;
    uStack_50 = uStack_80;
    uStack_4c = uStack_7c;
    uStack_48 = local_78;
    uStack_44 = uStack_74;
    uStack_40 = uStack_70;
    uStack_3c = uStack_6c;
    uStack_38 = uStack_68;
    ppcStack_30 = &local_60;
    puStack_24 = &LAB_00f9c598;
    puStack_2c = &DAT_0157d360;
                    /* WARNING: Subroutine does not return */
    FUN_00faa478(&DAT_005767ed,&ppcStack_30,&DAT_01880884);
  }
  *param_1 = 0;
  param_1[1] = (char)local_84;
  return;
}


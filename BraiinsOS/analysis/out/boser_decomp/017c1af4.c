// FUN_017c1af4 @ 017c1af4 size=492 calls_out=9 calls_in=2
// strings: 

void FUN_017c1af4(undefined4 *param_1,undefined4 *param_2,int *param_3)

{
  undefined4 local_464;
  undefined4 *local_460;
  undefined4 local_45c;
  undefined4 local_458;
  undefined4 uStack_454;
  undefined4 uStack_450;
  undefined4 uStack_44c;
  char local_448;
  undefined2 local_447;
  undefined1 local_445;
  undefined4 *local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined *local_4c;
  undefined2 uStack_48;
  undefined1 local_46;
  undefined1 local_45;
  undefined4 *local_40;
  undefined1 *local_3c;
  int iStack_38;
  char local_34 [8];
  undefined4 **local_2c;
  undefined1 *local_28;
  
  local_460 = (undefined4 *)thunk_FUN_01be5118(6);
  if (local_460 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00664620();
  }
  *local_460 = 0x69736142;
  *(undefined2 *)(local_460 + 1) = 0x2063;
  local_464 = 6;
  local_45c = 6;
  uStack_48 = 0;
  local_46 = 0;
  FUN_01bed93e(&local_458,0,0x400);
  local_4c = &DAT_0051cfcc;
  local_58 = &local_464;
  local_45 = 0;
  local_50 = 0;
  local_54 = 0;
  local_3c = &LAB_00632348;
  local_40 = param_2;
  FUN_01780a6c(&local_2c,&local_458,&DAT_005888c1,&local_40);
  if ((char)local_2c != '\x04') {
    FUN_018248cc(&local_2c);
  }
  if (*param_3 != -0x80000000) {
    local_40 = (undefined4 *)*param_3;
    local_3c = (undefined1 *)param_3[1];
    iStack_38 = param_3[2];
    local_28 = &LAB_00632348;
    local_2c = &local_40;
    FUN_01780a6c(local_34,&local_458,&DAT_00590e5f,&local_2c);
    if (local_34[0] != '\x04') {
      FUN_018248cc(local_34);
    }
    FUN_019bb7e0(local_40,local_3c);
  }
  FUN_01782124(&local_458);
  FUN_01ac6204(&local_458,local_460,local_45c);
  if (local_448 == '\x02') {
                    /* WARNING: Subroutine does not return */
    FUN_013073dc(&DAT_0051d10f,0x22,&local_40,&DAT_01d1c91c,&DAT_01d1c4e0);
  }
  *param_1 = local_458;
  param_1[1] = uStack_454;
  param_1[2] = uStack_450;
  param_1[3] = uStack_44c;
  *(undefined1 *)((int)param_1 + 0x13) = local_445;
  *(undefined2 *)((int)param_1 + 0x11) = local_447;
  *(undefined1 *)(param_1 + 4) = 1;
  FUN_019bb7e0(local_464,local_460);
  FUN_019bb7e0(*param_2,param_2[1]);
  return;
}


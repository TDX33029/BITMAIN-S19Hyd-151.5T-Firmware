// FUN_017c18e8 @ 017c18e8 size=444 calls_out=9 calls_in=1
// strings: 

void FUN_017c18e8(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  undefined4 uStack_464;
  undefined4 uStack_460;
  undefined4 local_45c;
  undefined4 *local_458;
  undefined4 local_454;
  undefined4 local_450;
  undefined4 uStack_44c;
  undefined4 uStack_448;
  undefined4 uStack_444;
  char local_440;
  undefined2 local_43f;
  undefined1 local_43d;
  undefined4 *local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined *local_44;
  undefined2 uStack_40;
  undefined1 local_3e;
  undefined1 local_3d;
  undefined4 local_38;
  undefined4 local_34;
  char local_30 [8];
  undefined4 *local_28;
  undefined2 *local_24;
  
  uStack_464 = param_2;
  uStack_460 = param_3;
  local_458 = (undefined4 *)thunk_FUN_01be5118(6);
  if (local_458 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00664620(1,6);
  }
  local_45c = 6;
  local_454 = 6;
  *local_458 = 0x69736142;
  *(undefined2 *)(local_458 + 1) = 0x2063;
  uStack_40 = 0;
  local_3e = 0;
  FUN_01bed93e(&local_450,0,0x400);
  local_44 = &DAT_0051cfcc;
  local_50 = &local_45c;
  local_28 = &uStack_464;
  local_3d = 0;
  local_48 = 0;
  local_4c = 0;
  local_24 = &DAT_0132b6a0;
  FUN_01780a6c(local_30,&local_450,&DAT_005888c1,&local_28);
  if (local_30[0] != '\x04') {
    FUN_018248cc(local_30);
  }
  local_34 = param_5;
  local_28 = &local_38;
  local_24 = &DAT_0132b6a0;
  local_38 = param_4;
  FUN_01780a6c(local_30,&local_450,&DAT_00590e5f,&local_28);
  if (local_30[0] != '\x04') {
    FUN_018248cc(local_30);
  }
  FUN_01782124(&local_450);
  FUN_01ac6204(&local_450,local_458,local_454);
  if (local_440 == '\x02') {
                    /* WARNING: Subroutine does not return */
    FUN_013073dc(&DAT_0051d10f,0x22,&local_28,&DAT_01d1c91c,&DAT_01d1c4e0);
  }
  *param_1 = local_450;
  param_1[1] = uStack_44c;
  param_1[2] = uStack_448;
  param_1[3] = uStack_444;
  *(undefined1 *)((int)param_1 + 0x13) = local_43d;
  *(undefined2 *)((int)param_1 + 0x11) = local_43f;
  *(undefined1 *)(param_1 + 4) = 1;
  FUN_019bb7e0(local_45c,local_458);
  return;
}


// FUN_015be024 @ 015be024 size=328 calls_out=2 calls_in=0
// strings: 

void FUN_015be024(undefined4 *param_1)

{
  code *pcVar1;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  char local_2a;
  undefined4 local_29;
  undefined4 local_25;
  undefined4 local_21;
  undefined4 local_1d;
  undefined1 uStack_19;
  
  local_30 = 0xffffffff;
  local_34 = 0xffffffff;
  local_3c = 0;
  local_40 = 0;
  local_44 = 0;
  local_48 = 0;
  local_68 = 0;
  local_64 = 0;
  local_60 = 0;
  local_5c = 0;
  local_58 = 0;
  local_54 = 0;
  local_50 = 0;
  local_4c = 0;
  local_38 = 0;
  pcVar1 = *(code **)(param_1[0x84] + 4);
  DataMemoryBarrier(0xb);
  if (DAT_018dd942 != '\x02') {
    FUN_01110ec4();
  }
  (*pcVar1)(&local_2a,param_1,&local_38,1,0,&local_68,0x20);
  if (local_2a == '\x01') {
                    /* WARNING: Subroutine does not return */
    FUN_00fb74f8(&DAT_00418ec6,0x2b,&uStack_19,&DAT_018aa6c8,&DAT_018aa8c0);
  }
  local_48 = local_29;
  local_44 = local_25;
  local_40 = local_21;
  local_3c = local_1d;
  DataMemoryBarrier(0xb);
  if (DAT_018dd942 != '\x02') {
    FUN_01110ec4();
  }
  param_1[8] = local_4c;
  *param_1 = 1;
  param_1[1] = local_68;
  param_1[2] = local_64;
  param_1[3] = local_60;
  param_1[4] = local_5c;
  param_1[5] = local_58;
  param_1[6] = local_54;
  param_1[7] = local_50;
  param_1[0x84] = &DAT_018aa88c;
  return;
}


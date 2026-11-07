// FUN_018cb5cc @ 018cb5cc size=300 calls_out=4 calls_in=1
// strings: tls13 

void FUN_018cb5cc(undefined4 param_1,int param_2,int param_3,int *param_4)

{
  undefined1 auStack_100 [160];
  ushort local_60;
  undefined1 local_5e;
  undefined1 local_5d;
  ushort *local_5c;
  undefined4 local_58;
  undefined1 *local_54;
  undefined4 local_50;
  char *local_4c;
  undefined4 local_48;
  undefined *local_44;
  undefined4 local_40;
  undefined1 *local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  int local_2c;
  ushort **local_28;
  undefined4 local_24;
  int local_20;
  uint local_1c;
  
  local_3c = &local_5d;
  local_1c = *(uint *)(param_2 + 0x48);
  local_60 = (ushort)((local_1c & 0xff) << 8) | (ushort)(local_1c >> 8) & 0xff;
  local_40 = 8;
  local_5e = 0xe;
  local_5d = 0;
  local_30 = 0;
  local_34 = 1;
  local_38 = 1;
  local_50 = 1;
  local_54 = &local_5e;
  local_44 = &DAT_00570760;
  local_58 = 2;
  local_5c = &local_60;
  local_48 = 6;
  local_4c = "tls13 ";
  if ((uint)(*(int *)(*(int *)(param_3 + 0x48) + 0x48) * 0xff) < local_1c) {
                    /* WARNING: Subroutine does not return */
    FUN_013073dc(&DAT_00533467,0x2b,auStack_100,&DAT_01d22bec,&DAT_01d22c4c);
  }
  local_28 = &local_5c;
  local_24 = 6;
  local_2c = param_3;
  local_20 = param_2;
  FUN_0188fb80(auStack_100,&local_2c);
  if (0x40 < *(uint *)(*param_4 + 0x48)) {
                    /* WARNING: Subroutine does not return */
    FUN_012faff4(0,*(uint *)(*param_4 + 0x48),0x40,&DAT_01d2571c);
  }
  FUN_018908c4(param_1,auStack_100,param_4 + 1);
  return;
}


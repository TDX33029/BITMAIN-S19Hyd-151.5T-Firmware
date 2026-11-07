// FUN_018cae5c @ 018cae5c size=224 calls_out=2 calls_in=5
// strings: tls13 

void FUN_018cae5c(undefined4 param_1,int param_2,int param_3,undefined4 param_4,undefined4 param_5,
                 undefined4 param_6,undefined4 param_7)

{
  ushort local_60;
  char local_5e;
  undefined1 local_5d;
  ushort *local_5c;
  undefined4 local_58;
  char *local_54;
  undefined4 local_50;
  char *local_4c;
  undefined4 local_48;
  undefined4 local_44;
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
  
  local_1c = *(uint *)(param_3 + 0x48);
  local_60 = (ushort)((local_1c & 0xff) << 8) | (ushort)(local_1c >> 8) & 0xff;
  local_5e = (char)param_5 + '\x06';
  local_40 = param_5;
  local_38 = 1;
  local_50 = 1;
  local_54 = &local_5e;
  local_58 = 2;
  local_5c = &local_60;
  local_34 = param_6;
  local_3c = &local_5d;
  local_5d = (undefined1)param_7;
  local_30 = param_7;
  local_48 = 6;
  local_4c = "tls13 ";
  local_44 = param_4;
  if ((uint)(*(int *)(*(int *)(param_2 + 0x48) + 0x48) * 0xff) < local_1c) {
                    /* WARNING: Subroutine does not return */
    FUN_013073dc(&DAT_00533467,0x2b,&local_2c,&DAT_01d22bec,&DAT_01d22c4c);
  }
  local_28 = &local_5c;
  local_24 = 6;
  local_2c = param_2;
  local_20 = param_3;
  FUN_0188fb80(param_1,&local_2c);
  return;
}


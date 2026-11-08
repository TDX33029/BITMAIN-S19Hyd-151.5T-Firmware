// FUN_018cba48 @ 018cba48 size=360 calls_out=6 calls_in=1
// strings: derived | tls13 

void FUN_018cba48(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined1 auStack_1a8 [160];
  int local_108;
  undefined1 auStack_104 [156];
  ushort local_68;
  undefined1 local_66;
  undefined1 local_65;
  ushort *local_64;
  undefined4 local_60;
  undefined1 *local_5c;
  undefined4 local_58;
  char *local_54;
  undefined4 local_50;
  char *local_4c;
  undefined4 local_48;
  undefined1 *local_44;
  undefined4 local_40;
  undefined1 *local_3c;
  uint local_38;
  int local_34;
  ushort **local_30;
  undefined4 local_2c;
  int local_28;
  uint local_24;
  
  iVar1 = *(int *)(param_1 + 0xa0);
  FUN_0188fef8(&local_108,*(undefined4 *)(iVar1 + 0xc),1,0);
  local_38 = *(uint *)(local_108 + 0x48);
  if (0x40 < local_38) {
                    /* WARNING: Subroutine does not return */
    FUN_012faff4(0,local_38,0x40,&DAT_01d2571c);
  }
  local_28 = *(int *)(iVar1 + 0xc);
  local_24 = *(uint *)(local_28 + 0x48);
  local_68 = (ushort)((local_24 & 0xff) << 8) | (ushort)(local_24 >> 8) & 0xff;
  local_4c = "derived";
  local_65 = (undefined1)local_38;
  local_3c = auStack_104;
  local_5c = &local_66;
  local_44 = &local_65;
  local_48 = 7;
  local_60 = 2;
  local_64 = &local_68;
  local_66 = 0xd;
  local_40 = 1;
  local_50 = 6;
  local_54 = "tls13 ";
  local_58 = 1;
  if ((uint)(*(int *)(*(int *)(param_1 + 0x48) + 0x48) * 0xff) < local_24) {
                    /* WARNING: Subroutine does not return */
    FUN_013073dc(&DAT_00533467,0x2b,auStack_1a8,&DAT_01d22bec,&DAT_01d22c4c);
  }
  local_2c = 6;
  local_30 = &local_64;
  local_34 = param_1;
  FUN_0188fb80(auStack_1a8,&local_34);
  FUN_01891bc0(&local_108,auStack_1a8,param_2,param_3);
  FUN_01bed4e2(param_1,&local_108,0xa0);
  return;
}


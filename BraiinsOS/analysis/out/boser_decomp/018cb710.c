// FUN_018cb710 @ 018cb710 size=296 calls_out=3 calls_in=2
// strings: tls13  | tls13 

void FUN_018cb710(undefined4 *param_1,int param_2,uint param_3,undefined4 param_4,undefined4 param_5
                 ,undefined4 param_6,undefined4 param_7)

{
  int iVar1;
  ushort local_64;
  char local_62;
  undefined1 local_61;
  ushort *local_60;
  undefined4 local_5c;
  char *local_58;
  undefined4 uStack_54;
  char *pcStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined1 *local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined1 uStack_21;
  
  local_38 = param_6;
  local_40 = &local_61;
  local_61 = (undefined1)param_7;
  local_64 = (ushort)((param_3 & 0xff) << 8) | (ushort)(param_3 >> 8) & 0xff;
  local_34 = param_7;
  local_3c = 1;
  uStack_54 = 1;
  pcStack_50 = "tls13 ";
  uStack_4c = 6;
  local_58 = &local_62;
  local_5c = 2;
  local_60 = &local_64;
  local_62 = (char)param_5 + '\x06';
  local_44 = param_5;
  local_48 = param_4;
  if ((uint)(*(int *)(*(int *)(param_2 + 0x48) + 0x48) * 0xff) < param_3) {
                    /* WARNING: Subroutine does not return */
    FUN_013073dc(&DAT_00533467,0x2b,&uStack_21,&DAT_01d22bec);
  }
  FUN_018a7af8(&local_30,param_3);
  iVar1 = FUN_01891c24(param_2,&local_60,6,local_2c);
  if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_013073dc(&DAT_00533467,0x2b,&uStack_21,&DAT_01d22a40);
  }
  *param_1 = local_30;
  param_1[1] = local_2c;
  param_1[2] = local_28;
  return;
}


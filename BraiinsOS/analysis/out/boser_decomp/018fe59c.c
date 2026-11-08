// FUN_018fe59c @ 018fe59c size=356 calls_out=3 calls_in=3
// strings: tls13  | expand type parameter T is too large | assertion failed: len <= self.used

void FUN_018fe59c(undefined4 *param_1,undefined4 param_2,code *param_3,uint param_4)

{
  int iVar1;
  ushort local_9c;
  undefined1 local_9a;
  undefined1 local_99;
  ushort *local_98;
  undefined4 local_94;
  undefined1 *local_90;
  undefined4 local_8c;
  char *local_88;
  undefined4 local_84;
  char *local_80;
  undefined4 local_7c;
  undefined1 *local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  local_9c = (ushort)((param_4 & 0xff) << 8) | (ushort)(param_4 >> 8) & 0xff;
  local_80 = "key";
  local_84 = 6;
  local_90 = &local_9a;
  local_9a = 9;
  local_78 = &local_99;
  local_94 = 2;
  local_98 = &local_9c;
  local_99 = 0;
  local_6c = 0;
  local_88 = "tls13 ";
  local_70 = 1;
  local_74 = 1;
  local_8c = 1;
  local_7c = 3;
  FUN_01bed93e(&local_40,0,0x20);
  iVar1 = (*param_3)(param_2,&local_98,6,&local_40,0x20);
  if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_013073dc("expand type parameter T is too large",0x24,&local_68,&DAT_01d24d94,&DAT_01d24dc4);
  }
  local_68 = local_40;
  uStack_64 = uStack_3c;
  uStack_60 = uStack_38;
  uStack_5c = uStack_34;
  local_58 = local_30;
  uStack_54 = uStack_2c;
  uStack_50 = uStack_28;
  uStack_4c = uStack_24;
  local_48 = 0x20;
  if (0x20 < param_4) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb0ec("assertion failed: len <= self.used",0x22,&DAT_01d256e4);
  }
  *param_1 = local_40;
  param_1[1] = uStack_3c;
  param_1[2] = uStack_38;
  param_1[3] = uStack_34;
  param_1[4] = local_30;
  param_1[5] = uStack_2c;
  param_1[6] = uStack_28;
  param_1[7] = uStack_24;
  iVar1 = 0;
  param_1[8] = param_4;
  do {
    *(undefined1 *)((int)&local_68 + iVar1) = 0;
    iVar1 = iVar1 + 1;
  } while (iVar1 != 0x20);
  return;
}


// FUN_009f83a4 @ 009f83a4 size=832 calls_out=13 calls_in=1
// strings: assertion failed: bytes > 0 | assertion failed: bytes > 0 | BUG: Scanning suffixes | BUG: Cannot create dir | BUG: Ensuring log dir exists | BUG: Removing stale scheme duplicates

void FUN_009f83a4(undefined4 param_1,undefined4 param_2,char *param_3,undefined4 param_4,
                 undefined4 *param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                 undefined4 *param_9)

{
  char *pcVar1;
  undefined8 uVar2;
  char *local_a0;
  char *local_9c;
  char *local_98;
  undefined4 local_94;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 uStack_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_60;
  undefined4 local_5c;
  char *local_58;
  undefined4 uStack_54;
  undefined4 local_50;
  char *local_48;
  undefined4 local_44;
  char *local_40;
  char *local_3c;
  undefined4 uStack_38;
  undefined4 local_34;
  
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(undefined1 *)param_5) {
  case 0:
    if (param_5[1] == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa464("assertion failed: bytes > 0",0x1b,&DAT_0186b70c);
    }
    break;
  case 1:
    if (param_5[1] == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa464("assertion failed: lines > 0",0x1b,&DAT_0186b71c);
    }
    break;
  case 3:
    if (param_5[1] == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa464("assertion failed: bytes > 0",0x1b,&DAT_0186b72c);
    }
  }
  pcVar1 = (char *)thunk_FUN_016d4a50(param_3);
  if (pcVar1 == (char *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(1,param_3);
  }
  FUN_016dd1aa(pcVar1,param_2,param_3);
  local_98 = (char *)CONCAT31(local_98._1_3_,6);
  local_84._0_3_ = CONCAT12(*pcVar1 == '/',0x201);
  local_a0 = pcVar1;
  local_9c = param_3;
  FUN_015c7164(&local_40,&local_a0);
  if ((2 < ((uint)local_40 & 0xff) - 7) || (uVar2 = FUN_015c7664(&local_a0), (int)uVar2 == 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_00fb74b8("BUG: Parent path doesn\'t exist",0x1e,&DAT_0186b73c);
  }
  local_9c = (char *)CONCAT31(local_9c._1_3_,1);
  local_a0 = (char *)0x1ff;
  FUN_015eb2b4(&local_40,&local_a0,(int)uVar2,(int)((ulonglong)uVar2 >> 0x20));
  if ((char)local_40 != '\x04') {
    local_9c = local_3c;
    local_a0 = local_40;
                    /* WARNING: Subroutine does not return */
    FUN_00fb74f8("BUG: Cannot create dir",0x16,&local_a0,&DAT_0186b78c,&DAT_0186b74c);
  }
  local_88 = param_9[1];
  local_84 = param_9[2];
  uStack_80 = param_9[3];
  local_94 = param_7;
  local_90 = param_8;
  local_7c = *param_5;
  local_78 = param_5[1];
  local_8c = *param_9;
  local_70 = 0;
  local_74 = 0xffffffff;
  local_60 = 0;
  local_50 = 0;
  local_58 = (char *)0x0;
  local_a0 = param_3;
  local_9c = pcVar1;
  local_98 = param_3;
  local_5c = param_4;
  FUN_009f87e4(&local_48,&local_a0);
  if ((char)local_48 != '\x04') {
    local_3c = (char *)local_44;
    local_40 = local_48;
                    /* WARNING: Subroutine does not return */
    FUN_00fb74f8("BUG: Ensuring log dir exists",0x1c,&local_40,&DAT_0186b78c,&DAT_0186b75c);
  }
  FUN_009f9320(&local_48,&local_a0);
  if ((char)local_48 != '\x04') {
    local_3c = (char *)local_44;
    local_40 = local_48;
                    /* WARNING: Subroutine does not return */
    FUN_00fb74f8("BUG: Removing stale scheme duplicates",0x25,&local_40,&DAT_0186b78c,&DAT_0186b76c)
    ;
  }
  FUN_009f5080(&local_40,local_9c,local_98);
  if (local_40 == (char *)0x0) {
    FUN_009f3df0(&local_58);
    local_58 = local_3c;
    uStack_54 = uStack_38;
    local_50 = local_34;
  }
  else if (((uint)local_3c & 0xff) != 4) {
    local_40 = local_3c;
    local_3c = (char *)uStack_38;
                    /* WARNING: Subroutine does not return */
    FUN_00fb74f8("BUG: Scanning suffixes",0x16,&local_40,&DAT_0186b78c,&DAT_0186b77c);
  }
  FUN_016dd1aa(param_1,&local_a0,0x54);
  return;
}


// FUN_01261a9c @ 01261a9c size=664 calls_out=10 calls_in=1
// strings: assertion failed: bytes > 0 | assertion failed: bytes > 0 | BUG: Parent path doesn't exist | BUG: Cannot create dir | BUG: Ensuring log dir exists | BUG: Removing stale scheme duplicates

void FUN_01261a9c(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 *param_7)

{
  undefined8 uVar1;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 uStack_88;
  undefined4 local_84;
  undefined4 uStack_80;
  undefined4 local_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 local_6c;
  undefined4 uStack_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_40;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(undefined1 *)param_4) {
  case 0:
    if (param_4[1] == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_012fb0ec("assertion failed: bytes > 0",0x1b,&DAT_01c2515c);
    }
    break;
  case 1:
    if (param_4[1] == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_012fb0ec("assertion failed: lines > 0",0x1b,&DAT_01c2516c);
    }
    break;
  case 3:
    if (param_4[1] == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_012fb0ec("assertion failed: bytes > 0",0x1b,&DAT_01c2517c);
    }
  }
  FUN_019afae4(&local_a0);
  uVar1 = FUN_019aff98(local_9c,local_98);
  if ((int)uVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0130739c("BUG: Parent path doesn\'t exist",0x1e,&DAT_01c2518c);
  }
  local_8c = CONCAT31(local_8c._1_3_,1);
  local_90 = 0x1ff;
  FUN_019a4dfc(&local_30,&local_90,(int)uVar1,(int)((ulonglong)uVar1 >> 0x20));
  if ((char)local_30 != '\x04') {
    local_8c = local_2c;
    local_90 = local_30;
                    /* WARNING: Subroutine does not return */
    FUN_013073dc("BUG: Cannot create dir",0x16,&local_90,&DAT_01c251dc,&DAT_01c2519c);
  }
  local_90 = local_a0;
  local_8c = local_9c;
  uStack_88 = local_98;
  local_6c = *param_4;
  uStack_68 = param_4[1];
  local_60 = 0;
  local_50 = 0;
  local_40 = 0;
  local_48 = 0;
  local_4c = 9;
  local_84 = param_5;
  uStack_80 = param_6;
  local_64 = 0xffffffff;
  local_7c = *param_7;
  uStack_78 = param_7[1];
  uStack_74 = param_7[2];
  uStack_70 = param_7[3];
  FUN_012609a0(&local_38,&local_90);
  if ((char)local_38 != '\x04') {
    local_2c = local_34;
    local_30 = local_38;
                    /* WARNING: Subroutine does not return */
    FUN_013073dc("BUG: Ensuring log dir exists",0x1c,&local_30,&DAT_01c251dc,&DAT_01c251ac);
  }
  FUN_0126117c(&local_38,&local_90);
  if ((char)local_38 != '\x04') {
    local_2c = local_34;
    local_30 = local_38;
                    /* WARNING: Subroutine does not return */
    FUN_013073dc("BUG: Removing stale scheme duplicates",0x25,&local_30,&DAT_01c251dc,&DAT_01c251bc)
    ;
  }
  FUN_0125feac(&local_38,&local_90);
  if ((char)local_38 != '\x04') {
    local_2c = local_34;
    local_30 = local_38;
                    /* WARNING: Subroutine does not return */
    FUN_013073dc("BUG: Scanning suffixes",0x16,&local_30,&DAT_01c251dc,&DAT_01c251cc);
  }
  FUN_01bed4e2(param_1,&local_90,0x54);
  return;
}


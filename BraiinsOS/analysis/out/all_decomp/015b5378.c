// FUN_015b5378 @ 015b5378 size=164 calls_out=3 calls_in=0
// strings: 

void FUN_015b5378(int param_1,undefined4 param_2,uint param_3)

{
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined1 auStack_38 [32];
  
  local_5c = 0;
  local_60 = 0;
  local_64 = 0;
  local_68 = 0;
  local_6c = 0;
  local_70 = 0;
  local_74 = 0;
  local_78 = 0;
  if (0x20 < param_3) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa36c(0,param_3,0x20,&DAT_018aa28c);
  }
  FUN_016dd1aa(&local_78);
  FUN_016dd1aa(param_1,&local_78,0x20);
  local_58 = local_78;
  uStack_54 = local_74;
  uStack_50 = local_70;
  uStack_4c = local_6c;
  local_48 = local_68;
  uStack_44 = local_64;
  uStack_40 = local_60;
  uStack_3c = local_5c;
  FUN_00fcbbe8(auStack_38);
  FUN_016dd1aa(param_1 + 0x20,auStack_38,0x20);
  return;
}


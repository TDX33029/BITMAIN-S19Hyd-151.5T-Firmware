// FUN_014c2644 @ 014c2644 size=136 calls_out=3 calls_in=0
// strings: https://downloads.braiins.com/braiins-os | hardcoded url is invalid

void FUN_014c2644(undefined4 param_1)

{
  int local_68;
  undefined1 local_64;
  undefined4 local_1c [2];
  undefined4 local_14;
  undefined4 local_c;
  
  local_14 = 0;
  local_1c[0] = 0;
  local_c = 0;
  FUN_01ac814c(&local_68,local_1c,"https://downloads.braiins.com/braiins-os",0x28);
  if (local_68 == 2) {
    local_1c[0] = CONCAT31(local_1c[0]._1_3_,local_64);
                    /* WARNING: Subroutine does not return */
    FUN_013073dc("hardcoded url is invalid",0x18,local_1c,&DAT_01cf9be4,&DAT_01cf9bf4);
  }
  FUN_01bed4e2(param_1,&local_68,0x48);
  return;
}


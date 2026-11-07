// FUN_00fbab70 @ 00fbab70 size=208 calls_out=4 calls_in=1
// strings: 

int FUN_00fbab70(void)

{
  int iVar1;
  int iVar2;
  undefined4 local_120;
  undefined4 local_11c;
  int local_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 local_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  int iStack_e0;
  undefined4 uStack_dc;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 local_c0;
  undefined4 local_a0;
  undefined4 local_64;
  int local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 local_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  int local_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  local_64 = 0;
  local_40 = 0;
  local_60 = 0;
  local_100 = thunk_FUN_016d4a50(0x40c);
  if (local_100 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(4,0x40c);
  }
  *(undefined4 *)(local_100 + 0x408) = 0;
  uStack_fc = uStack_5c;
  uStack_f8 = uStack_58;
  uStack_f4 = uStack_54;
  uStack_f0 = uStack_50;
  local_ec = local_4c;
  uStack_e8 = uStack_48;
  uStack_e4 = uStack_44;
  uStack_dc = uStack_3c;
  local_d8 = local_38;
  uStack_d4 = uStack_34;
  uStack_d0 = uStack_30;
  uStack_cc = uStack_2c;
  uStack_c8 = uStack_28;
  uStack_c4 = uStack_24;
  local_11c = 1;
  local_120 = 1;
  local_a0 = 0;
  local_c0 = 0;
  local_60 = 0;
  iStack_e0 = local_100;
  local_40 = local_100;
  iVar2 = FUN_016d51b0(&local_60,0x20,0xa0);
  iVar1 = local_60;
  if ((iVar2 != 0) || (local_60 == 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(0x20,0xa0);
  }
  FUN_016dd1aa(local_60,&local_120,0xa0);
  return iVar1;
}


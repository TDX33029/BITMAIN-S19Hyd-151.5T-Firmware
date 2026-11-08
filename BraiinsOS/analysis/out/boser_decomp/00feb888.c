// FUN_00feb888 @ 00feb888 size=228 calls_out=5 calls_in=1
// strings: 

void FUN_00feb888(undefined4 param_1)

{
  undefined4 *puVar1;
  undefined1 auStack_130 [120];
  uint local_b8;
  undefined1 auStack_b4 [20];
  undefined4 local_a0 [3];
  undefined4 local_94;
  undefined4 local_88;
  undefined4 local_7c;
  undefined4 local_70;
  undefined4 local_64;
  undefined4 local_58;
  undefined4 local_4c;
  undefined4 local_40;
  undefined4 local_34;
  undefined4 *local_30;
  undefined *local_2c;
  undefined4 local_28;
  
  local_2c = &DAT_01c1ee50;
  local_28 = 0;
  local_30 = (undefined4 *)0x1;
  local_34 = 0;
  local_40 = 0;
  local_4c = 0;
  local_58 = 0;
  local_64 = 0;
  local_70 = 0;
  local_7c = 0;
  local_88 = 0;
  local_94 = 0;
  local_a0[0] = 0;
  puVar1 = (undefined4 *)thunk_FUN_01be5118(4);
  if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0066439c(4,4);
  }
  *puVar1 = FUN_011da768;
  FUN_00feb76c(&local_34);
  local_34 = 2;
  local_2c = &DAT_01c21424;
  local_30 = puVar1;
  FUN_01bed4e2(auStack_130,local_a0,0x8c);
  if (1 < local_b8) {
    FUN_012840cc(auStack_b4);
  }
  local_b8 = 1;
  FUN_01bed4e2(param_1,auStack_130,0x8c);
  return;
}


// FUN_00f9d8e8 @ 00f9d8e8 size=400 calls_out=8 calls_in=3
// strings: /graphqlBroadcom

void FUN_00f9d8e8(undefined4 param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 local_1d4;
  undefined4 *local_1d0;
  undefined *local_1cc;
  undefined1 auStack_148 [144];
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 local_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 local_a0;
  undefined1 local_9c;
  undefined4 local_94;
  undefined4 local_88;
  undefined4 local_7c;
  undefined4 local_70;
  undefined4 local_64;
  undefined4 local_58;
  undefined4 local_4c;
  undefined4 local_48;
  undefined *local_44;
  undefined4 local_40;
  undefined4 local_2c;
  undefined4 *local_28;
  undefined *local_24;
  
  uVar1 = FUN_00ff75e4();
  local_44 = &DAT_01c1ee50;
  local_40 = 0;
  local_48 = 1;
  local_4c = 0;
  local_58 = 0;
  local_64 = 0;
  local_70 = 0;
  local_7c = 0;
  local_88 = 0;
  local_94 = 0;
  local_a0 = 0;
  local_ac = 0;
  local_b8 = 0;
  local_1d0 = (undefined4 *)thunk_FUN_01be5118(4);
  if (local_1d0 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0066439c(4,4);
  }
  *local_1d0 = FUN_011dbf40;
  local_1d4 = 2;
  local_1cc = &DAT_01c2146c;
  FUN_00feb3c4(auStack_148,&local_b8,0x40,&local_1d4,&DAT_01c1d23c);
  FUN_01bed4e2(&local_b8,auStack_148,0x8c);
  local_28 = (undefined4 *)thunk_FUN_01be5118(4);
  if (local_28 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0066439c(4,4);
  }
  *local_28 = FUN_011dd76c;
  local_2c = 2;
  local_24 = &DAT_01c2110c;
  FUN_00feb3c4(&local_1d4,&local_b8,4,&local_2c,&DAT_01c1b2a4);
  uVar1 = FUN_0100d714(uVar1,"/graphqlBroadcom",8,&local_1d4,&DAT_01c1b2b4);
  uVar1 = FUN_00ff24c8(uVar1,param_1);
  local_b8 = *param_2;
  uStack_b4 = param_2[1];
  uStack_b0 = param_2[2];
  local_ac = param_2[3];
  uStack_a8 = param_2[4];
  uStack_a4 = param_2[5];
  local_a0 = param_2[6];
  local_9c = 2;
  FUN_00ffcdb4(uVar1,&local_b8);
  return;
}


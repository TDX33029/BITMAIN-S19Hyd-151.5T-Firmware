// FUN_00f9edf4 @ 00f9edf4 size=236 calls_out=6 calls_in=3
// strings: 

void FUN_00f9edf4(undefined4 param_1)

{
  undefined4 uVar1;
  undefined1 auStack_13c [140];
  undefined4 local_b0 [3];
  undefined4 local_a4;
  undefined4 local_98;
  undefined4 local_8c;
  undefined4 local_80;
  undefined4 local_74;
  undefined4 local_68;
  undefined4 local_5c;
  undefined4 local_50;
  undefined4 local_44;
  undefined4 local_40;
  undefined *local_3c;
  undefined4 local_38;
  undefined4 local_24;
  undefined4 *local_20;
  undefined *local_1c;
  
  uVar1 = FUN_00ff75e4();
  local_3c = &DAT_01c1ee50;
  local_38 = 0;
  local_40 = 1;
  local_44 = 0;
  local_50 = 0;
  local_5c = 0;
  local_68 = 0;
  local_74 = 0;
  local_80 = 0;
  local_8c = 0;
  local_98 = 0;
  local_a4 = 0;
  local_b0[0] = 0;
  local_20 = (undefined4 *)thunk_FUN_01be5118(4);
  if (local_20 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0066439c(4,4);
  }
  *local_20 = FUN_011dbb70;
  local_24 = 2;
  local_1c = &DAT_01c21394;
  FUN_00feb3c4(auStack_13c,local_b0,4,&local_24,&DAT_01c1d23c);
  uVar1 = FUN_0100d714(uVar1,&DAT_003f3615,0xc,auStack_13c,&DAT_01c1b3ec);
  FUN_00ff24c8(uVar1,param_1);
  return;
}


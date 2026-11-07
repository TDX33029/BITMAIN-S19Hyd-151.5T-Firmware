// FUN_00f9e9f0 @ 00f9e9f0 size=180 calls_out=5 calls_in=3
// strings: /cgi-bin/{*tail}

void FUN_00f9e9f0(undefined4 param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 local_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined1 local_8c;
  
  uVar1 = FUN_00ff75e4();
  FUN_00feb888(&local_a8);
  uVar1 = FUN_0100d714(uVar1,"/cgi-bin/{*tail}",0x10,&local_a8,&DAT_01c1b39c);
  FUN_00feb888(&local_a8);
  uVar1 = FUN_0100d714(uVar1,&DAT_003f35f3,0x14,&local_a8,&DAT_01c1b3ac);
  uVar1 = FUN_00ff24c8(uVar1,param_1);
  local_a8 = *param_2;
  uStack_a4 = param_2[1];
  uStack_a0 = param_2[2];
  local_9c = param_2[3];
  uStack_98 = param_2[4];
  uStack_94 = param_2[5];
  uStack_90 = param_2[6];
  local_8c = 5;
  FUN_00ffcdb4(uVar1,&local_a8);
  return;
}


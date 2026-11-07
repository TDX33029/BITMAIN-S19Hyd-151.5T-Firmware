// FUN_00f9e5e8 @ 00f9e5e8 size=580 calls_out=8 calls_in=3
// strings: 

undefined4 FUN_00f9e5e8(undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  undefined4 local_148;
  undefined4 local_144;
  undefined4 local_140;
  undefined *local_bc;
  undefined2 *local_b8;
  undefined *local_b4;
  undefined2 *local_b0;
  undefined4 local_a4;
  undefined4 local_98;
  undefined4 local_8c;
  undefined4 local_80;
  undefined4 local_74;
  undefined4 local_68;
  undefined4 local_5c;
  undefined4 local_50;
  undefined4 local_4c;
  undefined *local_48;
  undefined4 local_44;
  undefined4 local_30;
  undefined4 *local_2c;
  undefined *local_28;
  
  uVar3 = FUN_00ff75e4();
  local_b4 = &DAT_01c1b36c;
  local_b0 = &DAT_0132b6a0;
  local_b8 = &DAT_0132b6a0;
  local_bc = &DAT_01c1b364;
  FUN_00664898(&local_148,&DAT_0059d815,&local_bc);
  uVar4 = local_140;
  uVar2 = local_144;
  uVar1 = local_148;
  local_44 = 0;
  local_50 = 0;
  local_5c = 0;
  local_68 = 0;
  local_74 = 0;
  local_80 = 0;
  local_8c = 0;
  local_98 = 0;
  local_a4 = 0;
  local_b0 = (undefined2 *)0x0;
  local_bc = (undefined *)0x0;
  local_48 = &DAT_01c1ee50;
  local_4c = 1;
  local_2c = (undefined4 *)thunk_FUN_01be5118(4);
  if (local_2c == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0066439c(4,4);
  }
  *local_2c = FUN_011da8b8;
  local_30 = 2;
  local_28 = &DAT_01c212a4;
  FUN_00feb3c4(&local_148,&local_bc,4,&local_30,&DAT_01c1d23c);
  uVar4 = FUN_0100d714(uVar3,uVar2,uVar4,&local_148,&DAT_01c1b374);
  local_b0 = &DAT_0132b6a0;
  local_b4 = &DAT_01c1b384;
  local_b8 = &DAT_0132b6a0;
  local_bc = &DAT_01c1b364;
  FUN_00664898(&local_148,&DAT_00599b1d,&local_bc);
  local_44 = 0;
  local_50 = 0;
  local_5c = 0;
  local_68 = 0;
  local_74 = 0;
  local_80 = 0;
  local_8c = 0;
  local_98 = 0;
  local_a4 = 0;
  local_b0 = (undefined2 *)0x0;
  local_bc = (undefined *)0x0;
  local_48 = &DAT_01c1ee50;
  local_4c = 1;
  puVar5 = (undefined4 *)thunk_FUN_01be5118(4);
  if (puVar5 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0066439c(4,4);
  }
  *puVar5 = FUN_011db828;
  local_30 = 2;
  local_28 = &DAT_01c213ac;
  local_2c = puVar5;
  FUN_00feb3c4(&local_148,&local_bc,4,&local_30,&DAT_01c1d23c);
  uVar4 = FUN_0100d714(uVar4,local_144,local_140,&local_148,&DAT_01c1b38c);
  uVar4 = FUN_00ff24c8(uVar4,param_1);
  FUN_019bb7e0(local_148,local_144);
  FUN_019bb7e0(uVar1,uVar2);
  return uVar4;
}


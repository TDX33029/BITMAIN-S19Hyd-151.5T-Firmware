// FUN_01b625a0 @ 01b625a0 size=508 calls_out=8 calls_in=2
// strings: 

undefined8 FUN_01b625a0(int param_1,undefined4 param_2,int param_3)

{
  uint uVar1;
  undefined4 uVar2;
  undefined1 uVar3;
  undefined1 *puVar4;
  undefined1 uVar5;
  int iVar6;
  undefined1 auStack_4c0 [512];
  undefined1 auStack_2c0 [32];
  undefined2 local_2a0;
  undefined1 local_260;
  undefined1 local_25f;
  undefined1 local_220;
  undefined1 local_21f;
  undefined1 local_1e0;
  undefined1 local_1df;
  undefined1 auStack_1b0 [388];
  int local_2c;
  
  local_2c = DAT_01d53560;
  iVar6 = 0;
  puVar4 = auStack_2c0;
  do {
    iVar6 = iVar6 + 1;
    FUN_01b269d8(puVar4,param_2,0x20);
    puVar4 = puVar4 + 0x40;
  } while (iVar6 != 4);
  local_2a0 = 0;
  local_260 = param_3 == 0;
  if ((bool)local_260) {
    uVar3 = 2;
    uVar5 = 0;
  }
  else {
    uVar3 = 0;
    uVar5 = 2;
  }
  local_25f = !(bool)local_260;
  local_220 = uVar3;
  local_21f = uVar5;
  local_1e0 = local_25f;
  local_1df = local_260;
  FUN_01b62268(param_1,param_1 + 0x200,param_1 + 0x400,param_1 + 0x600,auStack_2c0);
  if (param_3 == 0) {
    local_25f = 1;
  }
  else {
    local_25f = 2;
  }
  local_2a0 = 0x101;
  if (param_3 == 0) {
    local_260 = 2;
  }
  else {
    local_260 = 1;
  }
  local_220 = uVar5;
  local_21f = uVar3;
  local_1e0 = local_25f;
  local_1df = local_260;
  FUN_01b62268(param_1 + 0x800,param_1 + 0xa00,param_1 + 0xc00,param_1 + 0xe00,auStack_2c0);
  local_2a0 = 0x202;
  FUN_01b5b4e4(auStack_1b0,0xa8);
  FUN_01b5b638(auStack_1b0,auStack_2c0,0x22);
  FUN_01b5b9d0(auStack_4c0,auStack_1b0,0x1f8);
  uVar2 = 0x1f8;
  uVar1 = 0;
  while (uVar1 = FUN_01b22ff8(param_1 + 0x1000,uVar1,auStack_4c0,uVar2), uVar1 < 0x100) {
    FUN_01b5b9d0(auStack_4c0,auStack_1b0,0xa8);
    uVar2 = 0xa8;
  }
  FUN_01b6b174(auStack_4c0,0x1f8);
  FUN_01b6b174(auStack_2c0,0x100);
  if (local_2c != DAT_01d53560) {
                    /* WARNING: Subroutine does not return */
    FUN_01be31f4();
  }
  return 0;
}


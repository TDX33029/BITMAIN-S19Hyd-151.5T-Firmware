// FUN_014624c4 @ 014624c4 size=244 calls_out=6 calls_in=2
// strings: Temperature

void FUN_014624c4(undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined1 auStack_340 [380];
  int *local_1c4;
  undefined1 *local_1c0;
  undefined4 local_1bc;
  undefined4 local_1b8;
  undefined4 local_1b4;
  int local_1b0;
  char *local_1ac;
  undefined4 local_1a8;
  undefined4 local_1a4;
  undefined4 local_1a0;
  undefined1 auStack_19c [380];
  
  local_1c0 = &LAB_012b97d8;
  local_1c4 = &local_1b0;
  local_1ac = "Temperature";
  local_1a8 = 0xb;
  local_1b0 = -0x80000000;
  FUN_00664898(&local_1bc,&DAT_00590e5f,&local_1c4);
  if (local_1b0 != -0x80000000) {
    FUN_019bb7e0(local_1b0,local_1ac);
  }
  uVar3 = local_1b4;
  uVar2 = local_1b8;
  uVar1 = local_1bc;
  local_1b4 = 0;
  local_1b8 = 8;
  local_1bc = 0;
  FUN_0145a89c(&local_1b0,&local_1bc);
  FUN_01bed4e2((uint)auStack_340 | 4,&local_1b0,0x178);
  local_1ac = (char *)0x1;
  local_1a0 = uVar3;
  local_1a4 = uVar2;
  local_1a8 = uVar1;
  local_1b0 = 0;
  FUN_01bed4e2(auStack_19c,auStack_340,0x17c);
  FUN_01488824(param_1,&local_1b0);
  local_1ac = (char *)0x0;
  local_1b0 = 0;
  FUN_014889fc(param_1,&local_1b0);
  return;
}


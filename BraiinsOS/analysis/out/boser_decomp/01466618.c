// FUN_01466618 @ 01466618 size=216 calls_out=6 calls_in=2
// strings: Timestamp

void FUN_01466618(undefined4 param_1)

{
  undefined1 auStack_340 [380];
  undefined4 local_1c4;
  undefined4 uStack_1c0;
  undefined4 uStack_1bc;
  int *local_1b8;
  undefined1 *local_1b4;
  int local_1b0;
  char *local_1ac;
  undefined4 local_1a8;
  undefined4 uStack_1a4;
  undefined4 uStack_1a0;
  undefined1 auStack_19c [380];
  
  local_1b4 = &LAB_012b97d8;
  local_1b8 = &local_1b0;
  local_1ac = "Timestamp";
  local_1a8 = 9;
  local_1b0 = -0x80000000;
  FUN_00664898(&local_1c4,&DAT_00590e5f,&local_1b8);
  if (local_1b0 != -0x80000000) {
    FUN_019bb7e0(local_1b0,local_1ac);
  }
  FUN_01495f90(&local_1b0);
  FUN_01bed4e2((uint)auStack_340 | 4,&local_1b0,0x178);
  local_1a8 = local_1c4;
  uStack_1a4 = uStack_1c0;
  uStack_1a0 = uStack_1bc;
  local_1ac = (char *)0x1;
  local_1b0 = 0;
  FUN_01bed4e2(auStack_19c,auStack_340,0x17c);
  FUN_01488824(param_1,&local_1b0);
  local_1ac = (char *)0x0;
  local_1b0 = 0;
  FUN_014889fc(param_1,&local_1b0);
  return;
}


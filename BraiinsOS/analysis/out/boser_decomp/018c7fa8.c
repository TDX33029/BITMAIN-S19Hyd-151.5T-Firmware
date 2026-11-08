// FUN_018c7fa8 @ 018c7fa8 size=256 calls_out=8 calls_in=1
// strings: 

void FUN_018c7fa8(undefined4 param_1,undefined4 param_2,int param_3)

{
  undefined4 local_1a0;
  undefined4 uStack_19c;
  undefined4 local_198;
  int local_190;
  undefined4 local_18c;
  undefined4 local_188;
  undefined2 local_114;
  undefined1 *local_110;
  undefined4 local_10c;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined1 local_a4;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  
  local_198 = 0;
  local_1a0 = 0;
  uStack_19c = 1;
  if (0x61 < *(uint *)(param_3 + 4)) {
                    /* WARNING: Subroutine does not return */
    FUN_012faff4(0,*(uint *)(param_3 + 4),0x61,&DAT_01d2150c);
  }
  FUN_0193a93c(&local_a0,param_3 + 8);
  FUN_018c42d4(local_9c,local_98,&local_1a0);
  local_10c = local_1a0;
  uStack_108 = uStack_19c;
  uStack_104 = local_198;
  local_a4 = 0xd;
  local_110 = &DAT_8000000c;
  FUN_018e1c0c(&local_a0);
  local_114 = 4;
  FUN_01bed4e2(&local_190,&local_a0,0x7c);
  if (-1 < local_190) {
    FUN_018dc0bc(param_1,local_18c,local_188);
  }
  FUN_01bed4e2(&local_a0,&local_190,0x80);
  FUN_018e077c(param_2,&local_a0,0);
  FUN_0134bd64(local_a0,local_9c);
  return;
}


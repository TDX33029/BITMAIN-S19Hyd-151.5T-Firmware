// FUN_01825a98 @ 01825a98 size=580 calls_out=5 calls_in=1
// strings: 

undefined8 FUN_01825a98(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined1 auStack_120 [104];
  undefined1 auStack_b8 [108];
  undefined1 auStack_4c [32];
  int local_2c;
  
  local_2c = DAT_018ddaf8;
  FUN_016dd606(param_1,1,0x20,0);
  FUN_016dd606(param_1 + 0x20,0,0x20);
  FUN_01823bf8(auStack_120,param_1 + 0x20);
  FUN_0182169c(auStack_120,param_1,0x20);
  FUN_0182169c(auStack_120,&DAT_00563a8c,1);
  FUN_0182169c(auStack_120,param_2,param_3);
  FUN_018239f4(auStack_120,auStack_4c);
  FUN_0182169c(auStack_b8,auStack_4c,0x20);
  FUN_016dd606(auStack_4c,0,0x20);
  FUN_018239f4(auStack_b8,param_1 + 0x20);
  FUN_01823bf8(auStack_120,param_1 + 0x20);
  FUN_0182169c(auStack_120,param_1,0x20);
  FUN_018239f4(auStack_120,auStack_4c);
  FUN_0182169c(auStack_b8,auStack_4c,0x20);
  FUN_016dd606(auStack_4c,0,0x20);
  FUN_018239f4(auStack_b8,param_1);
  FUN_01823bf8(auStack_120,param_1 + 0x20);
  FUN_0182169c(auStack_120,param_1,0x20);
  FUN_0182169c(auStack_120,&DAT_00563a88,1);
  FUN_0182169c(auStack_120,param_2,param_3);
  FUN_018239f4(auStack_120,auStack_4c);
  FUN_0182169c(auStack_b8,auStack_4c,0x20);
  FUN_016dd606(auStack_4c,0,0x20);
  FUN_018239f4(auStack_b8,param_1 + 0x20);
  FUN_01823bf8(auStack_120,param_1 + 0x20);
  FUN_0182169c(auStack_120,param_1,0x20);
  FUN_018239f4(auStack_120,auStack_4c);
  FUN_0182169c(auStack_b8,auStack_4c,0x20);
  FUN_016dd606(auStack_4c,0,0x20);
  FUN_018239f4(auStack_b8,param_1);
  *(undefined4 *)(param_1 + 0x40) = 0;
  if (local_2c != DAT_018ddaf8) {
                    /* WARNING: Subroutine does not return */
    FUN_016d2b78();
  }
  return 0;
}


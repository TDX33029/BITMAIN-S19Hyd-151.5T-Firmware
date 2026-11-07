// FUN_01b26734 @ 01b26734 size=496 calls_out=7 calls_in=1
// strings: 

undefined8 FUN_01b26734(int param_1,int param_2,uint param_3)

{
  uint uVar1;
  undefined1 auStack_cc [40];
  undefined1 auStack_a4 [40];
  undefined1 auStack_7c [40];
  undefined1 auStack_54 [40];
  int local_2c;
  
  local_2c = DAT_01d53560;
  uVar1 = param_3 + (param_3 & (int)param_3 >> 0x1f) * -2;
  FUN_01b2650c();
  FUN_01b2650c(param_1 + 0x28);
  FUN_01b26554(param_1 + 0x50);
  param_2 = param_2 * 0x3c0;
  FUN_01b0d618(param_1,&UNK_00556800 + param_2,((uVar1 ^ 1) & 0xff) - 1 >> 0x1f);
  FUN_01b0d618(param_1,&UNK_00556878 + param_2,((uVar1 ^ 2) & 0xff) - 1 >> 0x1f);
  FUN_01b0d618(param_1,&UNK_005568f0 + param_2,((uVar1 ^ 3) & 0xff) - 1 >> 0x1f);
  FUN_01b0d618(param_1,&UNK_00556968 + param_2,((uVar1 ^ 4) & 0xff) - 1 >> 0x1f);
  FUN_01b0d618(param_1,&UNK_005569e0 + param_2,((uVar1 ^ 5) & 0xff) - 1 >> 0x1f);
  FUN_01b0d618(param_1,&UNK_00556a58 + param_2,((uVar1 ^ 6) & 0xff) - 1 >> 0x1f);
  FUN_01b0d618(param_1,&UNK_00556ad0 + param_2,((uVar1 ^ 7) & 0xff) - 1 >> 0x1f);
  FUN_01b0d618(param_1,&UNK_00556b48 + param_2,((uVar1 ^ 8) & 0xff) - 1 >> 0x1f);
  FUN_01b2662c(auStack_a4,param_1 + 0x28);
  FUN_01b2662c(auStack_7c,param_1);
  FUN_01b2233c(auStack_cc,param_1 + 0x50);
  FUN_01b221ac(auStack_54,auStack_cc);
  FUN_01b0d618(param_1,auStack_a4,param_3 >> 0x1f);
  if (local_2c != DAT_01d53560) {
                    /* WARNING: Subroutine does not return */
    FUN_01be31f4();
  }
  return 0;
}


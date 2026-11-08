// FUN_01b3f8c0 @ 01b3f8c0 size=1056 calls_out=8 calls_in=7
// strings: 

undefined8 FUN_01b3f8c0(undefined4 param_1,int param_2,int param_3,int param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined1 auStack_4b0 [68];
  undefined1 auStack_46c [68];
  undefined1 auStack_428 [68];
  undefined1 auStack_3e4 [68];
  undefined1 auStack_3a0 [68];
  undefined1 auStack_35c [68];
  undefined1 auStack_318 [68];
  undefined1 auStack_2d4 [68];
  undefined1 auStack_290 [68];
  undefined1 auStack_24c [68];
  undefined1 auStack_208 [68];
  undefined1 auStack_1c4 [68];
  undefined1 auStack_180 [68];
  undefined1 auStack_13c [68];
  undefined1 auStack_f8 [68];
  undefined1 auStack_b4 [68];
  undefined1 auStack_70 [68];
  int local_2c;
  
  local_2c = DAT_01d53560;
  uVar4 = 0;
  if (param_3 != param_4) {
    uVar1 = FUN_01b3f320(param_1,param_3 + 0x88);
    uVar2 = FUN_01b3f320(param_1,param_4 + 0x88);
    FUN_01b336f4(param_1,auStack_3e4,param_3 + 0x88);
    FUN_01b336f4(param_1,auStack_3a0,param_4 + 0x88);
    FUN_01b3369c(param_1,auStack_35c,param_3,auStack_3a0);
    FUN_01b3ecc0(param_1,auStack_318,param_3 + 0x88,param_4 + 0x88);
    FUN_01b336f4(param_1,auStack_318,auStack_318);
    FUN_01b3ed6c(param_1,auStack_318,auStack_318,auStack_3e4);
    FUN_01b3ed6c(param_1,auStack_318,auStack_318,auStack_3a0);
    FUN_01b3369c(param_1,auStack_2d4,param_4 + 0x88,auStack_3a0);
    FUN_01b3369c(param_1,auStack_2d4);
    FUN_01b3369c(param_1,auStack_290,param_4,auStack_3e4);
    FUN_01b3ed6c(param_1,auStack_24c,auStack_290,auStack_35c);
    uVar4 = FUN_01b3f320(param_1,auStack_24c);
    FUN_01b3369c(param_1,auStack_428,auStack_24c,auStack_318);
    FUN_01b3369c(param_1,auStack_208,param_3 + 0x88,auStack_3e4);
    FUN_01b3369c(param_1,auStack_1c4,param_4 + 0x44,auStack_208);
    FUN_01b3ed6c(param_1,auStack_180,auStack_1c4,auStack_2d4);
    FUN_01b3ecc0(param_1,auStack_180,auStack_180,auStack_180);
    uVar3 = FUN_01b3f320(param_1,auStack_180);
    uVar4 = uVar1 & uVar2 & ~(uVar4 | uVar3);
    if (uVar4 == 0) {
      FUN_01b3ecc0(param_1,auStack_13c,auStack_24c,auStack_24c);
      FUN_01b336f4(param_1,auStack_13c,auStack_13c);
      FUN_01b3369c(param_1,auStack_f8,auStack_24c,auStack_13c);
      FUN_01b3369c(param_1,auStack_b4,auStack_35c,auStack_13c);
      FUN_01b336f4(param_1,auStack_4b0,auStack_180);
      FUN_01b3ed6c(param_1,auStack_4b0,auStack_4b0,auStack_f8);
      FUN_01b3ed6c(param_1,auStack_4b0,auStack_4b0,auStack_b4);
      FUN_01b3ed6c(param_1,auStack_4b0,auStack_4b0,auStack_b4);
      FUN_01b3ed6c(param_1,auStack_46c,auStack_b4,auStack_4b0);
      FUN_01b3369c(param_1,auStack_46c,auStack_46c,auStack_180);
      FUN_01b3369c(param_1,auStack_70,auStack_2d4,auStack_f8);
      FUN_01b3ed6c(param_1,auStack_46c,auStack_46c,auStack_70);
      FUN_01b3ed6c(param_1,auStack_46c,auStack_46c,auStack_70);
      FUN_01b3f81c(param_1,auStack_4b0,uVar1,auStack_4b0,param_4);
      FUN_01b3f81c(param_1,param_2,uVar2,auStack_4b0,param_3);
      FUN_01b3f81c(param_1,auStack_46c,uVar1,auStack_46c,param_4 + 0x44);
      FUN_01b3f81c(param_1,param_2 + 0x44,uVar2,auStack_46c,param_3 + 0x44);
      FUN_01b3f81c(param_1,auStack_428,uVar1,auStack_428,param_4 + 0x88);
      FUN_01b3f81c(param_1,param_2 + 0x88,uVar2,auStack_428,param_3 + 0x88);
      goto LAB_01b3f920;
    }
  }
  FUN_01b3ee18(param_1,param_2,param_3,uVar4);
LAB_01b3f920:
  if (local_2c != DAT_01d53560) {
                    /* WARNING: Subroutine does not return */
    FUN_01be31f4();
  }
  return 0;
}


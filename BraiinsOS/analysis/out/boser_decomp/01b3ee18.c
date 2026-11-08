// FUN_01b3ee18 @ 01b3ee18 size=1276 calls_out=6 calls_in=8
// strings: 

undefined8 FUN_01b3ee18(int param_1,int param_2,int param_3)

{
  undefined1 *puVar1;
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
  if (*(int *)(param_1 + 0x1d0) == 0) {
    FUN_01b336f4(param_1,auStack_1c4);
    FUN_01b336f4(param_1,auStack_180,param_3 + 0x44);
    FUN_01b336f4(param_1,auStack_13c,auStack_180);
    FUN_01b336f4(param_1,auStack_f8,param_3 + 0x88);
    FUN_01b3ecc0(param_1,auStack_b4,param_3,auStack_180);
    FUN_01b336f4(param_1,auStack_b4,auStack_b4);
    FUN_01b3ed6c(param_1,auStack_b4,auStack_b4,auStack_1c4);
    FUN_01b3ed6c(param_1,auStack_b4,auStack_b4,auStack_13c);
    FUN_01b3ecc0(param_1,auStack_b4,auStack_b4,auStack_b4);
    FUN_01b336f4(param_1,auStack_70,auStack_f8);
    FUN_01b3369c(param_1,auStack_70,param_1 + 0x134,auStack_70);
    FUN_01b3ecc0(param_1,auStack_70,auStack_70,auStack_1c4);
    FUN_01b3ecc0(param_1,auStack_70,auStack_70,auStack_1c4);
    FUN_01b3ecc0(param_1,auStack_70,auStack_70,auStack_1c4);
    FUN_01b336f4(param_1,param_2,auStack_70);
    FUN_01b3ed6c(param_1,param_2,param_2,auStack_b4);
    FUN_01b3ed6c(param_1,param_2,param_2,auStack_b4);
    FUN_01b3ecc0(param_1,param_2 + 0x88,param_3 + 0x44,param_3 + 0x88);
    FUN_01b336f4(param_1,param_2 + 0x88,param_2 + 0x88);
    FUN_01b3ed6c(param_1,param_2 + 0x88,param_2 + 0x88,auStack_180);
    FUN_01b3ed6c(param_1,param_2 + 0x88,param_2 + 0x88,auStack_f8);
    FUN_01b3ecc0(param_1,auStack_13c,auStack_13c,auStack_13c);
    FUN_01b3ecc0(param_1,auStack_13c,auStack_13c,auStack_13c);
    FUN_01b3ecc0(param_1,auStack_13c,auStack_13c,auStack_13c);
    FUN_01b3ed6c(param_1,param_2 + 0x44,auStack_b4,param_2);
    FUN_01b3369c(param_1,param_2 + 0x44,param_2 + 0x44,auStack_70);
    puVar1 = auStack_13c;
  }
  else {
    FUN_01bed93e(auStack_24c,0,0x44);
    FUN_01bed93e(auStack_208,0,0x44);
    FUN_01bed93e(auStack_1c4,0,0x44);
    FUN_01bed93e(auStack_180,0,0x44);
    FUN_01bed93e(auStack_13c,0,0x44);
    FUN_01bed93e(auStack_f8,0,0x44);
    FUN_01bed93e(auStack_b4,0,0x44);
    FUN_01bed93e(auStack_70,0,0x44);
    FUN_01b336f4(param_1,auStack_24c,param_3 + 0x88);
    FUN_01b336f4(param_1,auStack_208,param_3 + 0x44);
    FUN_01b3369c(param_1,auStack_1c4,param_3,auStack_208);
    FUN_01b3ed6c(param_1,auStack_180,param_3,auStack_24c);
    FUN_01b3ecc0(param_1,auStack_13c,param_3,auStack_24c);
    FUN_01b3ecc0(param_1,auStack_f8,auStack_13c,auStack_13c);
    FUN_01b3ecc0(param_1,auStack_13c,auStack_13c,auStack_f8);
    FUN_01b3369c(param_1,auStack_b4,auStack_180,auStack_13c);
    FUN_01b336f4(param_1,param_2,auStack_b4);
    FUN_01b3ecc0(param_1,auStack_70,auStack_1c4);
    FUN_01b3ecc0(param_1,auStack_70,auStack_70,auStack_70);
    FUN_01b3ecc0(param_1,auStack_f8,auStack_70,auStack_70);
    FUN_01b3ed6c(param_1,param_2,param_2,auStack_f8);
    FUN_01b3ecc0(param_1,auStack_24c,auStack_208,auStack_24c);
    FUN_01b3ecc0(param_1,auStack_180,param_3 + 0x44,param_3 + 0x88);
    FUN_01b336f4(param_1,param_2 + 0x88,auStack_180);
    FUN_01b3ed6c(param_1,param_2 + 0x88,param_2 + 0x88,auStack_24c);
    FUN_01b3ed6c(param_1,param_2 + 0x44,auStack_70,param_2);
    FUN_01b3ecc0(param_1,auStack_208,auStack_208,auStack_208);
    FUN_01b336f4(param_1,auStack_208,auStack_208);
    FUN_01b3369c(param_1,param_2 + 0x44,auStack_b4,param_2 + 0x44);
    FUN_01b3ecc0(param_1,auStack_208,auStack_208,auStack_208);
    puVar1 = auStack_208;
  }
  FUN_01b3ed6c(param_1,param_2 + 0x44,param_2 + 0x44,puVar1);
  if (local_2c != DAT_01d53560) {
                    /* WARNING: Subroutine does not return */
    FUN_01be31f4();
  }
  return 0;
}


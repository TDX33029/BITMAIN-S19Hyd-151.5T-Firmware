// FUN_01bd003c @ 01bd003c size=472 calls_out=7 calls_in=2
// strings: 

undefined8 FUN_01bd003c(int param_1,int param_2)

{
  undefined1 auStack_ec [48];
  undefined1 auStack_bc [48];
  undefined1 auStack_8c [48];
  undefined1 auStack_5c [48];
  int local_2c;
  
  local_2c = DAT_01d53560;
  FUN_01bd5320(auStack_ec,param_2 + 0x30,&DAT_005642d4,0xc);
  FUN_01bcfd10(auStack_8c,param_2 + 0x60);
  FUN_01bcfd10(auStack_ec,auStack_ec);
  FUN_01bcfcb0(param_1 + 0x60,param_2 + 0x60,param_2 + 0x30);
  FUN_01bd5320(param_1 + 0x60,param_1 + 0x60,&DAT_005642d4,0xc);
  FUN_01bd5160(auStack_bc,param_2,auStack_8c,&DAT_005642d4,0xc);
  FUN_01bcfc60(auStack_8c,param_2,auStack_8c);
  FUN_01bcfd10(param_1 + 0x30,auStack_ec);
  FUN_01bcfd78(param_1 + 0x30);
  FUN_01bcfcb0(auStack_bc,auStack_bc,auStack_8c);
  FUN_01bd5160(auStack_5c,auStack_bc,auStack_bc,&DAT_005642d4,0xc);
  FUN_01bd5160(auStack_bc,auStack_5c,auStack_bc,&DAT_005642d4,0xc);
  FUN_01bcfcb0(auStack_ec,auStack_ec,param_2);
  FUN_01bd5320(auStack_5c,auStack_ec,&DAT_005642d4,0xc);
  FUN_01bcfd10(param_1,auStack_bc);
  FUN_01bcfc60(param_1,param_1,auStack_5c);
  FUN_01bcfc60(auStack_ec,auStack_ec,param_1);
  FUN_01bcfcb0(auStack_ec,auStack_ec,auStack_bc);
  FUN_01bcfc60(param_1 + 0x30,auStack_ec);
  if (local_2c != DAT_01d53560) {
                    /* WARNING: Subroutine does not return */
    FUN_01be31f4();
  }
  return 0;
}


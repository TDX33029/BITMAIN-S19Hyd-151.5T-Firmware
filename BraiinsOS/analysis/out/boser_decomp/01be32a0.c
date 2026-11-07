// FUN_01be32a0 @ 01be32a0 size=94 calls_out=3 calls_in=100
// strings: 

void FUN_01be32a0(void)

{
  code *pcVar1;
  undefined4 in_cr0;
  undefined4 in_cr13;
  
  FUN_01bea712(6);
  FUN_01bea6b8(0);
  FUN_01bedf2c(&DAT_01d53564);
  software_interrupt(0);
  coprocessor_movefromRt(0xf,0,3,in_cr13,in_cr0);
  software_interrupt(0);
  software_interrupt(0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)software_udf(0xff,0x1be32fc);
  (*pcVar1)();
}


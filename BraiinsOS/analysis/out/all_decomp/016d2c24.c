// FUN_016d2c24 @ 016d2c24 size=94 calls_out=3 calls_in=115
// strings: 

void FUN_016d2c24(void)

{
  code *pcVar1;
  undefined4 in_cr0;
  undefined4 in_cr13;
  
  FUN_016da4d6(6);
  FUN_016da47c(0);
  FUN_016ddcc0(&DAT_018ddafc);
  software_interrupt(0);
  coprocessor_movefromRt(0xf,0,3,in_cr13,in_cr0);
  software_interrupt(0);
  software_interrupt(0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)software_udf(0xff,0x16d2c80);
  (*pcVar1)();
}


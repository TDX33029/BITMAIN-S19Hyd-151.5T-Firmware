// FUN_00c6f3f8 @ 00c6f3f8 size=160 calls_out=3 calls_in=2
// strings: 

void FUN_00c6f3f8(int param_1,int param_2)

{
  uint in_fpscr;
  double dVar1;
  double dVar2;
  int local_40 [6];
  
  dVar2 = (double)FUN_01845f30(*(undefined4 *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x14));
  dVar1 = (double)VectorUnsignedToFloat
                            (*(undefined4 *)(param_1 + 0x18),(byte)(in_fpscr >> 0x16) & 3);
  if (dVar1 / 1000000000.0 + dVar2 == 0.0) {
                    /* WARNING: Subroutine does not return */
    FUN_00fb74f8(&DAT_0034ad94,0x1f,local_40,&DAT_0186ab28,&DAT_0186aae8);
  }
  FUN_009d4790(local_40,*(undefined4 *)(param_1 + 0x6c),*(undefined4 *)(param_1 + 0x70),
               param_2 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x00c6f46c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&LAB_00c6f470 + *(int *)(&LAB_00c6f470 + local_40[0] * 4)))();
  return;
}


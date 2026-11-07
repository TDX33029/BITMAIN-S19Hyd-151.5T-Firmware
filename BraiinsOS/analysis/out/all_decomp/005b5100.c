// entry @ 005b5100 size=77 calls_out=1 calls_in=0
// strings: 

void entry(void)

{
  undefined4 *puVar1;
  undefined4 extraout_s0;
  undefined4 extraout_s1;
  undefined8 unaff_d11;
  
                    /* WARNING: Call to offcut address within same function */
  puVar1 = (undefined4 *)func_0x005b511c();
  VectorShiftLeftInsert(unaff_d11,CONCAT44(extraout_s1,extraout_s0),4);
  thunk_FUN_016d2b04(FUN_00ecb05c,*puVar1,puVar1 + 1,FUN_005b5090 + 1,&LAB_005b5070_1,0);
  return;
}


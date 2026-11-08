// entry @ 005cff00 size=77 calls_out=1 calls_in=0
// strings: 

void entry(void)

{
  undefined4 *puVar1;
  undefined4 extraout_s0;
  undefined4 extraout_s1;
  undefined8 unaff_d11;
  
                    /* WARNING: Call to offcut address within same function */
  puVar1 = (undefined4 *)func_0x005cff1c();
  VectorShiftLeftInsert(unaff_d11,CONCAT44(extraout_s1,extraout_s0),3);
  thunk_FUN_01be3180(FUN_0065185c,*puVar1,puVar1 + 1,FUN_005cfecc + 1,&LAB_005cfeac_1,0);
  return;
}


// FUN_0173f97c @ 0173f97c size=96 calls_out=1 calls_in=2
// strings: 

undefined8 FUN_0173f97c(uint param_1,uint param_2)

{
  code *pcVar1;
  
  if (param_1 < param_2) {
    if (param_2 < param_1 + 0x4c0) {
LAB_0173f9d8:
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0,0x173f9d8);
      (*pcVar1)();
    }
  }
  else if ((param_1 != param_2) && (param_1 < param_2 + 0x4c0)) goto LAB_0173f9d8;
  FUN_016dd1aa(param_1,param_2,0x4c0);
  return 1;
}


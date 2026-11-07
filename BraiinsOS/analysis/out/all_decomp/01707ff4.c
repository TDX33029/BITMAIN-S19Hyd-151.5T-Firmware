// FUN_01707ff4 @ 01707ff4 size=60 calls_out=0 calls_in=1
// strings: 

void FUN_01707ff4(uint param_1,uint param_2,int param_3)

{
  code *pcVar1;
  
  if (param_1 < param_2) {
    if (param_2 < param_1 + param_3) {
LAB_0170802c:
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0,0x170802c);
      (*pcVar1)();
    }
  }
  else if ((param_1 != param_2) && (param_1 < param_2 + param_3)) goto LAB_0170802c;
  FUN_016dd1aa();
  return;
}


// FUN_01b6c2a0 @ 01b6c2a0 size=60 calls_out=0 calls_in=3
// strings: 

void FUN_01b6c2a0(uint param_1,uint param_2,int param_3)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 < param_2) {
    bVar2 = param_1 + param_3 <= param_2;
  }
  else {
    if (param_1 == param_2) goto LAB_014d2044;
    bVar2 = param_2 + param_3 <= param_1;
  }
  if (!bVar2) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0,0x1b6c2bc);
    (*pcVar1)();
  }
LAB_014d2044:
  FUN_01bed4e2();
  return;
}


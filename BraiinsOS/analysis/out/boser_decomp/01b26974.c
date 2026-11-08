// FUN_01b26974 @ 01b26974 size=100 calls_out=0 calls_in=68
// strings: 

undefined4 FUN_01b26974(uint param_1,uint param_2,int param_3)

{
  code *pcVar1;
  undefined4 uVar2;
  bool bVar3;
  
  if (param_3 == 0) {
    return 0;
  }
  if (param_1 < param_2) {
    bVar3 = param_1 + param_3 <= param_2;
  }
  else {
    if (param_1 == param_2) goto LAB_014d2044;
    bVar3 = param_2 + param_3 <= param_1;
  }
  if (!bVar3) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0,0x1b26998);
    (*pcVar1)();
  }
LAB_014d2044:
  uVar2 = FUN_01bed4e2();
  return uVar2;
}


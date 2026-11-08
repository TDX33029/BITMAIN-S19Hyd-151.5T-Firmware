// FUN_0177b624 @ 0177b624 size=212 calls_out=2 calls_in=12
// strings: 

undefined4 FUN_0177b624(uint param_1,int param_2)

{
  code *pcVar1;
  uint uVar2;
  undefined4 uVar3;
  
  if (param_2 == 0) {
    return 0;
  }
  uVar2 = FUN_0177a6c0(param_2);
  if (uVar2 == 0) {
    return 0;
  }
  if (uVar2 < param_1) {
    if (param_1 < uVar2 + param_2) goto LAB_0177b6b4;
  }
  else if ((param_1 < uVar2) && (uVar2 < param_1 + param_2)) {
LAB_0177b6b4:
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0,0x177b6b4);
    (*pcVar1)();
  }
  uVar3 = FUN_016dd1aa(uVar2);
  return uVar3;
}


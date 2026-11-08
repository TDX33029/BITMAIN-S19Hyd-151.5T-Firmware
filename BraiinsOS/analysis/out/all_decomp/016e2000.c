// FUN_016e2000 @ 016e2000 size=172 calls_out=1 calls_in=1
// strings: 

undefined8 FUN_016e2000(uint *param_1,uint param_2,uint param_3)

{
  code *pcVar1;
  uint uVar2;
  
  if (param_1[1] < param_3) {
    return 0;
  }
  uVar2 = *param_1;
  param_1[1] = param_1[1] - param_3;
  *param_1 = uVar2 + param_3;
  if (param_3 != 0) {
    if (param_2 < uVar2) {
      if (uVar2 < param_2 + param_3) {
LAB_016e20a8:
                    /* WARNING: Does not return */
        pcVar1 = (code *)software_udf(0,0x16e20a8);
        (*pcVar1)();
      }
    }
    else if (param_2 < uVar2 + param_3 && param_2 != uVar2) goto LAB_016e20a8;
    FUN_016dd1aa(param_2,uVar2);
  }
  return 1;
}


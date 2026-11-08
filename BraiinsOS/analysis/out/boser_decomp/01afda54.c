// FUN_01afda54 @ 01afda54 size=156 calls_out=1 calls_in=1
// strings: 

undefined8 FUN_01afda54(uint *param_1,uint param_2,uint param_3)

{
  code *pcVar1;
  uint uVar2;
  bool bVar3;
  
  if (param_1[1] < param_3) {
    return 0;
  }
  uVar2 = *param_1;
  param_1[1] = param_1[1] - param_3;
  *param_1 = uVar2 + param_3;
  if (param_3 == 0) {
    return 1;
  }
  if (param_2 < uVar2) {
    bVar3 = param_2 + param_3 <= uVar2;
  }
  else {
    if (param_2 == uVar2) goto LAB_01afdab4;
    bVar3 = uVar2 + param_3 <= param_2;
  }
  if (!bVar3) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0,0x1afdaa4);
    (*pcVar1)();
  }
LAB_01afdab4:
  FUN_01bed4e2(param_2,uVar2);
  return 1;
}


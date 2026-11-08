// FUN_01b092a8 @ 01b092a8 size=84 calls_out=0 calls_in=3
// strings: 

undefined8 FUN_01b092a8(undefined4 *param_1,undefined4 *param_2)

{
  code *pcVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  bool bVar4;
  
  puVar3 = param_2 + 8;
  if (param_1 < param_2) {
    bVar4 = param_1 + 8 <= param_2;
  }
  else {
    if (param_1 == param_2) goto LAB_01b092d8;
    bVar4 = puVar3 <= param_1;
  }
  if (!bVar4) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0,0x1b092c8);
    (*pcVar1)();
  }
LAB_01b092d8:
  do {
    puVar2 = param_2 + 1;
    *param_1 = *param_2;
    param_1 = param_1 + 1;
    param_2 = puVar2;
  } while (puVar2 != puVar3);
  return 0;
}


// FUN_00b1d558 @ 00b1d558 size=120 calls_out=3 calls_in=2
// strings: 

void FUN_00b1d558(uint *param_1,uint param_2,undefined4 param_3,undefined4 param_4)

{
  code *pcVar1;
  uint uVar2;
  undefined4 *puVar3;
  
  uVar2 = param_1[2];
  if (uVar2 < param_2) {
    FUN_00666488(param_2,uVar2,param_4);
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xfdee,0xb1d5cc);
    (*pcVar1)();
  }
  if (uVar2 == *param_1) {
    FUN_007b4428(param_1);
  }
  puVar3 = (undefined4 *)(param_1[1] + param_2 * 4);
  if (param_2 < uVar2) {
    FUN_01bed864(puVar3 + 1,puVar3,(uVar2 - param_2) * 4);
  }
  param_1[2] = uVar2 + 1;
  *puVar3 = param_3;
  return;
}


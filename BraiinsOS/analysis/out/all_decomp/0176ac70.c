// FUN_0176ac70 @ 0176ac70 size=408 calls_out=3 calls_in=1
// strings: 

undefined8 FUN_0176ac70(uint param_1,uint *param_2,int param_3,uint *param_4,int param_5)

{
  code *pcVar1;
  uint uVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  if (((param_1 == 0) || (*param_2 < 0x620 || param_3 == 0)) || (*param_4 < 0xc60)) {
    return 1;
  }
  FUN_0176a368(param_1,param_3,param_5);
  uVar2 = param_3 + 0x600;
  if (uVar2 < param_1) {
    if (param_1 < param_3 + 0xc20U) goto LAB_0176ac54;
  }
  else if ((param_1 < uVar2) && (uVar2 < param_1 + 0x620)) goto LAB_0176ac54;
  FUN_016dd1aa(uVar2,param_1,0x620);
  FUN_017572d0(param_1,0x620,param_3 + 0xc20);
  uVar4 = param_3 + 0xc40;
  uVar2 = param_5 + 0x20;
  if (uVar4 < uVar2) {
    if (uVar2 < param_3 + 0xc60U) {
LAB_0176ac54:
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0,0x176ac54);
      (*pcVar1)();
    }
  }
  else if ((uVar4 != uVar2) && (uVar4 < param_5 + 0x40U)) goto LAB_0176ac54;
  uVar5 = *(undefined4 *)(param_5 + 0x24);
  uVar3 = *(undefined4 *)(param_5 + 0x28);
  uVar6 = *(undefined4 *)(param_5 + 0x20);
  *(undefined4 *)(param_3 + 0xc4c) = *(undefined4 *)(param_5 + 0x2c);
  *(undefined4 *)(param_3 + 0xc40) = uVar6;
  *(undefined4 *)(param_3 + 0xc44) = uVar5;
  *(undefined4 *)(param_3 + 0xc48) = uVar3;
  uVar3 = *(undefined4 *)(param_5 + 0x38);
  uVar6 = *(undefined4 *)(param_5 + 0x34);
  uVar5 = *(undefined4 *)(param_5 + 0x3c);
  *(undefined4 *)(param_3 + 0xc50) = *(undefined4 *)(param_5 + 0x30);
  *(undefined4 *)(param_3 + 0xc58) = uVar3;
  *(undefined4 *)(param_3 + 0xc54) = uVar6;
  *(undefined4 *)(param_3 + 0xc5c) = uVar5;
  *param_2 = 0x620;
  *param_4 = 0xc60;
  return 0;
}


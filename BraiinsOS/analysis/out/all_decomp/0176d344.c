// FUN_0176d344 @ 0176d344 size=408 calls_out=3 calls_in=1
// strings: 

undefined8 FUN_0176d344(uint param_1,uint *param_2,int param_3,uint *param_4,int param_5)

{
  code *pcVar1;
  uint uVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  if (((param_1 == 0) || (*param_2 < 0x4a0 || param_3 == 0)) || (*param_4 < 0x960)) {
    return 1;
  }
  FUN_0176cb80(param_1,param_3,param_5);
  uVar2 = param_3 + 0x480;
  if (uVar2 < param_1) {
    if (param_1 < param_3 + 0x920U) goto LAB_0176d328;
  }
  else if ((param_1 < uVar2) && (uVar2 < param_1 + 0x4a0)) goto LAB_0176d328;
  FUN_016dd1aa(uVar2,param_1,0x4a0);
  FUN_017572d0(param_1,0x4a0,param_3 + 0x920);
  uVar4 = param_3 + 0x940;
  uVar2 = param_5 + 0x20;
  if (uVar4 < uVar2) {
    if (uVar2 < param_3 + 0x960U) {
LAB_0176d328:
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0,0x176d328);
      (*pcVar1)();
    }
  }
  else if ((uVar4 != uVar2) && (uVar4 < param_5 + 0x40U)) goto LAB_0176d328;
  uVar5 = *(undefined4 *)(param_5 + 0x24);
  uVar3 = *(undefined4 *)(param_5 + 0x28);
  uVar6 = *(undefined4 *)(param_5 + 0x20);
  *(undefined4 *)(param_3 + 0x94c) = *(undefined4 *)(param_5 + 0x2c);
  *(undefined4 *)(param_3 + 0x940) = uVar6;
  *(undefined4 *)(param_3 + 0x944) = uVar5;
  *(undefined4 *)(param_3 + 0x948) = uVar3;
  uVar3 = *(undefined4 *)(param_5 + 0x38);
  uVar6 = *(undefined4 *)(param_5 + 0x34);
  uVar5 = *(undefined4 *)(param_5 + 0x3c);
  *(undefined4 *)(param_3 + 0x950) = *(undefined4 *)(param_5 + 0x30);
  *(undefined4 *)(param_3 + 0x958) = uVar3;
  *(undefined4 *)(param_3 + 0x954) = uVar6;
  *(undefined4 *)(param_3 + 0x95c) = uVar5;
  *param_2 = 0x4a0;
  *param_4 = 0x960;
  return 0;
}


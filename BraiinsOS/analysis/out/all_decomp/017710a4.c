// FUN_017710a4 @ 017710a4 size=408 calls_out=3 calls_in=1
// strings: 

undefined8 FUN_017710a4(uint param_1,uint *param_2,int param_3,uint *param_4,int param_5)

{
  code *pcVar1;
  uint uVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  if (((param_1 == 0) || (*param_2 < 800 || param_3 == 0)) || (*param_4 < 0x660)) {
    return 1;
  }
  FUN_017703d0(param_1,param_3,param_5);
  uVar2 = param_3 + 0x300;
  if (uVar2 < param_1) {
    if (param_1 < param_3 + 0x620U) goto LAB_01771088;
  }
  else if ((param_1 < uVar2) && (uVar2 < param_1 + 800)) goto LAB_01771088;
  FUN_016dd1aa(uVar2,param_1,800);
  FUN_017572d0(param_1,800,param_3 + 0x620);
  uVar4 = param_3 + 0x640;
  uVar2 = param_5 + 0x20;
  if (uVar4 < uVar2) {
    if (uVar2 < param_3 + 0x660U) {
LAB_01771088:
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0,0x1771088);
      (*pcVar1)();
    }
  }
  else if ((uVar4 != uVar2) && (uVar4 < param_5 + 0x40U)) goto LAB_01771088;
  uVar5 = *(undefined4 *)(param_5 + 0x24);
  uVar3 = *(undefined4 *)(param_5 + 0x28);
  uVar6 = *(undefined4 *)(param_5 + 0x20);
  *(undefined4 *)(param_3 + 0x64c) = *(undefined4 *)(param_5 + 0x2c);
  *(undefined4 *)(param_3 + 0x640) = uVar6;
  *(undefined4 *)(param_3 + 0x644) = uVar5;
  *(undefined4 *)(param_3 + 0x648) = uVar3;
  uVar3 = *(undefined4 *)(param_5 + 0x38);
  uVar6 = *(undefined4 *)(param_5 + 0x34);
  uVar5 = *(undefined4 *)(param_5 + 0x3c);
  *(undefined4 *)(param_3 + 0x650) = *(undefined4 *)(param_5 + 0x30);
  *(undefined4 *)(param_3 + 0x658) = uVar3;
  *(undefined4 *)(param_3 + 0x654) = uVar6;
  *(undefined4 *)(param_3 + 0x65c) = uVar5;
  *param_2 = 800;
  *param_4 = 0x660;
  return 0;
}


// FUN_01b265f4 @ 01b265f4 size=56 calls_out=0 calls_in=3
// strings: 

undefined8 FUN_01b265f4(byte *param_1,byte *param_2,int param_3)

{
  byte *pbVar1;
  byte *pbVar2;
  byte *pbVar3;
  uint uVar4;
  byte *pbVar5;
  undefined8 uVar6;
  
  if (param_3 == 0) {
    return 0;
  }
  pbVar1 = param_2;
  if (param_1 != param_2) {
    if (param_2 + (-(int)param_1 - param_3) <= (byte *)(param_3 * -2)) {
      uVar6 = FUN_01bed4e2();
      return uVar6;
    }
    uVar4 = ((uint)param_1 ^ (uint)param_2) & 3;
    if (param_1 < param_2) {
      pbVar2 = param_1;
      pbVar5 = param_1;
      if (uVar4 == 0) {
        for (; pbVar1 = param_1 + param_3 + -(int)pbVar2, ((uint)pbVar2 & 3) != 0;
            pbVar2 = pbVar2 + 1) {
          if (pbVar2 == param_1 + param_3) goto LAB_01bed8e4;
          *pbVar2 = *param_2;
          param_2 = param_2 + 1;
        }
        uVar4 = (uint)pbVar1 & 0xfffffffc;
        pbVar3 = param_2 + -4;
        pbVar5 = pbVar2 + uVar4;
        for (; pbVar2 != pbVar5; pbVar2 = pbVar2 + 4) {
          pbVar3 = pbVar3 + 4;
          *(undefined4 *)pbVar2 = *(undefined4 *)pbVar3;
        }
        param_3 = (int)pbVar1 - uVar4;
        param_2 = param_2 + uVar4;
      }
      pbVar5 = pbVar5 + -1;
      pbVar2 = param_2 + param_3;
      for (; pbVar2 != param_2; param_2 = param_2 + 1) {
        pbVar1 = (byte *)(uint)*param_2;
        pbVar5 = pbVar5 + 1;
        *pbVar5 = *param_2;
      }
    }
    else {
      if (uVar4 == 0) {
        pbVar5 = param_1 + param_3;
        pbVar2 = param_2 + param_3 + -1;
        while (pbVar1 = pbVar2 + (1 - (int)param_2), ((uint)pbVar5 & 3) != 0) {
          if (pbVar2 == param_2 + -1) goto LAB_01bed8e4;
          pbVar5 = pbVar5 + -1;
          *pbVar5 = *pbVar2;
          pbVar2 = pbVar2 + -1;
        }
        pbVar5 = param_2 + (int)pbVar1;
        pbVar2 = param_1 + (int)pbVar1;
        pbVar3 = pbVar5 + -((uint)pbVar1 & 0xfffffffc);
        while (pbVar5 != pbVar3) {
          pbVar5 = pbVar5 + -4;
          pbVar2 = pbVar2 + -4;
          *(undefined4 *)pbVar2 = *(undefined4 *)pbVar5;
        }
        param_3 = (int)pbVar1 - ((uint)pbVar1 & 0xfffffffc);
      }
      pbVar5 = param_2 + param_3;
      pbVar2 = param_1 + param_3;
      while (param_2 != pbVar5) {
        pbVar5 = pbVar5 + -1;
        pbVar1 = (byte *)(uint)*pbVar5;
        pbVar2 = pbVar2 + -1;
        *pbVar2 = *pbVar5;
      }
    }
  }
LAB_01bed8e4:
  return CONCAT44(pbVar1,param_1);
}


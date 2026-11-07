// FUN_0128e5fc @ 0128e5fc size=300 calls_out=1 calls_in=2
// strings: 

void FUN_0128e5fc(uint *param_1,uint param_2,int param_3,undefined4 param_4,uint param_5,int param_6
                 ,int param_7)

{
  uint extraout_r2;
  int extraout_r3;
  undefined1 *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  bool bVar7;
  
  uVar2 = (uint)(param_6 < 0 && 0 < param_7);
  if (uVar2 != 0) {
    param_7 = param_7 + -1000000000;
  }
  uVar3 = param_5 + uVar2;
  param_6 = param_6 + (uint)CARRY4(param_5,uVar2);
  uVar2 = 0;
  if (999999999 < param_3) {
    if ((int)-(param_6 + (uint)(uVar3 != 0)) < 0 ==
        (SBORROW4(0,param_6) != SBORROW4(-param_6,(uint)(uVar3 != 0)))) {
      bVar7 = SBORROW4(param_7,1);
      iVar5 = param_7 + -1;
      if (0 < param_7) {
        bVar7 = SBORROW4(param_3,2000000000 - param_7);
        iVar5 = param_3 - (2000000000 - param_7);
      }
      if (iVar5 < 0 != bVar7) {
        if (-1 < param_6) {
          puVar1 = (undefined1 *)(param_3 + param_7);
          uVar2 = 0;
          uVar3 = 0;
          goto LAB_0128e704;
        }
        bVar7 = 0xfffffffe < param_2;
        param_2 = param_2 + 1;
        param_3 = param_3 + -1000000000;
        uVar2 = (uint)bVar7;
        goto LAB_0128e694;
      }
    }
    param_3 = param_3 + -1000000000;
  }
LAB_0128e694:
  uVar4 = param_2 + uVar3;
  iVar5 = uVar2 + param_6 + (uint)CARRY4(param_2,uVar3);
  puVar1 = (undefined1 *)(param_3 + param_7);
  if ((int)puVar1 < 0) {
    bVar7 = uVar4 == 0;
    uVar4 = uVar4 - 1;
    iVar5 = iVar5 - (uint)bVar7;
    puVar1 = &DAT_3b9aca00 + (int)puVar1;
  }
  else if (&DAT_3b9ac9ff < puVar1) {
    bVar7 = 0xfffffffe < uVar4;
    uVar4 = uVar4 + 1;
    puVar1 = puVar1 + -1000000000;
    iVar5 = iVar5 + (uint)bVar7;
  }
  FUN_01bf0fb0(uVar4,iVar5,0x15180,0);
  param_2 = extraout_r2 + 0x15180;
  iVar6 = extraout_r3 + (uint)(0xfffeae7f < extraout_r2);
  if (-1 < extraout_r3) {
    iVar6 = extraout_r3;
    param_2 = extraout_r2;
  }
  uVar2 = uVar4 - param_2;
  uVar3 = iVar5 - (iVar6 + (uint)(uVar4 < param_2));
LAB_0128e704:
  *param_1 = param_2;
  param_1[1] = (uint)puVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  return;
}


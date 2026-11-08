// FUN_01299464 @ 01299464 size=128 calls_out=3 calls_in=14
// strings: 

void FUN_01299464(uint *param_1,undefined4 param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  bool bVar5;
  bool bVar6;
  
  uVar1 = param_3 * 4;
  bVar6 = 0x3ffffffe < param_3;
  bVar5 = param_3 == 0x3fffffff;
  uVar4 = 0;
  if (param_3 < 0x40000000) {
    bVar6 = 0x7ffffffb < uVar1;
    bVar5 = uVar1 == 0x7ffffffc;
  }
  if (!bVar6 || bVar5) {
    if (uVar1 == 0) {
      uVar2 = 4;
      uVar3 = 0;
    }
    else {
      uVar4 = 4;
      uVar2 = FUN_01298504(uVar1,4);
      uVar3 = param_3;
      if (uVar2 == 0) goto LAB_0129947c;
    }
    *param_1 = uVar3;
    param_1[1] = uVar2;
    FUN_01bed4e2(uVar2,param_2,uVar1);
    param_1[2] = param_3;
    return;
  }
LAB_0129947c:
                    /* WARNING: Subroutine does not return */
  FUN_00664620(uVar4,uVar1);
}


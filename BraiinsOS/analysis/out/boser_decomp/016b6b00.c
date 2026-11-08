// FUN_016b6b00 @ 016b6b00 size=184 calls_out=2 calls_in=1
// strings: 

void FUN_016b6b00(uint *param_1,uint param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  bool bVar5;
  bool bVar6;
  
  uVar4 = 0;
  param_2 = param_2 >> (param_3 & 0x1f);
  bVar6 = 0x3ffffffe < param_2;
  bVar5 = param_2 == 0x3fffffff;
  uVar3 = param_2 * 4;
  if (param_2 < 0x40000000) {
    bVar6 = 0x7ffffffb < uVar3;
    bVar5 = uVar3 == 0x7ffffffc;
  }
  if (!bVar6 || bVar5) {
    if (uVar3 == 0) {
      uVar1 = 4;
      uVar2 = 0;
    }
    else {
      uVar4 = 4;
      uVar1 = FUN_01298504(uVar3,4);
      uVar2 = param_2;
      if (uVar1 == 0) goto LAB_016b6b24;
    }
    uVar3 = 0;
    if (param_2 != 0) {
      uVar3 = 0;
      do {
        *(uint *)(uVar1 + uVar3 * 4) = uVar3 << (param_3 & 0x1f);
        uVar3 = uVar3 + 1;
      } while (param_2 != uVar3);
      uVar3 = param_2;
    }
    *param_1 = uVar2;
    param_1[1] = uVar1;
    param_1[2] = uVar3;
    param_1[3] = param_3;
    return;
  }
LAB_016b6b24:
                    /* WARNING: Subroutine does not return */
  FUN_00664620(uVar4,uVar3);
}


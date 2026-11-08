// FUN_012993c4 @ 012993c4 size=160 calls_out=2 calls_in=4
// strings: 

void FUN_012993c4(uint *param_1,undefined4 *param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  uint uVar5;
  bool bVar6;
  bool bVar7;
  
  uVar5 = param_3 * 8;
  bVar7 = 0x1ffffffe < param_3;
  bVar6 = param_3 == 0x1fffffff;
  uVar3 = 0;
  if (param_3 < 0x20000000) {
    bVar7 = 0x7ffffffb < uVar5;
    bVar6 = uVar5 == 0x7ffffffc;
  }
  if (!bVar7 || bVar6) {
    if (uVar5 == 0) {
      uVar1 = 4;
      uVar5 = 0;
    }
    else {
      uVar3 = 4;
      uVar1 = FUN_01298504(uVar5,4);
      if (uVar1 == 0) goto LAB_012993dc;
      if (param_3 != 0) {
        uVar2 = 0;
        do {
          bVar6 = uVar5 != 0;
          if (bVar6) {
            uVar3 = param_2[1];
            puVar4 = (undefined4 *)(uVar1 + uVar2 * 8);
            *puVar4 = *param_2;
            uVar5 = uVar5 - 8;
            param_2 = param_2 + 2;
            uVar2 = uVar2 + 1;
            puVar4[1] = uVar3;
          }
        } while (bVar6 && param_3 != uVar2);
      }
      uVar5 = param_3;
    }
    *param_1 = uVar5;
    param_1[1] = uVar1;
    param_1[2] = param_3;
    return;
  }
LAB_012993dc:
                    /* WARNING: Subroutine does not return */
  FUN_00664620(uVar3,uVar5);
}


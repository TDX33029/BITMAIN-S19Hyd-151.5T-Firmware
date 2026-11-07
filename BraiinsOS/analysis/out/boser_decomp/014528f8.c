// FUN_014528f8 @ 014528f8 size=80 calls_out=2 calls_in=3
// strings: 

void FUN_014528f8(uint *param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  bool bVar4;
  bool bVar5;
  
  uVar1 = param_2 * 8;
  bVar5 = 0x1ffffffe < param_2;
  bVar4 = param_2 == 0x1fffffff;
  uVar3 = 0;
  if (param_2 < 0x20000000) {
    bVar5 = 0x7ffffffb < uVar1;
    bVar4 = uVar1 == 0x7ffffffc;
  }
  if (!bVar5 || bVar4) {
    uVar3 = 4;
    uVar2 = FUN_01298504(uVar1,4);
    if (uVar2 != 0) {
      *param_1 = param_2;
      param_1[1] = uVar2;
      param_1[2] = 0;
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00664620(uVar3,uVar1);
}


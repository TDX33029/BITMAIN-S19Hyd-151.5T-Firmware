// FUN_016c1300 @ 016c1300 size=140 calls_out=3 calls_in=2
// strings: 

void FUN_016c1300(uint *param_1,uint param_2)

{
  uint uVar1;
  undefined4 uVar2;
  bool bVar3;
  bool bVar4;
  uint local_28;
  uint uStack_24;
  uint uStack_20;
  
  uVar1 = param_2 * 4;
  bVar4 = 0x3ffffffe < param_2;
  bVar3 = param_2 == 0x3fffffff;
  uVar2 = 0;
  if (param_2 < 0x40000000) {
    bVar4 = 0x7ffffffb < uVar1;
    bVar3 = uVar1 == 0x7ffffffc;
  }
  if (!bVar4 || bVar3) {
    if (uVar1 == 0) {
      uStack_24 = 4;
      local_28 = 0;
    }
    else {
      uVar2 = 4;
      uStack_24 = FUN_01298504(uVar1,4);
      local_28 = param_2;
      if (uStack_24 == 0) goto LAB_016c131c;
    }
    uStack_20 = 0;
    FUN_016c1078(&local_28,param_2);
    *param_1 = local_28;
    param_1[1] = uStack_24;
    param_1[2] = uStack_20;
    return;
  }
LAB_016c131c:
                    /* WARNING: Subroutine does not return */
  FUN_00664620(uVar2,uVar1);
}


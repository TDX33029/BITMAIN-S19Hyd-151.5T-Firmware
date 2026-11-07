// FUN_0164a964 @ 0164a964 size=104 calls_out=2 calls_in=3
// strings: 

void FUN_0164a964(uint *param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  bool bVar5;
  bool bVar6;
  
  uVar1 = param_2 * 4;
  bVar6 = 0x3ffffffe < param_2;
  bVar5 = param_2 == 0x3fffffff;
  uVar4 = 0;
  if (param_2 < 0x40000000) {
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
      uVar2 = FUN_012985ec(uVar1,4);
      uVar3 = param_2;
      if (uVar2 == 0) goto LAB_0164a97c;
    }
    *param_1 = uVar3;
    param_1[1] = uVar2;
    param_1[2] = param_2;
    return;
  }
LAB_0164a97c:
                    /* WARNING: Subroutine does not return */
  FUN_00664620(uVar4,uVar1);
}


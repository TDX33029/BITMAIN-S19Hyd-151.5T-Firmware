// FUN_0191de70 @ 0191de70 size=184 calls_out=2 calls_in=3
// strings: 

void FUN_0191de70(uint *param_1,int param_2,uint param_3)

{
  undefined4 *puVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  undefined4 uVar6;
  bool bVar7;
  bool bVar8;
  
  uVar5 = param_3 * 4;
  bVar8 = 0x3ffffffe < param_3;
  bVar7 = param_3 == 0x3fffffff;
  uVar6 = 0;
  if (param_3 < 0x40000000) {
    bVar8 = 0x7ffffffd < uVar5;
    bVar7 = uVar5 == 0x7ffffffe;
  }
  if (!bVar8 || bVar7) {
    if (uVar5 == 0) {
      uVar2 = 2;
      uVar4 = 0;
    }
    else {
      uVar6 = 2;
      uVar2 = FUN_01298504(uVar5,2);
      uVar4 = param_3;
      if (uVar2 == 0) goto LAB_0191de8c;
    }
    uVar5 = 0;
    if (param_3 != 0) {
      iVar3 = uVar2 + 2;
      param_2 = param_2 + 2;
      uVar5 = param_3;
      do {
        puVar1 = (undefined4 *)(param_2 + -2);
        param_2 = param_2 + 0xc;
        *(undefined4 *)(iVar3 + -2) = *puVar1;
        iVar3 = iVar3 + 4;
        uVar5 = uVar5 - 1;
      } while (uVar5 != 0);
      uVar5 = param_3;
    }
    *param_1 = uVar4;
    param_1[1] = uVar2;
    param_1[2] = uVar5;
    return;
  }
LAB_0191de8c:
                    /* WARNING: Subroutine does not return */
  FUN_00664620(uVar6,uVar5);
}


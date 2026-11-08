// FUN_013d4e74 @ 013d4e74 size=208 calls_out=4 calls_in=0
// strings: 

void FUN_013d4e74(undefined4 *param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined4 uVar5;
  bool bVar6;
  bool bVar7;
  undefined8 uVar8;
  
  uVar3 = param_2 * 8;
  bVar7 = 0x1ffffffe < param_2;
  bVar6 = param_2 == 0x1fffffff;
  uVar5 = 0;
  if (param_2 < 0x20000000) {
    bVar7 = 0x7ffffffb < uVar3;
    bVar6 = uVar3 == 0x7ffffffc;
  }
  if (!bVar7 || bVar6) {
    if (uVar3 != 0) {
      uVar5 = 4;
      iVar2 = FUN_01298504(uVar3,4);
      if (iVar2 == 0) goto LAB_013d4e90;
      if (param_2 != 0) {
        uVar4 = 0;
        do {
          if (uVar3 == 0) break;
          uVar8 = FUN_013d4df8(*param_1,param_1[1]);
          uVar3 = uVar3 - 8;
          iVar1 = uVar4 * 8;
          uVar4 = uVar4 + 1;
          param_1 = param_1 + 2;
          *(undefined8 *)(iVar2 + iVar1) = uVar8;
        } while (param_2 != uVar4);
      }
    }
    FUN_013de3c8();
    return;
  }
LAB_013d4e90:
                    /* WARNING: Subroutine does not return */
  FUN_00664620(uVar5,uVar3);
}


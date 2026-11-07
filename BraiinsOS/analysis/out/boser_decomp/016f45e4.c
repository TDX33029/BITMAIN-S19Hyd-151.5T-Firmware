// FUN_016f45e4 @ 016f45e4 size=188 calls_out=1 calls_in=3
// strings: 

undefined8 FUN_016f45e4(int param_1,uint param_2,undefined4 param_3,uint param_4)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  int unaff_r9;
  
  iVar5 = 0;
  if (param_2 != 0) {
    if (param_2 != 1) {
      iVar5 = 0;
      do {
        iVar6 = iVar5 + (param_2 >> 1);
        puVar2 = (undefined4 *)(param_1 + iVar6 * 0x10);
        uVar4 = puVar2[1];
        uVar3 = param_4;
        if (uVar4 < param_4) {
          uVar3 = uVar4;
        }
        iVar1 = FUN_01bed842(*puVar2,param_3,uVar3);
        param_2 = param_2 - (param_2 >> 1);
        if (iVar1 == 0) {
          iVar1 = uVar4 - param_4;
        }
        if (0 < iVar1) {
          iVar6 = iVar5;
        }
        iVar5 = iVar6;
      } while (1 < param_2);
    }
    puVar2 = (undefined4 *)(param_1 + iVar5 * 0x10);
    uVar4 = puVar2[1];
    uVar3 = param_4;
    if (uVar4 < param_4) {
      uVar3 = uVar4;
    }
    iVar6 = FUN_01bed842(*puVar2,param_3,uVar3);
    if (iVar6 == 0) {
      iVar6 = uVar4 - param_4;
    }
    unaff_r9 = param_1;
    if (iVar6 == 0) {
      param_1 = param_1 + iVar5 * 0x10;
      uVar7 = *(undefined4 *)(param_1 + 8);
      unaff_r9 = *(int *)(param_1 + 0xc);
      goto LAB_016f4694;
    }
  }
  uVar7 = 0;
LAB_016f4694:
  return CONCAT44(unaff_r9,uVar7);
}


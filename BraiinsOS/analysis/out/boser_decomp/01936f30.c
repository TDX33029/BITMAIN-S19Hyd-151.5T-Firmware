// FUN_01936f30 @ 01936f30 size=400 calls_out=2 calls_in=1
// strings: 

void FUN_01936f30(int param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  bool bVar9;
  
  uVar6 = *(uint *)(param_1 + 8);
  uVar3 = *(uint *)(param_1 + 0x14);
  uVar7 = uVar6;
  if (uVar3 < uVar6) {
    uVar7 = uVar3;
  }
  iVar1 = FUN_01bed842(*(undefined4 *)(param_1 + 0x10),*(undefined4 *)(param_1 + 4),uVar7);
  if (iVar1 == 0) {
    iVar1 = uVar3 - uVar6;
  }
  if (iVar1 < 0) {
    uVar7 = 2;
    iVar4 = 0;
    do {
      iVar2 = param_1 + iVar4;
      uVar8 = *(uint *)(iVar2 + 0x14);
      uVar6 = *(uint *)(iVar2 + 0x20);
      uVar3 = uVar8;
      if (uVar6 < uVar8) {
        uVar3 = uVar6;
      }
      uVar3 = FUN_01bed842(*(undefined4 *)(iVar2 + 0x1c),*(undefined4 *)(iVar2 + 0x10),uVar3);
      if (uVar3 == 0) {
        uVar3 = uVar6 - uVar8;
      }
      if (uVar3 < 0x80000000) goto LAB_01937030;
      iVar4 = iVar4 + 0xc;
      uVar7 = uVar7 + 1;
    } while (param_2 * 0xc + -0x18 != iVar4);
  }
  else {
    uVar7 = 2;
    iVar4 = 0;
    do {
      iVar2 = param_1 + iVar4;
      uVar8 = *(uint *)(iVar2 + 0x14);
      uVar6 = *(uint *)(iVar2 + 0x20);
      uVar3 = uVar8;
      if (uVar6 < uVar8) {
        uVar3 = uVar6;
      }
      iVar2 = FUN_01bed842(*(undefined4 *)(iVar2 + 0x1c),*(undefined4 *)(iVar2 + 0x10),uVar3);
      if (iVar2 == 0) {
        iVar2 = uVar6 - uVar8;
      }
      if (iVar2 < 0) goto LAB_01937030;
      iVar4 = iVar4 + 0xc;
      uVar7 = uVar7 + 1;
    } while (param_2 * 0xc + -0x18 != iVar4);
  }
LAB_0193703c:
  if (iVar1 < 0) {
    uVar7 = 0;
    iVar1 = param_1 + param_2 * 0xc;
    do {
      iVar1 = iVar1 + -0xc;
      iVar4 = 0;
      do {
        uVar5 = *(undefined4 *)(param_1 + iVar4 * -4);
        *(undefined4 *)(param_1 + iVar4 * -4) = *(undefined4 *)(iVar1 + iVar4 * -4);
        *(undefined4 *)(iVar1 + iVar4 * -4) = uVar5;
        bVar9 = iVar4 != -2;
        iVar4 = iVar4 + -1;
      } while (bVar9);
      uVar7 = uVar7 + 1;
      param_1 = param_1 + 0xc;
    } while (uVar7 != param_2 >> 1);
  }
  return;
LAB_01937030:
  if (uVar7 != param_2) {
    FUN_019366a4(param_1,param_2,0,LZCOUNT(param_2 | 1) << 1 ^ 0x3e);
    return;
  }
  goto LAB_0193703c;
}


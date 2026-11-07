// FUN_016c9a50 @ 016c9a50 size=272 calls_out=2 calls_in=2
// strings: 

int FUN_016c9a50(int param_1,int param_2,int param_3,uint param_4)

{
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  uint uVar7;
  undefined4 uVar8;
  uint uVar9;
  
  if (7 < param_4) {
    uVar1 = param_4 >> 3;
    iVar4 = uVar1 * 8 - (param_4 >> 3);
    param_1 = FUN_016c9a50(param_1,param_1 + iVar4 * 0x20,uVar1 * 0x188 + param_1,uVar1);
    param_2 = FUN_016c9a50(param_2,param_2 + iVar4 * 0x20,uVar1 * 0x188 + param_2,uVar1);
    param_3 = FUN_016c9a50(param_3,param_3 + iVar4 * 0x20,uVar1 * 0x188 + param_3,uVar1);
  }
  uVar7 = *(uint *)(param_2 + 8);
  uVar5 = *(undefined4 *)(param_1 + 4);
  uVar6 = *(uint *)(param_1 + 8);
  uVar3 = *(undefined4 *)(param_2 + 4);
  uVar1 = uVar7;
  if (uVar6 < uVar7) {
    uVar1 = uVar6;
  }
  uVar1 = FUN_016dd50a(uVar5,uVar3,uVar1);
  uVar8 = *(undefined4 *)(param_3 + 4);
  uVar9 = *(uint *)(param_3 + 8);
  if (uVar1 == 0) {
    uVar1 = uVar6 - uVar7;
  }
  uVar2 = uVar9;
  if (uVar6 < uVar9) {
    uVar2 = uVar6;
  }
  uVar2 = FUN_016dd50a(uVar5,uVar8,uVar2);
  if (uVar2 == 0) {
    uVar2 = uVar6 - uVar9;
  }
  if (-1 < (int)(uVar2 ^ uVar1)) {
    uVar6 = uVar9;
    if (uVar7 < uVar9) {
      uVar6 = uVar7;
    }
    uVar6 = FUN_016dd50a(uVar3,uVar8,uVar6);
    if (uVar6 == 0) {
      uVar6 = uVar7 - uVar9;
    }
    param_1 = param_2;
    if ((int)(uVar6 ^ uVar1) < 0) {
      param_1 = param_3;
    }
  }
  return param_1;
}


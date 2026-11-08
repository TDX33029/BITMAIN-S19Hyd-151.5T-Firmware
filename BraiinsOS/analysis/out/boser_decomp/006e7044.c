// FUN_006e7044 @ 006e7044 size=280 calls_out=9 calls_in=1
// strings: 

void FUN_006e7044(int param_1)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  undefined4 uVar6;
  uint uVar7;
  undefined4 uVar8;
  
  uVar7 = *(uint *)(param_1 + 0x50);
  uVar2 = 7;
  if ((int)uVar7 < 0) {
    uVar2 = uVar7 ^ 0x80000000;
  }
  switch(uVar2) {
  case 0:
  case 1:
  case 3:
    break;
  case 2:
    FUN_019bb7e0(*(undefined4 *)(param_1 + 0x40),*(undefined4 *)(param_1 + 0x44));
    break;
  case 4:
    (**(code **)(*(int *)(param_1 + 0x40) + 0x10))
              (param_1 + 0x4c,*(undefined4 *)(param_1 + 0x44),*(undefined4 *)(param_1 + 0x48));
    break;
  case 5:
    piVar4 = *(int **)(param_1 + 0x40);
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar4;
      bVar1 = (bool)hasExclusiveAccess(piVar4);
    } while (!bVar1);
    *piVar4 = iVar3 + -1;
    if (iVar3 == 1) {
      DataMemoryBarrier(0xb);
      FUN_0070451c(*(undefined4 *)(param_1 + 0x40),*(undefined4 *)(param_1 + 0x44));
    }
    break;
  case 6:
    uVar8 = *(undefined4 *)(param_1 + 0x44);
    FUN_00702d50(uVar8,*(undefined4 *)(param_1 + 0x48));
    uVar7 = *(uint *)(param_1 + 0x40);
    uVar6 = 0x30;
    goto LAB_006e7140;
  default:
    iVar3 = *(int *)(param_1 + 0x60);
    if ((iVar3 != 0) && (iVar5 = iVar3 * 4 + 4, iVar3 + iVar5 != -5)) {
      thunk_FUN_01be4678(*(int *)(param_1 + 0x5c) - iVar5);
    }
    uVar8 = *(undefined4 *)(param_1 + 0x54);
    FUN_00702da0(uVar8,*(undefined4 *)(param_1 + 0x58));
    uVar6 = 0x40;
LAB_006e7140:
    FUN_0134aee0(uVar7,uVar8,8,uVar6);
  }
  FUN_006c1148(param_1 + 0x84);
  FUN_0067211c(param_1 + 0x78);
  FUN_0142e6dc(param_1);
  return;
}


// FUN_00d48638 @ 00d48638 size=300 calls_out=9 calls_in=1
// strings: 

void FUN_00d48638(int *param_1)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  undefined4 uVar6;
  uint uVar7;
  
  if (*param_1 == 3 && param_1[1] == 0) {
    return;
  }
  uVar7 = param_1[0x14];
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
    FUN_019bb7e0(param_1[0x10],param_1[0x11]);
    break;
  case 4:
    (**(code **)(param_1[0x10] + 0x10))(param_1 + 0x13,param_1[0x11],param_1[0x12]);
    break;
  case 5:
    piVar4 = (int *)param_1[0x10];
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar4;
      bVar1 = (bool)hasExclusiveAccess(piVar4);
    } while (!bVar1);
    *piVar4 = iVar3 + -1;
    if (iVar3 == 1) {
      DataMemoryBarrier(0xb);
      FUN_0070451c(param_1[0x10],param_1[0x11]);
    }
    break;
  case 6:
    iVar3 = param_1[0x11];
    FUN_00702d50(iVar3,param_1[0x12]);
    uVar7 = param_1[0x10];
    uVar6 = 0x30;
    goto LAB_00d48748;
  default:
    iVar3 = param_1[0x18];
    if ((iVar3 != 0) && (iVar5 = iVar3 * 4 + 4, iVar3 + iVar5 != -5)) {
      thunk_FUN_01be4678(param_1[0x17] - iVar5);
    }
    iVar3 = param_1[0x15];
    FUN_00702da0(iVar3,param_1[0x16]);
    uVar6 = 0x40;
LAB_00d48748:
    FUN_0134aee0(uVar7,iVar3,8,uVar6);
  }
  FUN_006c1148(param_1 + 0x21);
  FUN_0067211c(param_1 + 0x1e);
  FUN_0142e6dc(param_1);
  return;
}


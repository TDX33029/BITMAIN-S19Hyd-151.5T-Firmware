// FUN_019019bc @ 019019bc size=508 calls_out=11 calls_in=1
// strings: 

void FUN_019019bc(uint *param_1)

{
  bool bVar1;
  uint uVar2;
  int *piVar3;
  int iVar4;
  uint uVar5;
  undefined4 uVar6;
  int iVar7;
  undefined4 *puVar8;
  
  uVar2 = 1;
  if ((int)*param_1 < 0) {
    uVar2 = *param_1 ^ 0x80000000;
  }
  switch(uVar2) {
  case 0:
  case 0xb:
  case 0xc:
  case 0x11:
    break;
  case 1:
    FUN_018ed628(param_1);
    return;
  case 2:
  case 0x10:
    FUN_018e3950(param_1 + 1);
    return;
  case 3:
    uVar5 = param_1[2];
    FUN_018e3e6c(uVar5,param_1[3]);
    uVar2 = param_1[1];
    uVar6 = 0x10;
    goto LAB_01901b7c;
  case 4:
    uVar5 = param_1[2];
    FUN_01936260(uVar5,param_1[3]);
    uVar2 = param_1[1];
    uVar6 = 0xc;
LAB_01901b7c:
    FUN_0134aee0(uVar2,uVar5,4,uVar6);
    return;
  case 5:
    FUN_0134bd64(param_1[1],param_1[2]);
    FUN_018e21f4(param_1 + 4);
    return;
  case 6:
  case 0xd:
  case 0x12:
  case 0x13:
  case 0x14:
    uVar2 = param_1[1];
    if (uVar2 != 0x80000000) {
      uVar5 = param_1[2];
      goto LAB_01901c04;
    }
    break;
  case 7:
    uVar2 = param_1[1];
    if (uVar2 == 0x80000000) {
      uVar2 = param_1[2];
      iVar7 = 8;
      if (uVar2 == 0x80000000) {
        return;
      }
    }
    else {
      iVar7 = 4;
      uVar5 = param_1[5];
      iVar4 = 4;
      if (uVar5 != 0x80000000) {
        FUN_0134bd64(uVar5,param_1[6]);
        FUN_0134bd64(param_1[8],param_1[9]);
        iVar4 = 0x18;
      }
      puVar8 = (undefined4 *)((int)(param_1 + 5) + iVar4);
      FUN_0134bd64(*puVar8,puVar8[1]);
    }
    uVar5 = *(uint *)((int)param_1 + iVar7 + 4);
    goto LAB_01901c04;
  case 8:
    FUN_0134aee0(param_1[1],param_1[2],1,2);
    FUN_0134aee0(param_1[4],param_1[5],2,4);
    FUN_018e26a0(param_1 + 7);
    return;
  case 9:
    FUN_0134bd64(param_1[1],param_1[2]);
    FUN_018e6554(param_1 + 4);
    return;
  case 10:
    uVar2 = param_1[1];
    uVar5 = param_1[2];
LAB_01901c04:
    FUN_0134bd64(uVar2,uVar5);
    return;
  case 0xe:
    piVar3 = (int *)param_1[1];
    DataMemoryBarrier(0xb);
    do {
      iVar4 = *piVar3;
      bVar1 = (bool)hasExclusiveAccess(piVar3);
    } while (!bVar1);
    *piVar3 = iVar4 + -1;
    if (iVar4 == 1) {
      DataMemoryBarrier(0xb);
      FUN_018fa118(param_1[1]);
      return;
    }
    break;
  case 0xf:
    FUN_0134bd64(param_1[1],param_1[2]);
    piVar3 = (int *)param_1[7];
    DataMemoryBarrier(0xb);
    do {
      iVar4 = *piVar3;
      bVar1 = (bool)hasExclusiveAccess(piVar3);
    } while (!bVar1);
    *piVar3 = iVar4 + -1;
    if (iVar4 == 1) {
      DataMemoryBarrier(0xb);
      FUN_018fa118(param_1[7]);
    }
    FUN_0161a99c(param_1 + 4);
    return;
  default:
    uVar2 = param_1[2];
    if (uVar2 != 0x80000000) {
      uVar5 = param_1[3];
      goto LAB_01901c04;
    }
  }
  return;
}


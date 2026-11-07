// FUN_019179b8 @ 019179b8 size=516 calls_out=11 calls_in=3
// strings: 

void FUN_019179b8(uint *param_1)

{
  bool bVar1;
  uint uVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
  
  uVar2 = *param_1;
  uVar4 = 1;
  if ((int)uVar2 < 0) {
    uVar4 = uVar2 ^ 0x80000000;
  }
  switch(uVar4) {
  case 0:
  case 0xb:
  case 0xc:
  case 0x11:
    break;
  case 1:
    FUN_0134aee0(uVar2,param_1[1],2,4);
    FUN_0134aee0(param_1[3],param_1[4],1,2);
    FUN_018e23f8(param_1 + 6);
    return;
  case 2:
  case 0x10:
    FUN_018e3950(param_1 + 1);
    return;
  case 3:
    uVar2 = param_1[2];
    FUN_018e3e6c(uVar2,param_1[3]);
    FUN_0134aee0(param_1[1],uVar2,4,0x10);
    return;
  case 4:
    FUN_0190f040(param_1 + 1);
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
      uVar4 = param_1[2];
      goto LAB_01917c08;
    }
    break;
  case 7:
    uVar2 = param_1[1];
    if (uVar2 == 0x80000000) {
      uVar2 = param_1[2];
      iVar6 = 8;
      if (uVar2 == 0x80000000) {
        return;
      }
    }
    else {
      iVar6 = 4;
      uVar4 = param_1[5];
      iVar5 = 4;
      if (uVar4 != 0x80000000) {
        FUN_0134bd64(uVar4,param_1[6]);
        FUN_0134bd64(param_1[8],param_1[9]);
        iVar5 = 0x18;
      }
      puVar7 = (undefined4 *)((int)(param_1 + 5) + iVar5);
      FUN_0134bd64(*puVar7,puVar7[1]);
    }
    uVar4 = *(uint *)((int)param_1 + iVar6 + 4);
    goto LAB_01917c08;
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
    uVar4 = param_1[2];
LAB_01917c08:
    FUN_0134bd64(uVar2,uVar4);
    return;
  case 0xe:
    piVar3 = (int *)param_1[1];
    DataMemoryBarrier(0xb);
    do {
      iVar5 = *piVar3;
      bVar1 = (bool)hasExclusiveAccess(piVar3);
    } while (!bVar1);
    *piVar3 = iVar5 + -1;
    if (iVar5 == 1) {
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
      iVar5 = *piVar3;
      bVar1 = (bool)hasExclusiveAccess(piVar3);
    } while (!bVar1);
    *piVar3 = iVar5 + -1;
    if (iVar5 == 1) {
      DataMemoryBarrier(0xb);
      FUN_018fa118(param_1[7]);
    }
    FUN_0161a99c(param_1 + 4);
    return;
  default:
    uVar2 = param_1[2];
    if (uVar2 != 0x80000000) {
      uVar4 = param_1[3];
      goto LAB_01917c08;
    }
  }
  return;
}


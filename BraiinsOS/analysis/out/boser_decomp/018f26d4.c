// FUN_018f26d4 @ 018f26d4 size=496 calls_out=12 calls_in=2
// strings: 

void FUN_018f26d4(uint *param_1)

{
  bool bVar1;
  uint uVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  
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
    uVar4 = param_1[2];
    FUN_018e3e6c(uVar4,param_1[3]);
    uVar2 = param_1[1];
    uVar6 = 0x10;
    goto LAB_018f28b4;
  case 4:
    uVar4 = param_1[2];
    FUN_01936260(uVar4,param_1[3]);
    uVar2 = param_1[1];
    uVar6 = 0xc;
LAB_018f28b4:
    FUN_0134aee0(uVar2,uVar4,4,uVar6);
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
      goto LAB_018f2910;
    }
    break;
  case 7:
    uVar2 = param_1[1];
    if (uVar2 == 0x80000000) {
      uVar2 = param_1[2];
      iVar5 = 8;
      if (uVar2 == 0x80000000) {
        return;
      }
    }
    else {
      FUN_018ed678(param_1 + 5);
      iVar5 = 4;
    }
    uVar4 = *(uint *)((int)param_1 + iVar5 + 4);
    goto LAB_018f2910;
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
LAB_018f2910:
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
      goto LAB_018f2910;
    }
  }
  return;
}


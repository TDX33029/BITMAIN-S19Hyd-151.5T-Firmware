// FUN_0190ac88 @ 0190ac88 size=244 calls_out=5 calls_in=2
// strings: 

void FUN_0190ac88(uint *param_1)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  iVar3 = 0xb;
  if (0x80000012 < *param_1) {
    iVar3 = *param_1 + 0x7fffffed;
  }
  switch(iVar3) {
  case 0:
  case 1:
    uVar2 = param_1[1];
    uVar5 = param_1[2];
    uVar6 = 1;
    uVar7 = 2;
    goto LAB_0190ad14;
  case 2:
  case 3:
  case 4:
  case 5:
  case 6:
  case 7:
  case 9:
  case 10:
  case 0xe:
  case 0xf:
  case 0x10:
  case 0x11:
  case 0x12:
  case 0x13:
  case 0x14:
    break;
  case 8:
    uVar2 = param_1[1];
    if ((int)uVar2 < -0x7fffffea) {
      return;
    }
    uVar5 = param_1[2];
    FUN_018e3ad4(uVar5,param_1[3]);
    uVar6 = 4;
    uVar7 = 0x3c;
LAB_0190ad14:
    FUN_0134aee0(uVar2,uVar5,uVar6,uVar7);
    return;
  case 0xb:
    FUN_0190adf0();
    return;
  case 0xc:
    if (param_1[1] == 5) {
      piVar4 = (int *)param_1[2];
      DataMemoryBarrier(0xb);
      do {
        iVar3 = *piVar4;
        bVar1 = (bool)hasExclusiveAccess(piVar4);
      } while (!bVar1);
      *piVar4 = iVar3 + -1;
      if (iVar3 == 1) {
        DataMemoryBarrier(0xb);
        uVar2 = param_1[2];
        uVar5 = param_1[3];
        goto LAB_0190adc8;
      }
    }
    break;
  case 0xd:
    FUN_0134bd64(param_1[1],param_1[2]);
    return;
  default:
    piVar4 = (int *)param_1[1];
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar4;
      bVar1 = (bool)hasExclusiveAccess(piVar4);
    } while (!bVar1);
    *piVar4 = iVar3 + -1;
    if (iVar3 == 1) {
      DataMemoryBarrier(0xb);
      uVar2 = param_1[1];
      uVar5 = param_1[2];
LAB_0190adc8:
      FUN_018531c0(uVar2,uVar5);
      return;
    }
  }
  return;
}


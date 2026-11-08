// FUN_0134a8f8 @ 0134a8f8 size=556 calls_out=8 calls_in=3
// strings: /dev/random | /dev/urandom

int FUN_0134a8f8(int param_1,uint param_2)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  bool bVar6;
  ulonglong uVar7;
  int local_28 [2];
  
  if (DAT_01d4cff0 == 0xffffffff) {
    uVar5 = 1;
    uVar1 = FUN_01be6c3c(0x180,1,0,0);
    if (0x7fffffff < uVar1) {
      piVar2 = (int *)FUN_01be3244();
      iVar3 = *piVar2;
      if (0 < iVar3) {
        uVar5 = (uint)(iVar3 != 0x26 && iVar3 != 1);
      }
    }
    DAT_01d4cff0 = uVar5;
  }
  if (DAT_01d4cff0 == 0) {
    iVar3 = DAT_01d4cff4;
    if (DAT_01d4cff4 == -1) {
      FUN_01bef02c(&DAT_01d5115c);
      if (DAT_01d4cff4 == -1) {
        uVar7 = FUN_0134ab40("/dev/random");
        iVar3 = (int)(uVar7 >> 0x20);
        if ((uVar7 & 1) == 0) {
          local_28[1] = 1;
          local_28[0] = iVar3;
          do {
            uVar1 = FUN_01bea68a(local_28,1,0xffffffff);
            if (uVar1 < 0x80000000) {
              iVar4 = 0;
              break;
            }
            piVar2 = (int *)FUN_01be3244();
            iVar4 = *piVar2;
            if (iVar4 < 1) {
              iVar4 = -0x7fffffff;
              break;
            }
          } while (iVar4 == 4 || iVar4 == 0xb);
          FUN_01bf01d6(iVar3);
        }
        else {
          iVar4 = iVar3;
        }
        if (iVar4 != 0) {
LAB_0134ab0c:
          FUN_01bef3fe(&DAT_01d5115c);
          return iVar4;
        }
        uVar7 = FUN_0134ab40("/dev/urandom");
        iVar4 = (int)(uVar7 >> 0x20);
        if ((uVar7 & 1) != 0) goto LAB_0134ab0c;
        DAT_01d4cff4 = iVar4;
      }
      iVar3 = DAT_01d4cff4;
      FUN_01bef3fe(&DAT_01d5115c);
    }
    do {
      uVar1 = FUN_01bf0424(iVar3,param_1,param_2);
      if ((int)uVar1 < 1) {
        if (uVar1 != 0xffffffff) {
          return -0x7ffffffe;
        }
        piVar2 = (int *)FUN_01be3244();
        iVar4 = *piVar2;
        if (iVar4 < 1) {
          return -0x7fffffff;
        }
        if (iVar4 != 4) {
          return iVar4;
        }
      }
      else {
        bVar6 = param_2 < uVar1;
        param_2 = param_2 - uVar1;
        if (bVar6) {
          return -0x7ffffffe;
        }
        param_1 = param_1 + uVar1;
      }
    } while (param_2 != 0);
  }
  else {
    do {
      uVar1 = FUN_01be6c3c(0x180,param_1,param_2,0);
      if ((int)uVar1 < 1) {
        if (uVar1 != 0xffffffff) {
          return -0x7ffffffe;
        }
        piVar2 = (int *)FUN_01be3244();
        iVar3 = *piVar2;
        if (iVar3 < 1) {
          return -0x7fffffff;
        }
        if (iVar3 != 4) {
          return iVar3;
        }
      }
      else {
        bVar6 = param_2 < uVar1;
        param_2 = param_2 - uVar1;
        if (bVar6) {
          return -0x7ffffffe;
        }
        param_1 = param_1 + uVar1;
      }
    } while (param_2 != 0);
  }
  return 0;
}


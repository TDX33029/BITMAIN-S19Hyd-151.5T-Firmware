// FUN_01221118 @ 01221118 size=352 calls_out=2 calls_in=0
// strings: 

int FUN_01221118(int *param_1,int param_2)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  code *pcVar4;
  int iVar5;
  int *piVar6;
  ulonglong uVar7;
  
  if (*param_1 == 1) {
    if (param_2 != 0) {
      iVar2 = param_1[1];
      param_1[1] = 0;
      bVar1 = iVar2 == 0;
      do {
        if (bVar1) {
          *param_1 = 0;
          goto LAB_0122116c;
        }
        param_2 = param_2 + -1;
        bVar1 = true;
      } while (param_2 != 0);
    }
  }
  else {
LAB_0122116c:
    if (param_1[2] == 0) {
      return param_2;
    }
    piVar6 = param_1 + 5;
    iVar2 = *piVar6;
    if (iVar2 == 0) {
      iVar5 = param_1[6];
LAB_012211c0:
      FUN_012d40d0(iVar2,iVar5);
      iVar2 = 0;
      *piVar6 = 0;
      if (param_1[3] != 0) {
        uVar7 = FUN_0122167c(param_1 + 3,param_2,piVar6);
        param_2 = (int)(uVar7 >> 0x20);
        if ((uVar7 & 1) != 0) {
          return 0;
        }
        iVar2 = param_1[5];
        iVar5 = param_1[6];
      }
      FUN_012d40d0(iVar2,iVar5);
      iVar2 = param_1[7];
      param_1[5] = 0;
      if (iVar2 == 0) {
        iVar5 = param_1[8];
      }
      else {
        if (param_2 == 0) {
          return 0;
        }
        iVar5 = param_1[8];
        pcVar4 = *(code **)(iVar5 + 0xc);
        while (iVar3 = (*pcVar4)(iVar2), iVar3 != 0) {
          param_2 = param_2 + -1;
          if (param_2 == 0) {
            return 0;
          }
        }
      }
      FUN_012d40d0(iVar2,iVar5);
      param_1[7] = 0;
      return param_2;
    }
    if (param_2 != 0) {
      iVar5 = param_1[6];
      pcVar4 = *(code **)(iVar5 + 0xc);
      do {
        iVar3 = (*pcVar4)(iVar2);
        if (iVar3 == 0) goto LAB_012211c0;
        param_2 = param_2 + -1;
      } while (param_2 != 0);
    }
  }
  return 0;
}


// FUN_006520dc @ 006520dc size=468 calls_out=6 calls_in=1
// strings: 

void FUN_006520dc(uint *param_1,char *param_2,uint param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  char cVar4;
  undefined4 uVar5;
  uint uVar6;
  
  if (param_3 == 0) {
LAB_0065214c:
    iVar1 = FUN_006522b0(param_2,param_3);
    if (iVar1 == 0) {
      uVar2 = param_1[1];
      uVar6 = param_1[2];
      iVar1 = FUN_006522b0(uVar2,uVar6);
      if (uVar6 == 0) {
        uVar6 = 0;
      }
      else {
        cVar4 = '/';
        if (iVar1 != 0) {
          cVar4 = '\\';
        }
        if (cVar4 != *(char *)(uVar2 + uVar6 + -1)) {
          uVar3 = uVar6;
          if (*param_1 == uVar6) {
            FUN_006520b4(param_1,uVar6,1,1,1);
            uVar2 = param_1[1];
            uVar3 = param_1[2];
          }
          uVar6 = uVar6 + 1;
          *(char *)(uVar2 + uVar3) = cVar4;
          param_1[2] = uVar6;
        }
      }
      if (*param_1 - uVar6 < param_3) {
        FUN_006520b4(param_1,uVar6,param_3,1,1);
        uVar2 = param_1[1];
        uVar6 = param_1[2];
      }
      FUN_01bed4e2(uVar2 + uVar6,param_2,param_3);
      param_1[2] = param_1[2] + param_3;
      return;
    }
  }
  else if (*param_2 != '/') {
    if ((param_3 != 1) && (-0x41 < (char)*(short *)(param_2 + 1))) {
      if (param_3 < 4) {
        if (param_3 == 3) {
LAB_0065213c:
          if (*(short *)(param_2 + 1) == 0x2f3a) goto LAB_00652160;
        }
      }
      else if (-0x41 < param_2[3]) goto LAB_0065213c;
    }
    goto LAB_0065214c;
  }
LAB_00652160:
  uVar5 = 0;
  if ((int)param_3 < 0) {
LAB_0065216c:
                    /* WARNING: Subroutine does not return */
    FUN_00664620(uVar5,param_3);
  }
  if (param_3 == 0) {
    uVar2 = 1;
    uVar6 = 0;
  }
  else {
    uVar5 = 1;
    uVar2 = FUN_01298504(param_3,1);
    uVar6 = param_3;
    if (uVar2 == 0) goto LAB_0065216c;
  }
  FUN_01bed4e2(uVar2,param_2,param_3);
  FUN_0134bd64(*param_1,param_1[1]);
  *param_1 = uVar6;
  param_1[1] = uVar2;
  param_1[2] = param_3;
  return;
}


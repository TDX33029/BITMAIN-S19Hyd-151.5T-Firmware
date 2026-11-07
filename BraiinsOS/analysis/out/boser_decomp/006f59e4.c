// FUN_006f59e4 @ 006f59e4 size=344 calls_out=2 calls_in=1
// strings: 

void FUN_006f59e4(int *param_1)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  ulonglong uVar6;
  
  uVar2 = param_1[1];
  if ((*param_1 == 1) && ((uint)param_1[2] <= uVar2)) {
    return;
  }
  if (*param_1 == 0) {
LAB_006f5a2c:
    uVar2 = param_1[5];
    iVar3 = param_1[0x20];
    iVar4 = param_1[0x21];
    iVar5 = param_1[0x22];
    uVar6 = FUN_006f5184();
    if ((uVar6 & 1) == 0) {
      uVar6 = FUN_006eae0c();
    }
    else {
      uVar6 = CONCAT44((int)(uVar6 >> 0x20),1);
    }
    param_1 = (int *)(uVar6 >> 0x20);
    if ((uVar6 & 1) == 0) goto LAB_006f5a90;
    param_1[0x20] = iVar3;
    param_1[0x21] = iVar4;
    param_1[0x22] = iVar5;
    if (uVar2 <= (uint)param_1[5]) {
      param_1[5] = uVar2;
    }
  }
  else {
    param_1[1] = uVar2 + 1;
    if (uVar2 + 1 < (uint)param_1[2]) {
      param_1[1] = uVar2 + 2;
      goto LAB_006f5a2c;
    }
  }
  uVar6 = CONCAT44(param_1,1);
LAB_006f5a90:
  piVar1 = (int *)(uVar6 >> 0x20);
  do {
    if ((uVar6 & 1) != 0) {
      return;
    }
    if ((*piVar1 == 1) && ((uint)piVar1[2] <= (uint)piVar1[1])) {
LAB_006f5b24:
      uVar6 = CONCAT44(piVar1,1);
    }
    else {
      uVar2 = piVar1[5];
      if (*piVar1 != 0) {
        piVar1[1] = piVar1[1] + 1;
      }
      iVar3 = piVar1[0x20];
      iVar4 = piVar1[0x21];
      iVar5 = piVar1[0x22];
      uVar6 = FUN_006f5184();
      if ((uVar6 & 1) == 0) {
        uVar6 = FUN_006eae0c();
      }
      else {
        uVar6 = CONCAT44((int)(uVar6 >> 0x20),1);
      }
      piVar1 = (int *)(uVar6 >> 0x20);
      if ((uVar6 & 1) != 0) {
        piVar1[0x20] = iVar3;
        piVar1[0x21] = iVar4;
        piVar1[0x22] = iVar5;
        if (uVar2 <= (uint)piVar1[5]) {
          piVar1[5] = uVar2;
        }
        goto LAB_006f5b24;
      }
    }
    piVar1 = (int *)(uVar6 >> 0x20);
  } while( true );
}


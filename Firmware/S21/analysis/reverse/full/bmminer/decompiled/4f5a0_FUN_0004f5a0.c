// FUN_0004f5a0 @ 0004f5a0  size=212  callers=1
// program: bmminer


void FUN_0004f5a0(void)

{
  int iVar1;
  
  iVar1 = FUN_00057d2c();
  if (DAT_000be8e8 != 0) {
    switch(DAT_008c7048) {
    case 0:
    case 1:
      return;
    case 2:
      goto switchD_0004f610_caseD_2;
    default:
      DAT_000be8f4 = DAT_000be8f4 ^ 1;
      if (DAT_000be8f4 == 0) {
        FUN_00065b14();
      }
      else {
        FUN_00065af4();
      }
      goto LAB_0004f5f8;
    case 0x15:
      goto switchD_0004f610_caseD_15;
    }
  }
  if (iVar1 == 0) {
switchD_0004f610_caseD_15:
    FUN_00065af4();
    FUN_00065b8c();
    return;
  }
  if (iVar1 == 1) {
    DAT_000be8f4 = DAT_000be8f4 ^ 1;
    if (DAT_000be8f4 == 0) {
      FUN_00065b14();
    }
    else {
      FUN_00065af4();
    }
  }
  else {
switchD_0004f610_caseD_2:
    FUN_00065b14();
  }
  DAT_000be8f4 = DAT_000be8f4 ^ 1;
  if (DAT_000be8f4 != 0) {
    FUN_00065b6c();
    return;
  }
LAB_0004f5f8:
  FUN_00065b8c();
  return;
}


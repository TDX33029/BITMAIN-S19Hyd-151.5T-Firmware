// FUN_00036c6c @ 00036c6c  size=572  callers=1
// program: bmminer


void FUN_00036c6c(void)

{
  int iVar1;
  
  iVar1 = FUN_0003b864();
  if (DAT_00087dec != 0) {
    switch(DAT_0048d374) {
    case 0:
    case 1:
      return;
    case 2:
      goto switchD_00036cdc_caseD_2;
    default:
      DAT_00087df8 = DAT_00087df8 ^ 1;
      if (DAT_00087df8 == 0) {
        FUN_00047fe4();
      }
      else {
        FUN_00047fd8();
      }
      goto LAB_00036cc4;
    case 0x12:
      goto switchD_00036cdc_caseD_12;
    }
  }
  if (iVar1 == 0) {
switchD_00036cdc_caseD_12:
    FUN_00047fd8();
    FUN_00048034();
    return;
  }
  if (iVar1 == 1) {
    DAT_00087df8 = DAT_00087df8 ^ 1;
    if (DAT_00087df8 == 0) {
      FUN_00047fe4();
    }
    else {
      FUN_00047fd8();
    }
  }
  else {
switchD_00036cdc_caseD_2:
    FUN_00047fe4();
  }
  DAT_00087df8 = DAT_00087df8 ^ 1;
  if (DAT_00087df8 != 0) {
    FUN_00048028();
    return;
  }
LAB_00036cc4:
  FUN_00048034();
  return;
}


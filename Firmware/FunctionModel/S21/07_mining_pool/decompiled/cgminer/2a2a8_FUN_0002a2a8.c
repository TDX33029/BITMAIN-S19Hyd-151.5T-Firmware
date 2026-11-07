// FUN_0002a2a8 @ 0002a2a8  size=388  callers=2
// program: cgminer


void FUN_0002a2a8(void)

{
  undefined4 uVar1;
  int extraout_r1;
  int extraout_r1_00;
  uint uVar2;
  uint param3;
  int *piVar4;
  int *piVar3;
  int iVar5;
  int iVar6;
  int *piVar7;
  int *piVar8;
  char acStack_820 [2052];
  
  piVar7 = DAT_00072f14;
  if (DAT_00072e70 < 1) {
    param3 = 1;
  }
  else {
    param3 = 0xffffffff;
    piVar3 = DAT_00072f14;
    do {
      piVar4 = piVar3 + 1;
      uVar2 = *(uint *)(*piVar3 + 0x38);
      if (uVar2 != 0 && uVar2 < param3) {
        param3 = uVar2;
      }
      piVar3 = piVar4;
    } while (DAT_00072f14 + DAT_00072e70 != piVar4);
    if (param3 == 0xffffffff) {
      param3 = 1;
      iVar5 = DAT_000681cc;
    }
    else {
      piVar3 = DAT_00072f14;
      do {
        piVar8 = piVar3 + 1;
        iVar5 = *(int *)(*piVar3 + 0x38);
        if (iVar5 != 0) {
          FUN_0004a6e4(iVar5,param3);
          iVar6 = extraout_r1;
          while (iVar6 != 0) {
            param3 = param3 - 1;
            FUN_0004a6e4(iVar5,param3);
            iVar6 = extraout_r1_00;
          }
        }
        piVar3 = piVar8;
        iVar5 = DAT_000681cc;
      } while (piVar4 != piVar8);
    }
    do {
      piVar3 = piVar7 + 1;
      iVar6 = *piVar7;
      uVar1 = FUN_0004a488(*(int *)(iVar6 + 0x40) * iVar5,param3);
      *(undefined4 *)(iVar6 + 0x40) = uVar1;
      uVar1 = FUN_0004a488(*(undefined4 *)(iVar6 + 0x38),param3);
      *(undefined4 *)(iVar6 + 0x3c) = uVar1;
      piVar7 = piVar3;
    } while (piVar4 != piVar3);
  }
  DAT_000681cc = param3;
  if ((DAT_000686f1 != '\0') &&
     (((DAT_00072da0 != '\0' || (DAT_000686f0 != '\0')) || (6 < DAT_00067848)))) {
    snprintf(acStack_820,0x800,"Global quota greatest common denominator set to %lu",param3);
    FUN_0001dd98(7,acStack_820,0);
  }
  return;
}


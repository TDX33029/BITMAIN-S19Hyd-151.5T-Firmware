// FUN_011fdefc @ 011fdefc size=476 calls_out=4 calls_in=1
// strings: $sha1$@@@@@@@@@@@@@@

void FUN_011fdefc(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  int iVar1;
  char *pcVar2;
  char cVar3;
  uint uVar4;
  uint uVar5;
  undefined4 uVar6;
  uint uVar7;
  undefined8 uVar8;
  ulonglong uVar9;
  undefined8 local_30;
  undefined4 local_28;
  undefined4 local_24;
  
  local_24 = 0;
  local_30._0_4_ = param_2;
  local_30._4_4_ = param_3;
  local_28 = param_3;
  uVar8 = FUN_0165f33c(&local_30,6);
  uVar6 = 0x80000003;
  if ((((int)uVar8 == 0) || ((int)((ulonglong)uVar8 >> 0x20) != 6)) ||
     (iVar1 = thunk_FUN_01bed842((int)uVar8,"$sha1$@@@@@@@@@@@@@@",6), iVar1 != 0))
  goto LAB_011fe098;
  uVar9 = FUN_0165f3d8(&local_30,0x24);
  iVar1 = (int)(uVar9 >> 0x20);
  pcVar2 = (char *)uVar9;
  if (pcVar2 == (char *)0x0) goto LAB_011fe098;
  if (iVar1 != 0) {
    if (iVar1 == 1) {
      cVar3 = *pcVar2;
      if ((cVar3 == '+') || (cVar3 == '-')) goto LAB_011fe094;
    }
    else {
      cVar3 = *pcVar2;
    }
    if (cVar3 == '+') {
      uVar9 = CONCAT44(iVar1 + -1,pcVar2 + 1);
    }
    if (uVar9 < 0x900000000) {
      if ((int)(uVar9 >> 0x20) == 0) {
        iVar1 = FUN_0165f3d8(&local_30,0x24);
        if (iVar1 == 0) goto LAB_011fe098;
      }
      else {
        uVar7 = 0;
        do {
          uVar4 = *(byte *)uVar9 - 0x30;
          if (9 < uVar4) goto LAB_011fe094;
          iVar1 = (int)(uVar9 >> 0x20) + -1;
          uVar9 = CONCAT44(iVar1,(byte *)uVar9 + 1);
          uVar7 = uVar4 + uVar7 * 10;
        } while (iVar1 != 0);
LAB_011fdfdc:
        uVar9 = FUN_0165f3d8(&local_30,0x24);
        if ((int)uVar9 == 0) goto LAB_011fe098;
        if (uVar7 != 0) {
          if (uVar9 < 0x4100000000) {
LAB_011fe038:
            FUN_016625bc(param_1,param_4,param_5,(int)uVar9,(int)(uVar9 >> 0x20),uVar7);
            return;
          }
          local_24 = 0;
          local_28 = (int)(uVar9 >> 0x20);
          local_30 = uVar9;
          uVar9 = FUN_0165f33c(&local_30,0x40);
          if ((int)uVar9 != 0) goto LAB_011fe038;
          uVar6 = 0x80000003;
          goto LAB_011fe0c4;
        }
      }
      uVar6 = 0x80000002;
LAB_011fe0c4:
      *param_1 = 1;
      param_1[1] = uVar6;
      return;
    }
    uVar7 = 0;
    while( true ) {
      iVar1 = (int)(uVar9 >> 0x20);
      if (iVar1 == 0) goto LAB_011fdfdc;
      uVar4 = (uint)((ulonglong)uVar7 * 10);
      if ((int)((ulonglong)uVar7 * 10 >> 0x20) != 0) break;
      uVar5 = *(byte *)uVar9 - 0x30;
      uVar7 = uVar5 + uVar4;
      if ((9 < uVar5) || (uVar9 = CONCAT44(iVar1 + -1,(byte *)uVar9 + 1), CARRY4(uVar5,uVar4)))
      break;
    }
  }
LAB_011fe094:
  uVar6 = 0x80000002;
LAB_011fe098:
  *param_1 = 1;
  param_1[1] = uVar6;
  return;
}


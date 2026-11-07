// FUN_0128cf88 @ 0128cf88 size=328 calls_out=4 calls_in=1
// strings: 

void FUN_0128cf88(undefined4 *param_1,undefined4 param_2)

{
  char *pcVar1;
  int iVar2;
  char cVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  ulonglong uVar7;
  
  uVar7 = FUN_015bb1b4(param_2);
  iVar2 = (int)(uVar7 >> 0x20);
  pcVar1 = (char *)uVar7;
  if (pcVar1 == (char *)0x0) {
    *param_1 = 0x80000005;
    param_1[1] = 0;
    return;
  }
  if (iVar2 != 0) {
    if (iVar2 == 1) {
      cVar3 = *pcVar1;
      if (cVar3 == '+' || cVar3 == '-') goto LAB_0128d074;
    }
    else {
      cVar3 = *pcVar1;
    }
    if (cVar3 == '+') {
      uVar7 = CONCAT44(iVar2 + -1,pcVar1 + 1);
    }
    if (uVar7 < 0x900000000) {
      uVar4 = 0;
      while( true ) {
        iVar2 = (int)(uVar7 >> 0x20);
        if (iVar2 == 0) break;
        uVar5 = *(byte *)uVar7 - 0x30;
        if (9 < uVar5) goto LAB_0128d074;
        uVar7 = CONCAT44(iVar2 + -1,(byte *)uVar7 + 1);
        uVar4 = uVar5 + uVar4 * 10;
      }
LAB_0128d01c:
      *param_1 = 0x80000005;
      param_1[1] = 1;
      param_1[2] = uVar4;
      return;
    }
    uVar4 = 0;
    while( true ) {
      iVar2 = (int)(uVar7 >> 0x20);
      if (iVar2 == 0) goto LAB_0128d01c;
      uVar5 = (uint)((ulonglong)uVar4 * 10);
      if ((int)((ulonglong)uVar4 * 10 >> 0x20) != 0) break;
      uVar6 = *(byte *)uVar7 - 0x30;
      uVar4 = uVar6 + uVar5;
      if ((9 < uVar6) || (uVar7 = CONCAT44(iVar2 + -1,(byte *)uVar7 + 1), CARRY4(uVar6,uVar5)))
      break;
    }
  }
LAB_0128d074:
  iVar2 = thunk_FUN_016d4a50(0x28);
  if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(1,0x28);
  }
  FUN_016dd1aa(iVar2,&DAT_003b6b38,0x28);
  *param_1 = 0x28;
  param_1[1] = iVar2;
  param_1[2] = 0x28;
  param_1[3] = &DAT_003b6e41;
  param_1[4] = 0x9c;
  param_1[5] = 0x158;
  return;
}


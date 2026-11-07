// FUN_0128d3a4 @ 0128d3a4 size=376 calls_out=5 calls_in=1
// strings: 

void FUN_0128d3a4(undefined4 *param_1,undefined4 param_2)

{
  char *pcVar1;
  int iVar2;
  undefined4 uVar3;
  char cVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  ulonglong uVar8;
  undefined1 *local_1c;
  undefined1 *local_18;
  undefined1 uStack_11;
  
  uVar8 = FUN_015bb1b4(param_2);
  iVar2 = (int)(uVar8 >> 0x20);
  pcVar1 = (char *)uVar8;
  if (pcVar1 == (char *)0x0) {
    local_1c = &uStack_11;
    local_18 = &LAB_01293510;
    FUN_00600d2c(param_1,&DAT_00570448,&local_1c);
    uVar3 = 0x146;
    goto LAB_0128d4fc;
  }
  if (iVar2 != 0) {
    if (iVar2 == 1) {
      cVar4 = *pcVar1;
      if (cVar4 == '+' || cVar4 == '-') goto LAB_0128d4bc;
    }
    else {
      cVar4 = *pcVar1;
    }
    if (cVar4 == '+') {
      uVar8 = CONCAT44(iVar2 + -1,pcVar1 + 1);
    }
    if (uVar8 < 0x900000000) {
      uVar7 = 0;
      while( true ) {
        iVar2 = (int)(uVar8 >> 0x20);
        if (iVar2 == 0) break;
        uVar5 = *(byte *)uVar8 - 0x30;
        if (9 < uVar5) goto LAB_0128d4bc;
        uVar8 = CONCAT44(iVar2 + -1,(byte *)uVar8 + 1);
        uVar7 = uVar5 + uVar7 * 10;
      }
LAB_0128d468:
      *param_1 = 0x80000005;
      param_1[1] = uVar7;
      return;
    }
    uVar7 = 0;
    while( true ) {
      iVar2 = (int)(uVar8 >> 0x20);
      if (iVar2 == 0) goto LAB_0128d468;
      uVar5 = (uint)((ulonglong)uVar7 * 10);
      if ((int)((ulonglong)uVar7 * 10 >> 0x20) != 0) break;
      uVar6 = *(byte *)uVar8 - 0x30;
      uVar7 = uVar6 + uVar5;
      if ((9 < uVar6) || (uVar8 = CONCAT44(iVar2 + -1,(byte *)uVar8 + 1), CARRY4(uVar6,uVar5)))
      break;
    }
  }
LAB_0128d4bc:
  iVar2 = thunk_FUN_016d4a50(0x28);
  if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(1,0x28);
  }
  FUN_016dd1aa(iVar2,&DAT_003b6b38,0x28);
  uVar3 = 0x149;
  *param_1 = 0x28;
  param_1[1] = iVar2;
  param_1[2] = 0x28;
LAB_0128d4fc:
  param_1[3] = &DAT_003b6e41;
  param_1[4] = 0x9c;
  param_1[5] = uVar3;
  return;
}


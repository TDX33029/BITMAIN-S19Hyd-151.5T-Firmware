// FUN_0128d530 @ 0128d530 size=436 calls_out=5 calls_in=1
// strings: 

void FUN_0128d530(undefined4 *param_1,undefined4 param_2)

{
  ulonglong uVar1;
  char *pcVar2;
  int iVar3;
  undefined4 uVar4;
  char cVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  ulonglong uVar11;
  undefined1 *local_24;
  undefined1 *local_20;
  undefined1 uStack_19;
  
  uVar11 = FUN_015bb1b4(param_2);
  iVar3 = (int)(uVar11 >> 0x20);
  pcVar2 = (char *)uVar11;
  if (pcVar2 == (char *)0x0) {
    local_24 = &uStack_19;
    local_20 = &LAB_01293510;
    FUN_00600d2c(param_1,&DAT_00570448,&local_24);
    uVar4 = 0x146;
    goto LAB_0128d5e8;
  }
  if (iVar3 != 0) {
    if (iVar3 == 1) {
      cVar5 = *pcVar2;
      if (cVar5 == '+' || cVar5 == '-') goto LAB_0128d56c;
    }
    else {
      cVar5 = *pcVar2;
    }
    if (cVar5 == '+') {
      uVar11 = CONCAT44(iVar3 + -1,pcVar2 + 1);
    }
    if (uVar11 < 0x1100000000) {
      if ((int)(uVar11 >> 0x20) == 0) {
        uVar1 = 0;
      }
      else {
        uVar1 = 0;
        do {
          uVar6 = *(byte *)uVar11 - 0x30;
          if (9 < uVar6) goto LAB_0128d56c;
          iVar3 = (int)(uVar11 >> 0x20) + -1;
          uVar11 = CONCAT44(iVar3,(byte *)uVar11 + 1);
          uVar1 = (uVar1 & 0xffffffff) * 10 + CONCAT44((int)(uVar1 >> 0x20) * 10,uVar6);
        } while (iVar3 != 0);
      }
LAB_0128d6c4:
      *(ulonglong *)(param_1 + 2) = uVar1;
      *param_1 = 0x80000005;
      return;
    }
    uVar6 = 0;
    uVar8 = 0;
    do {
      iVar3 = (int)(uVar11 >> 0x20);
      uVar1 = CONCAT44(uVar8,uVar6);
      if (iVar3 == 0) goto LAB_0128d6c4;
      uVar7 = (uint)((ulonglong)uVar6 * 10);
      uVar10 = (uint)((ulonglong)uVar6 * 10 >> 0x20);
      uVar6 = (uint)((ulonglong)uVar8 * 10);
      uVar9 = uVar10 + uVar6;
      if (((int)((ulonglong)uVar8 * 10 >> 0x20) != 0 || CARRY4(uVar10,uVar6)) ||
         (uVar10 = *(byte *)uVar11 - 0x30, 9 < uVar10)) break;
      uVar6 = uVar7 + uVar10;
      uVar8 = uVar9 + CARRY4(uVar7,uVar10);
      uVar11 = CONCAT44(iVar3 + -1,(byte *)uVar11 + 1);
    } while (!CARRY4(uVar9,(uint)CARRY4(uVar7,uVar10)));
  }
LAB_0128d56c:
  iVar3 = thunk_FUN_016d4a50(0x28);
  if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(1,0x28);
  }
  FUN_016dd1aa(iVar3,&DAT_003b6b38,0x28);
  uVar4 = 0x149;
  *param_1 = 0x28;
  param_1[1] = iVar3;
  param_1[2] = 0x28;
LAB_0128d5e8:
  param_1[3] = &DAT_003b6e41;
  param_1[4] = 0x9c;
  param_1[5] = uVar4;
  return;
}


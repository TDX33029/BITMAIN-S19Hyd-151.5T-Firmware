// FUN_0128cde8 @ 0128cde8 size=408 calls_out=4 calls_in=1
// strings: 

void FUN_0128cde8(undefined4 *param_1,undefined4 param_2)

{
  ulonglong uVar1;
  char *pcVar2;
  int iVar3;
  char cVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  ulonglong uVar10;
  
  uVar10 = FUN_015bb1b4(param_2);
  iVar3 = (int)(uVar10 >> 0x20);
  pcVar2 = (char *)uVar10;
  if (pcVar2 == (char *)0x0) {
    param_1[2] = 0;
    param_1[3] = 0;
    *param_1 = 0x80000005;
    return;
  }
  if (iVar3 != 0) {
    if (iVar3 == 1) {
      cVar4 = *pcVar2;
      if (cVar4 == '+' || cVar4 == '-') goto LAB_0128ce24;
    }
    else {
      cVar4 = *pcVar2;
    }
    if (cVar4 == '+') {
      uVar10 = CONCAT44(iVar3 + -1,pcVar2 + 1);
    }
    if (uVar10 < 0x1100000000) {
      if ((int)(uVar10 >> 0x20) == 0) {
        uVar1 = 0;
      }
      else {
        uVar1 = 0;
        do {
          uVar6 = *(byte *)uVar10 - 0x30;
          if (9 < uVar6) goto LAB_0128ce24;
          iVar3 = (int)(uVar10 >> 0x20) + -1;
          uVar10 = CONCAT44(iVar3,(byte *)uVar10 + 1);
          uVar1 = (uVar1 & 0xffffffff) * 10 + CONCAT44((int)(uVar1 >> 0x20) * 10,uVar6);
        } while (iVar3 != 0);
      }
LAB_0128cf54:
      param_1[2] = 1;
      *param_1 = 0x80000005;
      param_1[3] = 0;
      *(ulonglong *)(param_1 + 4) = uVar1;
      return;
    }
    uVar7 = 0;
    uVar6 = 0;
    do {
      iVar3 = (int)(uVar10 >> 0x20);
      uVar1 = CONCAT44(uVar6,uVar7);
      if (iVar3 == 0) goto LAB_0128cf54;
      uVar8 = (uint)((ulonglong)uVar7 * 10);
      uVar9 = (uint)((ulonglong)uVar7 * 10 >> 0x20);
      uVar7 = (uint)((ulonglong)uVar6 * 10);
      uVar5 = uVar9 + uVar7;
      if (((int)((ulonglong)uVar6 * 10 >> 0x20) != 0 || CARRY4(uVar9,uVar7)) ||
         (uVar9 = *(byte *)uVar10 - 0x30, 9 < uVar9)) break;
      uVar7 = uVar8 + uVar9;
      uVar6 = uVar5 + CARRY4(uVar8,uVar9);
      uVar10 = CONCAT44(iVar3 + -1,(byte *)uVar10 + 1);
    } while (!CARRY4(uVar5,(uint)CARRY4(uVar8,uVar9)));
  }
LAB_0128ce24:
  iVar3 = thunk_FUN_016d4a50(0x28);
  if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(1,0x28);
  }
  FUN_016dd1aa(iVar3,&DAT_003b6b38,0x28);
  *param_1 = 0x28;
  param_1[1] = iVar3;
  param_1[2] = 0x28;
  param_1[3] = &DAT_003b6e41;
  param_1[4] = 0x9c;
  param_1[5] = 0x158;
  return;
}


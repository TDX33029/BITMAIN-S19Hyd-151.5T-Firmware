// FUN_01317fa0 @ 01317fa0 size=504 calls_out=6 calls_in=1
// strings: Number out of bounds.

void FUN_01317fa0(int *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  char *pcVar2;
  char cVar3;
  uint uVar4;
  undefined4 uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  ulonglong uVar9;
  int local_30;
  undefined4 local_2c;
  int iStack_28;
  int iStack_24;
  
  FUN_01316390(&local_30,param_3,param_4);
  uVar8 = local_2c & 0xff;
  if (local_30 != 7) {
    FUN_01bed4e2((int)param_1 + 5,(int)&local_2c + 1,0xb);
    *(undefined1 *)(param_1 + 1) = (undefined1)local_2c;
    *param_1 = local_30;
    return;
  }
  uVar9 = FUN_013166b8(param_3,param_4);
  iVar1 = (int)(uVar9 >> 0x20);
  pcVar2 = (char *)uVar9;
  if (iVar1 != 0) {
    if (iVar1 == 1) {
      cVar3 = *pcVar2;
      if (cVar3 == '+' || cVar3 == '-') goto LAB_013180fc;
    }
    else {
      cVar3 = *pcVar2;
    }
    uVar4 = 0;
    if (cVar3 == '+') {
      uVar9 = CONCAT44(iVar1 + -1,pcVar2 + 1);
    }
    if (uVar9 < 0x500000000) {
      while( true ) {
        iVar1 = (int)(uVar9 >> 0x20);
        if (iVar1 == 0) break;
        uVar6 = *(byte *)uVar9 - 0x30;
        if (9 < uVar6) goto LAB_013180fc;
        uVar9 = CONCAT44(iVar1 + -1,(byte *)uVar9 + 1);
        uVar4 = uVar6 + uVar4 * 10;
      }
LAB_01318070:
      if (((uint)*(ushort *)(param_2 + 0xc) <= (uVar4 & 0xffff)) &&
         ((uVar4 & 0xffff) <= (uint)*(ushort *)(param_2 + 0xe))) {
        FUN_013169a4(&local_30,param_2,uVar4,uVar8);
        if (local_30 == 7) {
          local_30 = 7;
        }
        else {
          param_1[1] = local_2c;
          param_1[2] = iStack_28;
          param_1[3] = iStack_24;
        }
        *param_1 = local_30;
        return;
      }
      iVar7 = 0x15;
      iVar1 = thunk_FUN_01be5118(0x15);
      if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00664620(1,0x15);
      }
      uVar5 = 0x15;
      pcVar2 = "Number out of bounds.";
      goto LAB_01318120;
    }
    do {
      iVar1 = (int)(uVar9 >> 0x20);
      if (iVar1 == 0) goto LAB_01318070;
      uVar4 = (uVar4 & 0xffff) * 4 + (uVar4 & 0xffff);
      if (uVar4 >> 0xf != 0) break;
      uVar6 = *(byte *)uVar9 - 0x30;
      if (9 < uVar6) break;
      uVar9 = CONCAT44(iVar1 + -1,(byte *)uVar9 + 1);
      uVar4 = (uVar4 * 2 & 0xffff) + (uVar6 & 0xffff);
    } while (uVar4 >> 0x10 == 0);
  }
LAB_013180fc:
  iVar7 = 0xf;
  iVar1 = thunk_FUN_01be5118(0xf);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00664620(1,0xf);
  }
  uVar5 = 0xf;
  pcVar2 = &DAT_00431118;
LAB_01318120:
  FUN_01bed4e2(iVar1,pcVar2,uVar5);
  param_1[1] = iVar7;
  *param_1 = 6;
  param_1[2] = iVar1;
  param_1[3] = iVar7;
  return;
}


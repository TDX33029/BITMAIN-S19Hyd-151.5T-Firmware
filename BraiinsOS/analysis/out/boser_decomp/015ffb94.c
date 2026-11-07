// FUN_015ffb94 @ 015ffb94 size=440 calls_out=1 calls_in=1
// strings: 

void FUN_015ffb94(undefined1 *param_1,uint param_2,uint param_3,int *param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  byte *pbVar4;
  undefined1 uVar5;
  int iVar6;
  byte bVar7;
  uint uVar8;
  
  iVar6 = *param_4;
  if (iVar6 == 0) {
    *(uint *)(param_1 + 4) = param_2;
    *param_1 = 1;
    iVar6 = 8;
    goto LAB_015ffd18;
  }
  uVar2 = param_4[1];
  uVar8 = param_4[2];
  uVar1 = param_4[3];
  if (uVar1 < uVar8) goto LAB_015ffc18;
  if (uVar8 != 0) {
    if (uVar8 < uVar2) {
      if (*(char *)(iVar6 + uVar8) < -0x40) goto LAB_015ffc18;
    }
    else if (uVar2 != uVar8) goto LAB_015ffc18;
  }
  if (uVar1 != 0) {
    if (uVar1 < uVar2) {
      if (*(char *)(iVar6 + uVar1) < -0x40) goto LAB_015ffc18;
    }
    else if (uVar1 != uVar2) {
LAB_015ffc18:
                    /* WARNING: Subroutine does not return */
      FUN_012fb514(iVar6,uVar2,uVar8,uVar1,&DAT_01d06cf0);
    }
  }
  uVar1 = uVar1 - uVar8;
  if (uVar1 == 0) {
    uVar5 = 0;
LAB_015ffd04:
    param_1[1] = uVar5;
    uVar5 = 2;
    *(uint *)(param_1 + 8) = param_3;
  }
  else {
    pbVar4 = (byte *)(iVar6 + uVar8);
    if (uVar1 == 1) {
      bVar7 = *pbVar4;
      uVar5 = 1;
      if ((bVar7 == 0x2b) || (bVar7 == 0x2d)) goto LAB_015ffd04;
    }
    else {
      bVar7 = *pbVar4;
    }
    if (bVar7 == 0x2b) {
      pbVar4 = pbVar4 + 1;
      uVar1 = uVar1 - 1;
    }
    if (8 < uVar1) {
      uVar2 = 0;
      do {
        if (uVar1 == 0) goto LAB_015ffd28;
        uVar8 = (uint)((ulonglong)uVar2 * 10);
        if ((int)((ulonglong)uVar2 * 10 >> 0x20) != 0) {
          uVar5 = 1;
          if (*pbVar4 - 0x30 < 10) {
            uVar5 = 2;
          }
          goto LAB_015ffd04;
        }
        uVar3 = *pbVar4 - 0x30;
        if (9 < uVar3) goto LAB_015ffd00;
        uVar2 = uVar3 + uVar8;
        uVar1 = uVar1 - 1;
        pbVar4 = pbVar4 + 1;
      } while (!CARRY4(uVar3,uVar8));
      uVar5 = 2;
      goto LAB_015ffd04;
    }
    uVar5 = 6;
    if (uVar1 == 0) {
      param_2 = 0;
    }
    else {
      uVar2 = 0;
      do {
        bVar7 = *pbVar4;
        if (9 < bVar7 - 0x30) goto LAB_015ffd00;
        pbVar4 = pbVar4 + 1;
        uVar1 = uVar1 - 1;
        uVar2 = (bVar7 - 0x30) + uVar2 * 10;
      } while (uVar1 != 0);
LAB_015ffd28:
      param_2 = uVar2;
      uVar5 = 6;
    }
  }
  iVar6 = 4;
  *param_1 = uVar5;
  param_3 = param_2;
LAB_015ffd18:
  *(uint *)(param_1 + iVar6) = param_3;
  return;
LAB_015ffd00:
  uVar5 = 1;
  goto LAB_015ffd04;
}


// FUN_0128ca7c @ 0128ca7c size=624 calls_out=4 calls_in=1
// strings: 

void FUN_0128ca7c(undefined4 *param_1,undefined4 param_2)

{
  byte bVar1;
  char *pcVar2;
  int iVar3;
  byte *pbVar4;
  char cVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  ulonglong uVar9;
  
  uVar9 = FUN_015bb1b4(param_2);
  iVar3 = (int)(uVar9 >> 0x20);
  pcVar2 = (char *)uVar9;
  if (pcVar2 == (char *)0x0) {
    *param_1 = 0x80000005;
    param_1[1] = 0;
    return;
  }
  if (iVar3 == 0) goto LAB_0128cab4;
  if (iVar3 == 1) {
    cVar5 = *pcVar2;
    if (cVar5 == '+' || cVar5 == '-') goto LAB_0128cab4;
  }
  else {
    cVar5 = *pcVar2;
  }
  if (cVar5 == '-') {
    iVar3 = iVar3 + -1;
    pbVar4 = (byte *)(pcVar2 + 1);
    uVar6 = 0;
    if (uVar9 < 0x900000000) {
      for (; iVar3 != 0; iVar3 = iVar3 + -1) {
        bVar1 = *pbVar4;
        if (9 < bVar1 - 0x30) goto LAB_0128cab4;
        pbVar4 = pbVar4 + 1;
        uVar6 = uVar6 * 10 - (bVar1 - 0x30);
      }
    }
    else {
      do {
        iVar7 = (int)((longlong)(int)uVar6 * 10);
        if ((((int)((ulonglong)((longlong)(int)uVar6 * 10) >> 0x20) != iVar7 >> 0x1f) ||
            (uVar8 = *pbVar4 - 0x30, 9 < uVar8)) || (uVar6 = iVar7 - uVar8, SBORROW4(iVar7,uVar8)))
        goto LAB_0128cab4;
        iVar3 = iVar3 + -1;
        pbVar4 = pbVar4 + 1;
      } while (iVar3 != 0);
    }
  }
  else {
    if (cVar5 == '+') {
      uVar9 = CONCAT44(iVar3 + -1,pcVar2 + 1);
    }
    iVar3 = (int)(uVar9 >> 0x20);
    pbVar4 = (byte *)uVar9;
    if (uVar9 < 0x800000000) {
      if (iVar3 == 0) {
        uVar6 = 0;
      }
      else {
        uVar6 = *pbVar4 - 0x30;
        if (9 < uVar6) {
LAB_0128cab4:
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
        if (iVar3 != 1) {
          if (9 < pbVar4[1] - 0x30) goto LAB_0128cab4;
          uVar6 = (pbVar4[1] - 0x30) + uVar6 * 10;
          if (iVar3 != 2) {
            if (9 < pbVar4[2] - 0x30) goto LAB_0128cab4;
            uVar6 = (pbVar4[2] - 0x30) + uVar6 * 10;
            if (iVar3 != 3) {
              if (9 < pbVar4[3] - 0x30) goto LAB_0128cab4;
              uVar6 = (pbVar4[3] - 0x30) + uVar6 * 10;
              if (iVar3 != 4) {
                if (9 < pbVar4[4] - 0x30) goto LAB_0128cab4;
                uVar6 = (pbVar4[4] - 0x30) + uVar6 * 10;
                if (iVar3 != 5) {
                  if (9 < pbVar4[5] - 0x30) goto LAB_0128cab4;
                  uVar6 = (pbVar4[5] - 0x30) + uVar6 * 10;
                  if (iVar3 != 6) {
                    if (9 < pbVar4[6] - 0x30) goto LAB_0128cab4;
                    uVar6 = (pbVar4[6] - 0x30) + uVar6 * 10;
                  }
                }
              }
            }
          }
        }
      }
    }
    else {
      uVar6 = 0;
      do {
        iVar3 = (int)((longlong)(int)uVar6 * 10);
        if ((((int)((ulonglong)((longlong)(int)uVar6 * 10) >> 0x20) != iVar3 >> 0x1f) ||
            (uVar8 = *(byte *)uVar9 - 0x30, 9 < uVar8)) ||
           (uVar6 = iVar3 + uVar8, SCARRY4(iVar3,uVar8))) goto LAB_0128cab4;
        iVar3 = (int)(uVar9 >> 0x20) + -1;
        uVar9 = CONCAT44(iVar3,(byte *)uVar9 + 1);
      } while (iVar3 != 0);
    }
  }
  *param_1 = 0x80000005;
  param_1[1] = 1;
  param_1[2] = uVar6;
  return;
}


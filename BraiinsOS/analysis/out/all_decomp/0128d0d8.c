// FUN_0128d0d8 @ 0128d0d8 size=696 calls_out=5 calls_in=1
// strings: 

void FUN_0128d0d8(undefined4 *param_1,undefined4 param_2)

{
  byte bVar1;
  char *pcVar2;
  int iVar3;
  byte *pbVar4;
  undefined4 uVar5;
  char cVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  ulonglong uVar10;
  undefined1 *local_1c;
  undefined1 *local_18;
  undefined1 uStack_11;
  
  uVar10 = FUN_015bb1b4(param_2);
  iVar3 = (int)(uVar10 >> 0x20);
  pcVar2 = (char *)uVar10;
  if (pcVar2 == (char *)0x0) {
    local_1c = &uStack_11;
    local_18 = &LAB_01293510;
    FUN_00600d2c(param_1,&DAT_00570448,&local_1c);
    uVar5 = 0x146;
    goto LAB_0128d190;
  }
  if (iVar3 != 0) {
    if (iVar3 == 1) {
      cVar6 = *pcVar2;
      if (cVar6 == '+' || cVar6 == '-') goto LAB_0128d114;
    }
    else {
      cVar6 = *pcVar2;
    }
    if (cVar6 == '-') {
      iVar3 = iVar3 + -1;
      pbVar4 = (byte *)(pcVar2 + 1);
      uVar7 = 0;
      if (uVar10 < 0x900000000) {
        for (; iVar3 != 0; iVar3 = iVar3 + -1) {
          bVar1 = *pbVar4;
          if (9 < bVar1 - 0x30) goto LAB_0128d114;
          pbVar4 = pbVar4 + 1;
          uVar7 = uVar7 * 10 - (bVar1 - 0x30);
        }
      }
      else {
        do {
          iVar8 = (int)((longlong)(int)uVar7 * 10);
          if ((((int)((ulonglong)((longlong)(int)uVar7 * 10) >> 0x20) != iVar8 >> 0x1f) ||
              (uVar9 = *pbVar4 - 0x30, 9 < uVar9)) || (uVar7 = iVar8 - uVar9, SBORROW4(iVar8,uVar9))
             ) goto LAB_0128d114;
          iVar3 = iVar3 + -1;
          pbVar4 = pbVar4 + 1;
        } while (iVar3 != 0);
      }
LAB_0128d328:
      *param_1 = 0x80000005;
      param_1[1] = uVar7;
      return;
    }
    if (cVar6 == '+') {
      uVar10 = CONCAT44(iVar3 + -1,pcVar2 + 1);
    }
    iVar3 = (int)(uVar10 >> 0x20);
    pbVar4 = (byte *)uVar10;
    if (0x7ffffffff < uVar10) {
      uVar7 = 0;
      do {
        iVar3 = (int)((longlong)(int)uVar7 * 10);
        if ((((int)((ulonglong)((longlong)(int)uVar7 * 10) >> 0x20) != iVar3 >> 0x1f) ||
            (uVar9 = *(byte *)uVar10 - 0x30, 9 < uVar9)) ||
           (uVar7 = iVar3 + uVar9, SCARRY4(iVar3,uVar9))) goto LAB_0128d114;
        iVar3 = (int)(uVar10 >> 0x20) + -1;
        uVar10 = CONCAT44(iVar3,(byte *)uVar10 + 1);
      } while (iVar3 != 0);
      goto LAB_0128d328;
    }
    if (iVar3 == 0) {
      *param_1 = 0x80000005;
      param_1[1] = 0;
      return;
    }
    uVar7 = *pbVar4 - 0x30;
    if (uVar7 < 10) {
      if (iVar3 == 1) goto LAB_0128d328;
      if (pbVar4[1] - 0x30 < 10) {
        uVar7 = (pbVar4[1] - 0x30) + uVar7 * 10;
        if (iVar3 == 2) goto LAB_0128d328;
        if (pbVar4[2] - 0x30 < 10) {
          uVar7 = (pbVar4[2] - 0x30) + uVar7 * 10;
          if (iVar3 == 3) goto LAB_0128d328;
          if (pbVar4[3] - 0x30 < 10) {
            uVar7 = (pbVar4[3] - 0x30) + uVar7 * 10;
            if (iVar3 == 4) goto LAB_0128d328;
            if (pbVar4[4] - 0x30 < 10) {
              uVar7 = (pbVar4[4] - 0x30) + uVar7 * 10;
              if (iVar3 == 5) goto LAB_0128d328;
              if (pbVar4[5] - 0x30 < 10) {
                uVar7 = (pbVar4[5] - 0x30) + uVar7 * 10;
                if (iVar3 == 6) goto LAB_0128d328;
                bVar1 = pbVar4[6];
                if (bVar1 - 0x30 < 10) {
                  *param_1 = 0x80000005;
                  param_1[1] = (bVar1 - 0x30) + uVar7 * 10;
                  return;
                }
              }
            }
          }
        }
      }
    }
  }
LAB_0128d114:
  iVar3 = thunk_FUN_016d4a50(0x28);
  if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(1,0x28);
  }
  FUN_016dd1aa(iVar3,&DAT_003b6b38,0x28);
  uVar5 = 0x149;
  *param_1 = 0x28;
  param_1[1] = iVar3;
  param_1[2] = 0x28;
LAB_0128d190:
  param_1[3] = &DAT_003b6e41;
  param_1[4] = 0x9c;
  param_1[5] = uVar5;
  return;
}


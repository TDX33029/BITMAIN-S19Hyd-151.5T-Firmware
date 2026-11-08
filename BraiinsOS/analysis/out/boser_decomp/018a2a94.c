// FUN_018a2a94 @ 018a2a94 size=464 calls_out=4 calls_in=4
// strings: 

void FUN_018a2a94(int *param_1,int *param_2)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  bool bVar8;
  ulonglong uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  uVar4 = param_2[2];
  bVar8 = false;
  if ((uVar4 < (uint)param_2[1]) && (bVar8 = *(char *)(*param_2 + uVar4) == 'u', bVar8)) {
    param_2[2] = uVar4 + 1;
  }
  uVar9 = FUN_018a65cc(param_2);
  if ((uVar9 & 1) == 0) {
    if ((uVar9 & 0xff00000000) == 0) {
      uVar4 = 0;
LAB_018a2b2c:
      iVar3 = *param_2;
      uVar2 = param_2[1];
      uVar5 = param_2[2];
      if ((uVar5 < uVar2) && (*(char *)(iVar3 + uVar5) == '_')) {
        uVar5 = uVar5 + 1;
        param_2[2] = uVar5;
      }
      uVar6 = uVar5 + uVar4;
      if ((!CARRY4(uVar5,uVar4)) && (param_2[2] = uVar6, uVar6 <= uVar2)) {
        if (((uVar5 != 0) && ((uVar5 < uVar2 && (*(char *)(iVar3 + uVar5) < -0x40)))) ||
           ((uVar6 != 0 && ((uVar6 < uVar2 && (*(char *)(iVar3 + uVar6) < -0x40)))))) {
                    /* WARNING: Subroutine does not return */
          FUN_012fb514();
        }
        iVar7 = iVar3 + uVar5;
        uVar11 = CONCAT44(uVar4,iVar7);
        if (!bVar8) {
          *param_1 = iVar7;
          param_1[1] = uVar4;
          param_1[2] = 1;
          param_1[3] = 0;
          return;
        }
        uVar2 = uVar4;
        do {
          uVar6 = uVar2;
          if (uVar6 == 0) {
            uVar10 = 1;
            goto LAB_018a2c38;
          }
          uVar2 = uVar6 - 1;
        } while (*(char *)(iVar3 + uVar5 + -1 + uVar6) != '_');
        uVar10 = FUN_018a6614(iVar7,uVar4);
        uVar11 = FUN_018a6664(iVar7,uVar4,uVar6);
LAB_018a2c38:
        if ((int)((ulonglong)uVar11 >> 0x20) != 0) {
          *(undefined8 *)param_1 = uVar10;
          *(undefined8 *)(param_1 + 2) = uVar11;
          return;
        }
      }
    }
    else {
      uVar4 = (uint)(uVar9 >> 0x20) & 0xff;
      do {
        uVar9 = FUN_018a65cc(param_2);
        if ((uVar9 & 1) != 0) goto LAB_018a2b2c;
        uVar2 = (uint)((ulonglong)uVar4 * 10);
      } while (((int)((ulonglong)uVar4 * 10 >> 0x20) == 0) &&
              (uVar5 = (uint)(uVar9 >> 0x20) & 0xff, uVar4 = uVar2 + uVar5, !CARRY4(uVar2,uVar5)));
    }
    bVar1 = 0;
    *param_1 = 0;
  }
  else {
    *param_1 = 0;
    bVar1 = (byte)(uVar9 >> 0x20) & 1;
  }
  *(byte *)(param_1 + 1) = bVar1;
  return;
}


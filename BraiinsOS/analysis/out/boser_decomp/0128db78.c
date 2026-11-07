// FUN_0128db78 @ 0128db78 size=400 calls_out=1 calls_in=1
// strings: 

void FUN_0128db78(int *param_1,int param_2,uint param_3,uint param_4)

{
  int iVar1;
  longlong lVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  undefined1 uVar11;
  uint uVar12;
  
  uVar11 = 4;
  if (param_3 < param_4) {
LAB_0128db8c:
    *(undefined1 *)(param_1 + 1) = uVar11;
    *param_1 = 0;
  }
  else {
    uVar6 = 0;
    uVar12 = 0;
    uVar11 = 0;
    for (uVar4 = 0; param_4 != uVar4 && param_3 != uVar4; uVar4 = uVar4 + 1) {
      uVar5 = *(byte *)(param_2 + uVar4) - 0x30 & 0xff;
      if (9 < uVar5) {
        uVar11 = 3;
        if (uVar4 < param_4) goto LAB_0128db8c;
        if (uVar4 < param_3) {
          if (-0x41 < *(char *)(param_2 + uVar4)) goto LAB_0128dc30;
        }
        else if (uVar4 == param_3) goto LAB_0128dc30;
        uVar3 = 0x1c263a0;
        goto LAB_0128dcf8;
      }
      uVar9 = (uint)((ulonglong)uVar6 * 10);
      lVar2 = (longlong)(int)uVar12 * 10 + ((ulonglong)uVar6 * 10 >> 0x20);
      uVar8 = (uint)lVar2;
      uVar6 = (uint)((ulonglong)lVar2 >> 0x20);
      if (uVar6 != (int)uVar8 >> 0x1f || (int)(uVar6 ^ uVar8) < 0) goto LAB_0128db8c;
      uVar6 = uVar9 + uVar5;
      uVar12 = uVar8 + CARRY4(uVar9,uVar5);
      if ((int)((uVar8 ^ uVar12) & ~uVar8) < 0) goto LAB_0128db8c;
    }
    uVar4 = param_4;
    if ((param_4 < param_3) && (*(char *)(param_2 + param_4) < -0x40)) {
      uVar3 = 0x1c26390;
LAB_0128dcf8:
                    /* WARNING: Subroutine does not return */
      FUN_012fb514(param_2,param_3,uVar4,param_3,uVar3);
    }
LAB_0128dc30:
    uVar9 = *(uint *)(&DAT_00404cb0 + param_4 * 8);
    uVar8 = *(uint *)(&DAT_00404cb4 + param_4 * 8);
    lVar2 = (ulonglong)uVar9 * (ulonglong)uVar12 +
            ((ulonglong)(((int)uVar12 >> 0x1f) * uVar9) << 0x20 |
            (ulonglong)uVar9 * (ulonglong)uVar6 >> 0x20);
    uVar5 = (uint)((ulonglong)lVar2 >> 0x20);
    lVar2 = (ulonglong)uVar8 * (ulonglong)uVar6 + CONCAT44(uVar6 * ((int)uVar8 >> 0x1f),(int)lVar2);
    iVar7 = (int)lVar2;
    uVar10 = (uint)((ulonglong)lVar2 >> 0x20);
    iVar1 = iVar7 >> 0x1f;
    if ((longlong)(int)uVar8 * (longlong)(int)uVar12 +
        CONCAT44(((int)uVar5 >> 0x1f) + ((int)uVar10 >> 0x1f) + (uint)CARRY4(uVar5,uVar10),
                 uVar5 + uVar10) == CONCAT44(iVar1,iVar1)) {
      *param_1 = param_2 + uVar4;
      param_1[1] = param_3 - uVar4;
      param_1[2] = (int)((ulonglong)uVar9 * (ulonglong)uVar6);
      param_1[3] = iVar7;
    }
    else {
      *param_1 = 0;
      *(undefined1 *)(param_1 + 1) = 0;
    }
  }
  return;
}


// FUN_01288060 @ 01288060 size=1232 calls_out=4 calls_in=0
// strings: nMondayTuesdayWednesdayFridaySundayweek numberoffset houroffset minuteoffset secondampm

undefined4 FUN_01288060(int *param_1,uint *param_2,undefined4 param_3)

{
  undefined1 uVar1;
  byte bVar2;
  undefined2 uVar3;
  uint uVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  undefined2 *puVar11;
  uint uVar12;
  
  uVar8 = *param_2;
  uVar12 = (int)uVar8 >> 0xd;
  if (uVar12 < 10000) {
    iVar10 = 0;
    iVar7 = *param_1;
    iVar6 = param_1[2];
    uVar4 = (((uVar8 & 0x1fff) >> 4) + (uVar8 & 7)) % 7;
    if (uVar4 < 6) {
      iVar10 = uVar4 + 1;
    }
    puVar11 = (undefined2 *)(&DAT_01d05618)[iVar10 * 2];
    if ((uint)(iVar7 - iVar6) < 3) {
      FUN_006520b4(param_1,iVar6,3,1,1);
      iVar7 = *param_1;
      iVar6 = param_1[2];
    }
    iVar9 = param_1[1];
    iVar10 = iVar6 + 3;
    uVar3 = *puVar11;
    uVar1 = *(undefined1 *)(puVar11 + 1);
    param_1[2] = iVar10;
    *(undefined2 *)(iVar9 + iVar6) = uVar3;
    *(undefined1 *)((undefined2 *)(iVar9 + iVar6) + 1) = uVar1;
    if ((uint)(iVar7 - iVar10) < 2) {
      FUN_006520b4(param_1,iVar10,2,1,1);
      iVar9 = param_1[1];
      iVar10 = param_1[2];
    }
    iVar6 = iVar10 + 2;
    param_1[2] = iVar6;
    *(undefined2 *)(iVar9 + iVar10) = 0x202c;
    uVar4 = (uVar8 & 0x1fff) >> 3;
    if (0x2dc < uVar4) {
                    /* WARNING: Subroutine does not return */
      FUN_012fb12c(uVar4,0x2dd,&DAT_01d2a928);
    }
    bVar2 = ""[uVar4];
    uVar8 = ((uVar8 >> 3) + (uint)bVar2 & 0x3f) >> 1;
    if (uVar8 < 10) {
      if (*param_1 == iVar6) {
        FUN_006520b4(param_1,iVar6,1,1,1);
        iVar9 = param_1[1];
        iVar6 = param_1[2];
      }
      iVar10 = iVar10 + 3;
      *(byte *)(iVar9 + iVar6) = (byte)uVar8 | 0x30;
      param_1[2] = iVar10;
    }
    else {
      iVar6 = FUN_01288548(param_1,uVar8);
      if (iVar6 != 0) {
        return 1;
      }
      iVar10 = param_1[2];
    }
    iVar6 = iVar10;
    if (*param_1 == iVar10) {
      FUN_006520b4(param_1,iVar10,1,1,1);
      iVar6 = param_1[2];
    }
    iVar7 = param_1[1];
    iVar10 = iVar10 + 1;
    param_1[2] = iVar10;
    *(undefined1 *)(iVar7 + iVar6) = 0x20;
    uVar8 = (uVar4 + bVar2 >> 6) - 1;
    if (0xb < uVar8) {
                    /* WARNING: Subroutine does not return */
      FUN_012fb12c(uVar8,0xc,&DAT_01c25dc8);
    }
    iVar6 = *param_1;
    puVar11 = *(undefined2 **)(&DAT_01d05580 + uVar8 * 8);
    if ((uint)(iVar6 - iVar10) < 3) {
      FUN_006520b4(param_1,iVar10,3,1,1);
      iVar10 = param_1[2];
      iVar6 = *param_1;
      iVar7 = param_1[1];
    }
    uVar3 = *puVar11;
    iVar9 = iVar10 + 3;
    uVar1 = *(undefined1 *)(puVar11 + 1);
    param_1[2] = iVar9;
    *(undefined2 *)(iVar7 + iVar10) = uVar3;
    *(undefined1 *)((undefined2 *)(iVar7 + iVar10) + 1) = uVar1;
    if (iVar6 == iVar9) {
      FUN_006520b4(param_1,iVar6,1,1,1);
      iVar7 = param_1[1];
      iVar9 = param_1[2];
    }
    *(undefined1 *)(iVar7 + iVar9) = 0x20;
    param_1[2] = iVar10 + 4;
    uVar8 = (uint)((short)((uVar12 & 0xffff) >> 2) * 0x147b) >> 0x11;
    iVar6 = FUN_01288548(param_1,uVar8);
    if ((iVar6 == 0) && (iVar6 = FUN_01288548(param_1,uVar12 + uVar8 * -100), iVar6 == 0)) {
      iVar7 = param_1[2];
      iVar6 = iVar7;
      if (*param_1 == iVar7) {
        FUN_006520b4(param_1,iVar7,1,1,1);
        iVar6 = param_1[2];
      }
      uVar12 = param_2[1];
      uVar8 = param_2[2];
      *(undefined1 *)(param_1[1] + iVar6) = 0x20;
      param_1[2] = iVar7 + 1;
      iVar6 = FUN_01288548(param_1,uVar12 / 0xe10);
      if (iVar6 == 0) {
        uVar4 = uVar12 / 0x3c;
        iVar7 = param_1[2];
        iVar6 = iVar7;
        if (*param_1 == iVar7) {
          FUN_006520b4(param_1,iVar7,1,1,1);
          iVar6 = param_1[2];
        }
        *(undefined1 *)(param_1[1] + iVar6) = 0x3a;
        param_1[2] = iVar7 + 1;
        iVar6 = FUN_01288548(param_1,uVar4 + ((uVar4 / 0x3c) * 0x10 - uVar4 / 0x3c) * -4);
        if (iVar6 == 0) {
          iVar7 = param_1[2];
          iVar6 = iVar7;
          if (*param_1 == iVar7) {
            FUN_006520b4(param_1,iVar7,1,1,1);
            iVar6 = param_1[2];
          }
          *(undefined1 *)(param_1[1] + iVar6) = 0x3a;
          param_1[2] = iVar7 + 1;
          iVar6 = FUN_01288548(param_1,uVar12 + (uVar4 * 0x10 - uVar12 / 0x3c) * -4 +
                                       (uint)((ulonglong)(uVar8 >> 9) * 0x44b83 >> 0x27));
          if (iVar6 == 0) {
            iVar7 = param_1[2];
            iVar6 = iVar7;
            if (*param_1 == iVar7) {
              FUN_006520b4(param_1,iVar7,1,1,1);
              iVar6 = param_1[2];
            }
            *(undefined1 *)(param_1[1] + iVar6) = 0x20;
            param_1[2] = iVar7 + 1;
            uVar5 = FUN_012901dc(&DAT_0056e178,param_1,param_3);
            return uVar5;
          }
        }
      }
    }
  }
  return 1;
}


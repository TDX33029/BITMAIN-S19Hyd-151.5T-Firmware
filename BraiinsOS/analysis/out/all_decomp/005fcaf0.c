// FUN_005fcaf0 @ 005fcaf0 size=652 calls_out=3 calls_in=2
// strings: 

void FUN_005fcaf0(uint *param_1,int *param_2,uint param_3)

{
  byte *pbVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  short *psVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  
  uVar2 = 0;
  uVar11 = 0;
  uVar12 = 0;
  do {
    pbVar1 = (byte *)((int)param_2 + uVar2);
    uVar2 = uVar2 + 1;
    uVar7 = *pbVar1 & 0x3f;
    uVar8 = 1 << uVar7;
    uVar10 = 1 >> (0x20 - uVar7 & 0xff);
    if (-1 < (int)(uVar7 - 0x20)) {
      uVar8 = 0;
      uVar10 = 1 << (uVar7 - 0x20 & 0xff);
    }
    uVar12 = uVar10 | uVar12;
    uVar11 = uVar8 | uVar11;
  } while (param_3 != uVar2);
  uVar10 = 0;
  uVar7 = 1;
  uVar13 = 1;
  uVar8 = 0;
  uVar2 = 1;
  do {
    uVar3 = uVar8 + uVar10;
    if (param_3 <= uVar3) goto LAB_005fcd64;
    if (*(byte *)((int)param_2 + uVar7) < *(byte *)((int)param_2 + uVar3)) {
      uVar3 = uVar2 + 1;
      uVar13 = 1;
      uVar8 = 0;
      uVar10 = uVar2;
    }
    else {
      uVar4 = uVar8 + 1;
      if (*(byte *)((int)param_2 + uVar3) < *(byte *)((int)param_2 + uVar7)) {
        uVar3 = uVar4 + uVar2;
        uVar8 = 0;
        uVar13 = uVar3 - uVar10;
      }
      else {
        uVar3 = uVar2;
        if (uVar4 == uVar13) {
          uVar3 = uVar2 + uVar13;
        }
        uVar8 = 0;
        if (uVar4 != uVar13) {
          uVar8 = uVar4;
        }
      }
    }
    uVar7 = uVar3 + uVar8;
    uVar2 = uVar3;
  } while (uVar7 < param_3);
  uVar2 = 0;
  uVar6 = 1;
  uVar4 = 1;
  uVar7 = 0;
  uVar8 = 1;
  do {
    uVar3 = uVar7 + uVar2;
    if (param_3 <= uVar3) {
LAB_005fcd64:
                    /* WARNING: Subroutine does not return */
      FUN_00faa4a4(uVar3,param_3,&DAT_01892b20);
    }
    if (*(byte *)((int)param_2 + uVar3) < *(byte *)((int)param_2 + uVar6)) {
      uVar3 = uVar8 + 1;
      uVar4 = 1;
      uVar7 = 0;
      uVar2 = uVar8;
    }
    else {
      uVar5 = uVar7 + 1;
      if (*(byte *)((int)param_2 + uVar6) < *(byte *)((int)param_2 + uVar3)) {
        uVar3 = uVar5 + uVar8;
        uVar7 = 0;
        uVar4 = uVar3 - uVar2;
      }
      else {
        uVar3 = uVar8;
        if (uVar5 == uVar4) {
          uVar3 = uVar8 + uVar4;
        }
        uVar7 = 0;
        if (uVar5 != uVar4) {
          uVar7 = uVar5;
        }
      }
    }
    uVar6 = uVar3 + uVar7;
    uVar8 = uVar3;
  } while (uVar6 < param_3);
  uVar8 = 1;
  if (uVar2 < uVar10) {
    uVar4 = uVar13;
    uVar2 = uVar10;
  }
  uVar7 = param_3 - uVar2;
  uVar10 = uVar2;
  if (uVar2 < uVar7) {
    uVar10 = uVar7;
  }
  if (uVar2 * 2 < param_3) {
    if (param_3 < uVar2) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa478(&DAT_00418e0f,0x13,&DAT_0188afac);
    }
    if (uVar7 < uVar4) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa36c(0,uVar4,uVar7,&DAT_0188afbc);
    }
    if (uVar2 <= uVar4) {
      uVar7 = uVar2;
      if (3 < uVar2) {
        do {
          if (*(int *)((int)param_2 + uVar4) != *param_2) goto LAB_005fcc84;
          uVar7 = uVar7 - 4;
          param_2 = param_2 + 1;
        } while (3 < uVar7);
      }
      psVar9 = (short *)((int)param_2 + uVar4);
      if (1 < uVar7) {
        if (*psVar9 != (short)*param_2) goto LAB_005fcc84;
        uVar7 = uVar7 - 2;
        param_2 = (int *)((int)param_2 + 2);
        psVar9 = psVar9 + 1;
      }
      if (uVar7 == 0) {
        uVar8 = 0;
      }
      else {
        uVar8 = (uint)((char)*psVar9 != (char)*param_2);
        if ((char)*psVar9 != (char)*param_2) {
          uVar4 = uVar10;
        }
      }
      goto LAB_005fcc88;
    }
  }
LAB_005fcc84:
  uVar4 = uVar10;
LAB_005fcc88:
  *param_1 = uVar8;
  param_1[1] = uVar4;
  param_1[2] = uVar11;
  param_1[3] = uVar12;
  param_1[4] = uVar2;
  return;
}


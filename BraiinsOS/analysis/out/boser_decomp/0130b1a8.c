// FUN_0130b1a8 @ 0130b1a8 size=444 calls_out=4 calls_in=3
// strings: 

void FUN_0130b1a8(undefined4 *param_1)

{
  uint uVar1;
  byte *pbVar2;
  byte *pbVar3;
  byte *pbVar4;
  undefined4 uVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  byte *pbVar9;
  byte *pbVar10;
  int iVar11;
  byte *pbVar12;
  int local_38;
  byte *pbStack_34;
  byte *pbStack_30;
  byte *local_2c;
  byte *local_28;
  
  FUN_01312ce0(&local_38);
  pbVar4 = pbStack_34;
  if (local_38 == 1) {
    pbVar2 = local_28;
    pbVar12 = local_2c;
  }
  else {
    pbVar3 = pbStack_34 + (int)pbStack_30;
    pbVar12 = (byte *)0x0;
    pbVar9 = pbStack_34;
    do {
      pbVar2 = pbVar12;
      if (pbVar9 == pbVar3) {
        pbVar12 = (byte *)0x0;
        pbVar2 = pbStack_30;
        if (pbStack_30 != (byte *)0x0) goto LAB_0130b29c;
        goto LAB_0130b2e0;
      }
      pbVar10 = pbVar9 + 1;
      uVar7 = (uint)*pbVar9;
      if (0x7fffffff < (uint)(int)(char)*pbVar9) {
        if (uVar7 < 0xe0) {
          uVar7 = pbVar9[1] & 0x3f | (uVar7 & 0x1f) << 6;
          pbVar10 = pbVar9 + 2;
        }
        else {
          uVar1 = pbVar9[2] & 0x3f | (pbVar9[1] & 0x3f) << 6;
          if (uVar7 < 0xf0) {
            uVar7 = uVar1 | (uVar7 & 0x1f) << 0xc;
            pbVar10 = pbVar9 + 3;
          }
          else {
            pbVar10 = pbVar9 + 4;
            uVar7 = pbVar9[3] & 0x3f | uVar1 << 6 | (uVar7 & 7) << 0x12;
          }
        }
      }
      pbVar12 = pbVar10 + ((int)pbVar2 - (int)pbVar9);
      pbVar9 = pbVar10;
    } while ((uVar7 & 0xffffffdf) - 0x41 < 0x1a);
    if (pbVar2 == (byte *)0x0) {
      pbVar12 = pbStack_30;
LAB_0130b2e0:
      pbVar2 = &DAT_0000000f;
      pbVar4 = &DAT_00000001;
      pbStack_30 = pbStack_34;
    }
    else {
      pbVar12 = pbStack_30 + -(int)pbVar2;
      pbVar3 = pbStack_34 + (int)pbVar2;
LAB_0130b29c:
      FUN_01312ce0(&local_38,pbVar3,pbVar12);
      if (local_38 != 1) {
        uVar5 = 0;
        if ((int)pbVar2 < 0) {
LAB_0130b2d0:
                    /* WARNING: Subroutine does not return */
          FUN_00664620(uVar5,pbVar2);
        }
        uVar5 = 1;
        pbVar12 = (byte *)FUN_01298504(pbVar2,1);
        if (pbVar12 == (byte *)0x0) goto LAB_0130b2d0;
        FUN_01bed4e2(pbVar12,pbVar4,pbVar2);
        uVar5 = 0;
        iVar6 = 0x14;
        iVar8 = 0x10;
        iVar11 = 0xc;
        param_1[1] = pbStack_34;
        param_1[2] = pbStack_30;
        pbStack_30 = pbVar2;
        goto LAB_0130b2fc;
      }
      pbVar2 = local_28;
      pbVar4 = pbStack_34;
      pbVar12 = local_2c;
    }
  }
  param_1[1] = pbVar4;
  uVar5 = 1;
  iVar6 = 0x10;
  iVar8 = 0xc;
  iVar11 = 8;
LAB_0130b2fc:
  *(byte **)((int)param_1 + iVar11) = pbStack_30;
  *(byte **)((int)param_1 + iVar8) = pbVar12;
  *(byte **)((int)param_1 + iVar6) = pbVar2;
  *param_1 = uVar5;
  return;
}


// FUN_016ba67c @ 016ba67c size=684 calls_out=4 calls_in=3
// strings: 

void FUN_016ba67c(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3,byte *param_4,
                 byte *param_5)

{
  undefined1 uVar1;
  byte *pbVar2;
  byte *pbVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  byte *pbVar6;
  undefined1 *puVar7;
  int iVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  int iVar11;
  byte *pbVar12;
  uint uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  int iVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  
  if (param_3[2] == 1) {
    pbVar6 = (byte *)param_3[3];
    iVar16 = param_3[5];
    if (pbVar6 == (byte *)0x0) {
      pbVar6 = (byte *)0x0;
    }
    else {
      pbVar3 = (byte *)param_3[6];
      if (pbVar6 < pbVar3) {
        if ((char)pbVar6[iVar16] < -0x40) goto LAB_016ba910;
      }
      else if (pbVar6 != pbVar3) {
LAB_016ba910:
                    /* WARNING: Subroutine does not return */
        FUN_00faa8ac(iVar16,pbVar3,0,pbVar6,&DAT_018af070);
      }
    }
  }
  else {
    iVar16 = param_3[5];
    pbVar6 = (byte *)param_3[6];
  }
  pbVar3 = (byte *)*param_2;
  iVar11 = param_2[2];
  pbVar2 = pbVar3 + -iVar11;
  if (pbVar2 < param_5 + ((int)pbVar6 - (int)param_4)) {
    FUN_016bd7fc(param_2,iVar11,param_5 + ((int)pbVar6 - (int)param_4),1,1);
    pbVar3 = (byte *)*param_2;
    iVar11 = param_2[2];
    pbVar2 = pbVar3 + -iVar11;
  }
  if (pbVar2 < pbVar6) {
    FUN_016bd7fc(param_2,iVar11,pbVar6,1,1);
    pbVar3 = (byte *)*param_2;
    iVar11 = param_2[2];
  }
  iVar8 = param_2[1];
  FUN_016dd1aa(iVar8 + iVar11,iVar16,pbVar6);
  pbVar12 = pbVar6 + iVar11;
  param_2[2] = pbVar12;
  pbVar2 = pbVar12;
  if (pbVar3 == pbVar12) {
    FUN_016bd7fc(param_2,pbVar3,1,1,1);
    iVar8 = param_2[1];
    pbVar2 = (byte *)param_2[2];
  }
  pbVar2[iVar8] = 0x23;
  param_2[2] = pbVar12 + 1;
  if (param_4 == param_5) {
LAB_016ba80c:
    FUN_016b5408(param_2,param_4,param_5);
    uVar4 = param_2[1];
    uVar5 = param_2[2];
    param_1[4] = *param_2;
    param_1[5] = uVar4;
    param_1[6] = uVar5;
    uVar17 = param_3[8];
    uVar18 = param_3[9];
    uVar14 = param_3[10];
    uVar15 = param_3[0xb];
    uVar4 = param_3[0xe];
    uVar5 = param_3[0xf];
    uVar9 = param_3[0x10];
    param_1[0xd] = param_3[0xd];
    param_1[0xe] = uVar4;
    param_1[0xf] = uVar5;
    param_1[0x10] = uVar9;
    uVar4 = *param_3;
    uVar5 = param_3[1];
    uVar10 = param_3[0xc];
    uVar9 = param_3[7];
    uVar1 = *(undefined1 *)(param_3 + 0x11);
    param_1[3] = pbVar6;
    *(undefined1 *)(param_1 + 0x11) = uVar1;
    param_1[2] = 1;
    param_1[10] = uVar14;
    param_1[0xb] = uVar15;
    param_1[0xc] = uVar10;
    param_1[7] = uVar9;
    param_1[8] = uVar17;
    param_1[9] = uVar18;
    *param_1 = uVar4;
    param_1[1] = uVar5;
    return;
  }
  pbVar3 = param_4;
  do {
    param_4 = pbVar3 + 1;
    puVar7 = (undefined1 *)(uint)*pbVar3;
    if (0x7fffffff < (uint)(int)(char)*pbVar3) {
      if (puVar7 < (undefined1 *)0xe0) {
        puVar7 = (undefined1 *)(pbVar3[1] & 0x3f | ((uint)puVar7 & 0x1f) << 6);
        param_4 = pbVar3 + 2;
      }
      else {
        uVar13 = pbVar3[2] & 0x3f | (pbVar3[1] & 0x3f) << 6;
        if (puVar7 < (undefined1 *)0xf0) {
          puVar7 = (undefined1 *)(uVar13 | ((uint)puVar7 & 0x1f) << 0xc);
          param_4 = pbVar3 + 3;
        }
        else {
          puVar7 = (undefined1 *)(pbVar3[3] & 0x3f | uVar13 << 6 | ((uint)puVar7 & 7) << 0x12);
          param_4 = pbVar3 + 4;
          if (puVar7 == &DAT_00110000) goto LAB_016ba80c;
        }
      }
    }
    if (((((undefined1 *)0xd < puVar7) || ((1 << ((uint)puVar7 & 0xff) & 0x2600U) == 0)) &&
        (puVar7 != &DAT_00110000)) || (pbVar3 = param_4, param_4 == param_5)) goto LAB_016ba80c;
  } while( true );
}


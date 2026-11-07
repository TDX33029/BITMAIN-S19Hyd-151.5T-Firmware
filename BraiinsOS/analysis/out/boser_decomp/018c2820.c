// FUN_018c2820 @ 018c2820 size=436 calls_out=4 calls_in=2
// strings: 

void FUN_018c2820(byte *param_1,byte *param_2,undefined4 param_3)

{
  code *pcVar1;
  bool bVar2;
  byte bVar3;
  undefined2 uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  int *piVar8;
  int iVar9;
  undefined4 uVar10;
  byte bVar11;
  undefined4 uVar12;
  
  bVar11 = *param_2;
  piVar8 = (int *)(&switchD_018c2838::switchdataD_018c283c)[bVar11];
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(bVar11) {
  case 0:
    uVar6 = *(uint *)(param_2 + 0xc);
    uVar10 = 0;
    iVar5 = uVar6 * 2;
    if ((int)(uVar6 | uVar6 << 1) < 0) goto LAB_018c2930;
    uVar12 = *(undefined4 *)(param_2 + 8);
    bVar11 = 0;
    uVar7 = uVar6;
    if (iVar5 == 0) {
      iVar9 = 1;
      uVar7 = 0;
    }
    else {
LAB_018c29cc:
      uVar10 = 1;
      iVar9 = FUN_01298504(iVar5,1);
      uVar6 = uVar7;
      if (iVar9 == 0) {
LAB_018c2930:
                    /* WARNING: Subroutine does not return */
        FUN_00664620(uVar10,iVar5);
      }
    }
    goto LAB_018c29f8;
  case 1:
    uVar6 = *(uint *)(param_2 + 0xc);
    uVar10 = 0;
    iVar5 = uVar6 * 2;
    if ((int)(uVar6 | uVar6 << 1) < 0) goto LAB_018c2930;
    uVar12 = *(undefined4 *)(param_2 + 8);
    bVar11 = 1;
    uVar7 = uVar6;
    if (iVar5 != 0) goto LAB_018c29cc;
    uVar7 = 0;
    iVar9 = 1;
LAB_018c29f8:
    *(uint *)(param_1 + 4) = uVar7;
    *(int *)(param_1 + 8) = iVar9;
    FUN_01bed4e2(iVar9,uVar12,iVar5);
    uVar4 = *(undefined2 *)(param_2 + 1);
    *(uint *)(param_1 + 0xc) = uVar6;
LAB_018c2a14:
    *(undefined2 *)(param_1 + 1) = uVar4;
    break;
  case 2:
    uVar10 = *(undefined4 *)(param_2 + 8);
    uVar12 = *(undefined4 *)(param_2 + 0xc);
    *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 4);
    *(undefined4 *)(param_1 + 8) = uVar10;
    *(undefined4 *)(param_1 + 0xc) = uVar12;
    bVar11 = 2;
    break;
  case 7:
    bVar3 = param_2[1];
    bVar11 = 7;
    goto LAB_018c2944;
  case 8:
    bVar3 = param_2[1];
    bVar11 = 8;
    goto LAB_018c2944;
  case 9:
    uVar4 = *(undefined2 *)(param_2 + 1);
    bVar11 = 9;
    goto LAB_018c2a14;
  case 10:
    uVar6 = *(uint *)(param_2 + 4);
    if (9 < uVar6) {
      piVar8 = *(int **)(param_2 + 8);
      do {
        iVar5 = *piVar8;
        bVar2 = (bool)hasExclusiveAccess(piVar8);
      } while (!bVar2);
      *piVar8 = iVar5 + 1;
      if (iVar5 < 0) {
LAB_018c2a20:
                    /* WARNING: Does not return */
        pcVar1 = (code *)software_udf(0xfdee,0x18c2a20);
        (*pcVar1)();
      }
      param_3 = *(undefined4 *)(param_2 + 0xc);
    }
    *(uint *)(param_1 + 4) = uVar6;
    *(int **)(param_1 + 8) = piVar8;
    *(undefined4 *)(param_1 + 0xc) = param_3;
    bVar11 = 10;
    break;
  case 0xb:
    bVar3 = param_2[1];
    bVar11 = 0xb;
LAB_018c2944:
    param_1[1] = bVar3;
    break;
  case 0xc:
    iVar5 = *(int *)(param_2 + 4);
    if (iVar5 == 4) {
      piVar8 = *(int **)(param_2 + 8);
      do {
        iVar9 = *piVar8;
        bVar2 = (bool)hasExclusiveAccess(piVar8);
      } while (!bVar2);
      *piVar8 = iVar9 + 1;
      if (iVar9 < 0) goto LAB_018c2a20;
      param_3 = *(undefined4 *)(param_2 + 0xc);
    }
    *(int *)(param_1 + 4) = iVar5;
    *(int **)(param_1 + 8) = piVar8;
    *(undefined4 *)(param_1 + 0xc) = param_3;
    bVar11 = 0xc;
    break;
  case 0xd:
    FUN_006666fc(param_1 + 4,*(undefined4 *)(param_2 + 8),*(undefined4 *)(param_2 + 0xc));
    bVar11 = 0xd;
  }
  *param_1 = bVar11;
  return;
}


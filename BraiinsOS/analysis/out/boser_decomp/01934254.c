// FUN_01934254 @ 01934254 size=508 calls_out=5 calls_in=0
// strings: 

void FUN_01934254(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  code *pcVar1;
  undefined1 uVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  int iVar10;
  int *piVar11;
  int *piVar12;
  int *piVar13;
  int unaff_r5;
  uint uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  int local_68;
  int local_64;
  uint local_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  FUN_01933ff0(&local_68);
  iVar4 = local_64;
  if (local_68 == 1) {
    FUN_00a97e8c(local_64,local_60 & 0xff);
                    /* WARNING: Subroutine does not return */
    FUN_012fb0cc(&DAT_01d259a0);
  }
  uVar14 = local_60 & 0xff;
  iVar5 = FUN_01934498(local_64 + 8,param_3);
  iVar6 = 0;
  if (iVar5 != 0) {
    iVar6 = *(int *)(iVar5 + 0x34);
    unaff_r5 = iVar5;
  }
  if (iVar5 != 0 && iVar6 != -0x80000000) {
    uVar7 = *(undefined4 *)(unaff_r5 + 0x40);
    local_68 = *(int *)(unaff_r5 + 0x44);
    local_64 = *(int *)(unaff_r5 + 0x48);
    local_60 = *(uint *)(unaff_r5 + 0x4c);
    uStack_5c = *(undefined4 *)(unaff_r5 + 0x50);
    local_58 = *(undefined4 *)(unaff_r5 + 0x54);
    uStack_54 = *(undefined4 *)(unaff_r5 + 0x58);
    uStack_50 = *(undefined4 *)(unaff_r5 + 0x5c);
    uStack_4c = *(undefined4 *)(unaff_r5 + 0x60);
    uStack_48 = *(undefined4 *)(unaff_r5 + 100);
    piVar13 = *(int **)(unaff_r5 + 0x2c);
    uVar2 = *(undefined1 *)(unaff_r5 + 0x68);
    do {
      iVar6 = *piVar13;
      bVar3 = (bool)hasExclusiveAccess(piVar13);
    } while (!bVar3);
    *piVar13 = iVar6 + 1;
    if (-1 < iVar6) {
      FUN_015e8ad4(&local_30,*(undefined4 *)(unaff_r5 + 0x38),*(undefined4 *)(unaff_r5 + 0x3c));
      local_40 = local_30;
      uStack_3c = uStack_2c;
      uStack_38 = uStack_28;
      uVar16 = *(undefined4 *)(unaff_r5 + 0x28);
      piVar12 = *(int **)(unaff_r5 + 0x30);
      uVar8 = *(undefined4 *)(unaff_r5 + 0x10);
      uVar15 = *(undefined4 *)(unaff_r5 + 0x14);
      do {
        iVar6 = *piVar12;
        bVar3 = (bool)hasExclusiveAccess(piVar12);
      } while (!bVar3);
      *piVar12 = iVar6 + 1;
      if (-1 < iVar6) {
        iVar6 = *(int *)(unaff_r5 + 0x18);
        if (iVar6 != -1) {
          piVar11 = (int *)(iVar6 + 4);
          do {
            iVar5 = *piVar11;
            bVar3 = (bool)hasExclusiveAccess(piVar11);
          } while (!bVar3);
          *piVar11 = iVar5 + 1;
          if (iVar5 < 0) goto LAB_0193444c;
        }
        iVar5 = *(int *)(unaff_r5 + 0x20);
        uVar9 = *(undefined4 *)(unaff_r5 + 0x1c);
        if (iVar5 != -1) {
          piVar11 = (int *)(iVar5 + 4);
          do {
            iVar10 = *piVar11;
            bVar3 = (bool)hasExclusiveAccess(piVar11);
          } while (!bVar3);
          *piVar11 = iVar10 + 1;
          if (iVar10 < 0) goto LAB_0193444c;
        }
        uVar17 = *(undefined4 *)(unaff_r5 + 0x24);
        param_1[9] = local_30;
        param_1[10] = uStack_2c;
        param_1[0xb] = uStack_28;
        param_1[0xd] = local_68;
        param_1[0xe] = local_64;
        param_1[0xf] = local_60;
        param_1[0x10] = uStack_5c;
        param_1[0x11] = local_58;
        param_1[0x12] = uStack_54;
        param_1[0x13] = uStack_50;
        param_1[0x14] = uStack_4c;
        param_1[0x15] = uStack_48;
        *(undefined1 *)(param_1 + 0x16) = uVar2;
        param_1[0xc] = uVar7;
        *param_1 = uVar8;
        param_1[8] = piVar12;
        param_1[1] = uVar15;
        param_1[2] = iVar6;
        param_1[7] = piVar13;
        param_1[3] = uVar9;
        param_1[4] = iVar5;
        param_1[5] = uVar17;
        param_1[6] = uVar16;
        goto LAB_01934420;
      }
    }
LAB_0193444c:
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xfdee,0x193444c);
    (*pcVar1)();
  }
  param_1[9] = 0x80000000;
LAB_01934420:
  FUN_00a97e8c(iVar4,uVar14);
  return;
}


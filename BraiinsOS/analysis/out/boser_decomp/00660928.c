// FUN_00660928 @ 00660928 size=536 calls_out=1 calls_in=2
// strings: 

void FUN_00660928(uint *param_1,uint *param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint *puVar5;
  uint *puVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  uint *puVar11;
  uint uVar12;
  uint *puVar13;
  uint *puVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  
  uVar17 = param_1[1];
  uVar2 = *(uint *)(param_3 + 8);
  if (uVar2 <= uVar17) {
LAB_00660ad8:
                    /* WARNING: Subroutine does not return */
    FUN_012fb12c(uVar17,uVar2,&DAT_01c03e28);
  }
  uVar7 = *param_1;
  if (uVar2 <= uVar7) {
LAB_00660ae8:
                    /* WARNING: Subroutine does not return */
    FUN_012fb12c(uVar7,uVar2,&DAT_01c03e38);
  }
  uVar10 = param_1[3];
  if (uVar10 < uVar2) {
    uVar12 = param_1[2];
    if (uVar2 <= uVar12) {
                    /* WARNING: Subroutine does not return */
      FUN_012fb12c(uVar12,uVar2,&DAT_01c03e38);
    }
    iVar3 = *(int *)(param_3 + 4);
    uVar8 = *(uint *)(iVar3 + uVar7 * 0xc + 8);
    uVar4 = *(uint *)(iVar3 + uVar17 * 0xc + 8);
    uVar12 = *(uint *)(iVar3 + uVar12 * 0xc + 8);
    uVar7 = *(uint *)(iVar3 + uVar10 * 0xc + 8);
    iVar9 = 8;
    if (uVar12 < uVar7) {
      iVar9 = 0xc;
    }
    puVar13 = (uint *)((int)param_1 + iVar9);
    uVar17 = *puVar13;
    iVar9 = 0xc;
    if (uVar12 < uVar7) {
      iVar9 = 8;
    }
    if (uVar2 <= uVar17) goto LAB_00660ad8;
    uVar7 = param_1[uVar8 < uVar4];
    if (uVar2 <= uVar7) goto LAB_00660ae8;
    puVar11 = (uint *)((int)param_1 + iVar9);
    uVar10 = *puVar11;
    if (uVar10 < uVar2) {
      puVar14 = param_1 + (uVar4 <= uVar8);
      uVar12 = *puVar14;
      if (uVar2 <= uVar12) {
                    /* WARNING: Subroutine does not return */
        FUN_012fb12c(uVar12,uVar2,&DAT_01c03e38);
      }
      uVar16 = *(uint *)(iVar3 + uVar17 * 0xc + 8);
      uVar15 = *(uint *)(iVar3 + uVar12 * 0xc + 8);
      uVar12 = *(uint *)(iVar3 + uVar7 * 0xc + 8);
      uVar10 = *(uint *)(iVar3 + uVar10 * 0xc + 8);
      puVar5 = puVar13;
      if (uVar12 < uVar16) {
        puVar5 = puVar14;
      }
      if (uVar15 < uVar10) {
        puVar5 = puVar11;
      }
      else {
        puVar13 = puVar14;
      }
      uVar1 = *puVar5;
      if (uVar12 < uVar16) {
        puVar13 = param_1 + (uVar8 < uVar4);
      }
      if (uVar2 <= uVar1) {
                    /* WARNING: Subroutine does not return */
        FUN_012fb12c(uVar1,uVar2,&DAT_01c03e28);
      }
      uVar4 = *puVar13;
      if (uVar2 <= uVar4) {
                    /* WARNING: Subroutine does not return */
        FUN_012fb12c(uVar4,uVar2,&DAT_01c03e38);
      }
      if (uVar12 < uVar16) {
        uVar7 = uVar17;
      }
      uVar2 = *(uint *)(iVar3 + uVar1 * 0xc + 8);
      uVar17 = *(uint *)(iVar3 + uVar4 * 0xc + 8);
      *param_2 = uVar7;
      puVar6 = puVar5;
      if (uVar17 < uVar2) {
        puVar6 = puVar13;
        puVar13 = puVar5;
      }
      param_2[1] = *puVar13;
      param_2[2] = *puVar6;
      if (uVar15 < uVar10) {
        puVar11 = puVar14;
      }
      param_2[3] = *puVar11;
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012fb12c(uVar10,uVar2,&DAT_01c03e28);
}


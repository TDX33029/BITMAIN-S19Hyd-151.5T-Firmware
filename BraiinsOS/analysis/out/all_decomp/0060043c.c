// FUN_0060043c @ 0060043c size=552 calls_out=1 calls_in=1
// strings: 

void FUN_0060043c(uint *param_1,uint *param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint *puVar6;
  uint *puVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  uint *puVar12;
  uint uVar13;
  uint *puVar14;
  uint *puVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  
  uVar3 = *(uint *)(param_3 + 8);
  uVar5 = param_1[1];
  if (uVar3 <= uVar5) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa4a4(uVar5,uVar3,&DAT_018574a8);
  }
  uVar8 = *param_1;
  if (uVar3 <= uVar8) {
LAB_006005ec:
                    /* WARNING: Subroutine does not return */
    FUN_00faa4a4(uVar8,uVar3,&DAT_018574b8);
  }
  uVar10 = param_1[3];
  if (uVar10 < uVar3) {
    uVar18 = param_1[2];
    if (uVar3 <= uVar18) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa4a4(uVar18,uVar3,&DAT_018574b8);
    }
    iVar4 = *(int *)(param_3 + 4);
    iVar9 = 8;
    uVar13 = *(uint *)(iVar4 + uVar8 * 0xc + 8);
    uVar5 = *(uint *)(iVar4 + uVar5 * 0xc + 8);
    uVar8 = *(uint *)(iVar4 + uVar10 * 0xc + 8);
    uVar10 = *(uint *)(iVar4 + uVar18 * 0xc + 8);
    if (uVar10 < uVar8) {
      iVar9 = 0xc;
    }
    iVar11 = 0xc;
    puVar14 = (uint *)((int)param_1 + iVar9);
    uVar18 = *puVar14;
    if (uVar10 < uVar8) {
      iVar11 = 8;
    }
    if (uVar3 <= uVar18) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa4a4(uVar18,uVar3,&DAT_018574a8);
    }
    uVar8 = param_1[uVar13 < uVar5];
    if (uVar3 <= uVar8) goto LAB_006005ec;
    puVar12 = (uint *)((int)param_1 + iVar11);
    uVar10 = *puVar12;
    if (uVar10 < uVar3) {
      puVar15 = param_1 + (uVar5 <= uVar13);
      uVar1 = *puVar15;
      if (uVar3 <= uVar1) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa4a4(uVar1,uVar3,&DAT_018574b8);
      }
      uVar17 = *(uint *)(iVar4 + uVar18 * 0xc + 8);
      uVar16 = *(uint *)(iVar4 + uVar1 * 0xc + 8);
      uVar1 = *(uint *)(iVar4 + uVar8 * 0xc + 8);
      uVar10 = *(uint *)(iVar4 + uVar10 * 0xc + 8);
      puVar6 = puVar14;
      if (uVar1 < uVar17) {
        puVar6 = puVar15;
      }
      if (uVar16 < uVar10) {
        puVar6 = puVar12;
      }
      else {
        puVar14 = puVar15;
      }
      uVar2 = *puVar6;
      if (uVar1 < uVar17) {
        puVar14 = param_1 + (uVar13 < uVar5);
      }
      if (uVar3 <= uVar2) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa4a4(uVar2,uVar3,&DAT_018574a8);
      }
      uVar5 = *puVar14;
      if (uVar3 <= uVar5) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa4a4(uVar5,uVar3,&DAT_018574b8);
      }
      if (uVar1 < uVar17) {
        uVar8 = uVar18;
      }
      uVar3 = *(uint *)(iVar4 + uVar2 * 0xc + 8);
      uVar5 = *(uint *)(iVar4 + uVar5 * 0xc + 8);
      *param_2 = uVar8;
      puVar7 = puVar6;
      if (uVar5 < uVar3) {
        puVar7 = puVar14;
        puVar14 = puVar6;
      }
      param_2[1] = *puVar14;
      param_2[2] = *puVar7;
      if (uVar16 < uVar10) {
        puVar12 = puVar15;
      }
      param_2[3] = *puVar12;
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00faa4a4(uVar10,uVar3,&DAT_018574a8);
}


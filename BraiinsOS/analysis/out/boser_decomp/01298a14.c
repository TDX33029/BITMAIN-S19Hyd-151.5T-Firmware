// FUN_01298a14 @ 01298a14 size=628 calls_out=9 calls_in=1
// strings: 

void FUN_01298a14(int *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined1 *puVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  undefined4 **ppuVar8;
  undefined4 ***pppuVar9;
  undefined4 ***pppuVar10;
  undefined4 *puVar11;
  int iVar12;
  int ***pppiVar13;
  int unaff_r8;
  int ***pppiVar14;
  bool bVar15;
  undefined4 ***local_58;
  undefined1 *local_54;
  undefined4 ***local_50;
  undefined4 ****local_48;
  undefined4 *local_44;
  int ***local_40;
  undefined4 local_3c;
  int ***local_38;
  undefined4 *local_34;
  int ***local_30;
  undefined4 **local_28;
  
  puVar7 = (undefined4 *)*param_2;
  puVar11 = (undefined4 *)param_2[1];
  iVar12 = param_2[2];
  do {
    if (puVar7 == puVar11) {
      *param_1 = -0x80000000;
      return;
    }
    uVar5 = *puVar7;
    uVar6 = puVar7[1];
    puVar7 = puVar7 + 2;
    uVar1 = *(undefined4 *)(iVar12 + 0x48);
    uVar3 = *(undefined4 *)(iVar12 + 0x4c);
    *param_2 = puVar7;
    iVar2 = FUN_012a4878(uVar1,uVar3,uVar5,uVar6);
  } while (iVar2 == 0);
  puVar4 = *(undefined1 **)(iVar2 + 0x120);
  bVar15 = puVar4 == (undefined1 *)0x0;
  if (bVar15) {
    puVar4 = *(undefined1 **)(iVar2 + 0x34);
  }
  if (!bVar15 || puVar4 != &DAT_00110000) {
    local_48 = &local_38;
    local_30 = (undefined4 ***)0x0;
    local_38 = (undefined4 ***)0x0;
    local_3c = 0;
    local_34 = (undefined4 *)0x1;
    local_40 = (int ***)0x60000020;
    local_44 = (undefined4 *)&DAT_01ce223c;
    iVar12 = FUN_012bb12c(iVar2,&local_48);
    if (iVar12 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_013073dc(&DAT_00533383,0x37,&local_58,&DAT_01ce2254,&DAT_01d30334);
    }
    local_58 = local_38;
    local_54 = (undefined1 *)local_34;
    local_50 = local_30;
    goto LAB_01298ab4;
  }
  pppiVar14 = *(int ****)(iVar2 + 0xbc);
  if (pppiVar14 == (int ***)0x1) {
    uVar1 = 0;
    pppuVar9 = (undefined4 ***)(*(undefined4 **)(iVar2 + 0xb8))[1];
    if ((int)pppuVar9 < 0) goto LAB_01298b38;
    uVar3 = **(undefined4 **)(iVar2 + 0xb8);
    pppuVar10 = pppuVar9;
    if (pppuVar9 != (undefined4 ***)0x0) goto LAB_01298b00;
LAB_01298b6c:
    pppuVar9 = (undefined4 ***)0x0;
    puVar4 = (undefined1 *)0x1;
  }
  else {
    if (pppiVar14 != (int ***)0x0) {
      if (pppiVar14 < (int ***)0xaaaaaab) {
        ppuVar8 = *(undefined4 ***)(iVar2 + 0xb8);
        uVar1 = 4;
        unaff_r8 = (int)pppiVar14 * 0xc;
        local_34 = (undefined4 *)FUN_01298504(unaff_r8,4);
        if (local_34 != (undefined4 *)0x0) {
          pppiVar13 = (int ***)0x0;
          local_30 = (int ***)0x0;
          puVar7 = local_34;
          local_38 = pppiVar14;
          do {
            local_54 = &LAB_012b925c;
            local_58 = &local_28;
            local_28 = ppuVar8;
            FUN_00664898(&local_48,&DAT_005a4725,&local_58);
            pppiVar13 = (int ***)((int)pppiVar13 + 1);
            ppuVar8 = ppuVar8 + 2;
            *puVar7 = local_48;
            puVar7[1] = local_44;
            puVar7[2] = local_40;
            puVar7 = puVar7 + 3;
          } while (pppiVar14 != pppiVar13);
          local_48 = (undefined4 ****)local_38;
          local_44 = local_34;
          local_40 = pppiVar14;
          local_30 = pppiVar14;
          FUN_012b345c(&local_58,local_34,pppiVar14,&DAT_005319c3,1);
          FUN_006a41c0(&local_48);
          goto LAB_01298ab4;
        }
      }
      else {
        uVar1 = 0;
      }
                    /* WARNING: Subroutine does not return */
      FUN_00664620(uVar1,unaff_r8);
    }
    pppuVar9 = *(undefined4 ****)(iVar2 + 0x118);
    uVar1 = 0;
    if ((int)pppuVar9 < 0) goto LAB_01298b38;
    uVar3 = *(undefined4 *)(iVar2 + 0x114);
    pppuVar10 = pppuVar9;
    if (pppuVar9 == (undefined4 ***)0x0) goto LAB_01298b6c;
LAB_01298b00:
    uVar1 = 1;
    puVar4 = (undefined1 *)FUN_01298504(pppuVar9,1);
    pppuVar10 = pppuVar9;
    if (puVar4 == (undefined1 *)0x0) {
LAB_01298b38:
                    /* WARNING: Subroutine does not return */
      FUN_00664620(uVar1,pppuVar9);
    }
  }
  FUN_01bed4e2(puVar4,uVar3,pppuVar10);
  local_58 = pppuVar9;
  local_54 = puVar4;
  local_50 = pppuVar10;
LAB_01298ab4:
  *param_1 = (int)local_58;
  param_1[1] = (int)local_54;
  param_1[2] = (int)local_50;
  return;
}


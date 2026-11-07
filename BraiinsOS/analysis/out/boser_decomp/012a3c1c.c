// FUN_012a3c1c @ 012a3c1c size=1004 calls_out=7 calls_in=1
// strings: 

undefined1 * FUN_012a3c1c(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 *puVar6;
  int *piVar7;
  undefined4 uVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  int iVar14;
  undefined1 **ppuVar15;
  undefined4 *puVar16;
  undefined4 *local_bc;
  undefined4 *local_b8;
  uint local_a0;
  undefined4 *puStack_9c;
  uint uStack_98;
  undefined1 *local_94 [9];
  uint local_70;
  undefined4 *puStack_6c;
  uint uStack_68;
  undefined1 *local_64 [9];
  uint local_40;
  undefined4 *local_3c;
  uint local_38;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  iVar1 = *(int *)(*(int *)(param_1 + 8) + 0x4c);
  if (iVar1 != 0) {
    iVar14 = *(int *)(*(int *)(param_1 + 8) + 0x48);
    iVar1 = iVar1 * 0x134 + iVar14;
    do {
      iVar12 = *(int *)(iVar14 + 0xd4);
      if (iVar12 != 0) {
        uVar8 = *(undefined4 *)(iVar14 + 0x114);
        iVar9 = *(int *)(iVar14 + 0x118);
        piVar7 = (int *)(*(int *)(param_2 + 0x24) + 4);
        for (iVar5 = *(int *)(param_2 + 0x28) << 3; iVar5 != 0; iVar5 = iVar5 + -8) {
          if ((*piVar7 == iVar9) && (iVar2 = thunk_FUN_01bed842(piVar7[-1],uVar8,iVar9), iVar2 == 0)
             ) goto LAB_012a3d78;
          piVar7 = piVar7 + 2;
        }
        puVar4 = *(undefined4 **)(iVar14 + 0xd0);
        puVar6 = puVar4 + iVar12 * 7;
LAB_012a3cc8:
        iVar12 = FUN_012b1930(param_2 + 0x20,*puVar4,puVar4[1]);
        if (iVar12 == 0) goto LAB_012a3d64;
        iVar5 = puVar4[2];
        if (iVar5 != 0) {
          if (*(int *)(iVar12 + 0x34) != 0) {
            iVar9 = *(int *)(iVar12 + 0x30);
            iVar12 = iVar9 + *(int *)(iVar12 + 0x34) * 0xc;
            do {
              if (*(int *)(iVar9 + 8) != 0) {
                iVar10 = puVar4[3];
                iVar2 = *(int *)(iVar9 + 8) * 0xc;
                puVar16 = (undefined4 *)(*(int *)(iVar9 + 4) + 4);
                do {
                  if ((iVar10 == puVar16[1]) &&
                     (iVar3 = thunk_FUN_01bed842(iVar5,*puVar16,iVar10), iVar3 == 0))
                  goto LAB_012a3dd0;
                  puVar16 = puVar16 + 3;
                  iVar2 = iVar2 + -0xc;
                } while (iVar2 != 0);
              }
              iVar9 = iVar9 + 0xc;
            } while (iVar9 != iVar12);
          }
          goto LAB_012a3d64;
        }
LAB_012a3dd0:
        if (puVar4[4] == -0x80000000) goto LAB_012a3fd0;
        uVar13 = puVar4[6];
        uVar8 = 0;
        puVar6 = local_bc;
        if (uVar13 < 0xaaaaaab) {
          iVar12 = puVar4[5];
          puVar6 = (undefined4 *)(uVar13 * 0xc);
          if (puVar6 == (undefined4 *)0x0) {
            local_bc = (undefined4 *)&SUB_00000004;
            local_40 = 0;
          }
          else {
            uVar8 = 4;
            local_bc = (undefined4 *)FUN_01298504(puVar6,4);
            if (local_bc == (undefined4 *)0x0) goto LAB_012a3ff4;
            local_40 = uVar13;
          }
          uVar11 = 0;
          local_3c = local_bc;
          if (uVar13 != 0) {
            uVar11 = 0;
            puVar6 = local_bc;
            do {
              puVar4 = (undefined4 *)(iVar12 + uVar11 * 8);
              FUN_012b31d4(&local_30,*puVar4,puVar4[1]);
              uVar11 = uVar11 + 1;
              *puVar6 = local_30;
              puVar6[1] = uStack_2c;
              puVar6[2] = uStack_28;
              puVar6 = puVar6 + 3;
            } while (uVar13 != uVar11);
            uVar11 = uVar13;
          }
          ppuVar15 = local_94;
          local_a0 = local_40;
          puStack_9c = local_3c;
          uStack_98 = uVar11;
          local_38 = uVar11;
          FUN_012a1ccc(ppuVar15,param_1,3,0,iVar14,&local_a0,0);
          if (local_94[0] == &DAT_80000009) goto LAB_012a4000;
          goto LAB_012a3fc0;
        }
LAB_012a3ff4:
        local_bc = puVar6;
        local_b8 = local_bc;
        goto LAB_012a3ff8;
      }
LAB_012a3d78:
      uVar13 = *(uint *)(iVar14 + 200);
      if (uVar13 != 0) {
        uVar8 = *(undefined4 *)(iVar14 + 0x114);
        iVar5 = *(int *)(iVar14 + 0x118);
        piVar7 = (int *)(*(int *)(param_2 + 0x24) + 4);
        for (iVar12 = *(int *)(param_2 + 0x28) << 3; iVar12 != 0; iVar12 = iVar12 + -8) {
          if ((*piVar7 == iVar5) && (iVar9 = thunk_FUN_01bed842(piVar7[-1],uVar8,iVar5), iVar9 == 0)
             ) goto LAB_012a3fd0;
          piVar7 = piVar7 + 2;
        }
        uVar8 = 0;
        puVar6 = local_b8;
        if (0xaaaaaaa < uVar13) {
LAB_012a3fec:
          local_b8 = puVar6;
LAB_012a3ff8:
                    /* WARNING: Subroutine does not return */
          FUN_00664620(uVar8,local_b8);
        }
        iVar12 = *(int *)(iVar14 + 0xc4);
        uVar8 = 4;
        local_b8 = (undefined4 *)FUN_01298504((undefined4 *)(uVar13 * 0xc),4);
        puVar6 = (undefined4 *)(uVar13 * 0xc);
        if (local_b8 == (undefined4 *)0x0) goto LAB_012a3fec;
        uVar11 = 0;
        puVar6 = local_b8;
        local_40 = uVar13;
        local_3c = local_b8;
        do {
          puVar4 = (undefined4 *)(iVar12 + uVar11 * 8);
          FUN_012b31d4(&local_30,*puVar4,puVar4[1]);
          uVar11 = uVar11 + 1;
          *puVar6 = local_30;
          puVar6[1] = uStack_2c;
          puVar6[2] = uStack_28;
          puVar6 = puVar6 + 3;
        } while (uVar13 != uVar11);
        local_70 = local_40;
        puStack_6c = local_3c;
        ppuVar15 = local_64;
        uStack_68 = uVar13;
        local_38 = uVar13;
        FUN_012a1ccc(ppuVar15,param_1,3,0,iVar14,&local_70,0);
        if (local_64[0] == &DAT_80000009) {
LAB_012a4000:
          return ppuVar15[1];
        }
LAB_012a3fc0:
        FUN_012a3b0c(ppuVar15);
      }
LAB_012a3fd0:
      iVar14 = iVar14 + 0x134;
    } while (iVar14 != iVar1);
  }
  return (undefined1 *)0x0;
LAB_012a3d64:
  puVar4 = puVar4 + 7;
  if (puVar4 == puVar6) goto LAB_012a3d78;
  goto LAB_012a3cc8;
}


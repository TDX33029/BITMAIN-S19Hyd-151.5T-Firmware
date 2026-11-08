// FUN_00bac628 @ 00bac628 size=1552 calls_out=18 calls_in=2
// strings: a Display implementation returned an error unexpectedly | `Extensions` tracks values by type | a Display implementation returned an error unexpectedly

/* WARNING: Type propagation algorithm not settling */

void FUN_00bac628(int param_1,int *param_2)

{
  undefined4 ****ppppuVar1;
  undefined4 ***pppuVar2;
  undefined4 uVar3;
  int *piVar4;
  int iVar5;
  undefined4 ***pppuVar6;
  undefined4 ****ppppuVar7;
  undefined4 **ppuVar8;
  undefined4 ****ppppuVar9;
  undefined4 ***pppuVar10;
  undefined4 *puVar11;
  undefined4 ****ppppuVar12;
  undefined4 ***pppuVar13;
  undefined4 ****ppppuVar14;
  undefined4 ***pppuVar15;
  undefined4 ***pppuVar16;
  undefined4 ****ppppuVar17;
  undefined4 ****ppppuVar18;
  bool bVar19;
  longlong lVar20;
  undefined4 ****local_b4;
  undefined4 ****local_a8;
  undefined4 ****local_98;
  undefined4 ****local_94;
  undefined4 ****local_90;
  undefined4 ****local_88;
  undefined4 ****ppppuStack_84;
  undefined4 ****ppppuStack_80;
  undefined4 ****local_78;
  undefined4 ****local_74;
  undefined4 ****local_70;
  undefined4 ****local_6c;
  undefined4 ****local_68;
  undefined4 ****local_64;
  undefined4 ****local_38;
  undefined4 ****local_34;
  undefined4 ****local_30;
  undefined1 uStack_25;
  
  if (*(int *)(param_1 + 100) != 0) {
    ppppuVar18 = *(undefined4 *****)(param_1 + 0x60);
    ppppuVar9 = ppppuVar18 + *(int *)(param_1 + 100) * 0x5b;
    do {
      if (ppppuVar18[0x19] == (undefined4 ***)0x0) {
        FUN_00f8a844(ppppuVar18,0);
        pppuVar6 = ppppuVar18[0x1e];
        iVar5 = (int)ppppuVar18[0x1f] << 4;
        pppuVar2 = (undefined4 ***)0xffffffff;
        do {
          if (iVar5 == 0) {
            puVar11 = (undefined4 *)0x0;
            goto LAB_00bac794;
          }
          ppuVar8 = *pppuVar6;
          pppuVar13 = pppuVar6 + 1;
          pppuVar15 = pppuVar6 + 2;
          pppuVar16 = pppuVar6 + 3;
          iVar5 = iVar5 + -0x10;
          pppuVar2 = (undefined4 ***)((int)pppuVar2 + 1);
          pppuVar6 = pppuVar6 + 4;
        } while ((ppuVar8 != (undefined4 **)0x81d215be || *pppuVar15 != (undefined4 **)0xd07db95e)
                 || (*pppuVar13 != (undefined4 **)0x4c65521b ||
                    *pppuVar16 != (undefined4 **)0x76f4a2ad));
        if (ppppuVar18[0x22] <= pppuVar2) {
                    /* WARNING: Subroutine does not return */
          FUN_00faa4a4(pppuVar2,ppppuVar18[0x22],&DAT_01880824);
        }
        ppuVar8 = (ppppuVar18[0x21] + (int)pppuVar2 * 6)[1];
        puVar11 = (undefined4 *)
                  ((int)ppppuVar18[0x21][(int)pppuVar2 * 6] +
                  ((int)ppuVar8[2] - 1U & 0xfffffff8) + 8);
        (*(code *)ppuVar8[3])(&local_78,puVar11);
        if ((local_78 != (undefined4 ****)0x81d215be || local_70 != (undefined4 ****)0xd07db95e) ||
            (local_74 != (undefined4 ****)0x4c65521b || local_6c != (undefined4 ****)0x76f4a2ad)) {
          puVar11 = (undefined4 *)0x0;
        }
        if (puVar11 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_00fb74b8("`Extensions` tracks values by type",0x22,&DAT_0188076c);
        }
LAB_00bac794:
        local_70 = (undefined4 ****)0x0;
        local_74 = (undefined4 ****)puVar11;
        if (puVar11 == (undefined4 *)0x0) {
          local_74 = (undefined4 ****)&DAT_0035dc52;
        }
        local_78 = ppppuVar18;
        FUN_00fa04ec(&local_38,&local_78,4,0);
        ppppuVar1 = local_30;
        ppppuVar12 = local_34;
        ppppuVar17 = local_38;
        local_34 = (undefined4 ****)&DAT_00000001;
        local_30 = (undefined4 ****)0x0;
        bVar19 = local_38 != (undefined4 ****)&DAT_80000000;
        local_38 = (undefined4 ****)0x0;
        local_6c = (undefined4 ****)0x0;
        ppppuVar7 = (undefined4 ****)0x0;
        if (bVar19) {
          ppppuVar7 = ppppuVar1;
        }
        local_70 = (undefined4 ****)&DAT_60000020;
        if (ppppuVar17 == (undefined4 ****)&DAT_80000000) {
          ppppuVar12 = (undefined4 ****)&DAT_00000001;
        }
        local_74 = (undefined4 ****)&DAT_01870f94;
        local_78 = &local_38;
        iVar5 = FUN_00faace8(&local_78,ppppuVar12,ppppuVar7);
        ppppuVar14 = local_30;
        ppppuVar7 = local_34;
        ppppuVar1 = local_38;
        if (iVar5 != 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00fb74f8("a Display implementation returned an error unexpectedly",0x37,&uStack_25,
                       &DAT_01870fac,&DAT_018af130);
        }
        if (((uint)ppppuVar17 & 0x7fffffff) != 0) {
          thunk_FUN_016d3fb4(ppppuVar12);
        }
        FUN_00fb6cfc(&local_78,ppppuVar7,ppppuVar14,&DAT_0034fb12,6);
        do {
          FUN_00bd41dc(&local_38,&local_78);
        } while (local_38 == (undefined4 ****)0x0);
        if (local_38 == (undefined4 ****)&DAT_00000001) {
          ppppuVar17 = local_34;
        }
        else {
          ppppuVar17 = ppppuVar14;
        }
        lVar20 = FUN_010ceb84((undefined1 *)((int)ppppuVar7 + (int)ppppuVar17),
                              (int)ppppuVar14 - (int)ppppuVar17);
        ppppuVar17 = (undefined4 ****)((ulonglong)lVar20 >> 0x20);
        uVar3 = 0;
        if (lVar20 < 0) {
LAB_00bacc20:
                    /* WARNING: Subroutine does not return */
          FUN_00600af4(uVar3,local_a8);
        }
        if (ppppuVar17 == (undefined4 ****)0x0) {
          local_a8 = (undefined4 ****)0x1;
          ppppuVar12 = (undefined4 ****)0x0;
        }
        else {
          local_a8 = (undefined4 ****)thunk_FUN_016d4a50(ppppuVar17);
          if (local_a8 == (undefined4 ****)0x0) {
            uVar3 = 1;
            local_a8 = ppppuVar17;
            goto LAB_00bacc20;
          }
          ppppuVar12 = ppppuVar17;
        }
        FUN_016dd1aa(local_a8,(int)lVar20,ppppuVar17);
        pppuVar6 = ppppuVar18[10];
        pppuVar15 = ppppuVar18[9];
        iVar5 = (int)pppuVar6 * 0xc;
        pppuVar2 = pppuVar15;
        do {
          pppuVar16 = pppuVar2;
          local_98 = ppppuVar12;
          local_94 = local_a8;
          local_90 = ppppuVar17;
          if (iVar5 == 0) {
            ppppuVar17 = (undefined4 ****)0x0;
            local_b4 = (undefined4 ****)&DAT_00000004;
            goto LAB_00baca78;
          }
          iVar5 = iVar5 + -0xc;
          pppuVar2 = pppuVar16 + 3;
        } while (*(char *)(pppuVar16 + 2) != '\x01');
        pppuVar2 = (undefined4 ***)*pppuVar16;
        pppuVar13 = (undefined4 ***)pppuVar16[1];
        ppppuVar12 = (undefined4 ****)thunk_FUN_016d4a50(0x20);
        if (ppppuVar12 == (undefined4 ****)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_00600af4(4,0x20);
        }
        *ppppuVar12 = pppuVar2;
        ppppuVar12[1] = pppuVar13;
        ppppuVar14 = (undefined4 ****)&DAT_00000001;
        local_78 = (undefined4 ****)&DAT_00000004;
        pppuVar2 = pppuVar16 + 3;
        local_74 = ppppuVar12;
        while (pppuVar16 = pppuVar2, ppppuVar17 = local_78, local_70 = ppppuVar14,
              pppuVar16 != pppuVar15 + (int)pppuVar6 * 3) {
          pppuVar2 = pppuVar16 + 3;
          if (*(char *)(pppuVar16 + 2) == '\x01') {
            pppuVar10 = (undefined4 ***)*pppuVar16;
            pppuVar13 = (undefined4 ***)pppuVar16[1];
            if (ppppuVar14 == local_78) {
              FUN_00d653ec(&local_78,ppppuVar14,1,4,8);
              ppppuVar12 = local_74;
            }
            iVar5 = (int)ppppuVar14 * 2;
            ppppuVar12[iVar5] = pppuVar10;
            ppppuVar14 = (undefined4 ****)((int)ppppuVar14 + 1);
            (ppppuVar12 + iVar5)[1] = pppuVar13;
          }
        }
        local_b4 = local_74;
        FUN_00c4433c(&local_78,local_74,ppppuVar14,&DAT_0041950f,2);
        local_38 = local_78;
        local_34 = local_74;
        local_30 = local_70;
        local_6c = (undefined4 ****)&DAT_006043a8;
        local_74 = (undefined4 ****)&DAT_006043a8;
        local_78 = &local_98;
        local_70 = &local_38;
        FUN_00600d2c(&local_88,&DAT_0056b62f,&local_78);
        if (local_38 != (undefined4 ****)0x0) {
          thunk_FUN_016d3fb4(local_34);
        }
        if (local_98 != (undefined4 ****)0x0) {
          thunk_FUN_016d3fb4(local_94);
        }
        local_98 = local_88;
        local_94 = ppppuStack_84;
        local_90 = ppppuStack_80;
LAB_00baca78:
        pppuVar2 = ppppuVar18[0x2c];
        pppuVar6 = ppppuVar18[0x29];
        if (pppuVar2 == (undefined4 ***)0x80000000 && pppuVar6 == (undefined4 ***)0x80000000) {
          local_68 = (undefined4 ****)&DAT_00000001;
          local_6c = (undefined4 ****)0x0;
          local_64 = (undefined4 ****)0x0;
        }
        else {
          ppppuVar12 = (undefined4 ****)0x0;
          if (pppuVar6 != (undefined4 ***)0x80000000) {
            ppppuVar12 = ppppuVar18 + 0x29;
          }
          local_30 = (undefined4 ****)0x0;
          local_34 = (undefined4 ****)&DAT_00000001;
          ppppuVar14 = ppppuVar18 + 0x2c;
          if (pppuVar2 == (undefined4 ***)0x80000000) {
            ppppuVar14 = ppppuVar12;
          }
          local_38 = (undefined4 ****)0x0;
          local_6c = (undefined4 ****)0x0;
          local_70 = (undefined4 ****)&DAT_60000020;
          local_74 = (undefined4 ****)&DAT_01870f94;
          local_78 = &local_38;
          iVar5 = FUN_00faace8(&local_78,ppppuVar14[1],ppppuVar14[2]);
          if (iVar5 != 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00fb74f8("a Display implementation returned an error unexpectedly",0x37,&uStack_25,
                         &DAT_01870fac,&DAT_018af130);
          }
          local_68 = local_34;
          local_64 = local_30;
          local_6c = local_38;
        }
        iVar5 = param_2[2];
        local_78 = local_98;
        local_74 = local_94;
        local_70 = local_90;
        if (iVar5 == *param_2) {
          FUN_00d650d8(param_2);
        }
        piVar4 = (int *)(param_2[1] + iVar5 * 0x18);
        *piVar4 = (int)local_78;
        piVar4[1] = (int)local_74;
        piVar4[2] = (int)local_70;
        piVar4[3] = (int)local_6c;
        piVar4[4] = (int)local_68;
        piVar4[5] = (int)local_64;
        param_2[2] = iVar5 + 1;
        if (ppppuVar17 != (undefined4 ****)0x0) {
          thunk_FUN_016d3fb4(local_b4);
        }
        if (ppppuVar1 != (undefined4 ****)0x0) {
          thunk_FUN_016d3fb4(ppppuVar7);
        }
      }
      else {
        FUN_00bac628(ppppuVar18,param_2);
      }
      ppppuVar18 = ppppuVar18 + 0x5b;
    } while (ppppuVar18 != ppppuVar9);
  }
  return;
}


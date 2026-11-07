// FUN_006da578 @ 006da578 size=1416 calls_out=13 calls_in=3
// strings: 

void FUN_006da578(int param_1,int param_2,undefined4 *param_3,int param_4)

{
  char cVar1;
  undefined8 uVar2;
  undefined4 *puVar3;
  int iVar4;
  char *pcVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  undefined4 *puVar9;
  undefined4 uVar10;
  int iVar11;
  char *extraout_r2;
  char *pcVar12;
  int **ppiVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  int iVar17;
  undefined4 unaff_r8;
  int iVar18;
  int iVar19;
  uint uVar20;
  int *piVar21;
  int iVar22;
  bool bVar23;
  undefined8 uVar24;
  undefined4 local_64;
  char *local_60;
  undefined4 local_5c;
  undefined4 *local_58;
  undefined4 local_54;
  int *local_50;
  undefined1 *local_4c;
  undefined4 uStack_48;
  int *local_40;
  undefined1 *local_3c;
  char **local_38;
  code *local_34;
  int local_30;
  undefined1 *local_2c;
  
  uVar2 = CONCAT44(local_64,unaff_r8);
  if (param_4 != 0) {
    puVar3 = param_3 + param_4 * 9;
    do {
      piVar21 = param_3 + 7;
      uVar14 = param_3[8];
      iVar11 = *piVar21 + 8;
      iVar18 = *(int *)(param_1 + 0x254);
      iVar17 = *(int *)(param_1 + 600);
      iVar4 = FUN_006c0238(*(undefined4 *)(*(int *)(param_2 + 0x24) + 0x4c),
                           *(undefined4 *)(*(int *)(param_2 + 0x24) + 0x50));
      if (iVar4 == 0) {
        puVar9 = (undefined4 *)thunk_FUN_01be5118(8);
        if (puVar9 == (undefined4 *)0x0) {
LAB_006daaf4:
                    /* WARNING: Subroutine does not return */
          FUN_0066439c(4,8);
        }
        uVar6 = param_3[1];
        *puVar9 = *param_3;
        puVar9[1] = uVar6;
        local_54 = 1;
        local_5c = 1;
        local_4c = &LAB_00701524;
        ppiVar13 = &local_50;
        local_58 = puVar9;
        local_50 = piVar21;
        FUN_00664898(&local_40,&DAT_0059cf4c,ppiVar13);
LAB_006da728:
        local_50 = local_40;
        local_4c = local_3c;
        uStack_48 = local_38;
        FUN_006d6c3c(param_2,&local_5c,ppiVar13);
      }
      else {
        bVar23 = iVar17 == 0;
        pcVar12 = extraout_r2;
        if (!bVar23) {
          pcVar12 = (char *)(iVar18 + iVar17 + -1);
          bVar23 = pcVar12 == (char *)0x0;
        }
        if (!bVar23) {
          iVar17 = *(int *)(iVar4 + 0x60);
          pcVar5 = *(char **)(iVar4 + 0x5c);
          do {
            local_60 = pcVar12;
            if (iVar17 == 0) {
              puVar9 = (undefined4 *)thunk_FUN_01be5118(8);
              if (puVar9 == (undefined4 *)0x0) goto LAB_006daaf4;
              uVar6 = param_3[1];
              *puVar9 = *param_3;
              puVar9[1] = uVar6;
              local_54 = 1;
              local_5c = 1;
              local_34 = FUN_006c1c48;
              local_38 = &local_60;
              local_3c = &LAB_00701524;
              local_58 = puVar9;
              local_40 = piVar21;
              FUN_00664898(&local_50,&DAT_005863fc,&local_40);
              local_40 = local_50;
              local_3c = local_4c;
              local_38 = uStack_48;
              ppiVar13 = &local_40;
              goto LAB_006da728;
            }
            cVar1 = *pcVar5;
            iVar17 = iVar17 + -1;
            pcVar5 = pcVar5 + 1;
          } while (cVar1 != *pcVar12);
        }
      }
      iVar18 = *(int *)(param_2 + 0x24);
      uVar24 = FUN_006c0238(*(undefined4 *)(iVar18 + 0x4c),*(undefined4 *)(iVar18 + 0x50),iVar11,
                            uVar14);
      iVar4 = (int)((ulonglong)uVar24 >> 0x20);
      iVar17 = (int)uVar24;
      if (iVar17 != 0) {
        iVar4 = *(int *)(iVar17 + 0x18);
      }
      if (iVar17 != 0 && iVar4 != 0) {
        iVar22 = *(int *)(iVar17 + 0x14);
        iVar18 = iVar4 * 0x6c + iVar22;
        uVar6 = *param_3;
        uVar10 = param_3[1];
        iVar4 = param_3[3];
        iVar17 = param_3[4];
        do {
          uVar15 = *(undefined4 *)(iVar22 + 0x1c);
          uVar16 = *(undefined4 *)(iVar22 + 0x20);
          iVar7 = FUN_00700b3c(uVar15,uVar16,0x21);
          if (iVar7 == 0) {
            FUN_006a4c58(uVar15,uVar16);
          }
          else if (*(int *)(iVar22 + 0x48) == -0x80000000) {
            piVar21 = (int *)(iVar4 + 8);
            iVar19 = iVar4;
            for (iVar7 = iVar17 * 0x48; iVar7 != 0; iVar7 = iVar7 + -0x48) {
              if ((*(int *)(iVar19 + 0xc) == *(int *)(iVar22 + 0x14)) &&
                 (iVar8 = thunk_FUN_01bed842(*piVar21 + 8,*(undefined4 *)(iVar22 + 0x10)),
                 iVar8 == 0)) goto LAB_006da8c0;
              iVar19 = iVar19 + 0x48;
              piVar21 = piVar21 + 0x12;
            }
            puVar9 = (undefined4 *)thunk_FUN_01be5118(8);
            if (puVar9 == (undefined4 *)0x0) goto LAB_006daaf4;
            *puVar9 = uVar6;
            puVar9[1] = uVar10;
            local_54 = 1;
            local_5c = 1;
            local_2c = &LAB_00632348;
            local_34 = (code *)&LAB_00632348;
            local_3c = &LAB_006e026c;
            local_58 = puVar9;
            local_40 = param_3 + 5;
            local_38 = (char **)(iVar22 + 0xc);
            local_30 = iVar22 + 0x18;
            FUN_00664898(&local_50,&DAT_005b2e80,&local_40);
            local_40 = local_50;
            local_3c = local_4c;
            local_38 = uStack_48;
            FUN_006d6c3c(param_2,&local_5c,&local_40);
          }
LAB_006da8c0:
          iVar22 = iVar22 + 0x6c;
        } while (iVar22 != iVar18);
        iVar18 = *(int *)(param_2 + 0x24);
      }
      if (*(int *)(param_1 + 0xbc) != 0) {
        uVar20 = *(uint *)(param_1 + 0xb4);
        if (uVar20 == 0) {
          uVar20 = 0;
        }
        else {
          FUN_01bed93e(*(undefined4 *)(param_1 + 0xb0),0xff,uVar20 + 5);
          if (7 < uVar20) {
            uVar20 = (uVar20 + 1 & 0xfffffff8) - (uVar20 + 1 >> 3);
          }
        }
        *(uint *)(param_1 + 0xb8) = uVar20;
        *(undefined4 *)(param_1 + 0xbc) = 0;
      }
      uVar15 = *(undefined4 *)(iVar18 + 0x4c);
      uVar10 = *(undefined4 *)(iVar18 + 0x50);
      uVar6 = FUN_006c0238(uVar15,uVar10,iVar11,uVar14);
      *(undefined4 *)(param_1 + 400) = uVar6;
      *(undefined4 *)(param_1 + 0x194) = 0;
      *(int *)(param_1 + 0x198) = iVar11;
      *(undefined4 *)(param_1 + 0x19c) = uVar14;
      uVar6 = FUN_006c0238(uVar15,uVar10,iVar11,uVar14);
      iVar4 = *(int *)(param_2 + 0x24);
      *(undefined4 *)(param_1 + 0x1a4) = uVar6;
      iVar4 = FUN_006c0238(*(undefined4 *)(iVar4 + 0x4c),*(undefined4 *)(iVar4 + 0x50),iVar11,uVar14
                          );
      if (param_3[4] != 0) {
        iVar11 = param_3[3];
        iVar17 = iVar11 + param_3[4] * 0x48;
        do {
          FUN_006d5eb0((undefined4 *)(param_1 + 0xb0),param_2,iVar11,iVar11 + 0x10);
          piVar21 = (int *)0x3;
          if ((iVar4 != 0) &&
             (iVar18 = FUN_006e0794(iVar4,*(int *)(iVar11 + 8) + 8,*(undefined4 *)(iVar11 + 0xc)),
             iVar18 != 0)) {
            uVar6 = *(undefined4 *)(iVar18 + 0x14);
            uVar14 = *(undefined4 *)(iVar18 + 0x10);
            uVar2 = *(undefined8 *)(iVar18 + 0x10);
            uVar24 = FUN_00700b3c(uVar14,uVar6,0x21);
            if ((int)uVar24 == 0) {
              uVar24 = FUN_006a4c58(uVar14,uVar6);
              if ((int)uVar24 == 0) {
                piVar21 = (int *)0x2;
              }
              else {
                piVar21 = (int *)0x0;
                uVar2 = uVar24;
              }
            }
            else {
              piVar21 = (int *)0x1;
              uVar2 = uVar24;
            }
          }
          local_64 = (undefined4)((ulonglong)uVar2 >> 0x20);
          iVar18 = *(int *)(param_2 + 0x20);
          if (iVar18 == *(int *)(param_2 + 0x18)) {
            FUN_00b68760(param_2 + 0x18);
          }
          puVar9 = (undefined4 *)(*(int *)(param_2 + 0x1c) + iVar18 * 0xc);
          *puVar9 = piVar21;
          *(undefined8 *)(puVar9 + 1) = uVar2;
          *(int *)(param_2 + 0x20) = iVar18 + 1;
          local_38 = (char **)local_64;
          local_40 = piVar21;
          local_3c = (undefined1 *)(int)uVar2;
          FUN_006dcb48(param_2,&local_40,iVar11 + 0x18);
          iVar11 = iVar11 + 0x48;
          if (*(int *)(param_2 + 0x20) != 0) {
            *(int *)(param_2 + 0x20) = *(int *)(param_2 + 0x20) + -1;
          }
        } while (iVar11 != iVar17);
      }
      param_3 = param_3 + 9;
      *(undefined4 *)(param_1 + 0x1a4) = 0;
      *(undefined4 *)(param_1 + 400) = 0;
    } while (param_3 != puVar3);
  }
  return;
}


// FUN_0134a098 @ 0134a098 size=1228 calls_out=11 calls_in=1
// strings: 

void FUN_0134a098(int *param_1)

{
  short sVar1;
  short sVar2;
  short sVar3;
  short sVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  short *psVar8;
  int *piVar9;
  int iVar10;
  int *piVar11;
  short *psVar12;
  bool bVar13;
  undefined4 local_c4;
  char local_c0;
  undefined4 local_bc;
  undefined4 local_b8;
  undefined4 local_b4;
  undefined4 local_b0;
  undefined4 local_ac;
  char local_a8;
  undefined4 local_a4;
  undefined1 local_a0;
  undefined4 local_9c;
  int local_98;
  int local_94;
  int local_8c;
  int local_88;
  int local_84;
  int local_80;
  int *local_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  int local_68;
  int iStack_64;
  int iStack_60;
  undefined2 local_5c;
  undefined1 local_5a;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined2 local_4c;
  undefined1 local_4a;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  int local_38;
  int local_34;
  int local_30;
  undefined2 local_28;
  undefined1 local_26;
  
  local_84 = 4;
  local_7c = (int *)0x1010101;
  local_80 = 0;
  local_88 = 0;
  iVar6 = FUN_01be7a8c(&local_7c);
  if (iVar6 == -1) {
    piVar11 = (int *)FUN_01be3244();
    param_1[2] = *piVar11;
    *param_1 = -0x80000000;
    param_1[1] = 0;
    FUN_00b921a8(&local_88);
  }
  else {
    if (local_7c != (int *)0x0) {
      local_94 = 0;
      local_98 = 4;
      piVar11 = local_7c;
LAB_0134a0f0:
      do {
        if (piVar11[3] != 0) {
          iVar6 = piVar11[1];
          uVar7 = FUN_01bedbda(iVar6);
          FUN_006643f0(&local_38,iVar6,uVar7);
          iVar5 = local_30;
          iVar6 = local_34;
          iVar10 = local_38;
          if (local_38 == -0x80000000) {
            iVar10 = 0;
            if (local_30 < 0) {
LAB_0134a55c:
                    /* WARNING: Subroutine does not return */
              FUN_00664620(iVar10,local_8c);
            }
            if (local_30 == 0) {
              local_8c = 1;
            }
            else {
              iVar10 = 1;
              local_8c = FUN_01298504(local_30,1);
              if (local_8c == 0) {
                local_8c = iVar5;
                goto LAB_0134a55c;
              }
              iVar10 = iVar5;
            }
            FUN_01bed4e2(local_8c,iVar6,iVar5);
            iVar6 = local_8c;
          }
          psVar12 = (short *)piVar11[3];
          if (psVar12 != (short *)0x0) {
            if (*psVar12 == 10) {
              sVar3 = psVar12[4];
              if (!((char)psVar12[4] != -2 || *(char *)((int)psVar12 + 9) != -0x80))
              goto LAB_0134a28c;
              psVar8 = (short *)piVar11[4];
              sVar1 = psVar12[5];
              if (((psVar8 == (short *)0x0) || (*psVar8 != 10)) ||
                 (sVar4 = psVar8[4], (char)psVar8[4] == -2 && *(char *)((int)psVar8 + 9) == -0x80))
              {
                local_ac = 0;
                local_50 = 0;
                local_54 = 0;
                local_58 = 0;
              }
              else {
                sVar2 = psVar8[5];
                FUN_01bed4e2(&local_58,psVar8 + 6,0xc);
                local_ac = CONCAT22(sVar2,sVar4);
              }
              psVar8 = (short *)(uint)*(byte *)(piVar11 + 2);
              local_a0 = 0;
              bVar13 = (*(byte *)(piVar11 + 2) & 2) != 0;
              if (bVar13) {
                psVar8 = (short *)piVar11[5];
              }
              local_a8 = local_c0;
              if ((!(bVar13 && psVar8 != (short *)0x0)) || (*psVar8 != 10)) {
                local_9c = local_b4;
              }
              else if (((char)psVar8[4] != -2) ||
                      (local_9c = local_b4, *(char *)((int)psVar8 + 9) != -0x80)) {
                local_4c = *(undefined2 *)((int)psVar8 + 0x15);
                local_4a = *(undefined1 *)((int)psVar8 + 0x17);
                local_9c = *(undefined4 *)((int)psVar8 + 0x11);
                local_b8 = *(undefined4 *)((int)psVar8 + 0xd);
                local_bc = CONCAT31(*(undefined3 *)(psVar8 + 5),*(char *)((int)psVar8 + 9));
                local_a0 = 1;
                local_a8 = (char)psVar8[4];
              }
              local_b0 = CONCAT22(sVar1,sVar3);
              FUN_01bed4e2(&local_68,psVar12 + 6,0xc);
              local_78 = local_58;
              uStack_74 = local_54;
              uStack_70 = local_50;
              local_5a = local_4a;
              local_5c = local_4c;
              local_b4 = local_9c;
              uVar7 = local_bc;
              local_a4 = local_b8;
              local_c0 = local_a8;
            }
            else {
              if (*psVar12 != 2) goto LAB_0134a28c;
              psVar8 = (short *)piVar11[4];
              local_9c = 0;
              local_a4 = *(undefined4 *)(psVar12 + 2);
              if ((psVar8 != (short *)0x0) && (local_9c = 0, *psVar8 == 2)) {
                local_9c = *(undefined4 *)(psVar8 + 2);
              }
              if ((*(byte *)(piVar11 + 2) & 2) == 0) {
                local_a8 = false;
              }
              else {
                psVar12 = (short *)piVar11[5];
                local_a8 = false;
                if ((psVar12 != (short *)0x0) && (local_a8 = *psVar12 == 2, (bool)local_a8)) {
                  local_c4 = *(undefined4 *)(psVar12 + 2);
                }
              }
              local_a0 = 2;
              uVar7 = local_c4;
            }
            local_28 = local_5c;
            local_26 = local_5a;
            local_38 = local_68;
            local_34 = iStack_64;
            local_30 = iStack_60;
            local_48 = local_78;
            uStack_44 = uStack_74;
            uStack_40 = uStack_70;
            if (local_94 == local_88) {
              FUN_0134a594(&local_88);
              local_98 = local_84;
            }
            piVar9 = (int *)(local_98 + local_94 * 0x40);
            *piVar9 = iVar10;
            *(undefined4 *)((int)piVar9 + 0x16) = local_9c;
            *(undefined4 *)((int)piVar9 + 0x12) = local_a4;
            *(char *)((int)piVar9 + 0xd) = local_a8;
            *(undefined1 *)(piVar9 + 3) = local_a0;
            piVar9[1] = iVar6;
            *(undefined4 *)((int)piVar9 + 0xe) = uVar7;
            piVar9[2] = iVar5;
            *(undefined2 *)((int)piVar9 + 0x1a) = local_28;
            *(undefined1 *)(piVar9 + 7) = local_26;
            *(undefined4 *)((int)piVar9 + 0x1d) = local_b0;
            FUN_01bed4e2((int)piVar9 + 0x21,&local_38,0xc);
            *(undefined4 *)((int)piVar9 + 0x2d) = local_ac;
            FUN_01bed4e2((int)piVar9 + 0x31,&local_48,0xc);
            local_94 = local_94 + 1;
            piVar11 = (int *)*piVar11;
            local_80 = local_94;
            if (piVar11 == (int *)0x0) break;
            goto LAB_0134a0f0;
          }
LAB_0134a28c:
          FUN_0134bd64(iVar10,iVar6);
        }
        piVar11 = (int *)*piVar11;
      } while (piVar11 != (int *)0x0);
    }
    FUN_01be7a78(local_7c);
    *param_1 = local_88;
    param_1[1] = local_84;
    param_1[2] = local_80;
  }
  return;
}


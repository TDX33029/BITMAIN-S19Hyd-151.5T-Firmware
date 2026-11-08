// FUN_016e631c @ 016e631c size=1844 calls_out=13 calls_in=0
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_016e631c(int *param_1,uint param_2,int *param_3,int *param_4)

{
  char cVar1;
  byte bVar2;
  longlong lVar3;
  int iVar4;
  uint uVar5;
  int *piVar6;
  byte bVar7;
  int iVar8;
  uint uVar9;
  uint *puVar10;
  int *piVar11;
  undefined4 *puVar12;
  int iVar13;
  int iVar14;
  int *piVar15;
  int *piVar16;
  uint uVar17;
  int iVar18;
  int *piVar19;
  uint uVar20;
  int *piVar21;
  int *piVar22;
  undefined4 uVar23;
  int iVar24;
  int *piVar25;
  bool bVar26;
  undefined8 uVar27;
  int *local_98;
  int *local_80;
  uint local_64;
  uint local_60;
  uint local_5c;
  uint local_58;
  undefined4 local_50;
  int *local_4c;
  int local_48;
  uint local_44;
  undefined4 local_40;
  int local_3c;
  int *local_38;
  int *local_34;
  uint local_30;
  int *local_2c;
  
  iVar8 = *param_3;
  bVar26 = iVar8 != -0x80000000;
  if (bVar26) {
    iVar8 = *param_4;
  }
  if (bVar26 && iVar8 != -0x80000000) {
    local_64 = *(uint *)(param_2 + 0xc);
    uVar20 = (uint)((ulonglong)(uint)param_4[2] * (ulonglong)(uint)param_3[2]);
    if ((int)((ulonglong)(uint)param_4[2] * (ulonglong)(uint)param_3[2] >> 0x20) != 0) {
      uVar20 = 0xffffffff;
    }
    if (local_64 < uVar20) {
      FUN_016c904c(param_4);
      *param_4 = -0x80000000;
    }
  }
  else {
    local_64 = *(uint *)(param_2 + 0xc);
  }
  cVar1 = *(char *)(param_2 + 0x10);
  uVar20 = param_2;
  if (cVar1 == '\x01') {
    uVar27 = FUN_016e4998(param_3,param_4);
    iVar8 = (int)((ulonglong)uVar27 >> 0x20);
    puVar10 = (uint *)uVar27;
    if (puVar10 != (uint *)0x0) {
      uVar23 = 0;
      lVar3 = (ulonglong)*(uint *)(iVar8 + 8) * (ulonglong)puVar10[2];
      uVar17 = (uint)lVar3;
      if ((int)((ulonglong)lVar3 >> 0x20) != 0) {
        uVar17 = 0xffffffff;
      }
      if ((0xfffffff < uVar17) || (uVar20 = uVar17 * 0x10, 0x7ffffffc < uVar20)) {
LAB_016e64a4:
                    /* WARNING: Subroutine does not return */
        FUN_00664620(uVar23,uVar20);
      }
      if (uVar20 == 0) {
        uVar9 = 4;
        uVar17 = 0;
      }
      else {
        uVar23 = 4;
        uVar9 = FUN_01298504(uVar20,4);
        if (uVar9 == 0) goto LAB_016e64a4;
      }
      local_60 = *puVar10;
      local_5c = puVar10[1];
      uVar20 = puVar10[2];
      *puVar10 = uVar17;
      puVar10[1] = uVar9;
      puVar10[2] = 0;
      local_50 = *(int **)(iVar8 + 4);
      local_44 = *(uint *)(iVar8 + 8);
      *(undefined4 *)(iVar8 + 8) = 0;
      local_3c = 0;
      piVar16 = local_50 + local_44 * 4;
      local_40 = 0;
      local_58 = uVar20;
      local_4c = piVar16;
      local_48 = iVar8;
      if (local_44 != 0) {
        uVar17 = local_44 - 1;
        piVar15 = (int *)(local_5c + 8);
        iVar8 = 0;
        piVar25 = local_50;
        do {
          piVar19 = piVar25 + 4;
          iVar13 = *piVar25;
          if (iVar13 == -0x80000000) goto LAB_016e6728;
          iVar18 = piVar25[1];
          if (uVar20 != 0) {
            iVar14 = piVar25[2];
            bVar2 = *(byte *)(piVar25 + 3);
            piVar25 = piVar15;
            iVar24 = uVar20 << 4;
            do {
              if ((char)piVar25[1] == '\0') {
                if (iVar8 == 0) {
                  FUN_015e8ad4(&local_38,piVar25[-1],*piVar25);
                  uVar9 = puVar10[2];
                  local_2c = (int *)CONCAT31(local_2c._1_3_,(char)piVar25[1]);
                  if (uVar9 == *puVar10) {
                    FUN_018fa978(puVar10);
                  }
                  puVar12 = (undefined4 *)(puVar10[1] + uVar9 * 0x10);
                  *puVar12 = local_38;
                  puVar12[1] = local_34;
                  puVar12[2] = local_30;
                  puVar12[3] = local_2c;
                  goto LAB_016e66d8;
                }
              }
              else {
                piVar22 = (int *)0x0;
                piVar21 = (int *)(*piVar25 + iVar14);
                if ((int)piVar21 < 0) {
LAB_016e6a2c:
                  local_50 = piVar19;
                  local_3c = iVar8 + 1;
                    /* WARNING: Subroutine does not return */
                  FUN_00664620(piVar22,local_98);
                }
                piVar22 = (int *)&DAT_00000001;
                if (piVar21 == (int *)0x0) {
                  piVar21 = (int *)0x0;
                }
                else {
                  piVar11 = (int *)FUN_01298504(piVar21,1);
                  if (piVar11 == (int *)0x0) {
                    local_98 = piVar21;
                    goto LAB_016e6a2c;
                  }
                  piVar22 = piVar11;
                }
                local_2c = (int *)CONCAT31(local_2c._1_3_,1);
                local_30 = 0;
                local_38 = piVar21;
                local_34 = piVar22;
                FUN_01ac6cbc(&local_38,iVar18,iVar14);
                if ((char)local_2c == '\x01') {
                  FUN_01ac6cbc(&local_38,piVar25[-1],*piVar25);
                }
                uVar5 = local_30;
                piVar11 = local_34;
                piVar21 = local_38;
                bVar26 = (bVar2 & 1) == 0;
                bVar7 = bVar2;
                if (bVar26) {
                  bVar7 = 0;
                }
                uVar9 = puVar10[2];
                if (bVar26) {
                  local_2c = (int *)CONCAT31(local_2c._1_3_,bVar7);
                }
                piVar6 = local_2c;
                if (uVar9 == *puVar10) {
                  FUN_018fa978(puVar10);
                }
                puVar12 = (undefined4 *)(puVar10[1] + uVar9 * 0x10);
                *puVar12 = piVar21;
                puVar12[1] = piVar11;
                puVar12[2] = uVar5;
                puVar12[3] = piVar6;
                local_98 = piVar22;
LAB_016e66d8:
                puVar10[2] = uVar9 + 1;
              }
              piVar25 = piVar25 + 4;
              iVar24 = iVar24 + -0x10;
            } while (iVar24 != 0);
          }
          FUN_0134bd64(iVar13,iVar18);
          iVar8 = iVar8 + 1;
          piVar25 = piVar19;
        } while (piVar19 != piVar16);
        iVar8 = (uVar17 & 0xfffffff) + 1;
        piVar19 = piVar16;
LAB_016e6728:
        local_50 = piVar19;
        local_3c = iVar8;
      }
      FUN_016f1e44(&local_50);
      if (*param_3 != -0x80000000) {
        FUN_016e34a4(param_3);
      }
      FUN_016c904c(&local_60);
    }
  }
  else {
    uVar27 = FUN_016e4998(param_3,param_4);
    iVar8 = (int)((ulonglong)uVar27 >> 0x20);
    puVar10 = (uint *)uVar27;
    if (puVar10 != (uint *)0x0) {
      uVar23 = 0;
      lVar3 = (ulonglong)*(uint *)(iVar8 + 8) * (ulonglong)puVar10[2];
      uVar17 = (uint)lVar3;
      if ((int)((ulonglong)lVar3 >> 0x20) != 0) {
        uVar17 = 0xffffffff;
      }
      if ((0xfffffff < uVar17) || (uVar20 = uVar17 * 0x10, 0x7ffffffc < uVar20)) goto LAB_016e64a4;
      if (uVar20 == 0) {
        uVar9 = 4;
        uVar17 = 0;
      }
      else {
        uVar23 = 4;
        uVar9 = FUN_01298504(uVar20,4);
        if (uVar9 == 0) goto LAB_016e64a4;
      }
      local_38 = (int *)puVar10[1];
      uVar20 = puVar10[2];
      piVar16 = local_38 + uVar20 * 4;
      puVar10[1] = uVar9;
      puVar10[2] = 0;
      local_30 = *puVar10;
      *puVar10 = uVar17;
      local_34 = local_38;
      local_2c = piVar16;
      if (uVar20 != 0) {
        piVar25 = local_38;
        local_34 = local_38;
        do {
          iVar13 = *piVar25;
          piVar15 = piVar25 + 4;
          if (iVar13 == -0x80000000) goto LAB_016e6978;
          iVar18 = piVar25[2];
          iVar24 = piVar25[1];
          if ((*(byte *)(piVar25 + 3) & 1) == 0) {
            uVar20 = puVar10[2];
            local_50 = (int *)CONCAT22(CONCAT11(local_50._3_1_,*(undefined1 *)((int)piVar25 + 0xf)),
                                       *(undefined2 *)((int)piVar25 + 0xd));
            if (uVar20 == *puVar10) {
              FUN_018fa978(puVar10);
            }
            piVar25 = (int *)(puVar10[1] + uVar20 * 0x10);
            *piVar25 = iVar13;
            *(undefined1 *)(piVar25 + 3) = 0;
            piVar25[1] = iVar24;
            piVar25[2] = iVar18;
            *(undefined2 *)((int)piVar25 + 0xd) = (undefined2)local_50;
            *(undefined1 *)((int)piVar25 + 0xf) = local_50._2_1_;
            puVar10[2] = uVar20 + 1;
          }
          else {
            if (*(int *)(iVar8 + 8) != 0) {
              iVar14 = *(int *)(iVar8 + 8) << 4;
              piVar25 = (int *)(*(int *)(iVar8 + 4) + 8);
              do {
                piVar19 = (int *)0x0;
                piVar22 = (int *)(*piVar25 + iVar18);
                if ((int)piVar22 < 0) {
LAB_016e6a4c:
                  local_34 = piVar15;
                    /* WARNING: Subroutine does not return */
                  FUN_00664620(piVar19,local_80);
                }
                piVar19 = (int *)&DAT_00000001;
                if (piVar22 == (int *)0x0) {
                  piVar22 = (int *)0x0;
                }
                else {
                  piVar21 = (int *)FUN_01298504(piVar22,1);
                  if (piVar21 == (int *)0x0) {
                    local_80 = piVar22;
                    goto LAB_016e6a4c;
                  }
                  piVar19 = piVar21;
                }
                local_44 = CONCAT31(local_44._1_3_,1);
                local_48 = 0;
                local_50 = piVar22;
                local_4c = piVar19;
                FUN_01ac6cbc(&local_50,iVar24,iVar18);
                if ((char)local_44 == '\x01') {
                  FUN_01ac6cbc(&local_50,piVar25[-1],*piVar25);
                }
                iVar4 = local_48;
                piVar21 = local_4c;
                piVar22 = local_50;
                if ((char)piVar25[1] == '\0') {
                  local_44 = local_44 & 0xffffff00;
                }
                uVar20 = local_44;
                uVar17 = puVar10[2];
                if (uVar17 == *puVar10) {
                  FUN_018fa978(puVar10);
                }
                piVar25 = piVar25 + 4;
                iVar14 = iVar14 + -0x10;
                puVar12 = (undefined4 *)(puVar10[1] + uVar17 * 0x10);
                *puVar12 = piVar22;
                puVar12[1] = piVar21;
                puVar12[2] = iVar4;
                puVar12[3] = uVar20;
                puVar10[2] = uVar17 + 1;
                local_80 = piVar19;
              } while (iVar14 != 0);
            }
            FUN_0134bd64(iVar13,iVar24);
          }
          piVar25 = piVar15;
        } while (piVar15 != piVar16);
        piVar15 = piVar16;
LAB_016e6978:
        local_34 = piVar15;
      }
      FUN_016f55c8(&local_38);
      local_50 = *(int **)(iVar8 + 4);
      local_44 = *(uint *)(iVar8 + 8);
      local_4c = local_50 + local_44 * 4;
      *(undefined4 *)(iVar8 + 8) = 0;
      local_40 = 0;
      local_48 = iVar8;
      FUN_016f1e44(&local_50);
      if (*param_3 == -0x80000000) goto LAB_016e69ec;
      FUN_016e34a4(param_3);
    }
  }
  if ((*param_3 != -0x80000000) && (local_64 < (uint)param_3[2])) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb0ec(&DAT_004d0288,0x44,&DAT_01d0a300);
  }
LAB_016e69ec:
  FUN_016e5f70(*(undefined4 *)(param_2 + 8),cVar1,param_3);
  iVar8 = param_3[1];
  iVar13 = param_3[2];
  *param_1 = *param_3;
  param_1[1] = iVar8;
  param_1[2] = iVar13;
  return;
}


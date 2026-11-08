// FUN_00b34698 @ 00b34698 size=996 calls_out=8 calls_in=1
// strings: /etc/bos_version

void FUN_00b34698(int *param_1,int *param_2,uint *param_3)

{
  code *pcVar1;
  byte bVar2;
  bool bVar3;
  int iVar4;
  char cVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  undefined4 *puVar9;
  int iVar10;
  int unaff_r4;
  undefined4 uVar11;
  int iVar12;
  uint uVar13;
  int iVar14;
  uint uVar15;
  uint uVar16;
  int iVar17;
  int iVar18;
  uint *puVar19;
  int iVar20;
  int local_80;
  undefined4 *local_7c;
  int iStack_78;
  int local_70;
  undefined4 *local_6c;
  int iStack_68;
  int **local_60;
  undefined4 local_5c;
  int *local_58;
  int *local_54;
  undefined **local_50;
  undefined *local_4c;
  int local_48;
  int local_44;
  int local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined *local_34;
  int **local_30;
  int *local_2c;
  undefined4 *local_28;
  
  FUN_006c2130(&local_48,"/etc/bos_version",0x10);
  iVar20 = local_40;
  iVar18 = local_44;
  iVar7 = local_48;
  if (local_48 == -0x80000000) {
    uVar6 = *param_3;
    *param_1 = -0x80000000;
    param_1[1] = local_44;
    if ((uVar6 & 0x7fffffff) == 0) {
      iVar7 = *param_2;
    }
    else {
      thunk_FUN_016d3fb4(param_3[1]);
      iVar7 = *param_2;
    }
    if (iVar7 != 0) {
      iVar7 = param_2[1];
      if (iVar7 == 0) {
        return;
      }
      iVar18 = FUN_016d3bc8();
      uVar6 = *(byte *)(iVar7 + -3) & 0x1f;
      if (((*(byte *)(iVar18 + 0x14) & 0x1f) != 0) ||
         (uVar15 = *(uint *)(iVar18 + 0x14) & 0xfffff000, iVar20 = uVar15 - 0x10, uVar15 == 0)) {
        iVar20 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar18 + 0x14) & 0xfff) >> 6) * 2)
                 << 4;
      }
      uVar15 = (uint)(*(byte *)(iVar7 + -3) >> 5);
      iVar14 = *(int *)(iVar18 + 8) + 0x10;
      iVar12 = iVar20 * uVar6 + iVar20 + -4;
      iVar20 = iVar14 + iVar12;
      if (4 < uVar15) {
        if (uVar15 != 5) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)software_udf(0xff,0x16d4018);
          (*pcVar1)();
        }
        uVar15 = *(uint *)(iVar20 + -4);
        if (uVar15 < 5) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)software_udf(0xff,0x16d4022);
          (*pcVar1)();
        }
        if (*(char *)(iVar20 + -5) != '\0') {
                    /* WARNING: Does not return */
          pcVar1 = (code *)software_udf(0xff,0x16d402a);
          (*pcVar1)();
        }
      }
      if ((uint)(iVar20 - iVar7) < uVar15) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)software_udf(0xff,0x16d4032);
        (*pcVar1)();
      }
      if (*(char *)(iVar20 - uVar15) != '\0') {
                    /* WARNING: Does not return */
        pcVar1 = (code *)software_udf(0xff,0x16d403a);
        (*pcVar1)();
      }
      if (*(char *)(iVar14 + iVar12) != '\0') {
                    /* WARNING: Does not return */
        pcVar1 = (code *)software_udf(0xff,0x16d4040);
        (*pcVar1)();
      }
      bVar2 = *(byte *)(iVar18 + 0x14);
      uVar15 = 1 << uVar6;
      *(undefined1 *)(iVar7 + -3) = 0xff;
      *(undefined2 *)(iVar7 + -2) = 0;
      do {
        uVar13 = *(uint *)(iVar18 + 0x10);
        uVar16 = *(uint *)(iVar18 + 0xc) | uVar13;
        if ((uVar15 & uVar16) != 0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)software_udf(0xff,0x16d4074);
          (*pcVar1)();
        }
        if ((uVar13 == 0) || (uVar16 + uVar15 == (2 << (bVar2 & 0x1f)) + -1)) {
          if (DAT_018ddb0b != '\0') {
            FUN_016ddcc0(&DAT_018ddd48);
          }
          FUN_016d3ca8(&local_28,iVar18,uVar6);
          FUN_016dddc0(&DAT_018ddd48);
          if (unaff_r4 == 0) {
            return;
          }
          puVar9 = (undefined4 *)FUN_016d2bc8();
          uVar11 = *puVar9;
          FUN_016d6ac4(local_28,unaff_r4);
          *puVar9 = uVar11;
          return;
        }
        if (DAT_018ddb0b == '\0') {
          *(uint *)(iVar18 + 0x10) = uVar15 + uVar13;
          return;
        }
        puVar19 = (uint *)(iVar18 + 0x10);
        DataMemoryBarrier(0x1b);
        do {
          ExclusiveAccess(puVar19);
          uVar16 = *puVar19;
          if (uVar13 != uVar16) goto LAB_016d409c;
          bVar3 = (bool)hasExclusiveAccess(puVar19);
        } while (!bVar3);
        *puVar19 = uVar15 + uVar13;
LAB_016d409c:
        DataMemoryBarrier(0x1b);
        if (uVar13 == uVar16) {
          return;
        }
      } while( true );
    }
  }
  else {
    uVar6 = param_3[2];
    uVar15 = *param_3;
    uVar16 = param_3[1];
    FUN_006c2130(&local_48,&DAT_0034e5a5,0x11);
    iVar4 = local_40;
    iVar14 = local_44;
    iVar12 = local_48;
    if (local_48 == -0x80000000) {
      *param_1 = -0x80000000;
      param_1[1] = local_44;
    }
    else {
      FUN_006c2130(&local_80,&DAT_0034e5b6,0xf);
      if (local_80 == -0x80000000) {
        *param_1 = -0x80000000;
        param_1[1] = (int)local_7c;
        if (iVar12 != 0) {
          thunk_FUN_016d3fb4(iVar14);
        }
      }
      else {
        local_70 = local_80;
        local_6c = local_7c;
        iStack_68 = iStack_78;
        if (iStack_78 == 0) {
          if ((DAT_018d9130 < 5) &&
             (((DAT_018d99a4 - 1 < 2 ||
               ((DAT_018d99a4 != 0 && (cVar5 = FUN_0169ac90(&DAT_018d999c), cVar5 != '\0')))) &&
              (iVar8 = FUN_016949d8(DAT_018d999c), iVar8 != 0)))) {
            if (*(int *)(DAT_018d999c + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_00fb74b8(&DAT_00411c02,0x22,&DAT_0186f480);
            }
            local_38 = 0;
            local_3c = *(undefined4 *)(DAT_018d999c + 0x28);
            local_50 = &local_34;
            local_44 = *(int *)(DAT_018d999c + 0x20);
            local_40 = *(int *)(DAT_018d999c + 0x24);
            local_58 = (int *)(DAT_018d999c + 0x1c);
            local_48 = *local_58;
            local_30 = &local_2c;
            local_28 = &DAT_006043a8;
            local_2c = &local_70;
            local_5c = 1;
            local_60 = &local_54;
            local_4c = &DAT_018abb78;
            local_34 = &DAT_00574987;
            local_54 = &local_48;
            FUN_0169bb88(DAT_018d999c,&local_60);
          }
          iVar17 = 7;
          puVar9 = (undefined4 *)thunk_FUN_016d4a50(7);
          iVar8 = 7;
          if (puVar9 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_00600af4(1,7);
          }
          *(undefined4 *)((int)puVar9 + 3) = 0x5f797470;
          *puVar9 = 0x706d655f;
          if (local_70 != 0) {
            thunk_FUN_016d3fb4(local_6c);
          }
        }
        else {
          iVar8 = local_80;
          puVar9 = local_7c;
          iVar17 = iStack_78;
        }
        FUN_006c2130(&local_48,&DAT_0034e5c5,0xd);
        if (local_48 != -0x80000000) {
          iVar10 = *param_2;
          param_1[0x10] = uVar16;
          param_1[0x11] = uVar6;
          param_1[8] = iVar4;
          param_1[9] = iVar8;
          param_1[10] = (int)puVar9;
          param_1[0xb] = iVar17;
          param_1[0xc] = local_48;
          param_1[0xd] = local_44;
          param_1[0xe] = local_40;
          param_1[0xf] = uVar15;
          param_1[1] = iVar18;
          param_1[2] = iVar20;
          iVar18 = param_2[1];
          iVar20 = param_2[2];
          param_1[3] = iVar10;
          param_1[4] = iVar18;
          param_1[5] = iVar20;
          *param_1 = iVar7;
          param_1[6] = iVar12;
          param_1[7] = iVar14;
          return;
        }
        *param_1 = -0x80000000;
        param_1[1] = local_44;
        if (iVar8 != 0) {
          thunk_FUN_016d3fb4(puVar9);
        }
        if (iVar12 != 0) {
          thunk_FUN_016d3fb4(iVar14);
        }
      }
    }
    if ((uVar15 & 0x7fffffff) != 0) {
      thunk_FUN_016d3fb4(uVar16);
    }
    if (*param_2 != 0) {
      thunk_FUN_016d3fb4(param_2[1]);
    }
    if (iVar7 != 0) {
      thunk_FUN_016d3fb4(iVar18);
      return;
    }
  }
  return;
}


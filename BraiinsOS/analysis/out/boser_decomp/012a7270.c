// FUN_012a7270 @ 012a7270 size=1864 calls_out=14 calls_in=3
// strings: 

void FUN_012a7270(undefined4 *******param_1)

{
  bool bVar1;
  code *pcVar2;
  uint uVar3;
  code *pcVar4;
  int iVar5;
  undefined4 *******pppppppuVar6;
  undefined4 *******pppppppuVar7;
  undefined4 ******ppppppuVar8;
  undefined *puVar9;
  undefined4 ******ppppppuVar10;
  int iVar11;
  undefined4 ******unaff_r5;
  undefined4 ******ppppppuVar12;
  undefined4 uVar13;
  int *piVar14;
  int iVar15;
  int local_80;
  undefined1 *local_7c;
  int local_78;
  undefined4 ******local_74;
  int local_70;
  undefined4 ******local_6c;
  undefined4 *******local_68;
  code *local_64;
  uint local_60;
  undefined4 ******local_58;
  undefined4 ******local_54;
  char *local_50;
  uint local_4c;
  undefined4 *******local_48;
  code *local_44;
  char **local_40;
  undefined1 *local_3c;
  undefined4 *******local_38;
  undefined1 *local_34;
  undefined4 *******local_30;
  code *local_2c;
  uint local_28;
  
  ppppppuVar10 = param_1[0x51];
  if (-1 < (int)ppppppuVar10) {
    unaff_r5 = param_1[0x52];
  }
  if (-1 >= (int)ppppppuVar10 || (int)unaff_r5 < 0) {
    return;
  }
  local_7c = (undefined1 *)thunk_FUN_01be5118(1);
  if (local_7c == (undefined1 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00664620(1,1);
  }
  *local_7c = 0x20;
  local_78 = 1;
  local_80 = 1;
  if ((((uint)ppppppuVar10 | (uint)unaff_r5) & 0x3000) == 0) {
    pcVar4 = (code *)FUN_012b9138(param_1 + 0x1d);
    local_40 = (char **)0x0;
    local_44 = (code *)&DAT_00420598;
    if (pcVar4 != (code *)0x0) {
      local_44 = pcVar4;
    }
    local_48 = param_1;
    FUN_012b5da8(&local_68,&local_48,4,0,0);
    if (local_60 != 0) {
      pcVar4 = local_64 + 4;
      iVar11 = local_60 * 0xc;
      do {
        local_28 = 0;
        local_2c = (code *)0x1;
        local_30 = (undefined4 *******)0x0;
        local_3c = (undefined1 *)0x0;
        local_40 = (char **)0x60000020;
        local_44 = (code *)&DAT_01ce23dc;
        local_48 = &local_30;
        iVar5 = FUN_012fb940(&local_48,*(undefined4 *)pcVar4,*(undefined4 *)(pcVar4 + 4));
        uVar3 = local_28;
        pcVar2 = local_2c;
        pppppppuVar7 = local_30;
        if (iVar5 != 0) {
                    /* WARNING: Subroutine does not return */
          FUN_013073dc(&DAT_00533383,0x37,&local_50,&DAT_01ce23f4,&DAT_01d30334);
        }
        if ((uint)(local_80 - local_78) < local_28) {
          FUN_006520b4(&local_80,local_78,local_28,1,1);
        }
        FUN_01bed4e2(local_7c + local_78,pcVar2,uVar3);
        local_78 = local_78 + uVar3;
        FUN_0134bd64(pppppppuVar7,pcVar2);
        iVar5 = local_78;
        if (local_80 == local_78) {
          FUN_006520b4(&local_80,local_78,1,1,1);
        }
        pcVar4 = pcVar4 + 0xc;
        iVar11 = iVar11 + -0xc;
        local_7c[local_78] = 0x20;
        local_78 = iVar5 + 1;
      } while (iVar11 != 0);
    }
    FUN_018a8274(&local_68);
    ppppppuVar10 = param_1[0x51];
  }
  if (((uint)ppppppuVar10 & 0x800) == 0) {
    ppppppuVar10 = param_1[0x26];
    if (((uint)param_1[0x52] & 0x800) != 0) goto LAB_012a74a4;
    pppppppuVar7 = param_1 + 0x27;
    pppppppuVar6 = param_1 + 0x28;
    if (ppppppuVar10 == (undefined4 ******)0x80000000) {
      pppppppuVar7 = param_1 + 0x47;
      pppppppuVar6 = param_1 + 0x48;
    }
    ppppppuVar12 = *pppppppuVar7;
    ppppppuVar10 = *pppppppuVar6;
    bVar1 = false;
  }
  else {
    ppppppuVar10 = param_1[0x26];
LAB_012a74a4:
    ppppppuVar12 = param_1[0x27];
    if (ppppppuVar10 == (undefined4 ******)0x80000000) {
      ppppppuVar12 = (undefined4 ******)0x1;
    }
    bVar1 = true;
    if (ppppppuVar10 == (undefined4 ******)0x80000000) {
      ppppppuVar10 = (undefined4 ******)0x0;
      iVar11 = 1;
      goto LAB_012a7514;
    }
    ppppppuVar10 = param_1[0x28];
  }
  if ((int)ppppppuVar10 < 0) {
    uVar13 = 0;
LAB_012a74d8:
                    /* WARNING: Subroutine does not return */
    FUN_00664620(uVar13,ppppppuVar10);
  }
  if (ppppppuVar10 == (undefined4 ******)0x0) {
    iVar11 = 1;
    ppppppuVar10 = (undefined4 ******)0x0;
  }
  else {
    uVar13 = 1;
    iVar11 = FUN_01298504(ppppppuVar10,1);
    if (iVar11 == 0) goto LAB_012a74d8;
  }
LAB_012a7514:
  FUN_01bed4e2(iVar11,ppppppuVar12,ppppppuVar10);
  iVar5 = 0;
  ppppppuVar12 = param_1[0x18];
  ppppppuVar8 = param_1[0x19];
  local_74 = ppppppuVar10;
  local_70 = iVar11;
  local_6c = ppppppuVar10;
  do {
    if ((int)ppppppuVar8 * 0x16c == iVar5) {
      param_1[0x51] = (undefined4 ******)((uint)param_1[0x51] | 0x80000000);
      FUN_0134bd64(local_74,local_70);
      FUN_0134bd64(local_80,local_7c);
      return;
    }
    iVar11 = (int)ppppppuVar12 + iVar5;
    piVar14 = (int *)(iVar11 + 0xf8);
    if (*piVar14 == -0x80000000) {
      local_60 = 0;
      local_64 = (code *)0x1;
      local_68 = (undefined4 *******)0x0;
      iVar15 = *(int *)(iVar11 + 0x120);
      uVar13 = *(undefined4 *)(iVar11 + 0x11c);
      if (iVar15 != 0) {
        FUN_006520b4(&local_68,0,iVar15,1,1);
      }
      FUN_01bed4e2(local_64 + local_60,uVar13,iVar15);
      local_60 = local_60 + iVar15;
      if (*(undefined4 *******)(iVar11 + 0x124) == (undefined4 ******)0x0) {
        ppppppuVar10 = *(undefined4 *******)(iVar11 + 0x1c);
        if (ppppppuVar10 != (undefined4 ******)&DAT_00110000) {
LAB_012a7624:
          local_44 = FUN_012fbb84;
          local_48 = &local_30;
          local_30 = (undefined4 *******)ppppppuVar10;
          iVar15 = FUN_012fa178(&local_68,&DAT_01ce25cc,&DAT_005930d8,&local_48);
          if (iVar15 != 0) {
            puVar9 = &DAT_01ce23cc;
LAB_012a7968:
                    /* WARNING: Subroutine does not return */
            FUN_013073dc(&DAT_00533467,0x2b,&local_50,&DAT_01ce23f4,puVar9);
          }
          goto LAB_012a765c;
        }
      }
      else {
        local_2c = *(code **)(iVar11 + 0x128);
        local_44 = (code *)&LAB_018a13b8;
        local_48 = &local_30;
        local_30 = (undefined4 *******)*(undefined4 *******)(iVar11 + 0x124);
        iVar15 = FUN_012fa178(&local_68,&DAT_01ce25cc,&DAT_00584e7a,&local_48);
        if (iVar15 != 0) {
          puVar9 = &DAT_01ce23bc;
          goto LAB_012a7968;
        }
        ppppppuVar10 = *(undefined4 *******)(iVar11 + 0x1c);
        if (ppppppuVar10 != (undefined4 ******)&DAT_00110000) goto LAB_012a7624;
LAB_012a765c:
        local_2c = (code *)&LAB_00632348;
        local_30 = &local_68;
        FUN_00664898(&local_48,&DAT_00586789,&local_30);
        local_30 = local_48;
        local_2c = local_44;
        local_28 = (uint)local_40;
        FUN_0134bd64(local_68,local_64);
        local_68 = local_30;
        local_64 = local_2c;
        local_60 = local_28;
      }
      local_40 = (char **)&local_80;
      local_34 = &LAB_00632348;
      local_3c = &LAB_00632348;
      local_44 = (code *)&LAB_00632348;
      local_48 = &local_74;
      local_38 = &local_68;
      FUN_00664898(&local_30,&DAT_005a902e,&local_48);
      local_48 = local_30;
      local_44 = local_2c;
      local_40 = (char **)local_28;
      if (*piVar14 != -0x80000000) {
        FUN_0134bd64(*piVar14,*(undefined4 *)(iVar11 + 0xfc));
      }
      *piVar14 = (int)local_48;
      *(code **)(iVar11 + 0xfc) = local_44;
      *(char ***)(iVar11 + 0x100) = local_40;
      FUN_0134bd64(local_68,local_64);
    }
    piVar14 = (int *)(iVar11 + 0x98);
    if (*piVar14 == -0x80000000) {
      local_50 = (char *)0x1;
      if (local_6c != (undefined4 ******)0x0) {
        local_50 = &DAT_005319c3;
      }
      local_4c = (uint)(local_6c != (undefined4 ******)0x0);
      local_68 = *(undefined4 ********)(iVar11 + 0x11c);
      local_64 = *(code **)(iVar11 + 0x120);
      local_34 = &LAB_018a13b8;
      local_3c = &LAB_018a13b8;
      local_40 = &local_50;
      local_44 = (code *)&LAB_00632348;
      local_48 = &local_74;
      local_38 = &local_68;
      FUN_00664898(&local_30,&DAT_005a902e,&local_48);
      local_48 = local_30;
      local_44 = local_2c;
      local_40 = (char **)local_28;
      if (*piVar14 != -0x80000000) {
        FUN_0134bd64(*piVar14,*(undefined4 *)(iVar11 + 0x9c));
      }
      *piVar14 = (int)local_48;
      *(code **)(iVar11 + 0x9c) = local_44;
      *(char ***)(iVar11 + 0xa0) = local_40;
    }
    piVar14 = (int *)(iVar11 + 0x8c);
    if (*piVar14 == -0x80000000) {
      local_54 = param_1[0x25];
      if (bVar1) {
        if (param_1[0x23] != (undefined4 ******)0x80000000) {
          local_58 = param_1[0x24];
          goto LAB_012a7848;
        }
        local_54 = (undefined4 ******)0x0;
        local_58 = (undefined4 ******)0x1;
LAB_012a7864:
        local_4c = 0;
        local_50 = (char *)0x1;
      }
      else {
        pppppppuVar7 = param_1 + 0x24;
        if (param_1[0x23] == (undefined4 ******)0x80000000) {
          pppppppuVar7 = param_1 + 0x47;
          local_54 = param_1[0x48];
        }
        local_58 = *pppppppuVar7;
LAB_012a7848:
        local_4c = 1;
        local_50 = "-";
        if (local_54 == (undefined4 ******)0x0) goto LAB_012a7864;
      }
      local_38 = &local_68;
      local_68 = *(undefined4 ********)(iVar11 + 0x11c);
      local_64 = *(code **)(iVar11 + 0x120);
      local_40 = &local_50;
      local_34 = &LAB_018a13b8;
      local_3c = &LAB_018a13b8;
      local_44 = (code *)&LAB_018a13b8;
      local_48 = &local_58;
      FUN_00664898(&local_30,&DAT_005a902e,&local_48);
      local_48 = local_30;
      local_44 = local_2c;
      local_40 = (char **)local_28;
      if (*piVar14 != -0x80000000) {
        FUN_0134bd64(*piVar14,*(undefined4 *)(iVar11 + 0x90));
      }
      *piVar14 = (int)local_48;
      *(code **)(iVar11 + 0x90) = local_44;
      *(char ***)(iVar11 + 0x94) = local_40;
    }
    iVar5 = iVar5 + 0x16c;
    FUN_012a7270(iVar11);
  } while( true );
}


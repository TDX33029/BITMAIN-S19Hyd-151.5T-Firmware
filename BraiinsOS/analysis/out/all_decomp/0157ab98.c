// FUN_0157ab98 @ 0157ab98 size=1576 calls_out=12 calls_in=3
// strings: 

/* WARNING: Removing unreachable block (ram,0x0157b180) */

undefined4 FUN_0157ab98(undefined1 *param_1,int param_2)

{
  int *piVar1;
  code *pcVar2;
  char *pcVar3;
  int iVar4;
  undefined4 uVar5;
  int **ppiVar6;
  undefined4 *puVar7;
  int iVar8;
  uint uVar9;
  int *piVar10;
  undefined4 uVar11;
  int *piVar12;
  int *piVar13;
  undefined4 *puVar14;
  undefined8 uVar15;
  int local_7c;
  int *local_78;
  char *local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined1 local_68;
  uint local_60;
  int **local_5c;
  int *local_58;
  char *local_54;
  int local_50;
  undefined4 local_4c;
  int *local_48;
  undefined4 local_44;
  int local_40;
  undefined4 local_3c;
  int local_38;
  int *local_30;
  char *local_2c;
  
  local_7c = param_2;
  if ((*(uint *)(param_2 + 8) & 0x800000) == 0) {
    local_30 = &local_7c;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(*param_1) {
    case 0:
      pcVar3 = &DAT_00567318;
      break;
    case 1:
      if (param_1[1] == '\0') goto LAB_0157b048;
      pcVar3 = "true\x1e\x05";
      break;
    case 2:
      goto switchD_0157abc4_caseD_2;
    case 3:
      goto switchD_0157abc4_caseD_3;
    case 4:
      piVar1 = (int *)FUN_0157f454(&local_30,param_1 + 4);
      goto LAB_0157b090;
    case 5:
      iVar4 = *(int *)(param_1 + 0xc);
      FUN_0157a340(&local_58,param_2,&DAT_004144eb,1);
      if ((char)local_58 != '\x04') goto LAB_0157b1cc;
      iVar8 = 0x100;
      if (iVar4 == 0) {
        FUN_0157a340(&local_58,local_7c,"}",1);
        if ((char)local_58 != '\x04') goto LAB_0157b1cc;
        iVar8 = 0;
      }
      piVar10 = local_30;
      local_50 = *(int *)(param_1 + 4);
      local_4c = *(undefined4 *)(param_1 + 8);
      local_38 = iVar4;
      if (local_50 == 0) {
        local_38 = 0;
      }
      local_58 = (int *)(uint)(local_50 != 0);
      local_44 = 0;
      local_54 = (char *)0x0;
      local_48 = local_58;
      local_40 = local_50;
      local_3c = local_4c;
      do {
        uVar15 = FUN_00f45584(&local_58);
        iVar4 = (int)uVar15;
        if (iVar4 == 0) {
          if (iVar8 == 0) {
            return 0;
          }
          uVar5 = 1;
          param_2 = *local_30;
          pcVar3 = "}";
          goto LAB_0157b07c;
        }
        uVar11 = *(undefined4 *)(iVar4 + 4);
        uVar5 = *(undefined4 *)(iVar4 + 8);
        if (iVar8 != 0x100) {
          FUN_0157a340(&local_78,*piVar10,&DAT_004144ea,1);
          if ((char)local_78 == '\x04') goto LAB_0157add0;
LAB_0157b10c:
          piVar1 = local_78;
          pcVar3 = local_74;
          goto LAB_0157b114;
        }
LAB_0157add0:
        FUN_0157f904(&local_78,piVar10,uVar11,uVar5);
        if ((char)local_78 != '\x04') goto LAB_0157b10c;
        FUN_0157a340(&local_78,*piVar10,&DAT_00418eb8,1);
        if ((char)local_78 != '\x04') goto LAB_0157b10c;
        piVar1 = (int *)FUN_0157f594((int)((ulonglong)uVar15 >> 0x20),&local_30);
        iVar8 = 0x200;
      } while (piVar1 == (int *)0x0);
LAB_0157ae2c:
      iVar4 = *piVar1;
      goto joined_r0x0157ae38;
    }
LAB_0157accc:
    uVar5 = 4;
LAB_0157b07c:
    FUN_0157a340(&local_58,param_2,pcVar3,uVar5);
joined_r0x0157ac74:
    piVar1 = (int *)0x0;
    if ((char)local_58 != '\x04') {
      piVar1 = (int *)FUN_0157c4a0(local_58,local_54);
    }
  }
  else {
    local_68 = 0;
    local_78 = &local_7c;
    local_6c = 0;
    local_70 = 2;
    local_74 = "  ";
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(*param_1) {
    case 0:
      pcVar3 = &DAT_00567318;
      goto LAB_0157accc;
    case 1:
      if (param_1[1] != '\0') {
        pcVar3 = "true\x1e\x05";
        goto LAB_0157accc;
      }
LAB_0157b048:
      pcVar3 = &DAT_00414fdc;
      uVar5 = 5;
      goto LAB_0157b07c;
    case 2:
switchD_0157abc4_caseD_2:
      piVar1 = (int *)FUN_0157fdec(param_1 + 8,&local_7c);
      break;
    case 3:
switchD_0157abc4_caseD_3:
      FUN_0157f904(&local_58,&local_7c,*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
      goto joined_r0x0157ac74;
    case 4:
      piVar1 = (int *)FUN_0157eb80(&local_78,param_1 + 4);
      break;
    case 5:
      iVar4 = *(int *)(param_1 + 0xc);
      local_6c = 1;
      local_68 = 0;
      FUN_0157a340(&local_58,param_2,&DAT_004144eb,1);
      if ((char)local_58 != '\x04') {
LAB_0157b1cc:
        piVar1 = local_58;
        pcVar3 = local_54;
LAB_0157b114:
        piVar1 = (int *)FUN_0157c4a0(piVar1,pcVar3);
        iVar4 = *piVar1;
        goto joined_r0x0157ae38;
      }
      uVar9 = 0x100;
      if (iVar4 == 0) {
        uVar9 = 0;
        local_6c = 0;
        FUN_0157a340(&local_58,local_7c,"}",1);
        if ((char)local_58 != '\x04') goto LAB_0157b1cc;
      }
      local_50 = *(int *)(param_1 + 4);
      local_4c = *(undefined4 *)(param_1 + 8);
      ppiVar6 = &local_78;
      if (local_50 == 0) {
        iVar4 = 0;
      }
      local_58 = (int *)(uint)(local_50 != 0);
      local_44 = 0;
      local_54 = (char *)0x0;
      local_60 = uVar9;
      local_5c = ppiVar6;
      local_48 = local_58;
      local_40 = local_50;
      local_3c = local_4c;
      local_38 = iVar4;
      uVar15 = FUN_00f45584(&local_58);
      while( true ) {
        iVar4 = (int)uVar15;
        if (iVar4 == 0) break;
        piVar1 = (int *)FUN_0157f32c(&local_60,*(undefined4 *)(iVar4 + 4),*(undefined4 *)(iVar4 + 8)
                                    );
        ppiVar6 = local_5c;
        if (piVar1 != (int *)0x0) goto LAB_0157ae2c;
        if ((char)local_60 == '\x01') {
                    /* WARNING: Subroutine does not return */
          FUN_00faa464(&DAT_00419463,0x28,&DAT_018a9504);
        }
        FUN_0157a340(&local_30,**local_5c,&DAT_00414a7c,2);
        if ((char)local_30 != '\x04') {
          piVar1 = local_30;
          pcVar3 = local_2c;
          goto LAB_0157b114;
        }
        piVar1 = (int *)FUN_0157ef9c((int)((ulonglong)uVar15 >> 0x20),ppiVar6);
        if (piVar1 != (int *)0x0) goto LAB_0157ae2c;
        *(undefined1 *)(ppiVar6 + 4) = 1;
        uVar15 = FUN_00f45584(&local_58);
      }
      if ((local_60 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa464(&DAT_00419463,0x28,&DAT_018a9514);
      }
      if ((local_60 & 0xff00) == 0) {
        piVar1 = (int *)0x0;
        break;
      }
      piVar10 = ppiVar6[3];
      piVar1 = *ppiVar6;
      ppiVar6[3] = (int *)((int)piVar10 + -1);
      if (*(char *)(ppiVar6 + 4) == '\0') {
LAB_0157b0cc:
        FUN_0157a340(&local_30,*piVar1,"}",1);
LAB_0157b0e8:
        piVar1 = (int *)0x0;
        if (((uint)local_30 & 0xff) == 4) break;
      }
      else {
        FUN_0157a340(&local_30,*piVar1,&DAT_0041950e,1);
        if ((char)local_30 == '\x04') {
          piVar12 = ppiVar6[1];
          piVar13 = ppiVar6[2];
          do {
            piVar10 = (int *)((int)piVar10 + -1);
            if (piVar10 == (int *)0x0) goto LAB_0157b0cc;
            FUN_0157a340(&local_58,*piVar1,piVar12,piVar13);
          } while ((char)local_58 == '\x04');
          local_30 = local_58;
          local_2c = local_54;
          goto LAB_0157b0e8;
        }
      }
      piVar1 = (int *)FUN_0157c4a0(local_30,local_2c);
    }
  }
LAB_0157b090:
  if (piVar1 == (int *)0x0) {
    return 0;
  }
  iVar4 = *piVar1;
joined_r0x0157ae38:
  if (iVar4 == 1) {
    if ((char)piVar1[1] != '\x03') goto LAB_0157b16c;
    puVar7 = (undefined4 *)piVar1[2];
    uVar5 = *puVar7;
    puVar14 = (undefined4 *)puVar7[1];
    pcVar2 = (code *)*puVar14;
    if (pcVar2 != (code *)0x0) {
      (*pcVar2)(uVar5);
    }
    if (puVar14[1] != 0) {
      thunk_FUN_016d3fb4(uVar5);
    }
  }
  else {
    if ((iVar4 != 0) || (piVar1[2] == 0)) goto LAB_0157b16c;
    puVar7 = (undefined4 *)piVar1[1];
  }
  thunk_FUN_016d3fb4(puVar7);
LAB_0157b16c:
  thunk_FUN_016d3fb4(piVar1);
  return 1;
}


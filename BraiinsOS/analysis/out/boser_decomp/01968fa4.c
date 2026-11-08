// FUN_01968fa4 @ 01968fa4 size=1280 calls_out=12 calls_in=10
// strings: internal error: entered unreachable code | internal error: entered unreachable code | internal error: entered unreachable code

/* WARNING: Removing unreachable block (ram,0x0196948c) */

undefined4 FUN_01968fa4(undefined1 *param_1,int param_2)

{
  char *pcVar1;
  int *piVar2;
  int iVar3;
  int **ppiVar4;
  int *piVar5;
  int iVar6;
  uint uVar7;
  int *piVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  int *piVar11;
  undefined8 uVar12;
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
  if ((*(uint *)(param_2 + 8) & 0x800000) != 0) {
    local_68 = 0;
    local_6c = 0;
    local_70 = 2;
    local_74 = "  ";
    local_78 = &local_7c;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(*param_1) {
    case 0:
      goto switchD_01968fd4_caseD_0;
    case 1:
      goto switchD_01968fd4_caseD_1;
    case 2:
      goto switchD_01968fd4_caseD_2;
    case 3:
      goto switchD_01968fd4_caseD_3;
    case 4:
      iVar3 = FUN_01969c74(&local_78,param_1 + 4);
      goto LAB_019690c0;
    case 5:
      local_68 = 0;
      local_6c = 1;
      iVar3 = *(int *)(param_1 + 0xc);
      FUN_01968ab4(&local_58,param_2,"{",1);
      if ((char)local_58 != '\x04') goto LAB_01969438;
      uVar7 = 0x100;
      if (iVar3 == 0) {
        uVar7 = 0;
        local_6c = 0;
        FUN_01968ab4(&local_58,local_7c,"}",1);
        if ((char)local_58 != '\x04') goto LAB_01969438;
      }
      local_50 = *(int *)(param_1 + 4);
      local_4c = *(undefined4 *)(param_1 + 8);
      ppiVar4 = &local_78;
      if (local_50 == 0) {
        iVar3 = 0;
      }
      local_58 = (int *)(uint)(local_50 != 0);
      local_44 = 0;
      local_54 = (char *)0x0;
      local_60 = uVar7;
      local_5c = ppiVar4;
      local_48 = local_58;
      local_40 = local_50;
      local_3c = local_4c;
      local_38 = iVar3;
      while( true ) {
        uVar12 = FUN_01a41998(&local_58);
        iVar3 = (int)uVar12;
        if (iVar3 == 0) break;
        iVar3 = FUN_0196a35c(&local_60,*(undefined4 *)(iVar3 + 4),*(undefined4 *)(iVar3 + 8));
        ppiVar4 = local_5c;
        if (iVar3 != 0) goto LAB_019690c8;
        if ((char)local_60 == '\x01') {
                    /* WARNING: Subroutine does not return */
          FUN_012fb0ec("internal error: entered unreachable code",0x28,&DAT_01d273b0);
        }
        FUN_01968ab4(&local_30,**local_5c,0x5312dd,2);
        if ((char)local_30 != '\x04') {
          piVar2 = local_30;
          goto LAB_01969484;
        }
        iVar3 = FUN_01969e90((int)((ulonglong)uVar12 >> 0x20),ppiVar4);
        if (iVar3 != 0) goto LAB_019690c8;
        *(undefined1 *)(ppiVar4 + 4) = 1;
      }
      if ((local_60 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_012fb0ec("internal error: entered unreachable code",0x28,&DAT_01d2ffc0);
      }
      if ((local_60 & 0xff00) == 0) {
        iVar3 = 0;
        goto LAB_019690c0;
      }
      piVar8 = ppiVar4[3];
      piVar2 = *ppiVar4;
      ppiVar4[3] = (int *)((int)piVar8 - 1);
      if (*(char *)(ppiVar4 + 4) != '\x01') {
LAB_01969458:
        param_2 = *piVar2;
        uVar9 = 1;
        pcVar1 = "}";
        goto LAB_019690ac;
      }
      FUN_01968ab4(&local_58,*piVar2,"\n",1);
      if ((char)local_58 == '\x04') {
        piVar11 = *ppiVar4;
        piVar2 = ppiVar4[1];
        piVar5 = ppiVar4[2];
        do {
          piVar8 = (int *)((int)piVar8 - 1);
          if (piVar8 == (int *)0x0) {
            piVar2 = *ppiVar4;
            local_58 = (int *)CONCAT31(local_58._1_3_,4);
            goto LAB_01969458;
          }
          FUN_01968ab4(&local_58,*piVar11,piVar2,piVar5);
        } while ((char)local_58 == '\x04');
      }
    }
    goto LAB_01969428;
  }
  local_30 = &local_7c;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*param_1) {
  case 0:
switchD_01968fd4_caseD_0:
    uVar9 = 4;
    pcVar1 = &DAT_0056d030;
    goto LAB_019690ac;
  case 1:
switchD_01968fd4_caseD_1:
    pcVar1 = "f";
    uVar9 = 5;
    if (param_1[1] != '\0') {
      uVar9 = 4;
      pcVar1 = "true\x1e\x05";
    }
LAB_019690ac:
    FUN_01968ab4(&local_58,param_2,pcVar1,uVar9);
LAB_019690b0:
    iVar3 = 0;
    if (((uint)local_58 & 0xff) != 4) {
LAB_01969428:
      iVar3 = FUN_01966f50(local_58,local_54);
    }
    break;
  case 2:
switchD_01968fd4_caseD_2:
    iVar3 = FUN_0196a980(param_1 + 8,&local_7c);
    break;
  case 3:
switchD_01968fd4_caseD_3:
    FUN_0196a1e4(&local_58,&local_7c,*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
    goto LAB_019690b0;
  case 4:
    iVar3 = FUN_0196a468(&local_30,param_1 + 4);
    break;
  case 5:
    iVar3 = *(int *)(param_1 + 0xc);
    FUN_01968ab4(&local_58,param_2,"{",1);
    if ((char)local_58 == '\x04') {
      iVar6 = 0x100;
      if (iVar3 == 0) {
        FUN_01968ab4(&local_58,local_7c,"}",1);
        if ((char)local_58 != '\x04') goto LAB_01969438;
        iVar6 = 0;
      }
      piVar2 = local_30;
      local_50 = *(int *)(param_1 + 4);
      local_4c = *(undefined4 *)(param_1 + 8);
      local_38 = iVar3;
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
        uVar12 = FUN_01a41998(&local_58);
        iVar3 = (int)uVar12;
        if (iVar3 == 0) {
          if (iVar6 == 0) goto LAB_01969394;
          piVar2 = local_30;
          goto LAB_01969458;
        }
        uVar9 = *(undefined4 *)(iVar3 + 4);
        uVar10 = *(undefined4 *)(iVar3 + 8);
        if (iVar6 != 0x100) {
          FUN_01968ab4(&local_78,*piVar2,",",1);
          if ((char)local_78 == '\x04') goto LAB_019691d4;
LAB_01969470:
          piVar2 = local_78;
          local_2c = local_74;
          goto LAB_01969484;
        }
LAB_019691d4:
        FUN_0196a1e4(&local_78,piVar2,uVar9,uVar10);
        if ((char)local_78 != '\x04') goto LAB_01969470;
        FUN_01968ab4(&local_78,*piVar2,":",1);
        if ((char)local_78 != '\x04') goto LAB_01969470;
        iVar3 = FUN_0196a58c((int)((ulonglong)uVar12 >> 0x20),&local_30);
        iVar6 = 0x200;
      } while (iVar3 == 0);
    }
    else {
LAB_01969438:
      piVar2 = local_58;
      local_2c = local_54;
LAB_01969484:
      FUN_01966f50(piVar2,local_2c);
    }
    goto LAB_019690c8;
  }
LAB_019690c0:
  if (iVar3 == 0) {
LAB_01969394:
    uVar9 = 0;
  }
  else {
LAB_019690c8:
    FUN_012c696c();
    uVar9 = 1;
  }
  return uVar9;
}


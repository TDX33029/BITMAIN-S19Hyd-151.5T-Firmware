// FUN_0157ad7c @ 0157ad7c size=2172 calls_out=11 calls_in=1
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_0157ad7c(int *param_1,char *param_2,uint param_3)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined *puVar6;
  uint uVar7;
  int extraout_r1;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  char *pcVar12;
  undefined4 *puVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  bool bVar17;
  ulonglong uVar18;
  int local_84;
  int local_7c;
  uint local_78;
  int local_74;
  undefined4 *local_70;
  undefined4 *local_6c;
  int local_68;
  undefined4 *local_64;
  uint local_60;
  int local_5c;
  undefined4 *local_58;
  int local_54;
  int local_50;
  undefined4 *local_4c;
  uint local_48;
  int local_40;
  undefined4 *local_3c;
  uint local_38;
  int local_34;
  undefined4 *local_30;
  uint local_2c;
  
  uVar9 = 0;
  if (param_3 == 0) {
    bVar17 = false;
    uVar10 = 0;
  }
  else {
    uVar10 = 1;
    bVar17 = *param_2 == '-';
    if (!bVar17) {
      uVar10 = (uint)(*param_2 == '+');
    }
  }
  do {
    uVar8 = param_3 - uVar9;
    if (uVar8 < 8) {
      uVar7 = 0;
      if (uVar8 == 0) {
        uVar18 = 0;
      }
      else {
        do {
          if ((param_2 + uVar9)[uVar7] == '.') {
            uVar18 = CONCAT44(uVar7,1);
            goto LAB_0157ae24;
          }
          uVar7 = uVar7 + 1;
        } while (uVar8 != uVar7);
        uVar18 = (ulonglong)uVar8 << 0x20;
      }
    }
    else {
      uVar18 = FUN_01307168(0x2e,param_2 + uVar9);
    }
LAB_0157ae24:
    if ((uVar18 & 1) == 0) break;
    uVar9 = (int)(uVar18 >> 0x20) + uVar9;
    if ((uVar9 < param_3) && (param_2[uVar9] == '.')) {
      if (uVar9 < uVar10) {
        puVar6 = &DAT_01cfbf88;
        goto LAB_0157b584;
      }
      if ((uVar10 != 0) && (param_2[1] < -0x40)) {
        puVar6 = &DAT_01cfbf88;
        goto LAB_0157b5b0;
      }
      FUN_016469f8(&local_40,param_2 + uVar10,uVar9 - uVar10);
      uVar10 = local_38;
      iVar16 = local_40;
      if (local_40 == -0x80000000) goto LAB_0157b08c;
      uVar8 = uVar9 + 1;
      pcVar12 = param_2 + uVar8;
      local_70 = local_3c;
      local_78 = local_38;
      if ((uVar8 < param_3) && (*pcVar12 < -0x40)) {
        puVar6 = &DAT_01cfbf98;
        uVar10 = param_3;
LAB_0157b5d4:
                    /* WARNING: Subroutine does not return */
        FUN_012fb514(param_2,param_3,uVar8,uVar10,puVar6);
      }
      FUN_016f7958(pcVar12,param_3 - uVar8,0x30);
      if (extraout_r1 == 0) {
        local_6c = (undefined4 *)thunk_FUN_01be5118(4);
        if (local_6c != (undefined4 *)0x0) {
          iVar11 = 1;
          *local_6c = 1;
          local_74 = 1;
          local_84 = 0;
          puVar13 = (undefined4 *)&SUB_00000004;
          uVar9 = 0;
          goto LAB_0157b170;
        }
      }
      else {
        uVar10 = extraout_r1 + uVar8;
        puVar6 = &DAT_01cfbfa8;
        if ((uVar10 <= uVar9) || ((uVar8 < param_3 && (*pcVar12 < -0x40)))) goto LAB_0157b5d4;
        if (uVar10 < param_3) {
          if (param_2[uVar10] < -0x40) goto LAB_0157b5d4;
        }
        else if (uVar10 != param_3) goto LAB_0157b5d4;
        FUN_016469f8(&local_40,pcVar12,extraout_r1);
        uVar9 = local_38;
        puVar13 = local_3c;
        local_84 = local_40;
        if (local_40 == -0x80000000) {
          *param_1 = -0x7ffffffe;
          *(undefined1 *)(param_1 + 1) = 1;
          goto LAB_0157b4e8;
        }
        local_6c = (undefined4 *)thunk_FUN_01be5118(4);
        if (local_6c != (undefined4 *)0x0) {
          uVar8 = 1;
          *local_6c = 1;
          puVar5 = (undefined4 *)thunk_FUN_01be5118(4);
          if (puVar5 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_0066439c(4,4);
          }
          *puVar5 = 1;
          iVar14 = 9;
          iVar11 = 1;
          goto LAB_0157b260;
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_0066439c(4,4);
    }
    uVar9 = uVar9 + 1;
  } while (uVar9 <= param_3);
  uVar9 = 0;
  do {
    uVar8 = param_3 - uVar9;
    if (uVar8 < 8) {
      uVar7 = 0;
      if (uVar8 == 0) {
        uVar18 = 0;
      }
      else {
        do {
          if ((param_2 + uVar9)[uVar7] == '/') {
            uVar18 = CONCAT44(uVar7,1);
            goto LAB_0157aeb0;
          }
          uVar7 = uVar7 + 1;
        } while (uVar8 != uVar7);
        uVar18 = (ulonglong)uVar8 << 0x20;
      }
    }
    else {
      uVar18 = FUN_01307168(0x2f,param_2 + uVar9);
    }
LAB_0157aeb0:
    if ((uVar18 & 1) == 0) break;
    uVar9 = (int)(uVar18 >> 0x20) + uVar9;
    if ((uVar9 < param_3) && (param_2[uVar9] == '/')) {
      if (uVar9 < uVar10) {
        puVar6 = &DAT_01cfbfb8;
LAB_0157b584:
                    /* WARNING: Subroutine does not return */
        FUN_012fb514(param_2,param_3,uVar10,0,puVar6);
      }
      if ((uVar10 != 0) && (param_2[1] < -0x40)) {
        puVar6 = &DAT_01cfbfb8;
LAB_0157b5b0:
                    /* WARNING: Subroutine does not return */
        FUN_012fb514(param_2,param_3,1,uVar9,puVar6);
      }
      FUN_016469f8(&local_40,param_2 + uVar10,uVar9 - uVar10);
      uVar10 = local_38;
      local_70 = local_3c;
      iVar16 = local_40;
      if (local_40 == -0x80000000) goto LAB_0157b08c;
      uVar9 = uVar9 + 1;
      if ((uVar9 < param_3) && (param_2[uVar9] < -0x40)) {
                    /* WARNING: Subroutine does not return */
        FUN_012fb514(param_2,param_3,uVar9,param_3,&DAT_01cfbfc8);
      }
      FUN_016469f8(&local_50,param_2 + uVar9,param_3 - uVar9);
      if (local_50 != -0x80000000) {
        local_34 = local_50;
        local_30 = local_4c;
        local_2c = local_48;
        local_40 = iVar16;
        local_3c = local_70;
        local_38 = uVar10;
        FUN_0157b7fc(&local_40);
        *param_1 = local_40;
        param_1[1] = (int)local_3c;
        param_1[2] = local_38;
        param_1[3] = local_34;
        param_1[4] = (int)local_30;
        param_1[5] = local_2c;
        *(bool *)(param_1 + 6) = bVar17;
        return;
      }
      *param_1 = -0x7ffffffe;
      *(undefined1 *)(param_1 + 1) = 1;
      goto LAB_0157b4e8;
    }
    uVar9 = uVar9 + 1;
  } while (uVar9 <= param_3);
  if (uVar10 != 0) {
    if (param_3 < 2) {
      if (param_3 != 1) goto LAB_0157aef8;
    }
    else if (param_2[1] < -0x40) {
LAB_0157aef8:
                    /* WARNING: Subroutine does not return */
      FUN_012fb514(param_2,param_3,1,param_3,&DAT_01cfbfd8);
    }
  }
  FUN_016469f8(&local_40,param_2 + uVar10,param_3 - uVar10);
  if (local_40 == -0x80000000) {
LAB_0157b08c:
    *param_1 = -0x7ffffffe;
    *(undefined1 *)(param_1 + 1) = 1;
  }
  else {
    local_30 = (undefined4 *)thunk_FUN_01be5118(4);
    if (local_30 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0066439c(4,4);
    }
    *local_30 = 1;
    local_2c = 1;
    local_34 = 1;
    FUN_0157b7fc(&local_40);
    *param_1 = local_40;
    param_1[1] = (int)local_3c;
    param_1[2] = local_38;
    param_1[3] = local_34;
    param_1[4] = (int)local_30;
    param_1[5] = local_2c;
    *(bool *)(param_1 + 6) = bVar17;
  }
  return;
code_r0x0157b3ac:
  FUN_0134aee0(iVar3,puVar4,4,4);
  iVar11 = local_54;
  if (uVar10 < uVar9) {
    FUN_0164a9cc(&local_40,puVar13,uVar9);
    FUN_01646814(&local_50,&local_40,puVar1,uVar10);
  }
  else {
LAB_0157b170:
    FUN_0164a9cc(&local_40,local_70,uVar10);
    FUN_01646814(&local_50,&local_40,puVar13,uVar9);
  }
  if (local_50 != -0x80000000) {
    local_3c = local_4c;
    local_34 = local_74;
    local_40 = local_50;
    local_38 = local_48;
    local_30 = local_6c;
    local_2c = iVar11;
    FUN_0157b7fc(&local_40);
    *param_1 = local_40;
    param_1[1] = (int)local_3c;
    param_1[2] = local_38;
    param_1[3] = local_34;
    param_1[4] = (int)local_30;
    param_1[5] = local_2c;
    *(bool *)(param_1 + 6) = bVar17;
    goto LAB_0157b4d8;
  }
  *param_1 = -0x7ffffffe;
  *(undefined1 *)(param_1 + 1) = 0;
  goto LAB_0157b4bc;
  while( true ) {
    FUN_0134aee0(iVar11,puVar5,4,4);
    iVar14 = iVar14 + -1;
    puVar5 = puVar4;
    iVar11 = iVar3;
    if (iVar14 == 0) break;
LAB_0157b260:
    if (uVar8 == 0) {
      FUN_0164a9cc(&local_40,local_6c,1);
      FUN_01646814(&local_50,&local_40,puVar5,0);
    }
    else {
      FUN_0164a9cc(&local_40,puVar5,uVar8);
      FUN_01646814(&local_50,&local_40,local_6c,1);
    }
    uVar8 = local_48;
    puVar4 = local_4c;
    iVar3 = local_50;
    if (local_50 == -0x80000000) {
      local_74 = 1;
      goto LAB_0157b488;
    }
  }
  iVar14 = 1;
  local_74 = 1;
  iVar15 = iVar16;
  local_7c = extraout_r1;
  while( true ) {
    FUN_0157b728(&local_68,local_70,local_78,puVar4,uVar8);
    iVar16 = local_68;
    if (local_68 == -0x80000000) {
      iVar16 = iVar15;
      goto LAB_0157b488;
    }
    FUN_0134aee0(iVar15,local_70,4,4);
    uVar10 = local_60;
    puVar1 = local_64;
    local_70 = local_64;
    local_78 = local_60;
    FUN_0157b728(&local_5c,local_6c,iVar14,puVar4,uVar8);
    iVar2 = local_5c;
    if (local_5c == -0x80000000) break;
    FUN_0134aee0(local_74,local_6c,4,4);
    local_6c = local_58;
    local_7c = local_7c + -1;
    iVar14 = local_54;
    local_74 = iVar2;
    iVar15 = iVar16;
    if (local_7c == 0) goto code_r0x0157b3ac;
  }
LAB_0157b488:
  *param_1 = -0x7ffffffe;
  *(undefined1 *)(param_1 + 1) = 0;
  FUN_0134aee0(iVar11,puVar5,4,4);
LAB_0157b4bc:
  FUN_0134aee0(local_74,local_6c,4,4);
LAB_0157b4d8:
  FUN_0134aee0(local_84,puVar13,4,4);
LAB_0157b4e8:
  FUN_0134aee0(iVar16,local_70,4,4);
  return;
}


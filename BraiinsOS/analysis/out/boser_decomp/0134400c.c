// FUN_0134400c @ 0134400c size=2316 calls_out=17 calls_in=2
// strings: assertion failed: base.has_scheme()

void FUN_0134400c(uint *param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined1 uVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  char *pcVar5;
  uint uVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  char *pcVar9;
  undefined1 *puVar10;
  uint uVar11;
  char *pcVar12;
  undefined1 *puVar13;
  undefined4 uVar14;
  int iVar15;
  char *pcVar16;
  undefined4 *puVar17;
  undefined1 *puVar18;
  char *pcVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  ulonglong uVar24;
  char *local_94;
  int local_90;
  char *local_8c;
  char *local_84;
  char *local_7c;
  char *local_78;
  uint local_70;
  int local_6c;
  undefined2 local_64;
  undefined1 local_62;
  char *local_60;
  char *local_5c;
  char *local_58;
  int local_54;
  char local_50;
  undefined2 local_4f;
  undefined1 local_4d;
  char *local_4c;
  char *local_48;
  char *local_44;
  int local_40;
  char local_3c;
  undefined2 local_3b;
  undefined1 local_39;
  char *local_38;
  uint local_34;
  char *local_30;
  undefined2 local_28;
  undefined1 local_26;
  
  puVar17 = (undefined4 *)param_2[2];
  if (puVar17[2] == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb0ec("assertion failed: base.has_scheme()",0x23,&DAT_01ce6a3c);
  }
  iVar15 = param_2[1];
  iVar3 = puVar17[3];
  if (puVar17[3] == 0) {
    iVar3 = puVar17[1];
  }
  if (iVar3 == iVar15) {
    if (*(char *)(puVar17 + 6) == '\x04') {
      uVar20 = FUN_013437d0(*param_2,iVar15,*puVar17);
      if ((((int)((ulonglong)uVar20 >> 0x20) == 0) || (*(char *)uVar20 != '/')) &&
         (*(int *)(param_3[2] + 8) == 0)) {
        cVar2 = '\0';
        if (param_3[1] != 0) {
          cVar2 = *(char *)*param_3;
        }
        if (param_3[1] != 0 && cVar2 != '#') {
          *param_1 = 0x80000000;
          uVar1 = 1;
          goto LAB_0134414c;
        }
      }
    }
    uVar20 = FUN_013437a4(param_3);
    FUN_0134392c(&local_60,param_3);
    uVar21 = FUN_013437d0(*param_3,param_3[1],*(undefined4 *)param_3[2],
                          ((undefined4 *)param_3[2])[1]);
    iVar3 = (int)((ulonglong)uVar21 >> 0x20);
    pcVar5 = (char *)uVar21;
    uVar22 = FUN_013438b8(param_3);
    uVar23 = FUN_013438ec(param_3);
    uVar6 = (uint)((ulonglong)uVar23 >> 0x20);
    iVar4 = (int)uVar23;
    cVar2 = local_50;
    if ((int)uVar20 == 0) {
      if (local_50 == '\x04') {
        if (iVar3 == 0) {
          uVar21 = FUN_013437d0(*param_2,iVar15,*puVar17,puVar17[1]);
          local_7c = (char *)0x0;
          if ((int)uVar22 == 0) {
            uVar22 = FUN_013438b8(param_2);
          }
        }
        else {
          local_7c = (char *)0x0;
          if (*pcVar5 != '/') {
            uVar24 = FUN_013437d0(*param_2,iVar15,*puVar17,puVar17[1]);
            puVar7 = (undefined1 *)(uVar24 >> 0x20);
            puVar18 = puVar7;
            if (uVar24 < 0x200000000) {
              puVar18 = &DAT_00000001;
            }
            puVar10 = &DAT_005327c4;
            puVar13 = puVar18;
            if (puVar7 != (undefined1 *)0x0) {
              puVar10 = (undefined1 *)uVar24;
            }
            do {
              uVar21 = CONCAT44(puVar18,puVar10);
              uVar24 = FUN_01307268(0x2f,puVar10,puVar13);
              puVar13 = (undefined1 *)(uVar24 >> 0x20);
              if ((uVar24 & 1) == 0) break;
              if ((puVar13 < puVar18) && (puVar10[(int)puVar13] == '/')) {
                puVar8 = puVar13 + 1;
                if ((puVar8 < puVar7) && ((char)puVar10[(int)puVar8] < -0x40)) {
                    /* WARNING: Subroutine does not return */
                  FUN_012fb514(puVar10,puVar18,puVar8,puVar18,&DAT_01ce6a5c);
                }
                cVar2 = FUN_01343f04(puVar10 + (int)puVar8,(int)puVar18 - (int)puVar8);
                if (cVar2 != '\x01') {
                  uVar21 = FUN_01344958(puVar10,puVar18,puVar13);
                }
                local_7c = pcVar5;
                goto LAB_013442f0;
              }
            } while (puVar13 <= puVar18);
                    /* WARNING: Subroutine does not return */
            FUN_012fb0cc(&DAT_01ce6a4c);
          }
        }
LAB_013442f0:
        FUN_0134392c(&local_4c,param_2);
        local_94 = local_4c;
        local_84 = local_48;
        local_8c = local_44;
        local_90 = local_40;
        local_64 = local_3b;
        local_62 = local_39;
        cVar2 = local_3c;
      }
      else {
        local_94 = local_60;
        local_84 = local_5c;
        local_8c = local_58;
        local_64 = local_4f;
        local_90 = local_54;
        local_62 = local_4d;
        local_7c = (char *)0x0;
      }
      uVar20 = FUN_013437d0(*param_2,iVar15,0,puVar17[2]);
    }
    else {
      local_7c = (char *)0x0;
      local_94 = local_60;
      local_84 = local_5c;
      local_8c = local_58;
      local_90 = local_54;
      local_64 = local_4f;
      local_62 = local_4d;
    }
    local_70 = (uint)((ulonglong)uVar22 >> 0x20);
    local_6c = (int)uVar22;
    pcVar19 = (char *)((ulonglong)uVar21 >> 0x20);
    local_78 = (char *)uVar21;
    pcVar9 = (char *)((ulonglong)uVar20 >> 0x20);
    pcVar5 = pcVar9 + 1;
    if (cVar2 != '\x04') {
      pcVar5 = local_84 + (int)pcVar5 + 2;
    }
    if (local_7c == (char *)0x0) {
      iVar3 = 0;
    }
    pcVar5 = pcVar19 + iVar3 + (int)pcVar5;
    if (local_6c != 0) {
      pcVar5 = pcVar5 + local_70 + 1;
    }
    uVar14 = 0;
    if (iVar4 != 0) {
      pcVar5 = pcVar5 + uVar6 + 1;
    }
    if ((int)pcVar5 < 0) {
LAB_013443bc:
                    /* WARNING: Subroutine does not return */
      FUN_00664620(uVar14,pcVar5);
    }
    if (pcVar5 == (char *)0x0) {
      local_34 = 1;
      pcVar5 = (char *)0x0;
    }
    else {
      uVar14 = 1;
      local_34 = FUN_01298504(pcVar5,1);
      if (local_34 == 0) goto LAB_013443bc;
    }
    local_30 = (char *)0x0;
    local_38 = pcVar5;
    if (pcVar5 < pcVar9) {
      FUN_006520b4(&local_38,0,pcVar9,1,1);
    }
    pcVar16 = local_30;
    uVar11 = local_34;
    pcVar5 = local_38;
    FUN_01bed4e2(local_34 + (int)local_30,(int)uVar20,pcVar9);
    pcVar9 = pcVar9 + (int)pcVar16;
    local_30 = pcVar9;
    if (pcVar5 == pcVar9) {
      FUN_006520b4(&local_38,pcVar5,1,1,1);
      uVar11 = local_34;
    }
    pcVar5 = pcVar9 + 1;
    local_30[uVar11] = ':';
    local_30 = pcVar5;
    if (cVar2 != '\x04') {
      if ((uint)((int)local_38 - (int)pcVar5) < 2) {
        FUN_006520b4(&local_38,pcVar5,2,1,1);
      }
      pcVar5 = local_30 + 2;
      (local_30 + local_34)[0] = '/';
      (local_30 + local_34)[1] = '/';
      local_30 = pcVar5;
      if (local_38 + -(int)pcVar5 < local_84) {
        FUN_006520b4(&local_38,pcVar5,local_84,1,1);
      }
      pcVar16 = local_30;
      FUN_01bed4e2(local_30 + local_34,local_94,local_84);
      local_30 = pcVar16 + (int)local_84;
      local_26 = local_62;
      local_84 = pcVar5 + (int)local_8c;
      local_8c = pcVar5 + local_90;
      local_28 = local_64;
    }
    pcVar5 = local_30;
    if ((pcVar19 == (char *)0x0) || (*local_78 != '/')) {
      if (local_38 + -(int)local_30 < pcVar19) {
        FUN_006520b4(&local_38,local_30,pcVar19,1,1);
      }
      pcVar16 = local_30;
      FUN_01bed4e2(local_30 + local_34,local_78,pcVar19);
      local_30 = pcVar16 + (int)pcVar19;
    }
    else {
      uVar14 = 2;
      local_4c = local_78;
      if (local_7c == (char *)0x0) {
        local_7c = &DAT_00000001;
        uVar14 = 1;
      }
      local_48 = pcVar19;
      local_44 = local_7c;
      local_40 = iVar3;
      FUN_01343b30(&local_38,local_30,&local_4c,uVar14);
    }
    pcVar19 = local_30;
    if (cVar2 == '\x04') {
      if (pcVar5 != (char *)0x0) {
        if (pcVar5 < local_30) {
          if (pcVar5[local_34] < -0x40) goto LAB_01344588;
        }
        else if (local_30 != pcVar5) {
LAB_01344588:
                    /* WARNING: Subroutine does not return */
          FUN_012fb514(local_34,local_30,pcVar5,local_30,&DAT_01ce6a7c);
        }
      }
      uVar11 = (int)local_30 - (int)pcVar5;
      if ((1 < uVar11) && (*(short *)(pcVar5 + local_34) == 0x2f2f)) {
        if (pcVar5 != (char *)0x0) {
          if (pcVar5 < local_30) {
            if ((char)*(short *)(pcVar5 + local_34) < -0x40) goto LAB_013445e8;
          }
          else if (local_30 != pcVar5) {
LAB_013445e8:
                    /* WARNING: Subroutine does not return */
            FUN_012fb0ec(&DAT_0053285a,0x2c,&DAT_01ce6a8c);
          }
        }
        if ((uint)((int)local_38 - (int)local_30) < 2) {
          FUN_006520b4(&local_38,local_30,2,1,1);
        }
        pcVar16 = pcVar5 + local_34;
        FUN_01bed864(pcVar16 + 2,pcVar16,uVar11);
        local_30 = pcVar19 + 2;
        pcVar16[0] = '/';
        pcVar16[1] = '.';
      }
    }
    pcVar19 = local_30;
    if (local_6c == 0) {
      pcVar16 = (char *)0x0;
    }
    else {
      if (local_38 == local_30) {
        FUN_006520b4(&local_38,local_30,1,1,1);
      }
      pcVar16 = pcVar19 + 1;
      local_30[local_34] = '?';
      local_30 = pcVar16;
      if ((uint)((int)local_38 - (int)pcVar16) < local_70) {
        FUN_006520b4(&local_38,pcVar16,local_70,1,1);
      }
      pcVar16 = local_30;
      FUN_01bed4e2(local_30 + local_34,local_6c,local_70);
      pcVar16 = pcVar16 + local_70;
      local_30 = pcVar16;
    }
    pcVar12 = local_30;
    if (iVar4 != 0) {
      if (local_38 == local_30) {
        FUN_006520b4(&local_38,local_30,1,1,1);
      }
      pcVar12 = pcVar12 + 1;
      local_30[local_34] = '#';
      local_30 = pcVar12;
      if ((uint)((int)local_38 - (int)pcVar12) < uVar6) {
        FUN_006520b4(&local_38,pcVar12,uVar6,1,1);
      }
      pcVar12 = local_30;
      FUN_01bed4e2(local_30 + local_34,iVar4,uVar6);
      local_30 = pcVar12 + uVar6;
    }
    *param_1 = (uint)local_38;
    param_1[1] = local_34;
    param_1[2] = (uint)local_30;
    param_1[4] = (uint)pcVar19;
    param_1[5] = (uint)pcVar9;
    param_1[6] = (uint)pcVar16;
    param_1[7] = (uint)local_84;
    *(char *)(param_1 + 9) = cVar2;
    param_1[3] = (uint)pcVar5;
    param_1[8] = (uint)local_8c;
    *(undefined1 *)((int)param_1 + 0x27) = local_26;
    *(undefined2 *)((int)param_1 + 0x25) = local_28;
  }
  else {
    *param_1 = 0x80000000;
    uVar1 = 0;
LAB_0134414c:
    *(undefined1 *)(param_1 + 1) = uVar1;
  }
  return;
}


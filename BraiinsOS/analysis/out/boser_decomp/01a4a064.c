// FUN_01a4a064 @ 01a4a064 size=1528 calls_out=12 calls_in=1
// strings: valid line number

/* WARNING: Type propagation algorithm not settling */

int FUN_01a4a064(int *param_1,undefined4 *param_2)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  int iVar5;
  char *pcVar6;
  char *pcVar7;
  undefined *puVar8;
  char *pcVar9;
  uint uVar10;
  char *pcVar11;
  code *pcVar12;
  int iVar13;
  uint uVar14;
  int iVar15;
  char *pcVar16;
  uint uVar17;
  undefined4 uVar18;
  bool bVar19;
  uint local_68;
  int local_60;
  undefined8 local_5c;
  int *local_54;
  code *local_50;
  int ***local_4c;
  code *local_48;
  char *local_44;
  undefined4 local_40;
  undefined1 local_3c;
  undefined4 local_38;
  char *local_34;
  undefined2 local_30;
  int **local_2c;
  undefined1 *local_28;
  
  iVar1 = param_2[1];
  uVar18 = *param_2;
  bVar19 = false;
  local_5c = CONCAT44(local_5c._4_4_,(int)local_5c);
  if ((*param_1 == 1) &&
     (local_5c = CONCAT44(local_5c._4_4_,(int)local_5c), param_1[9] != -0x80000000)) {
    pcVar9 = (char *)param_1[1];
    iVar15 = 0;
    pcVar11 = (char *)param_1[10];
    pcVar16 = (char *)param_1[0xb];
    iVar2 = param_1[2];
    pcVar3 = (char *)0x0;
    local_68 = 0;
    pcVar7 = pcVar9;
    if (pcVar16 != (char *)0x0) {
      pcVar7 = pcVar16 + -1;
      if (pcVar9 <= pcVar16 + -1) {
        pcVar7 = pcVar9;
      }
      if (pcVar16 < pcVar7) {
        puVar8 = &DAT_01d2c484;
LAB_01a4a62c:
                    /* WARNING: Subroutine does not return */
        FUN_012faff4(pcVar3,pcVar7,pcVar16,puVar8);
      }
      pcVar3 = (char *)0x0;
      do {
        pcVar4 = pcVar3;
        if (pcVar7 == pcVar4) break;
        pcVar3 = pcVar4 + 1;
      } while ((pcVar7 + (int)pcVar11)[-1 - (int)pcVar4] != '\n');
      pcVar3 = (char *)0x0;
      if (pcVar7 != pcVar4) {
        pcVar3 = pcVar7 + -(int)pcVar4;
      }
      if (pcVar16 < pcVar3) {
                    /* WARNING: Subroutine does not return */
        FUN_012faff4(0,pcVar3,pcVar16,&DAT_01d2c494);
      }
      iVar15 = 0;
      if (pcVar3 != (char *)0x0) {
        pcVar4 = pcVar11;
        pcVar6 = pcVar3;
        do {
          if (*pcVar4 == '\n') {
            iVar15 = iVar15 + 1;
          }
          pcVar6 = pcVar6 + -1;
          pcVar4 = pcVar4 + 1;
        } while (pcVar6 != (char *)0x0);
      }
      pcVar4 = pcVar7;
      if ((pcVar16 <= pcVar7) || (pcVar4 = pcVar7 + 1, pcVar4 < pcVar3)) {
        puVar8 = &DAT_01d2c4a4;
        pcVar7 = pcVar4;
        goto LAB_01a4a62c;
      }
      FUN_012fbd94(&local_54,pcVar11 + (int)pcVar3,(int)pcVar4 - (int)pcVar3);
      if (local_54 == (int *)0x0) {
        if (&DAT_0000000f < local_4c) {
          iVar5 = FUN_012fa650();
        }
        else {
          iVar5 = 0;
          for (; local_4c != (int ***)0x0; local_4c = (int ***)((int)local_4c + -1)) {
            if (-0x41 < (char)*local_50) {
              iVar5 = iVar5 + 1;
            }
            local_50 = local_50 + 1;
          }
        }
        local_50 = (code *)(iVar5 + -1);
      }
      else if ((char)local_4c != '\x02') {
        local_50 = (code *)(pcVar7 + -(int)pcVar3);
      }
      pcVar7 = (char *)(local_50 + ((int)pcVar9 - (int)pcVar7));
    }
    local_2c = (int **)(pcVar7 + 1);
    local_60 = iVar15 + 1;
    iVar5 = FUN_012fc81c(local_60,&local_54);
    uVar10 = 10 - iVar5;
    iVar13 = 1;
    if (iVar5 != 10) {
      iVar13 = FUN_01298504(uVar10,1);
      local_68 = uVar10;
      if (iVar13 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00664620(1,uVar10);
      }
    }
    FUN_01bed4e2(iVar13,(int)&local_54 + iVar5,uVar10);
    FUN_0134bd64(local_68,iVar13);
    local_30 = 1;
    local_3c = 1;
    local_38 = 0;
    local_48 = (code *)0x0;
    local_40 = 10;
    local_54 = (int *)0xa;
    local_50 = (code *)pcVar11;
    local_4c = (int ***)pcVar16;
    local_44 = pcVar16;
    local_34 = pcVar16;
    if (iVar15 != 0) {
      do {
        iVar5 = FUN_01a5c3e4(&local_54);
        if (iVar5 == 0) goto LAB_01a4a638;
        iVar15 = iVar15 + -1;
      } while (iVar15 != 0);
    }
    local_5c = FUN_01a5c3e4(&local_54);
    pcVar3 = (char *)((ulonglong)local_5c >> 0x20);
    if ((int)local_5c == 0) {
LAB_01a4a638:
                    /* WARNING: Subroutine does not return */
      FUN_0130739c("valid line number",0x11,&DAT_01d2c474);
    }
    uVar17 = 0;
    local_4c = &local_2c;
    local_54 = &local_60;
    uVar14 = (int)pcVar3 - (int)pcVar7;
    if (pcVar3 < pcVar7) {
      uVar14 = 0;
    }
    local_48 = FUN_012fd02c;
    local_50 = FUN_012fd02c;
    if ((uint)(iVar2 - (int)pcVar9) <= uVar14) {
      uVar14 = iVar2 - (int)pcVar9;
    }
    iVar2 = FUN_012fa178(uVar18,iVar1,&DAT_005b1f1e,&local_54);
    if (iVar2 != 0) {
      return 1;
    }
    bVar19 = false;
    while ((!bVar19 && (uVar17 <= uVar10))) {
      iVar2 = (**(code **)(iVar1 + 0xc))(uVar18,&DAT_005319c3,1);
      bVar19 = uVar17 < uVar10;
      uVar17 = uVar17 + bVar19;
      bVar19 = !bVar19;
      if (iVar2 != 0) {
        return 1;
      }
    }
    pcVar12 = *(code **)(iVar1 + 0xc);
    iVar2 = (*pcVar12)(uVar18,"|\n",2);
    if (iVar2 != 0) {
      return 1;
    }
    local_54 = &local_60;
    local_50 = FUN_012fd02c;
    iVar2 = FUN_012fa178(uVar18,iVar1,&DAT_00580c53,&local_54);
    if (iVar2 != 0) {
      return 1;
    }
    local_54 = (int *)&local_5c;
    local_50 = (code *)&LAB_018a13b8;
    iVar2 = FUN_012fa178(uVar18,iVar1,&DAT_00582d7f,&local_54);
    if (iVar2 != 0) {
      return 1;
    }
    uVar17 = 0;
    bVar19 = false;
    while ((!bVar19 && (uVar17 <= uVar10))) {
      iVar2 = (*pcVar12)(uVar18,&DAT_005319c3,1);
      bVar19 = uVar17 < uVar10;
      uVar17 = uVar17 + bVar19;
      bVar19 = !bVar19;
      if (iVar2 != 0) {
        return 1;
      }
    }
    iVar2 = (*pcVar12)(uVar18,"|",1);
    if (iVar2 != 0) {
      return 1;
    }
    pcVar3 = (char *)0x0;
    bVar19 = false;
    while ((!bVar19 && (pcVar3 <= pcVar7))) {
      iVar2 = (*pcVar12)(uVar18,&DAT_005319c3,1);
      bVar19 = pcVar3 < pcVar7;
      pcVar3 = pcVar3 + bVar19;
      bVar19 = !bVar19;
      if (iVar2 != 0) {
        return 1;
      }
    }
    iVar2 = (*pcVar12)(uVar18,"^Z",1);
    if (iVar2 != 0) {
      return 1;
    }
    if (uVar14 < 2) {
      uVar14 = 1;
    }
    while (uVar14 = uVar14 - 1, uVar14 != 0) {
      iVar2 = (*pcVar12)(uVar18,"^Z",1);
      if (iVar2 != 0) {
        return 1;
      }
    }
    bVar19 = true;
    iVar2 = (*pcVar12)(uVar18,"\n",1);
    if (iVar2 != 0) {
      return 1;
    }
  }
  local_54 = param_1 + 3;
  local_50 = (code *)&LAB_00632348;
  iVar2 = FUN_012fa178(uVar18,iVar1,&DAT_00582d7f,&local_54);
  if (iVar2 != 0 || bVar19) {
    return iVar2;
  }
  if (param_1[8] == 0) {
    return 0;
  }
  FUN_01a4a6cc(&local_54,param_1[7],param_1[8],".",1);
  local_28 = &LAB_00632348;
  local_2c = &local_54;
  iVar1 = FUN_012fa178(uVar18,iVar1,&DAT_00588d6b,&local_2c);
  FUN_0134bd64(local_54,local_50);
  return iVar1;
}


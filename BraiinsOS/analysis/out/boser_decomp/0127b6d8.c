// FUN_0127b6d8 @ 0127b6d8 size=1616 calls_out=18 calls_in=1
// strings: window_duration_min | window_duration_min | api_types | max_endpoints | max_user_agents | max_user_agents

void FUN_0127b6d8(int *param_1,char *param_2)

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  char *pcVar8;
  int iVar9;
  char **ppcVar10;
  undefined *puVar11;
  char **ppcVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  char **ppcVar16;
  char cVar17;
  char **unaff_r9;
  ulonglong uVar18;
  char **local_6c;
  char **local_50;
  uint local_4c;
  char **local_48;
  char *local_44;
  undefined1 local_40;
  undefined4 local_3c;
  char **local_38;
  undefined4 local_34;
  char *local_30;
  char **local_2c;
  undefined1 uStack_25;
  
  uVar13 = *(uint *)(param_2 + 0x10);
  uVar14 = *(uint *)(param_2 + 0x14);
  if (uVar14 < uVar13) {
    do {
      uVar15 = *(byte *)(*(int *)(param_2 + 0xc) + uVar14) - 9;
      if ((0x17 < uVar15) || ((1 << (uVar15 & 0xff) & 0x800013U) == 0)) {
        if (*(byte *)(*(int *)(param_2 + 0xc) + uVar14) != 0x6e) goto LAB_0127b740;
        *(uint *)(param_2 + 0x14) = uVar14 + 1;
        iVar9 = FUN_012c6b8c(param_2,"ull",3);
        if (iVar9 == 0) {
          *(undefined1 *)(param_1 + 3) = 2;
          return;
        }
        *(undefined1 *)(param_1 + 3) = 3;
        goto LAB_0127bc5c;
      }
      uVar14 = uVar14 + 1;
      *(uint *)(param_2 + 0x14) = uVar14;
    } while (uVar13 != uVar14);
  }
  else {
LAB_0127b740:
    if (uVar14 < uVar13) {
      do {
        uVar15 = (uint)*(byte *)(*(int *)(param_2 + 0xc) + uVar14);
        if ((0x17 < uVar15 - 9) || ((1 << (uVar15 - 9 & 0xff) & 0x800013U) == 0)) {
          if (uVar15 == 0x5b) {
            cVar17 = param_2[0x1c];
            param_2[0x1c] = cVar17 + -1;
            if ((char)(cVar17 + -1) != '\0') {
              *(uint *)(param_2 + 0x14) = uVar14 + 1;
              local_2c = (char **)CONCAT31(local_2c._1_3_,1);
              local_30 = param_2;
              FUN_01278c94(&local_3c,&local_30);
              ppcVar10 = local_38;
              cVar17 = '\x02';
              local_50 = (char **)0x5b;
              local_6c = (char **)&DAT_00000052;
              if (local_3c == (char **)0x2) {
LAB_0127b9e4:
                cVar17 = '\x02';
              }
              else {
                if (((uint)local_3c & 1) == 0) {
                  ppcVar10 = (char **)FUN_014dee0c(0,&DAT_01c257d8,&DAT_01d064b8);
                  goto LAB_0127b9e4;
                }
                FUN_01278c94(&local_3c,&local_30);
                local_6c = local_38;
                ppcVar16 = local_3c;
                if (local_3c == (char **)0x2) {
                  local_50 = local_3c;
                  ppcVar10 = local_38;
                }
                else {
                  FUN_01278c94(&local_3c,&local_30);
                  ppcVar12 = local_38;
                  local_50 = local_3c;
                  if (((uint)ppcVar16 & 1) == 0) {
                    local_6c = (char **)&DAT_0000000a;
                  }
                  if (local_3c == (char **)0x2) {
                    local_48 = local_38;
                    ppcVar10 = local_38;
                  }
                  else {
                    FUN_014db6fc(&local_3c,&local_30);
                    if (((uint)local_50 & 1) == 0) {
                      ppcVar12 = (char **)&DAT_00000064;
                    }
                    if ((char)local_3c == '\x01') {
                      ppcVar10 = local_38;
                      goto LAB_0127b9e4;
                    }
                    uVar13 = (uint)local_3c >> 8 & 0xff;
                    local_48 = ppcVar12;
                    if (uVar13 == 1) {
                      FUN_0127eca4(&local_3c,local_30);
                      if ((char)local_3c == '\x01') {
                        ppcVar10 = local_38;
                        goto LAB_0127b9e4;
                      }
                      local_50 = local_38;
                      cVar17 = local_3c._1_1_;
                      local_4c._0_2_ = (short)((uint)local_3c >> 0x10);
                    }
                    else {
                      cVar17 = '\x02';
                      local_4c._0_2_ = (short)uVar13;
                    }
                    if (cVar17 == '\x02') {
                      local_4c._0_2_ = 0x101;
                      local_50 = (char **)0x1010101;
                      cVar17 = '\x01';
                    }
                  }
                }
              }
              param_2[0x1c] = param_2[0x1c] + '\x01';
              ppcVar16 = (char **)FUN_014d9568(param_2);
              if (cVar17 == '\x02') goto LAB_0127bc40;
              goto LAB_0127bc10;
            }
          }
          else {
            if (uVar15 != 0x7b) {
              ppcVar10 = (char **)FUN_012c7788(param_2,&uStack_25,&DAT_01c258a0);
              goto LAB_0127bc48;
            }
            cVar17 = param_2[0x1c];
            param_2[0x1c] = cVar17 + -1;
            if ((char)(cVar17 + -1) != '\0') {
              *(uint *)(param_2 + 0x14) = uVar14 + 1;
              local_40 = 1;
              ppcVar16 = (char **)0x0;
              bVar7 = false;
              cVar17 = '\x02';
              bVar6 = false;
              bVar2 = false;
              bVar5 = false;
              bVar3 = false;
              bVar4 = false;
              local_44 = param_2;
              goto LAB_0127b7fc;
            }
          }
          local_3c = (char **)0x18;
          goto LAB_0127b77c;
        }
        uVar14 = uVar14 + 1;
        *(uint *)(param_2 + 0x14) = uVar14;
      } while (uVar13 != uVar14);
    }
  }
  local_3c = (char **)0x5;
LAB_0127b77c:
  iVar9 = FUN_012c6b30(param_2,&local_3c);
  goto LAB_0127bc54;
LAB_0127b7fc:
LAB_0127b800:
  FUN_01278730(&local_3c,&local_44);
  if ((char)local_3c != '\x01') {
    if (local_3c._1_1_ == '\0') {
switchD_0127b8a8_caseD_5:
      if (!bVar3) {
        puVar11 = &DAT_0057cd64;
        goto LAB_0127bb8c;
      }
      if (!bVar4) {
        local_6c = (char **)&DAT_0000000a;
      }
      if (!bVar5) {
        local_48 = (char **)&DAT_00000064;
      }
      if (cVar17 == '\x02') {
        cVar17 = '\x01';
        local_50 = (char **)0x1010101;
        local_4c._0_2_ = 0x101;
      }
      ppcVar10 = unaff_r9;
      goto LAB_0127bbf0;
    }
    iVar9 = *(int *)(local_44 + 0x14);
    local_44[8] = '\0';
    local_44[9] = '\0';
    local_44[10] = '\0';
    local_44[0xb] = '\0';
    *(int *)(local_44 + 0x14) = iVar9 + 1;
    FUN_01968828(&local_3c,local_44 + 0xc);
    if (local_3c == (char **)0x2) {
      unaff_r9 = local_38;
      goto LAB_0127bbec;
    }
    FUN_0127e51c(&local_30,local_38,local_34);
    pcVar8 = local_44;
    if ((char)local_30 == '\x01') {
      unaff_r9 = local_2c;
      goto LAB_0127bbec;
    }
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch((uint)local_30 >> 8 & 0xff) {
    case 0:
      goto switchD_0127b8a8_caseD_0;
    case 1:
      if (bVar6) {
        local_2c = (char **)&DAT_0000000f;
        puVar11 = &DAT_005ab34f;
        local_30 = "max_user_agents";
        goto LAB_0127bb98;
      }
      uVar18 = FUN_01278b74(local_44);
      local_6c = (char **)(uVar18 >> 0x20);
      if ((uVar18 & 1) != 0) {
        cVar17 = '\x02';
        ppcVar10 = local_6c;
        goto LAB_0127bbf0;
      }
      bVar6 = true;
      bVar4 = true;
      goto LAB_0127b800;
    case 2:
      if (bVar7) {
        local_2c = (char **)&DAT_0000000d;
        puVar11 = &DAT_005ab34f;
        local_30 = "max_endpoints";
        goto LAB_0127bb98;
      }
      uVar18 = FUN_01278b74(local_44);
      ppcVar10 = (char **)(uVar18 >> 0x20);
      if ((uVar18 & 1) != 0) {
        cVar17 = '\x02';
        local_6c = ppcVar16;
        goto LAB_0127bbf0;
      }
      bVar7 = true;
      bVar5 = true;
      local_48 = ppcVar10;
      goto LAB_0127b800;
    case 3:
      if (cVar17 != '\x02') {
        local_2c = (char **)&DAT_00000009;
        puVar11 = &DAT_005ab34f;
        local_30 = "api_types";
        goto LAB_0127bb98;
      }
      ppcVar10 = (char **)FUN_0167459c(local_44);
      if (ppcVar10 == (char **)0x0) {
        FUN_0127eca4(&local_3c,pcVar8);
        if ((char)local_3c != '\0') break;
        local_50 = local_38;
        local_4c = (uint)local_3c >> 0x10;
        cVar17 = local_3c._1_1_;
        goto LAB_0127b800;
      }
      local_38 = ppcVar10;
      break;
    case 4:
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xfdee,0x127bd3c);
      (*pcVar1)();
    case 5:
      goto switchD_0127b8a8_caseD_5;
    default:
      ppcVar10 = (char **)FUN_0167459c(local_44);
      if (ppcVar10 == (char **)0x0) goto code_r0x0127b88c;
      goto LAB_0127bae8;
    }
  }
  unaff_r9 = local_38;
  goto LAB_0127bbec;
code_r0x0127b88c:
  ppcVar10 = (char **)FUN_012c6c4c(pcVar8);
  if (ppcVar10 != (char **)0x0) {
LAB_0127bae8:
    cVar17 = '\x02';
    local_6c = ppcVar16;
    goto LAB_0127bbf0;
  }
  goto LAB_0127b800;
switchD_0127b8a8_caseD_0:
  if (!bVar2) {
    uVar18 = FUN_01278b74(local_44);
    unaff_r9 = (char **)(uVar18 >> 0x20);
    if ((uVar18 & 1) != 0) goto LAB_0127bbec;
    bVar3 = true;
    bVar2 = true;
    goto LAB_0127b7fc;
  }
  puVar11 = &DAT_005ab34f;
LAB_0127bb8c:
  local_2c = (char **)&DAT_00000013;
  local_30 = "window_duration_min";
LAB_0127bb98:
  local_38 = (char **)&LAB_018a13b8;
  local_3c = &local_30;
  unaff_r9 = (char **)FUN_019676ac(puVar11,&local_3c);
LAB_0127bbec:
  cVar17 = '\x02';
  local_6c = ppcVar16;
  ppcVar10 = unaff_r9;
LAB_0127bbf0:
  param_2[0x1c] = param_2[0x1c] + '\x01';
  ppcVar16 = (char **)FUN_012c7b64(param_2);
  if (cVar17 == '\x02') {
LAB_0127bc40:
    if (ppcVar16 != (char **)0x0) {
      FUN_01278260();
    }
  }
  else {
LAB_0127bc10:
    if (ppcVar16 == (char **)0x0) {
      *(undefined2 *)((int)param_1 + 0xd) = (undefined2)local_4c;
      *(char ***)((int)param_1 + 0xf) = local_50;
      *(char *)(param_1 + 3) = cVar17;
      *param_1 = (int)ppcVar10;
      param_1[1] = (int)local_6c;
      param_1[2] = (int)local_48;
      return;
    }
    ppcVar10 = ppcVar16;
  }
LAB_0127bc48:
  iVar9 = FUN_0127dee8(ppcVar10,param_2);
LAB_0127bc54:
  *(undefined1 *)(param_1 + 3) = 3;
LAB_0127bc5c:
  *param_1 = iVar9;
  return;
}


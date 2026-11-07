// FUN_0005f4f8 @ 0005f4f8  size=1092  callers=1
// program: bmminer


char * FUN_0005f4f8(char *param_1,char *param_2)

{
  size_t sVar1;
  size_t sVar2;
  size_t sVar3;
  int iVar4;
  char *pcVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  char *__s;
  undefined4 *puVar9;
  char *pcVar10;
  undefined4 *puVar11;
  char *pcVar12;
  uint uVar13;
  uint uVar14;
  char *pcVar15;
  bool bVar16;
  int local_7c [20];
  undefined *local_2c;
  
  sVar1 = strlen(param_1);
  puVar9 = DAT_012a295c;
  uVar14 = DAT_012a2958;
  sVar1 = DAT_012a2954 + 0x14 + sVar1;
  if (param_2 == (char *)0x0) {
    if (DAT_012a2958 == 0) {
      param_2 = "";
      goto LAB_0005f5e8;
    }
    uVar13 = 0;
    puVar11 = DAT_012a295c;
    do {
      uVar13 = uVar13 + 1;
      if (((undefined *)puVar11[2] == &UNK_0005e778) &&
         (param_2 = (char *)puVar11[5], param_2 != (char *)0x0)) {
        sVar2 = strlen(param_2);
        sVar1 = sVar1 + sVar2;
        goto LAB_0005f554;
      }
      puVar11 = puVar11 + 7;
    } while (uVar13 != DAT_012a2958);
    param_2 = "";
  }
  else {
    sVar2 = strlen(param_2);
    sVar1 = sVar1 + sVar2;
    if (uVar14 == 0) goto LAB_0005f5e8;
    puVar9 = DAT_012a295c;
  }
LAB_0005f554:
  uVar13 = 0;
  do {
    while( true ) {
      pcVar15 = (char *)puVar9[6];
      if (puVar9[1] != 8) break;
      uVar13 = uVar13 + 1;
      sVar2 = strlen(pcVar15);
      sVar1 = sVar2 + sVar1 + 3;
      puVar9 = puVar9 + 7;
      if (uVar14 <= uVar13) goto LAB_0005f5e8;
    }
    if (pcVar15 != (char *)0x12a2960) {
      sVar2 = strlen((char *)*puVar9);
      sVar3 = strlen(pcVar15);
      iVar4 = sVar2 + sVar1 + 6 + sVar3;
      iVar8 = iVar4 + 0x76;
      if (puVar9[4] == 0) {
        iVar8 = iVar4 + 0x15;
      }
      sVar1 = iVar8 + 1;
    }
    uVar13 = uVar13 + 1;
    puVar9 = puVar9 + 7;
  } while (uVar13 < uVar14);
LAB_0005f5e8:
  pcVar15 = malloc(sVar1);
  if (pcVar15 != (char *)0x0) {
    iVar4 = sprintf(pcVar15,"Usage: %s",param_1);
    pcVar12 = pcVar15 + iVar4;
    *(undefined **)(pcVar15 + iVar4) = &DAT_002d5b20;
    pcVar5 = (char *)FUN_0005ed04(local_7c);
    pcVar10 = pcVar12;
    if (pcVar5 != (char *)0x0) {
      iVar4 = 0;
      do {
        if (DAT_012a295c[local_7c[0] * 7 + 6] != 0x12a2960) {
          pcVar12[iVar4 + 3] = *pcVar5;
          iVar4 = iVar4 + 1;
        }
        pcVar5 = (char *)FUN_0005ed64(pcVar5,local_7c);
      } while (pcVar5 != (char *)0x0);
      if (iVar4 != 0) {
        pcVar10 = pcVar12 + iVar4 + 4;
        (pcVar12 + iVar4 + 3)[0] = ']';
        (pcVar12 + iVar4 + 3)[1] = '\0';
      }
    }
    iVar4 = sprintf(pcVar10," %s",param_2);
    pcVar5 = pcVar10 + iVar4 + 1;
    bVar16 = DAT_012a2958 != 0;
    (pcVar10 + iVar4)[0] = '\n';
    (pcVar10 + iVar4)[1] = '\0';
    if (bVar16) {
      iVar4 = 0;
      uVar14 = 0;
      do {
        puVar9 = (undefined4 *)((int)DAT_012a295c + iVar4);
        if (puVar9[6] != 0x12a2960) {
          if (puVar9[1] == 8) {
            iVar8 = sprintf(pcVar5,"%s:\n");
            pcVar5 = pcVar5 + iVar8;
          }
          else {
            uVar7 = sprintf(pcVar5,"%s",(char *)*puVar9);
            pcVar10 = pcVar5 + uVar7;
            uVar13 = uVar7;
            if (*(int *)((int)DAT_012a295c + iVar4 + 4) == 2) {
              __s = *(char **)((int)DAT_012a295c + iVar4);
              pcVar12 = strchr(__s,0x20);
              if ((pcVar12 == (char *)0x0) && (pcVar12 = strchr(__s,0x3d), pcVar12 == (char *)0x0))
              {
                uVar13 = uVar7 + 6;
                builtin_strncpy(pcVar5 + uVar7," <arg>",7);
                pcVar10 = pcVar5 + uVar13;
              }
            }
            if (uVar13 < 0x14) {
              iVar8 = 0x14 - uVar13;
            }
            else {
              iVar8 = 1;
            }
            iVar8 = sprintf(pcVar10,"%.*s",iVar8,"                    ");
            iVar6 = sprintf(pcVar5 + iVar8 + uVar13,"%s",
                            *(char **)((int)DAT_012a295c + iVar4 + 0x18));
            iVar6 = iVar6 + iVar8 + uVar13;
            pcVar10 = pcVar5 + iVar6;
            if (*(int *)((int)DAT_012a295c + iVar4 + 0x10) != 0) {
              local_2c = &DAT_002e2e2e;
              (**(code **)((int)DAT_012a295c + iVar4 + 0x10))
                        (local_7c,*(undefined4 *)((int)DAT_012a295c + iVar4 + 0x14));
              iVar8 = sprintf(pcVar10," (default: %s)",(char *)local_7c);
              pcVar10 = pcVar5 + iVar8 + iVar6;
            }
            pcVar5 = pcVar10 + 1;
            pcVar10[0] = '\n';
            pcVar10[1] = '\0';
          }
        }
        uVar14 = uVar14 + 1;
        iVar4 = iVar4 + 0x1c;
      } while (uVar14 < DAT_012a2958);
    }
    *pcVar5 = '\0';
  }
  return pcVar15;
}


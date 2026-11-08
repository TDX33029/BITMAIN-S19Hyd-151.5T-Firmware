// FUN_0002ad5c @ 0002ad5c  size=1508  callers=0
// program: cgminer


void FUN_0002ad5c(FILE *param_1)

{
  int *piVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  char *pcVar5;
  uint uVar6;
  code *pcVar7;
  int param6;
  char *pcVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  int iVar11;
  char *pcVar12;
  char *pcVar13;
  char *local_30;
  char *local_2c;
  
  fwrite(&DAT_00051e34,1,0xd,param_1);
  if (0 < DAT_00072e70) {
    iVar11 = 0;
    do {
      iVar4 = FUN_00029148(iVar11);
      param6 = *(int *)(iVar4 + 0x38);
      if (param6 == 1) {
        if (iVar11 == 0) {
          pcVar12 = "";
        }
        else {
          pcVar12 = ",";
        }
        if (*(int *)(iVar4 + 0xb8) == 0) {
          pcVar13 = "";
          local_30 = "";
          pcVar8 = "";
        }
        else {
          FUN_0001fa0c(*(undefined4 *)(iVar4 + 0xb4));
          local_30 = (char *)FUN_000284a8();
          if (*(int *)(iVar4 + 0xb8) == 0) {
            pcVar13 = "";
            pcVar8 = "";
          }
          else {
            pcVar13 = (char *)FUN_000284a8();
            pcVar8 = "|";
            if (*(int *)(iVar4 + 0xb8) == 0) {
              pcVar8 = "";
            }
          }
        }
        pcVar5 = (char *)FUN_000284a8(*(undefined4 *)(iVar4 + 0xa4));
        fprintf(param_1,"%s\n\t{\n\t\t\"url\" : \"%s%s%s%s\",",pcVar12,local_30,pcVar13,pcVar8,
                pcVar5);
        cVar2 = *(char *)(iVar4 + 0x244);
      }
      else {
        if (iVar11 == 0) {
          pcVar12 = "";
        }
        else {
          pcVar12 = ",";
        }
        if (*(int *)(iVar4 + 0xb8) == 0) {
          pcVar13 = "";
          local_2c = "";
          pcVar8 = "";
        }
        else {
          FUN_0001fa0c(*(undefined4 *)(iVar4 + 0xb4));
          local_2c = (char *)FUN_000284a8();
          if (*(int *)(iVar4 + 0xb8) == 0) {
            param6 = *(int *)(iVar4 + 0x38);
            pcVar13 = "";
            pcVar8 = "";
          }
          else {
            pcVar13 = (char *)FUN_000284a8();
            param6 = *(int *)(iVar4 + 0x38);
            pcVar8 = "|";
            if (*(int *)(iVar4 + 0xb8) == 0) {
              pcVar8 = "";
            }
          }
        }
        pcVar5 = (char *)FUN_000284a8(*(undefined4 *)(iVar4 + 0xa4));
        fprintf(param_1,"%s\n\t{\n\t\t\"quota\" : \"%s%s%s%d;%s\",",pcVar12,local_2c,pcVar13,pcVar8,
                param6,pcVar5);
        cVar2 = *(char *)(iVar4 + 0x244);
      }
      if (cVar2 != '\0') {
        fwrite("\n\t\t\"extranonce-subscribe\" : true,",1,0x21,param_1);
      }
      iVar11 = iVar11 + 1;
      uVar3 = FUN_000284a8(*(undefined4 *)(iVar4 + 0xac));
      fprintf(param_1,"\n\t\t\"user\" : \"%s\",",uVar3);
      pcVar12 = (char *)FUN_000284a8(*(undefined4 *)(iVar4 + 0xb0));
      fprintf(param_1,"\n\t\t\"pass\" : \"%s\"\n\t}",pcVar12);
    } while (iVar11 < DAT_00072e70);
  }
  fwrite(&DAT_00051ed0,1,3,param_1);
  if (DAT_00067a7c != 0x10) {
    puVar9 = &DAT_00067a94;
    do {
      pcVar13 = (char *)__strdup(puVar9[-7]);
      pcVar12 = strtok(pcVar13,"|");
      while (pcVar12 != (char *)0x0) {
        if ((pcVar12[1] == '-') && ((undefined4 *)puVar9[-1] != &DAT_0007630c)) {
          uVar6 = puVar9[-6];
          if ((uVar6 & 1) != 0) {
            pcVar7 = (code *)puVar9[-5];
            if ((pcVar7 == FUN_0003e538 || pcVar7 == (code *)&UNK_0003e558) &&
               ((bool)*(char *)puVar9[-2] == (pcVar7 == FUN_0003e538))) {
              fprintf(param_1,",\n\"%s\" : true",pcVar12 + 2);
              goto LAB_0002b100;
            }
          }
          if ((uVar6 & 2) == 0) {
LAB_0002b17c:
            if ((((uVar6 & 6) != 0) && ((int *)puVar9[-2] != (int *)&DAT_00068b0c)) &&
               (*(int *)puVar9[-2] != 0)) {
              pcVar8 = (char *)FUN_000284a8();
              fprintf(param_1,",\n\"%s\" : \"%s\"",pcVar12 + 2,pcVar8);
            }
          }
          else {
            pcVar7 = (code *)puVar9[-4];
            if (pcVar7 == FUN_00029d70 ||
                (pcVar7 == FUN_00029da0 ||
                (pcVar7 == FUN_00029dd0 ||
                (pcVar7 == FUN_00029e00 ||
                (pcVar7 == FUN_00029e30 ||
                (pcVar7 == FUN_00029e60 ||
                (pcVar7 == FUN_00029e8c ||
                (pcVar7 == FUN_00029eb8 ||
                (pcVar7 == FUN_00029ee4 ||
                (pcVar7 == FUN_00029f14 ||
                (pcVar7 == FUN_00029d44 ||
                (pcVar7 == FUN_00029f40 ||
                (pcVar7 == FUN_00029f70 ||
                (pcVar7 == FUN_00029d10 || (pcVar7 == FUN_00029ce0 || pcVar7 == FUN_0003e738))))))))
                ))))))) {
              fprintf(param_1,",\n\"%s\" : \"%d\"",pcVar12 + 2,*(int *)puVar9[-2]);
            }
            else {
              if (pcVar7 != FUN_00029884 && pcVar7 != FUN_0002982c) goto LAB_0002b17c;
              fprintf(param_1,",\n\"%s\" : \"%.1f\"",pcVar12 + 2,(double)*(float *)puVar9[-2]);
            }
          }
        }
LAB_0002b100:
        pcVar12 = strtok((char *)0x0,"|");
      }
      free(pcVar13);
      piVar1 = puVar9 + 1;
      puVar9 = puVar9 + 7;
    } while (*piVar1 != 0x10);
  }
  if (DAT_00068af4 == 4) {
    fwrite(",\n\"balance\" : true",1,0x12,param_1);
  }
  if (DAT_00068af4 == 3) {
    fwrite(",\n\"load-balance\" : true",1,0x17,param_1);
  }
  if (DAT_00068af4 == 1) {
    fwrite(",\n\"round-robin\" : true",1,0x16,param_1);
  }
  if (DAT_00068af4 == 2) {
    fprintf(param_1,",\n\"rotate\" : \"%d\"",DAT_00073f2c);
  }
  fwrite(&DAT_00051f6c,1,3,param_1);
  puVar9 = DAT_0006890c;
  DAT_0006890c = (undefined4 *)0x0;
  while (puVar9 != (undefined4 *)0x0) {
    puVar10 = (undefined4 *)puVar9[1];
    free((void *)*puVar9);
    free(puVar9);
    puVar9 = puVar10;
  }
  return;
}


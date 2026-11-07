// FUN_0002c608 @ 0002c608  size=1036  callers=2
// program: cgminer


uint FUN_0002c608(void *param_1)

{
  char *pcVar1;
  char *pcVar2;
  uchar *puVar3;
  size_t sVar4;
  ulong param2;
  int iVar5;
  uint uVar6;
  FILE *pFVar7;
  int iVar8;
  uchar **ppuVar9;
  uchar *puVar10;
  int param7;
  uchar *local_c3c [2];
  int local_c34;
  char *local_c30;
  char *local_c2c;
  uchar local_c28 [1024];
  char local_828 [64];
  char acStack_7e8 [64];
  char acStack_7a8 [8];
  char acStack_7a0 [1916];
  
  pFVar7 = DAT_00068b20;
  if (DAT_00068b20 == (FILE *)0x0) {
    if (DAT_00072dc0 == (char *)0x0) {
      builtin_strncpy(local_828,"BENCHFILE Invalid benchfile NULL",0x21);
      FUN_0001dd98(3,local_828,1);
                    /* WARNING: Subroutine does not return */
      FUN_0002c290(1);
    }
    DAT_00068b20 = fopen64(DAT_00072dc0,"r");
    if (DAT_00068b20 == (FILE *)0x0) {
      pcVar1 = "BENCHFILE Failed to open benchfile \'%s\'";
    }
    else {
      DAT_00068b24 = pFVar7;
      pcVar1 = fgets((char *)local_c28,0x400,DAT_00068b20);
      if (pcVar1 != (char *)0x0) {
        DAT_00068b28 = pFVar7;
        goto LAB_0002c648;
      }
      pcVar1 = "BENCHFILE Failed to read benchfile \'%s\'";
    }
  }
  else {
    pcVar1 = fgets((char *)local_c28,0x400,DAT_00068b20);
    pcVar2 = pcVar1;
    while (pcVar2 != (char *)0x0) {
LAB_0002c648:
      puVar3 = local_c28;
      uVar6 = (uint)(local_c28[0] != '#');
      if (local_c28[0] == '\0') {
        uVar6 = 0;
      }
      pFVar7 = (FILE *)((int)&DAT_00068b24->_flags + 1);
      if (local_c28[0] == '/') {
        uVar6 = 0;
      }
      DAT_00068b24 = pFVar7;
      if (uVar6 != 0) {
        ppuVar9 = local_c3c;
        iVar8 = 0;
        local_c3c[0] = puVar3;
        goto LAB_0002c788;
      }
      pcVar2 = fgets((char *)puVar3,0x400,DAT_00068b20);
      pcVar1 = (char *)0x0;
    }
    if (DAT_00068b28 != (FILE *)0x0) {
      fclose(DAT_00068b20);
      DAT_00068b20 = (FILE *)pcVar1;
      uVar6 = FUN_0002c608(param_1);
      return uVar6;
    }
    pcVar1 = "BENCHFILE No work in benchfile \'%s\'";
  }
  snprintf(local_828,0x800,pcVar1,DAT_00072dc0);
  goto LAB_0002c6e8;
  while( true ) {
    *puVar3 = '\0';
    puVar3 = puVar3 + 1;
    *ppuVar9 = puVar3;
    iVar8 = iVar5;
    if (iVar5 == 4) break;
LAB_0002c788:
    puVar3 = (uchar *)strchr((char *)puVar3,0x2c);
    ppuVar9[1] = puVar3;
    iVar5 = iVar8 + 1;
    if (puVar3 == (uchar *)0x0) {
      snprintf(local_828,0x800,
               "BENCHFILE Invalid input file line %d - field count is %d but should be %d",
               (int)pFVar7,iVar5,5);
      goto LAB_0002c6e8;
    }
    puVar10 = *ppuVar9;
    ppuVar9 = ppuVar9 + 1;
    param7 = (&DAT_0004ebd0)[iVar8 * 2];
    if (param7 != 0 && param7 != (int)puVar3 - (int)puVar10) {
      snprintf(local_828,0x800,
               "BENCHFILE Invalid input file line %d field %d (%s) length is %d but should be %d",
               (int)pFVar7,iVar5,(char *)(&DAT_0004ebd4)[iVar8 * 2],(int)puVar3 - (int)puVar10,
               param7);
      goto LAB_0002c6e8;
    }
  }
  sVar4 = strlen(local_c2c);
  if (9 < sVar4) {
    sprintf(local_828,"0000000%c",*local_c3c[0]);
    sVar4 = strlen(local_828);
    pcVar1 = local_828 + sVar4;
    iVar8 = local_c34 + 0x38;
    do {
      iVar5 = iVar8 + -8;
      sprintf(pcVar1,"%.8s",iVar8);
      pcVar1 = pcVar1 + 8;
      iVar8 = iVar5;
    } while (local_c34 + -8 != iVar5);
    pcVar1 = acStack_7e8 + sVar4;
    iVar8 = (int)local_c3c[1] + 0x38;
    do {
      iVar5 = iVar8 + -8;
      sprintf(pcVar1,"%.8s",iVar8);
      pcVar1 = pcVar1 + 8;
      iVar8 = iVar5;
    } while ((int)local_c3c[1] + -8 != iVar5);
    param2 = strtol(local_c2c,(char **)0x0,10);
    sprintf(acStack_7a8 + sVar4,"%08lx",param2);
    strcpy(acStack_7a0 + sVar4,local_c30);
    memset(param_1,0,0x1c0);
    FUN_0001fb7c(param_1,local_828,(int)(sVar4 + 0x90) >> 1);
    FUN_00028ce4(param_1);
    DAT_00068b28 = (FILE *)((int)&DAT_00068b28->_flags + 1);
    return uVar6;
  }
  snprintf(local_828,0x800,
           "BENCHFILE Invalid input file line %d field %d (%s) length is %d but should be least %d",
           (int)pFVar7,5,"NonceTime",sVar4,10);
LAB_0002c6e8:
  FUN_0001dd98(3,local_828,1);
                    /* WARNING: Subroutine does not return */
  FUN_0002c290(1);
}


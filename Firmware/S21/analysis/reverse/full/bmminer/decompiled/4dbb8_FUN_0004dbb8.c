// FUN_0004dbb8 @ 0004dbb8  size=608  callers=1
// program: bmminer


void FUN_0004dbb8(uint *param_1)

{
  int iVar1;
  uint uVar2;
  char cVar3;
  uint uVar4;
  uint *puVar5;
  uint uVar6;
  char acStack_2028 [8196];
  
  if (((DAT_00a5d20d == '\0') && (DAT_008c702d == '\0')) && (DAT_000be644 < 5)) {
joined_r0x0004de0c:
    if (DAT_000be644 < 5) goto LAB_0004dc60;
  }
  else {
    memcpy(acStack_2028,"==========================capability start==========================\n",
           0x46);
    FUN_0004948c(5,acStack_2028,0);
    if ((DAT_00a5d20d == '\0') && (DAT_008c702d == '\0')) goto joined_r0x0004de0c;
  }
  snprintf(acStack_2028,0x2000,"board num = %d\n",*param_1);
  FUN_0004948c(5,acStack_2028,0);
LAB_0004dc60:
  cVar3 = DAT_00a5d20d;
  if (*param_1 != 0) {
    uVar6 = 0;
    puVar5 = param_1;
    do {
      if (((cVar3 != '\0') || (DAT_008c702d != '\0')) || (cVar3 = DAT_008c702d, 4 < DAT_000be644)) {
        snprintf(acStack_2028,0x2000,"board id = %d, chain num = %d\n",puVar5[1],puVar5[2]);
        FUN_0004948c(5,acStack_2028,0);
        cVar3 = DAT_00a5d20d;
      }
      uVar2 = puVar5[2];
      if (uVar2 != 0) {
        uVar4 = 0;
        do {
          if (cVar3 == '\0') {
            while ((DAT_008c702d == '\0' && (DAT_000be644 < 5))) {
              uVar4 = uVar4 + 1;
              cVar3 = DAT_008c702d;
              if (uVar2 <= uVar4) goto LAB_0004dcec;
            }
          }
          iVar1 = uVar4 + 3;
          uVar4 = uVar4 + 1;
          snprintf(acStack_2028,0x2000,"\tchain id = %d\n",puVar5[iVar1]);
          FUN_0004948c(5,acStack_2028,0);
          uVar2 = puVar5[2];
          cVar3 = DAT_00a5d20d;
        } while (uVar4 < uVar2);
      }
LAB_0004dcec:
      uVar6 = uVar6 + 1;
      puVar5 = puVar5 + 0x12;
    } while (uVar6 < *param_1);
  }
  if (((cVar3 != '\0') || (DAT_008c702d != '\0')) || (4 < DAT_000be644)) {
    memcpy(acStack_2028,"==========================capability end============================\n",
           0x46);
    FUN_0004948c(5,acStack_2028,0);
  }
  return;
}


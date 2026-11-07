// FUN_00035258 @ 00035258  size=2028  callers=1
// program: bmminer


undefined4 FUN_00035258(int param_1)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  uint uVar6;
  char *pcVar7;
  size_t sVar8;
  void *pvVar9;
  void *pvVar10;
  int iVar11;
  uint uVar12;
  undefined1 auStack_2524 [92];
  char acStack_24c8 [160];
  undefined1 auStack_2428 [1024];
  char local_2028 [16];
  undefined2 local_2018;
  
  memset(auStack_2428,0,0x400);
  iVar2 = FUN_000350c8(auStack_2428,0x400);
  if (iVar2 == 0) {
    iVar2 = FUN_0007d200(auStack_2428,0,auStack_2524);
    if (iVar2 == 0) {
      if ((DAT_008c702e != '\0') &&
         (((DAT_00a5d20d != '\0' || (DAT_008c702d != '\0')) || (6 < DAT_000be644)))) {
        snprintf(local_2028,0x2000,"Failed to parse: %s\n",acStack_24c8);
        FUN_0004948c(7,local_2028,0);
        return 0xffffffff;
      }
    }
    else {
      piVar3 = (int *)FUN_0007eb20(iVar2,"pools");
      if ((piVar3 == (int *)0x0) || (*piVar3 != 1)) {
        if ((DAT_008c702e != '\0') &&
           (((DAT_00a5d20d != '\0' || (DAT_008c702d != '\0')) || (6 < DAT_000be644)))) {
          builtin_strncpy(local_2028,"get pool failed\n",0x10);
          local_2018 = (ushort)local_2018._1_1_ << 8;
          FUN_0004948c(7,local_2028,0);
          return 0xffffffff;
        }
      }
      else {
        iVar11 = param_1;
        uVar12 = 0;
        while( true ) {
          uVar6 = FUN_0007f66c(piVar3);
          if (uVar6 <= uVar12) {
            piVar3 = (int *)FUN_0007eb20(iVar2,"status");
            if ((piVar3 == (int *)0x0) || (*piVar3 != 2)) {
              if ((DAT_008c702e != '\0') &&
                 (((DAT_00a5d20d != '\0' || (DAT_008c702d != '\0')) || (6 < DAT_000be644)))) {
                snprintf(local_2028,0x2000,"get %s","status");
                FUN_0004948c(7,local_2028,0);
              }
            }
            else {
              pcVar7 = (char *)FUN_00080310();
              sVar8 = strlen(pcVar7);
              *(size_t *)(param_1 + 0x48) = sVar8 + 1;
              pvVar9 = calloc(sVar8 + 1,1);
              *(void **)(param_1 + 0x4c) = pvVar9;
              pvVar10 = (void *)FUN_00080310(piVar3);
              pcVar7 = (char *)FUN_00080310(piVar3);
              sVar8 = strlen(pcVar7);
              memcpy(pvVar9,pvVar10,sVar8);
            }
            piVar3 = (int *)FUN_0007eb20(iVar2,"id");
            if ((piVar3 == (int *)0x0) || (*piVar3 != 2)) {
              if ((DAT_008c702e != '\0') &&
                 (((DAT_00a5d20d != '\0' || (DAT_008c702d != '\0')) || (6 < DAT_000be644)))) {
                snprintf(local_2028,0x2000,"get %s","id");
                FUN_0004948c(7,local_2028,0);
              }
            }
            else {
              pcVar7 = (char *)FUN_00080310();
              sVar8 = strlen(pcVar7);
              *(size_t *)(param_1 + 0x50) = sVar8 + 1;
              pvVar9 = calloc(sVar8 + 1,1);
              *(void **)(param_1 + 0x54) = pvVar9;
              pvVar10 = (void *)FUN_00080310(piVar3);
              pcVar7 = (char *)FUN_00080310(piVar3);
              sVar8 = strlen(pcVar7);
              memcpy(pvVar9,pvVar10,sVar8);
            }
            piVar3 = (int *)FUN_0007eb20(iVar2,"timestamp");
            if ((piVar3 == (int *)0x0) || (*piVar3 != 2)) {
              if ((DAT_008c702e != '\0') &&
                 (((DAT_00a5d20d != '\0' || (DAT_008c702d != '\0')) || (6 < DAT_000be644)))) {
                snprintf(local_2028,0x2000,"get %s","timestamp");
                FUN_0004948c(7,local_2028,0);
              }
            }
            else {
              pcVar7 = (char *)FUN_00080310();
              sVar8 = strlen(pcVar7);
              *(size_t *)(param_1 + 0x58) = sVar8 + 1;
              pvVar9 = calloc(sVar8 + 1,1);
              *(void **)(param_1 + 0x5c) = pvVar9;
              pvVar10 = (void *)FUN_00080310(piVar3);
              pcVar7 = (char *)FUN_00080310(piVar3);
              sVar8 = strlen(pcVar7);
              memcpy(pvVar9,pvVar10,sVar8);
            }
            piVar3 = (int *)FUN_0007eb20(iVar2,"sn");
            if ((piVar3 == (int *)0x0) || (*piVar3 != 2)) {
              if ((DAT_008c702e != '\0') &&
                 (((DAT_00a5d20d != '\0' || (DAT_008c702d != '\0')) || (6 < DAT_000be644)))) {
                snprintf(local_2028,0x2000,"get %s","sn");
                FUN_0004948c(7,local_2028,0);
              }
            }
            else {
              pcVar7 = (char *)FUN_00080310();
              sVar8 = strlen(pcVar7);
              *(size_t *)(param_1 + 0x60) = sVar8 + 1;
              pvVar9 = calloc(sVar8 + 1,1);
              *(void **)(param_1 + 100) = pvVar9;
              pvVar10 = (void *)FUN_00080310(piVar3);
              pcVar7 = (char *)FUN_00080310(piVar3);
              sVar8 = strlen(pcVar7);
              memcpy(pvVar9,pvVar10,sVar8);
            }
            piVar3 = (int *)FUN_0007eb20(iVar2,"type");
            if ((piVar3 == (int *)0x0) || (*piVar3 != 2)) {
              if ((DAT_008c702e != '\0') &&
                 (((DAT_00a5d20d != '\0' || (DAT_008c702d != '\0')) || (6 < DAT_000be644)))) {
                snprintf(local_2028,0x2000,"get %s","type");
                FUN_0004948c(7,local_2028,0);
              }
            }
            else {
              pcVar7 = (char *)FUN_00080310();
              sVar8 = strlen(pcVar7);
              *(size_t *)(param_1 + 0x68) = sVar8 + 1;
              pvVar9 = calloc(sVar8 + 1,1);
              *(void **)(param_1 + 0x6c) = pvVar9;
              pvVar10 = (void *)FUN_00080310(piVar3);
              pcVar7 = (char *)FUN_00080310(piVar3);
              sVar8 = strlen(pcVar7);
              memcpy(pvVar9,pvVar10,sVar8);
            }
            if (*(int *)(iVar2 + 4) == -1) {
              return 0;
            }
            piVar3 = (int *)(iVar2 + 4);
            DataMemoryBarrier(0xb);
            do {
              iVar11 = *piVar3;
              bVar1 = (bool)hasExclusiveAccess(piVar3);
            } while (!bVar1);
            *piVar3 = iVar11 + -1;
            if (iVar11 + -1 == 0) {
              FUN_00080c8c(iVar2);
              return 0;
            }
            return 0;
          }
          piVar4 = (int *)FUN_0007f6b8(piVar3,uVar12);
          if ((piVar4 == (int *)0x0) || (*piVar4 != 0)) break;
          iVar5 = FUN_00033570(iVar11,piVar4,&DAT_0009e248);
          if (iVar5 != 0) {
            return 0xffffffff;
          }
          iVar5 = FUN_00033570(iVar11,piVar4,&DAT_0009ddf8);
          if (iVar5 != 0) {
            return 0xffffffff;
          }
          iVar5 = FUN_00033570(iVar11,piVar4,&DAT_0009de00);
          iVar11 = iVar11 + 0x18;
          uVar12 = uVar12 + 1;
          if (iVar5 != 0) {
            return 0xffffffff;
          }
        }
        if ((DAT_008c702e != '\0') &&
           (((DAT_00a5d20d != '\0' || (DAT_008c702d != '\0')) || (6 < DAT_000be644)))) {
          builtin_strncpy(local_2028,"pool item failed",0x10);
          local_2018 = 10;
          FUN_0004948c(7,local_2028,0);
          return 0xffffffff;
        }
      }
    }
  }
  return 0xffffffff;
}


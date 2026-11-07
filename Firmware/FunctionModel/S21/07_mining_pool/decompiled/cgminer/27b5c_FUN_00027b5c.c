// FUN_00027b5c @ 00027b5c  size=1568  callers=0
// program: cgminer


void FUN_00027b5c(int param_1,undefined1 *param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  undefined1 uVar3;
  char cVar4;
  longlong lVar5;
  char *param5;
  char *param4;
  char *param6;
  char *param7;
  int iVar6;
  size_t sVar7;
  char *pcVar8;
  undefined4 *puVar9;
  char *pcVar10;
  char *param2;
  undefined1 *puVar11;
  undefined4 *puVar12;
  longlong param8;
  undefined4 local_c8c;
  undefined4 local_c88;
  undefined4 uStack_c84;
  undefined4 uStack_c80;
  undefined4 uStack_c7c;
  undefined4 local_c78;
  undefined4 uStack_c74;
  undefined4 uStack_c70;
  undefined4 uStack_c6c;
  undefined4 local_c68;
  undefined1 auStack_c64 [4];
  undefined4 uStack_c60;
  undefined4 local_c5c;
  undefined4 uStack_c58;
  undefined4 local_c54;
  undefined4 local_c50;
  undefined4 local_c4c;
  undefined4 local_c48;
  undefined4 uStack_c44;
  undefined4 uStack_c40;
  undefined4 uStack_c3c;
  undefined4 local_c38;
  undefined4 uStack_c34;
  undefined4 uStack_c30;
  undefined4 uStack_c2c;
  char acStack_c28 [1024];
  char acStack_828 [2052];
  
  memset(acStack_c28,0,0x400);
  local_c5c = 0;
  puVar12 = &local_c68;
  uStack_c58 = 0;
  local_c54 = 0;
  local_c50 = 0;
  local_c88 = *(undefined4 *)(param_1 + 0x80);
  uStack_c84 = *(undefined4 *)(param_1 + 0x84);
  uStack_c80 = *(undefined4 *)(param_1 + 0x88);
  uStack_c7c = *(undefined4 *)(param_1 + 0x8c);
  local_c78 = *(undefined4 *)(param_1 + 0x90);
  uStack_c74 = *(undefined4 *)(param_1 + 0x94);
  uStack_c70 = *(undefined4 *)(param_1 + 0x98);
  uStack_c6c = *(undefined4 *)(param_1 + 0x9c);
  local_c4c = 0;
  puVar11 = (undefined1 *)((int)&local_c8c + 3);
  local_c68 = *(undefined4 *)(param_1 + 0x40);
  auStack_c64 = (undefined1  [4])*(undefined4 *)(param_1 + 0x44);
  uStack_c60 = *(undefined4 *)(param_1 + 0x48);
  local_c48 = *(undefined4 *)(param_1 + 0xc0);
  uStack_c44 = *(undefined4 *)(param_1 + 0xc4);
  uStack_c40 = *(undefined4 *)(param_1 + 200);
  uStack_c3c = *(undefined4 *)(param_1 + 0xcc);
  local_c38 = *(undefined4 *)(param_1 + 0xd0);
  uStack_c34 = *(undefined4 *)(param_1 + 0xd4);
  uStack_c30 = *(undefined4 *)(param_1 + 0xd8);
  uStack_c2c = *(undefined4 *)(param_1 + 0xdc);
  do {
    puVar11 = puVar11 + 1;
    uVar3 = *puVar11;
    puVar12 = (undefined4 *)((int)puVar12 + -1);
    *puVar11 = *(undefined1 *)puVar12;
    *(undefined1 *)puVar12 = uVar3;
  } while (puVar11 != (undefined1 *)((int)&uStack_c7c + 3));
  puVar9 = &local_c5c;
  puVar12 = &local_c68;
  do {
    puVar9 = (undefined4 *)((int)puVar9 + -1);
    uVar3 = *(undefined1 *)puVar12;
    *(undefined1 *)puVar12 = *(undefined1 *)puVar9;
    *(undefined1 *)puVar9 = uVar3;
    puVar12 = (undefined4 *)((int)puVar12 + 1);
  } while ((undefined4 *)(auStack_c64 + 2) != puVar9);
  pcVar10 = (char *)((int)&local_c4c + 3);
  pcVar8 = acStack_c28;
  do {
    pcVar10 = pcVar10 + 1;
    cVar4 = *pcVar10;
    pcVar8 = pcVar8 + -1;
    *pcVar10 = *pcVar8;
    *pcVar8 = cVar4;
  } while (pcVar10 != (char *)((int)&uStack_c3c + 3));
  pcVar8 = (char *)FUN_0001fac8(param_1,0x80);
  pcVar10 = (char *)FUN_0001fac8(&local_c88,0x20);
  param2 = "o";
  param5 = (char *)FUN_0001fac8(&local_c68,0xc);
  param4 = (char *)FUN_0001fac8(param_2,4);
  param6 = (char *)FUN_0001fac8(param_2,5);
  param7 = (char *)FUN_0001fac8(&local_c48,0x20);
  param8 = FUN_0002a9b4(param_1);
  if (param_3 == 0) {
    param2 = "x";
  }
  sprintf(acStack_c28,"%s %08x midstate %s data %s nonce %s hash %s diff %lld",param2,
          *(uint *)(param_1 + 0x154),pcVar10,param5,param6,param7,param8);
  iVar6 = strcmp(DAT_00068900,"screen");
  if (iVar6 == 0) {
    if (((DAT_00072da0 != '\0') || (DAT_000686f0 != '\0')) || (2 < DAT_00067848)) {
      snprintf(acStack_828,0x800,acStack_c28);
      FUN_0001dd98(3,acStack_828,0);
    }
  }
  else {
    local_c8c = &DAT_00072da0;
    if (((DAT_00072da0 != '\0') || (DAT_000686f0 != '\0')) || (2 < DAT_00067848)) {
      snprintf(acStack_828,0x800,acStack_c28);
      FUN_0001dd98(3,acStack_828,0);
    }
    if (DAT_0006a498 != (FILE *)0x0) {
      sprintf(acStack_c28,"%s %08x work %s midstate %s data %s nonce %s hash %s diff %lld",param2,
              *(uint *)(param_1 + 0x154),pcVar8,pcVar10,param5,param6,param7,param8);
      sVar7 = strlen(acStack_c28);
      fwrite(acStack_c28,sVar7,1,DAT_0006a498);
      fwrite(&DAT_0004c39c,1,1,DAT_0006a498);
      fflush(DAT_0006a498);
      if (param_3 != 0) {
        if (DAT_0006a494 == 1) {
          sprintf(acStack_c28,"midstate %s data %s nonce %s hash %s",pcVar10,param5,param4,param7);
          sVar7 = strlen(acStack_c28);
          fwrite(acStack_c28,sVar7,1,DAT_0006a49c);
          fwrite(&DAT_0004c39c,1,1,DAT_0006a49c);
          fflush(DAT_0006a49c);
        }
        else if ((DAT_0006a494 - 0x20U & 0xffffffdf) == 0) {
          sprintf(acStack_c28,"midstate %s data %s nonce %s hash %s",pcVar10,param5,param4,param7);
          iVar6 = FUN_00027874(DAT_0006a494,*param_2);
          sVar7 = strlen(acStack_c28);
          fwrite(acStack_c28,sVar7,1,(&DAT_0006a49c)[iVar6]);
          fwrite(&DAT_0004c39c,1,1,(&DAT_0006a49c)[iVar6]);
          fflush((&DAT_0006a49c)[iVar6]);
        }
        if (DAT_0006a5a0 != '\0') {
          iVar6 = 0;
          lVar5 = param8;
          do {
            uVar1 = (uint)((ulonglong)lVar5 >> 0x21);
            uVar2 = (uint)((byte)((ulonglong)lVar5 >> 0x20) & 1) << 0x1f | (uint)lVar5 >> 1;
            lVar5 = CONCAT44(uVar1,uVar2);
            if (uVar2 == 0 && uVar1 == 0) break;
            iVar6 = iVar6 + 1;
          } while (iVar6 != 0x40);
          if ((DAT_000686f1 != '\0') &&
             (((*local_c8c != '\0' || (DAT_000686f0 != '\0')) || (6 < DAT_00067848)))) {
            snprintf(acStack_828,0x800,"work diff %lld diffnum %d",param8,iVar6);
            FUN_0001dd98(7,acStack_828,0);
          }
          sprintf(acStack_c28,"midstate %s data %s nonce %s hash %s",pcVar10,param5,param4,param7);
          sVar7 = strlen(acStack_c28);
          fwrite(acStack_c28,sVar7,1,(FILE *)(&DAT_0006a5a4)[iVar6]);
          fwrite(&DAT_0004c39c,1,1,(FILE *)(&DAT_0006a5a4)[iVar6]);
          fflush((FILE *)(&DAT_0006a5a4)[iVar6]);
        }
      }
    }
  }
  if (pcVar8 != (char *)0x0) {
    free(pcVar8);
  }
  if (pcVar10 != (char *)0x0) {
    free(pcVar10);
  }
  if (param5 != (char *)0x0) {
    free(param5);
  }
  if (param4 != (char *)0x0) {
    free(param4);
  }
  if (param6 != (char *)0x0) {
    free(param6);
  }
  if (param7 != (char *)0x0) {
    free(param7);
  }
  return;
}


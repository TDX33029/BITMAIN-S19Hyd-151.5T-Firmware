// FUN_00036460 @ 00036460  size=1312  callers=1
// program: bmminer


undefined4 FUN_00036460(int param_1)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  FILE *__stream;
  int *piVar6;
  int iVar7;
  int iVar8;
  char local_2030 [8];
  char local_2028 [8196];
  
  iVar2 = FUN_0007ea04();
  uVar3 = FUN_0007f548();
  local_2030[4] = 0;
  local_2030[0] = '\0';
  local_2030[1] = '\0';
  local_2030[2] = '\0';
  local_2030[3] = '\0';
  iVar8 = param_1;
  do {
    uVar4 = FUN_0007ea04();
    uVar5 = FUN_00080268(*(undefined4 *)(iVar8 + 0x78));
    iVar7 = iVar8 + 0x18;
    FUN_0007ec50(uVar4,&DAT_0009e248,uVar5);
    uVar5 = FUN_00080268(*(undefined4 *)(iVar8 + 0x80));
    FUN_0007ec50(uVar4,&DAT_0009ddf8,uVar5);
    uVar5 = FUN_00080268(*(undefined4 *)(iVar8 + 0x88));
    FUN_0007ec50(uVar4,&DAT_0009de00,uVar5);
    FUN_0007f9e4(uVar3,uVar4);
    iVar8 = iVar7;
  } while (iVar7 != param_1 + 0x48);
  FUN_0007ec50(iVar2,"pools",uVar3);
  if (**(int **)(param_1 + 4) == 0) {
    uVar3 = FUN_00080c4c();
  }
  else {
    uVar3 = FUN_00080c2c();
  }
  FUN_0007ec50(iVar2,"api-listen",uVar3);
  if (**(int **)(param_1 + 0xc) == 0) {
    uVar3 = FUN_00080c4c();
  }
  else {
    uVar3 = FUN_00080c2c();
  }
  FUN_0007ec50(iVar2,"api-network",uVar3);
  uVar3 = FUN_00080268(*(undefined4 *)(param_1 + 0x14));
  FUN_0007ec50(iVar2,"api-groups",uVar3);
  uVar3 = FUN_00080268(*(undefined4 *)(param_1 + 0x1c));
  FUN_0007ec50(iVar2,"api-allow",uVar3);
  if (**(int **)(param_1 + 0x2c) == 0) {
    uVar3 = FUN_00080c4c();
  }
  else {
    uVar3 = FUN_00080c2c();
  }
  FUN_0007ec50(iVar2,"bitmain-fan-ctrl",uVar3);
  sprintf(local_2030,"%d",**(int **)(param_1 + 0x34));
  uVar3 = FUN_00080268(local_2030);
  FUN_0007ec50(iVar2,"bitmain-fan-pwm",uVar3);
  if (**(int **)(param_1 + 0x24) == 0) {
    uVar3 = FUN_00080c4c();
  }
  else {
    uVar3 = FUN_00080c2c();
  }
  FUN_0007ec50(iVar2,"bitmain-use-vil",uVar3);
  sprintf(local_2030,"%d",**(int **)(param_1 + 0x3c));
  uVar3 = FUN_00080268(local_2030);
  FUN_0007ec50(iVar2,"bitmain-freq",uVar3);
  sprintf(local_2030,"%d",**(int **)(param_1 + 0x44));
  uVar3 = FUN_00080268(local_2030);
  FUN_0007ec50(iVar2,"bitmain-voltage",uVar3);
  sprintf(local_2030,"%d",**(int **)(param_1 + 0x4c));
  uVar3 = FUN_00080268(local_2030);
  FUN_0007ec50(iVar2,"bitmain-ccdelay",uVar3);
  sprintf(local_2030,"%d",**(int **)(param_1 + 0x54));
  uVar3 = FUN_00080268(local_2030);
  FUN_0007ec50(iVar2,"bitmain-pwth",uVar3);
  sprintf(local_2030,"%d",**(int **)(param_1 + 0x5c));
  uVar3 = FUN_00080268(local_2030);
  FUN_0007ec50(iVar2,"bitmain-work-mode",uVar3);
  if (*(int **)(param_1 + 100) != (int *)0x0) {
    sprintf(local_2030,"%d",**(int **)(param_1 + 100));
    uVar3 = FUN_00080268(local_2030);
    FUN_0007ec50(iVar2,"bitmain-hashrate-percent",uVar3);
  }
  sprintf(local_2030,"%d",**(int **)(param_1 + 0x6c));
  uVar3 = FUN_00080268(local_2030);
  FUN_0007ec50(iVar2,"bitmain-freq-level",uVar3);
  if (*(int *)(param_1 + 0x70) != 0) {
    sprintf(local_2030,"%d",**(int **)(param_1 + 0x74));
    uVar3 = FUN_00080268(local_2030);
    FUN_0007ec50(iVar2,"bitmain-user-ip-cat",uVar3);
  }
  __stream = fopen("/config/cgminer.conf","w");
  if (__stream != (FILE *)0x0) {
    FUN_0007918c(iVar2,__stream,1);
    fflush(__stream);
    fclose(__stream);
    if ((iVar2 != 0) && (*(int *)(iVar2 + 4) != -1)) {
      piVar6 = (int *)(iVar2 + 4);
      DataMemoryBarrier(0xb);
      do {
        iVar8 = *piVar6;
        bVar1 = (bool)hasExclusiveAccess(piVar6);
      } while (!bVar1);
      *piVar6 = iVar8 + -1;
      if (iVar8 + -1 == 0) {
        FUN_00080c8c(iVar2);
      }
    }
    return 0;
  }
  if (((DAT_00a5d20d != '\0') || (DAT_008c702d != '\0')) || (2 < DAT_000be644)) {
    builtin_strncpy(local_2028,"open /config/test.json failed",0x1e);
    FUN_0004948c(3,local_2028,0);
  }
  if ((iVar2 != 0) && (*(int *)(iVar2 + 4) != -1)) {
    piVar6 = (int *)(iVar2 + 4);
    DataMemoryBarrier(0xb);
    do {
      iVar8 = *piVar6;
      bVar1 = (bool)hasExclusiveAccess(piVar6);
    } while (!bVar1);
    *piVar6 = iVar8 + -1;
    if (iVar8 + -1 == 0) {
      FUN_00080c8c(iVar2);
    }
  }
  return 0xffffffff;
}


// FUN_00053154 @ 00053154  size=660  callers=2
// program: bmminer


undefined4 FUN_00053154(uint *param_1,char *param_2,uint param_3)

{
  bool bVar1;
  int *piVar2;
  size_t sVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint *puVar7;
  int *piVar8;
  int *piVar9;
  uint *puVar10;
  uint *puVar11;
  uint uVar12;
  uint *puVar13;
  
  uVar12 = param_1[2];
  if (*param_1 >> (uVar12 & 0xff) == 0) {
    piVar2 = (int *)param_1[1];
    uVar12 = ~(-1 << (uVar12 & 0xff));
  }
  else {
    uVar12 = uVar12 + 1;
    iVar5 = 8 << (uVar12 & 0xff);
    piVar2 = (int *)FUN_00055024(iVar5);
    if (piVar2 == (int *)0x0) {
      return 0xffffffff;
    }
    FUN_0005503c(param_1[1]);
    param_1[1] = (uint)piVar2;
    param_1[2] = uVar12;
    puVar7 = param_1 + 3;
    if (1 << (uVar12 & 0xff) != 0) {
      piVar8 = piVar2;
      do {
        piVar8[1] = (int)puVar7;
        piVar9 = piVar8 + 2;
        *piVar8 = (int)puVar7;
        piVar8 = piVar9;
      } while ((int *)(iVar5 + (int)piVar2) != piVar9);
    }
    puVar10 = (uint *)param_1[4];
    param_1[3] = (uint)puVar7;
    uVar12 = ~(-1 << (uVar12 & 0xff));
    param_1[4] = (uint)puVar7;
    if (puVar10 != puVar7) {
      do {
        while( true ) {
          puVar13 = (uint *)puVar10[1];
          puVar11 = (uint *)piVar2[(puVar10[4] & uVar12) * 2];
          piVar8 = piVar2 + (puVar10[4] & uVar12) * 2;
          if ((puVar11 != puVar7) || (puVar7 != (uint *)piVar8[1])) break;
          uVar4 = param_1[3];
          puVar10[1] = (uint)puVar7;
          *puVar10 = uVar4;
          *(uint **)(param_1[3] + 4) = puVar10;
          param_1[3] = (uint)puVar10;
          piVar8[1] = (int)puVar10;
          *piVar8 = (int)puVar10;
          puVar10 = puVar13;
          if (puVar13 == puVar7) goto LAB_00053264;
        }
        uVar4 = *puVar11;
        puVar10[1] = (uint)puVar11;
        *puVar10 = uVar4;
        *(uint **)(*puVar11 + 4) = puVar10;
        *puVar11 = (uint)puVar10;
        *piVar8 = (int)puVar10;
        puVar10 = puVar13;
      } while (puVar13 != puVar7);
LAB_00053264:
      piVar2 = (int *)param_1[1];
      uVar12 = ~(-1 << (param_1[2] & 0xff));
    }
  }
  sVar3 = strlen(param_2);
  uVar4 = FUN_00052a98(param_2,sVar3,DAT_0050fc7c);
  piVar2 = piVar2 + (uVar12 & uVar4) * 2;
  iVar5 = FUN_00052fdc(param_1,piVar2,param_2,uVar4);
  if (iVar5 != 0) {
    iVar6 = *(int *)(iVar5 + 0x14);
    if ((iVar6 != 0) && (*(int *)(iVar6 + 4) != -1)) {
      piVar2 = (int *)(iVar6 + 4);
      DataMemoryBarrier(0xb);
      do {
        iVar6 = *piVar2;
        bVar1 = (bool)hasExclusiveAccess(piVar2);
      } while (!bVar1);
      *piVar2 = iVar6 + -1;
      if (iVar6 + -1 == 0) {
        FUN_0005630c();
      }
    }
    *(uint *)(iVar5 + 0x14) = param_3;
    return 0;
  }
  puVar7 = (uint *)FUN_00055024(sVar3 + 0x19);
  if (puVar7 == (uint *)0x0) {
    return 0xffffffff;
  }
  puVar7[4] = uVar4;
  strncpy((char *)(puVar7 + 6),param_2,sVar3 + 1);
  puVar11 = (uint *)*piVar2;
  puVar10 = puVar7 + 2;
  puVar7[5] = param_3;
  puVar7[1] = (uint)puVar7;
  *puVar7 = (uint)puVar7;
  puVar7[3] = (uint)puVar10;
  puVar7[2] = (uint)puVar10;
  if ((puVar11 == param_1 + 3) && (puVar11 == (uint *)piVar2[1])) {
    *puVar7 = param_1[3];
    puVar7[1] = (uint)puVar11;
    *(uint **)(param_1[3] + 4) = puVar7;
    param_1[3] = (uint)puVar7;
    piVar2[1] = (int)puVar7;
    *piVar2 = (int)puVar7;
  }
  else {
    *puVar7 = *puVar11;
    puVar7[1] = (uint)puVar11;
    *(uint **)(*puVar11 + 4) = puVar7;
    *puVar11 = (uint)puVar7;
    *piVar2 = (int)puVar7;
  }
  uVar12 = param_1[5];
  uVar4 = *param_1;
  puVar7[3] = (uint)(param_1 + 5);
  puVar7[2] = uVar12;
  *(uint **)(param_1[5] + 4) = puVar10;
  param_1[5] = (uint)puVar10;
  *param_1 = uVar4 + 1;
  return 0;
}


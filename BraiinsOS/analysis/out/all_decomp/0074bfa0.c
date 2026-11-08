// FUN_0074bfa0 @ 0074bfa0 size=384 calls_out=6 calls_in=2
// strings: 

void FUN_0074bfa0(int *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  bool bVar4;
  uint uVar5;
  int *piVar6;
  int iVar7;
  uint *puVar8;
  uint *puVar9;
  uint uVar10;
  uint *puVar11;
  int iVar12;
  
  if (*param_1 == 0) {
    bVar4 = (bool)hasExclusiveAccess(param_1);
    if (bVar4) {
      *param_1 = 8;
      DataMemoryBarrier(0xb);
      goto LAB_0074bfc8;
    }
  }
  else {
    ClearExclusiveLocal();
  }
  FUN_0127e06c(param_1);
LAB_0074bfc8:
  FUN_0128236c(param_1);
  FUN_0128236c((uint)param_1 | 1);
  iVar12 = param_1[5];
  if (iVar12 != 0) {
    puVar11 = (uint *)param_1[2];
    puVar9 = puVar11 + 1;
    uVar10 = ~*puVar11 & 0x80808080;
    do {
      puVar8 = puVar9;
      if (uVar10 == 0) {
        do {
          puVar9 = puVar8 + 1;
          uVar10 = *puVar8;
          puVar11 = puVar11 + -0x10;
          puVar8 = puVar9;
        } while ((uVar10 & 0x80808080) == 0x80808080);
        uVar10 = uVar10 & 0x80808080 ^ 0x80808080;
      }
      uVar5 = uVar10 >> 8;
      uVar1 = uVar10 >> 0x10;
      uVar2 = uVar10 >> 0x18;
      uVar3 = uVar10 << 0x18;
      uVar10 = uVar10 - 1 & uVar10;
      uVar5 = LZCOUNT(uVar3 | (uVar5 & 0xff) << 0x10 | (uVar1 & 0xff) << 8 | uVar2) & 0x38;
      iVar12 = iVar12 + -1;
      piVar6 = *(int **)((int)puVar11 + uVar5 * -2 + -8);
      DataMemoryBarrier(0xb);
      do {
        iVar7 = *piVar6;
        bVar4 = (bool)hasExclusiveAccess(piVar6);
      } while (!bVar4);
      *piVar6 = iVar7 + -1;
      if (iVar7 == 1) {
        DataMemoryBarrier(0xb);
        FUN_012c0df4(*(undefined4 *)((int)puVar11 + uVar5 * -2 + -8));
      }
    } while (iVar12 != 0);
    uVar5 = param_1[3];
    uVar10 = 0;
    if (uVar5 != 0) {
      FUN_016dd606(param_1[2],0xff,uVar5 + 5);
      uVar10 = uVar5;
      if (7 < uVar5) {
        uVar10 = (uVar5 + 1 & 0xfffffff8) - (uVar5 + 1 >> 3);
      }
    }
    param_1[4] = uVar10;
    param_1[5] = 0;
  }
  FUN_01282570(param_1);
  FUN_01282570((uint)param_1 | 1);
  if (*param_1 == 8) {
    DataMemoryBarrier(0xb);
    do {
      bVar4 = (bool)hasExclusiveAccess(param_1);
      if (bVar4) {
        *param_1 = 0;
        return;
      }
    } while (*param_1 == 8);
  }
  ClearExclusiveLocal();
  FUN_0127db4c(param_1);
  return;
}


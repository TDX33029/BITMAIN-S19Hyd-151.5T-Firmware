// FUN_00df0e88 @ 00df0e88 size=320 calls_out=2 calls_in=0
// strings: 

void FUN_00df0e88(undefined8 *param_1,undefined4 *param_2)

{
  uint *puVar1;
  int iVar2;
  code *pcVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  undefined8 uVar10;
  double dVar11;
  undefined8 uVar12;
  uint local_44;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  uint *local_30;
  code *local_2c;
  undefined4 uStack_28;
  
  uVar4 = *param_2;
  pcVar3 = *(code **)(param_2[1] + 0xc);
  do {
    puVar1 = (uint *)(*pcVar3)(uVar4);
    if (puVar1 == (uint *)0x0) {
      uVar4 = 0x80000000;
      iVar2 = 0x50;
      goto LAB_00df0fbc;
    }
  } while ((puVar1[0xac] != 0) || (uVar7 = *puVar1, uVar7 == 2 && puVar1[1] == 0));
  iVar5 = param_2[2];
  uVar6 = puVar1[0xa9];
  param_2[2] = iVar5 + 1;
  if (puVar1[0xa8] == 0) {
    uVar6 = 0;
  }
  local_2c = FUN_012fd02c;
  local_30 = &local_44;
  local_44 = uVar6;
  FUN_00664898(&local_40,&DAT_0059cfab,&local_30);
  FUN_006666fc(&local_30,*(undefined4 *)(param_2[3] + 4),*(undefined4 *)(param_2[3] + 8));
  dVar11 = *(double *)(puVar1 + 4);
  uVar10 = *(undefined8 *)(puVar1 + 2);
  uVar9 = puVar1[0xf];
  uVar8 = puVar1[0x10];
  *(undefined4 *)(param_1 + 4) = local_40;
  *(undefined4 *)((int)param_1 + 0x24) = uStack_3c;
  *(undefined4 *)(param_1 + 5) = uStack_38;
  uVar4 = 0;
  *(undefined4 *)((int)param_1 + 0x2c) = 0;
  *(undefined4 *)(param_1 + 6) = 1;
  uVar12 = 0;
  if ((uVar7 & 1) != 0) {
    uVar12 = uVar10;
  }
  *(undefined4 *)((int)param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 7) = 0;
  *(undefined4 *)((int)param_1 + 0x3c) = 1;
  *(undefined4 *)(param_1 + 8) = 0;
  *(uint **)((int)param_1 + 0x44) = local_30;
  *(code **)(param_1 + 9) = local_2c;
  *(undefined4 *)((int)param_1 + 0x4c) = uStack_28;
  iVar2 = 0x58;
  *(undefined4 *)(param_1 + 10) = 0;
  *(uint *)((int)param_1 + 0xc) = uVar9;
  *(undefined4 *)((int)param_1 + 0x54) = 1;
  *(int *)(param_1 + 3) = iVar5;
  *(uint *)((int)param_1 + 0x1c) = uVar6;
  *(uint *)(param_1 + 2) = uVar8;
  *param_1 = uVar12;
  *(uint *)(param_1 + 1) = (uint)(0.0 < dVar11) * (int)(longlong)dVar11;
LAB_00df0fbc:
  *(undefined4 *)((int)param_1 + iVar2) = uVar4;
  return;
}


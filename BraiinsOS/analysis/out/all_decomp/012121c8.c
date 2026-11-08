// FUN_012121c8 @ 012121c8 size=696 calls_out=9 calls_in=1
// strings: 

undefined4
FUN_012121c8(int *param_1,undefined4 param_2,undefined4 param_3,int param_4,undefined4 param_5)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  int *piVar4;
  uint uVar5;
  int iVar6;
  undefined4 uVar7;
  int *piVar8;
  uint uVar9;
  undefined4 *puVar10;
  undefined4 uVar11;
  undefined4 *puVar12;
  uint uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined4 local_5c [3];
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined8 local_44;
  undefined4 local_3c;
  undefined4 *local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  iVar3 = *param_1;
  uVar5 = 1;
  if ((int)*(uint *)(iVar3 + 8) < 0) {
    uVar5 = *(uint *)(iVar3 + 8) ^ 0x80000000;
  }
  if (uVar5 == 0) {
    if (*(int *)(iVar3 + 0xc) == 0) {
      return 0;
    }
  }
  else if (uVar5 == 1) {
    puVar12 = *(undefined4 **)(iVar3 + 0xc);
    iVar3 = *(int *)(iVar3 + 0x10);
    if (iVar3 != 1) {
      if (iVar3 != 0) {
        puVar10 = puVar12 + iVar3 * 8;
        do {
          iVar3 = (**(code **)(puVar12[1] + 0x10))(*puVar12,param_2,param_5);
          if (iVar3 == 0) goto LAB_01212288;
          puVar12 = puVar12 + 8;
        } while (puVar12 != puVar10);
      }
      return 0;
    }
    iVar3 = (**(code **)(puVar12[1] + 0x10))(*puVar12,param_2,param_5);
    if (iVar3 != 0) {
      return 0;
    }
  }
  else {
    puVar12 = *(undefined4 **)(iVar3 + 0x10);
    iVar3 = *(int *)(iVar3 + 0x14) << 5;
    do {
      if (iVar3 == 0) {
        return 0;
      }
      iVar6 = (**(code **)(puVar12[1] + 0x10))(*puVar12,param_2,param_5);
      iVar3 = iVar3 + -0x20;
      puVar12 = puVar12 + 8;
    } while (iVar6 != 0);
  }
LAB_01212288:
  piVar8 = (int *)param_1[5];
  do {
    iVar3 = *piVar8;
    bVar2 = (bool)hasExclusiveAccess(piVar8);
  } while (!bVar2);
  *piVar8 = iVar3 + 1;
  if (iVar3 < 0) {
LAB_0121246c:
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xfdee,0x121246c);
    (*pcVar1)();
  }
  iVar3 = param_1[6];
  if (param_4 == 0) {
    local_5c[0] = 0;
  }
  else {
    DataMemoryBarrier(0xb);
    if (*(int *)(param_4 + 0x14) != 0) {
      FUN_011f6248((undefined4 *)(param_4 + 0xc),param_4);
    }
    piVar4 = *(int **)(param_4 + 0xc);
    do {
      iVar6 = *piVar4;
      bVar2 = (bool)hasExclusiveAccess(piVar4);
    } while (!bVar2);
    *piVar4 = iVar6 + 1;
    if (iVar6 < 0) goto LAB_0121246c;
    uVar7 = *(undefined4 *)(param_4 + 0x10);
    uVar11 = *(undefined4 *)(param_4 + 0xc);
    uVar13 = param_1[6];
    uVar9 = (*(int **)(param_4 + 4))[1];
    uVar5 = 0;
    if (uVar9 <= uVar13) {
      iVar6 = thunk_FUN_016dd50a(**(int **)(param_4 + 4) + 8,piVar8 + 2,uVar9);
      uVar5 = uVar9;
      if (iVar6 != 0) {
        uVar5 = 0;
      }
    }
    local_44 = FUN_011e1508((int)(piVar8 + 2) + uVar5,uVar13 - uVar5);
    local_50 = 3;
    local_5c[0] = 2;
    local_4c = uVar11;
    local_48 = uVar7;
  }
  uVar14 = FUN_01238114(param_3);
  local_38 = (undefined4 *)thunk_FUN_016d4a50(0xc);
  if (local_38 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(4,0xc);
  }
  uVar15 = FUN_011cf8a8(param_1,param_2,param_3,param_4,param_5);
  FUN_01158f58(&local_30,(int)uVar15,(int)((ulonglong)uVar15 >> 0x20));
  *local_38 = local_30;
  local_38[1] = uStack_2c;
  local_38[2] = uStack_28;
  local_34 = 1;
  local_3c = 1;
  uVar7 = FUN_011f1290(piVar8,iVar3,local_5c,(int)uVar14,(int)((ulonglong)uVar14 >> 0x20),param_2,
                       &local_3c);
  return uVar7;
}


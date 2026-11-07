// FUN_011e3d88 @ 011e3d88 size=368 calls_out=6 calls_in=2
// strings: 

undefined4 FUN_011e3d88(int param_1,char *param_2,undefined4 param_3,int param_4)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  int *piVar4;
  undefined4 uVar5;
  uint uVar6;
  int *piVar7;
  undefined4 uVar8;
  uint uVar9;
  uint uVar10;
  undefined4 uVar11;
  undefined8 uVar12;
  undefined4 local_44 [3];
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined8 local_2c;
  
  if ((*param_2 == '\x03') &&
     (iVar3 = FUN_01224900(param_1 + 0x18,*(undefined4 *)(param_2 + 8),
                           *(undefined4 *)(param_2 + 0xc)), iVar3 != 0)) {
    return 0;
  }
  piVar7 = *(int **)(param_1 + 0x48);
  do {
    iVar3 = *piVar7;
    bVar2 = (bool)hasExclusiveAccess(piVar7);
  } while (!bVar2);
  *piVar7 = iVar3 + 1;
  if (iVar3 < 0) {
LAB_011e3ef4:
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xfdee,0x11e3ef4);
    (*pcVar1)();
  }
  uVar8 = *(undefined4 *)(param_1 + 0x4c);
  if (param_4 == 0) {
    local_44[0] = 0;
  }
  else {
    DataMemoryBarrier(0xb);
    if (*(int *)(param_4 + 0x14) != 0) {
      FUN_011f6248((undefined4 *)(param_4 + 0xc),param_4);
    }
    piVar4 = *(int **)(param_4 + 0xc);
    do {
      iVar3 = *piVar4;
      bVar2 = (bool)hasExclusiveAccess(piVar4);
    } while (!bVar2);
    *piVar4 = iVar3 + 1;
    if (iVar3 < 0) goto LAB_011e3ef4;
    uVar11 = *(undefined4 *)(param_4 + 0xc);
    uVar10 = *(uint *)(param_1 + 0x4c);
    uVar9 = (*(int **)(param_4 + 4))[1];
    uVar5 = *(undefined4 *)(param_4 + 0x10);
    uVar6 = 0;
    if (uVar9 <= uVar10) {
      iVar3 = thunk_FUN_016dd50a(**(int **)(param_4 + 4) + 8,piVar7 + 2,uVar9);
      uVar6 = uVar9;
      if (iVar3 != 0) {
        uVar6 = 0;
      }
    }
    local_2c = FUN_011e1508((int)(piVar7 + 2) + uVar6,uVar10 - uVar6);
    local_38 = 3;
    local_44[0] = 2;
    local_34 = uVar11;
    local_30 = uVar5;
  }
  uVar12 = FUN_01238114(param_3);
  uVar8 = FUN_011ef804(piVar7,uVar8,local_44,(int)uVar12,(int)((ulonglong)uVar12 >> 0x20),param_2,
                       param_1);
  return uVar8;
}


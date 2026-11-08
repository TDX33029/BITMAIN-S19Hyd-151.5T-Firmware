// FUN_011e30d8 @ 011e30d8 size=500 calls_out=8 calls_in=2
// strings: 

int FUN_011e30d8(undefined4 *param_1,char *param_2,undefined4 param_3,int param_4)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  int *piVar4;
  uint uVar5;
  int *piVar6;
  uint uVar7;
  undefined4 uVar8;
  uint uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined4 local_d4;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined4 local_c8;
  undefined4 local_c4;
  undefined1 auStack_c0 [7];
  undefined4 local_b9;
  undefined4 local_b5;
  undefined4 local_b1;
  undefined4 local_ad;
  undefined4 local_a8 [3];
  undefined4 uStack_9c;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined8 uStack_90;
  undefined4 local_88;
  undefined1 local_80;
  undefined1 auStack_7f [47];
  undefined1 local_50;
  char *local_4c;
  undefined8 local_38;
  int *local_30;
  undefined4 local_2c;
  
  uVar10 = CONCAT44(local_c4,local_c8);
  if ((*param_2 == '\x02') && (iVar3 = FUN_011e2dd0(param_2 + 8,param_1), iVar3 != 0)) {
    return 0;
  }
  piVar6 = (int *)param_1[4];
  do {
    iVar3 = *piVar6;
    bVar2 = (bool)hasExclusiveAccess(piVar6);
  } while (!bVar2);
  *piVar6 = iVar3 + 1;
  if (iVar3 < 0) {
LAB_011e32b8:
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xfdee,0x11e32b8);
    (*pcVar1)();
  }
  uVar8 = param_1[5];
  if (param_4 == 0) {
    local_a8[0] = 0;
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
    if (iVar3 < 0) goto LAB_011e32b8;
    local_d0 = *(undefined4 *)(param_4 + 0xc);
    uVar9 = param_1[5];
    uVar7 = (*(int **)(param_4 + 4))[1];
    local_cc = *(undefined4 *)(param_4 + 0x10);
    uVar5 = 0;
    if (uVar7 <= uVar9) {
      iVar3 = thunk_FUN_016dd50a(**(int **)(param_4 + 4) + 8,piVar6 + 2,uVar7,0,local_cc,uVar8);
      uVar5 = uVar7;
      if (iVar3 != 0) {
        uVar5 = 0;
      }
    }
    uVar10 = FUN_011e1508((int)(piVar6 + 2) + uVar5,uVar9 - uVar5);
    local_d4 = 3;
    local_a8[0] = 2;
  }
  uVar11 = FUN_01238114(param_3);
  local_b9 = *param_1;
  local_50 = 6;
  local_b5 = param_1[1];
  local_b1 = param_1[2];
  local_ad = param_1[3];
  local_80 = 2;
  local_88 = 0x8000000e;
  local_4c = param_2;
  FUN_016dd1aa(auStack_7f,auStack_c0,0x17);
  uStack_9c = local_d4;
  local_98 = local_d0;
  uStack_94 = local_cc;
  local_30 = piVar6;
  local_2c = uVar8;
  uStack_90 = uVar10;
  local_38 = uVar11;
  iVar3 = thunk_FUN_016d4a50(0x80);
  if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(8,0x80);
  }
  FUN_016dd1aa(iVar3,local_a8,0x80);
  return iVar3;
}


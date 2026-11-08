// FUN_00d59880 @ 00d59880 size=700 calls_out=11 calls_in=1
// strings: 

void FUN_00d59880(int param_1,int *param_2)

{
  double *pdVar1;
  bool bVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  double dVar7;
  undefined8 uVar8;
  int local_120;
  int local_11c;
  int local_118;
  int local_110;
  int local_10c;
  undefined4 local_108;
  int *local_104;
  int *local_100;
  int local_f8;
  int local_f4;
  int local_f0;
  int local_e8 [20];
  int local_98;
  int iStack_94;
  undefined4 uStack_90;
  int *piStack_8c;
  int *piStack_88;
  int local_80 [20];
  
  local_104 = (int *)(param_1 + 0x618);
  local_110 = *(int *)(*local_104 + 0x3c4);
  local_108 = 0;
  local_10c = local_110 + *(int *)(*local_104 + 0x3c8) * 4;
  local_100 = param_2;
  FUN_00cd5670(local_e8,&local_110);
  if (local_e8[0] == 2) {
    local_118 = 0;
    local_11c = 8;
    local_120 = 0;
    DataMemoryBarrier(0xb);
    if (DAT_018d7d14 != 0) goto LAB_00d59ae8;
LAB_00d59a48:
    dVar7 = 0.0;
  }
  else {
    iVar5 = thunk_FUN_016d4a50(0x140);
    if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(8,0x140);
    }
    FUN_016dd1aa(iVar5,local_e8,0x50);
    local_f0 = 1;
    local_f8 = 4;
    iVar6 = 0x50;
    local_98 = local_110;
    iStack_94 = local_10c;
    uStack_90 = local_108;
    piStack_8c = local_104;
    piStack_88 = local_100;
    local_f4 = iVar5;
    while (iVar3 = local_f0, FUN_00cd5670(local_80,&local_98), local_80[0] != 2) {
      if (iVar3 == local_f8) {
        FUN_00d653ec(&local_f8,iVar3,1,8,0x50);
        iVar5 = local_f4;
      }
      FUN_016dd1aa(iVar5 + iVar6,local_80,0x50);
      local_f0 = iVar3 + 1;
      iVar6 = iVar6 + 0x50;
    }
    local_120 = local_f8;
    local_11c = local_f4;
    local_118 = local_f0;
    DataMemoryBarrier(0xb);
    if (DAT_018d7d14 != 0) goto LAB_00d59ae8;
    if (local_f0 == 0) goto LAB_00d59a48;
    dVar7 = 0.0;
    piVar4 = (int *)(local_f4 + 0x10);
    iVar5 = local_f0 * 0x50;
    do {
      if (*piVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00fb74b8(&DAT_00355539,0x52,&DAT_01874048);
      }
      pdVar1 = (double *)(piVar4 + 2);
      piVar4 = piVar4 + 0x14;
      iVar5 = iVar5 + -0x50;
      dVar7 = dVar7 + *pdVar1;
    } while (iVar5 != 0);
  }
  piVar4 = (int *)FUN_00a63b14(DAT_018d7d3c,4,0);
  uVar8 = FUN_01845ca8(SUB84(dVar7,0),(int)((ulonglong)dVar7 >> 0x20));
  if (dVar7 < -9.223372036854776e+18) {
    uVar8 = 0x8000000000000000;
  }
  if (9.223372036854775e+18 < dVar7) {
    uVar8 = 0x7fffffffffffffff;
  }
  if (NAN(dVar7)) {
    uVar8 = 0;
  }
  do {
    bVar2 = (bool)hasExclusiveAccess(piVar4 + 2);
  } while (!bVar2);
  *(undefined8 *)(piVar4 + 2) = uVar8;
  DataMemoryBarrier(0xb);
  do {
    iVar5 = *piVar4;
    bVar2 = (bool)hasExclusiveAccess(piVar4);
  } while (!bVar2);
  *piVar4 = iVar5 + -1;
  if (iVar5 == 1) {
    DataMemoryBarrier(0xb);
    FUN_012c0df4(piVar4);
  }
LAB_00d59ae8:
  FUN_00c6ffbc(param_1 + 0x288,&local_120);
  if (*param_2 != 0) {
    thunk_FUN_016d3fb4(param_2[1]);
  }
  return;
}


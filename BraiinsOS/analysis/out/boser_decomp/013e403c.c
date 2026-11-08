// FUN_013e403c @ 013e403c size=1128 calls_out=10 calls_in=2
// strings: InvalidParamSegmentInvalidParamInvalidCatchAll | InvalidParamSegmentInvalidParamInvalidCatchAll | InvalidParamSegmentInvalidParamInvalidCatchAll | InvalidParamSegmentInvalidParamInvalidCatchAll | FieldSet corrupted (this is a bug)

void FUN_013e403c(undefined4 *param_1,short ****param_2,undefined4 param_3,int param_4,
                 undefined4 param_5)

{
  short ***pppsVar1;
  short ***pppsVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  short ***pppsVar6;
  undefined4 uVar7;
  undefined4 *puVar8;
  char *pcVar9;
  short ***pppsVar10;
  short ***pppsVar11;
  bool bVar12;
  short ****local_164;
  short *****local_160;
  code *local_15c;
  int *local_158;
  undefined *local_154;
  short *****local_150;
  undefined4 local_14c;
  undefined4 local_148;
  undefined4 local_144;
  short ****local_140;
  undefined **local_13c;
  int *local_138;
  short ****local_134;
  short *****local_130;
  short ***local_12c;
  short ***local_128;
  short ***local_124;
  short ***local_120;
  short ***local_11c;
  short local_118 [36];
  undefined1 auStack_d0 [160];
  short ****local_30;
  short *****local_2c;
  undefined1 *local_28;
  
  local_164 = param_2;
  if ((DAT_01d50f88 < 2) &&
     (((DAT_01d4e5a8 - 1 < 2 ||
       ((DAT_01d4e5a8 != 0 && (cVar3 = FUN_01aaafa8(&DAT_01d4e5a0), cVar3 != '\0')))) &&
      (iVar4 = FUN_01aaa278(DAT_01d4e5a0), iVar4 != 0)))) {
    local_128 = *(short ****)(DAT_01d4e5a0 + 0x20);
    if (local_128 == (short ***)0x0) {
LAB_013e448c:
                    /* WARNING: Subroutine does not return */
      FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,&DAT_01cf30d0);
    }
    local_13c = &local_154;
    local_124 = *(short ****)(DAT_01d4e5a0 + 0x24);
    local_120 = *(short ****)(DAT_01d4e5a0 + 0x28);
    local_158 = (int *)(DAT_01d4e5a0 + 0x1c);
    local_12c = (short ***)*local_158;
    local_140 = &local_12c;
    local_160 = &local_140;
    local_11c = (short ***)0x0;
    local_15c = (code *)0x1;
    local_150 = &local_134;
    local_134 = (short ****)&local_164;
    local_138 = (int *)&DAT_01d2ea4c;
    local_154 = &DAT_0058c52a;
    local_130 = (short *****)FUN_013e4560;
    FUN_01aaaecc(DAT_01d4e5a0,&local_160);
    iVar4 = DAT_01d4e5a0;
    if ((DAT_01d51ae9 == '\0') && (3 < DAT_01d51b00)) {
      local_2c = *(short ******)(DAT_01d4e5a0 + 0x14);
      local_28 = *(undefined1 **)(DAT_01d4e5a0 + 0x18);
      local_30 = (short ****)&SUB_00000004;
      DataMemoryBarrier(0xb);
      puVar8 = DAT_01d4edc8;
      if (DAT_01d51174 != 2) {
        puVar8 = &DAT_01cfc5e0;
      }
      pcVar9 = DAT_01d4edc4;
      if (DAT_01d51174 != 2) {
        pcVar9 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
      }
      iVar5 = (*(code *)puVar8[3])(pcVar9,&local_30);
      if (iVar5 != 0) {
        FUN_01aaa328(iVar4,pcVar9,puVar8[4],&local_30,&local_160);
      }
    }
  }
  else {
    iVar4 = DAT_01d4e5a0;
    if ((DAT_01d51ae9 == '\0') && (3 < DAT_01d51b00)) {
      local_148 = *(undefined4 *)(DAT_01d4e5a0 + 0x14);
      local_144 = *(undefined4 *)(DAT_01d4e5a0 + 0x18);
      local_14c = 4;
      DataMemoryBarrier(0xb);
      puVar8 = DAT_01d4edc8;
      if (DAT_01d51174 != 2) {
        puVar8 = &DAT_01cfc5e0;
      }
      pcVar9 = DAT_01d4edc4;
      if (DAT_01d51174 != 2) {
        pcVar9 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
      }
      iVar5 = (*(code *)puVar8[3])(pcVar9,&local_14c);
      if (iVar5 != 0) {
        local_138 = (int *)(DAT_01d4e5a0 + 0x1c);
        local_12c = (short ***)*local_138;
        local_128 = *(short ****)(DAT_01d4e5a0 + 0x20);
        if (local_128 == (short ***)0x0) goto LAB_013e448c;
        local_30 = &local_12c;
        local_124 = *(short ****)(DAT_01d4e5a0 + 0x24);
        local_120 = *(short ****)(DAT_01d4e5a0 + 0x28);
        local_2c = &local_134;
        local_140 = (short ****)&local_30;
        local_13c = (undefined **)&DAT_00000001;
        local_130 = (short *****)&local_160;
        local_11c = (short ***)0x0;
        local_28 = &DAT_01d2ea4c;
        local_134 = (short ****)&DAT_0058c52a;
        local_15c = FUN_013e4560;
        local_160 = &local_164;
        FUN_01aaa328(iVar4,pcVar9,puVar8[4],&local_14c,&local_140);
      }
    }
  }
  (**(code **)(param_4 + 0xc))(&local_12c,param_3,param_2,param_5);
  pppsVar6 = local_11c;
  pppsVar2 = local_120;
  pppsVar1 = local_12c;
  if (local_12c == (short ***)0x80000000) {
    uVar7 = 1;
    iVar4 = 4;
    pppsVar6 = local_128;
  }
  else {
    bVar12 = local_124 != (short ***)0x0;
    pppsVar10 = local_128 + (int)local_124 * 0x3a;
    local_12c = local_128;
    local_124 = pppsVar1;
    local_120 = pppsVar10;
    if (bVar12) {
      pppsVar1 = local_128;
      do {
        pppsVar11 = pppsVar1 + 0x3a;
        if (*(short *)pppsVar1 == 2) goto LAB_013e4438;
        local_118[0] = *(short *)pppsVar1;
        FUN_01bed4e2((uint)local_118 | 2,(short *)((int)pppsVar1 + 2),0xe6);
        FUN_013c7920(auStack_d0);
        pppsVar11 = param_2[0xb];
        if (pppsVar11 == param_2[9]) {
          FUN_013e6354(param_2 + 9);
        }
        FUN_01bed4e2(param_2[10] + (int)pppsVar11 * 0x3a,local_118,0xe8);
        param_2[0xb] = (short ***)((int)pppsVar11 + 1);
        pppsVar11 = pppsVar1 + 0x3a;
        pppsVar1 = pppsVar1 + 0x3a;
      } while (pppsVar11 != pppsVar10);
      pppsVar11 = pppsVar10;
LAB_013e4438:
      local_128 = pppsVar11;
    }
    FUN_013d5d08(&local_12c);
    uVar7 = 0;
    iVar4 = 8;
    param_1[1] = pppsVar2;
  }
  *(short ****)((int)param_1 + iVar4) = pppsVar6;
  *param_1 = uVar7;
  return;
}


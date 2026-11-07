// FUN_01635f84 @ 01635f84 size=688 calls_out=6 calls_in=2
// strings: signal driver gone

void FUN_01635f84(undefined4 *param_1,uint param_2,undefined4 *param_3)

{
  code *pcVar1;
  bool bVar2;
  undefined4 *puVar3;
  int *piVar4;
  int iVar5;
  uint uVar6;
  int *piVar7;
  uint *local_50;
  code *local_4c;
  uint local_44;
  uint local_40 [3];
  undefined *local_34;
  char local_30 [5];
  undefined3 uStack_2b;
  uint *local_28;
  code *local_24;
  undefined **local_20;
  int local_1c;
  uint **local_14;
  
  local_44 = param_2;
  if (((int)param_2 < 1) ||
     ((puVar3 = param_1, param_2 < 0x14 &&
      (puVar3 = (undefined4 *)0x80b10, (1 << (param_2 & 0xff) & 0x80b10U) != 0)))) {
    local_28 = &local_44;
    local_24 = FUN_00fac2b8;
    FUN_00600d2c(local_40,&DAT_00582382,&local_28);
    FUN_01650c14(&local_50,0x28,local_40);
  }
  else {
    if (param_3 != (undefined4 *)0xffffffff) {
      puVar3 = (undefined4 *)*param_3;
    }
    if (param_3 == (undefined4 *)0xffffffff || puVar3 == (undefined4 *)0x0) {
      FUN_015e79d4(&local_28,0x28,"signal driver gone",0x12);
      if ((char)local_28 != '\x04') {
        local_4c = local_24;
        local_50 = local_28;
        goto LAB_01635ff8;
      }
    }
    DataMemoryBarrier(0xb);
    if (DAT_018d90e8 != 0) {
      FUN_016449a0();
    }
    local_34 = &DAT_018d90d8;
    if (local_44 - 1 < DAT_018d90e4) {
      local_30[0] = '\x04';
      iVar5 = DAT_018d90e0 + (local_44 - 1) * 0x10;
      DataMemoryBarrier(0xb);
      if (*(int *)(iVar5 + 8) != 0) {
        local_20 = &local_34;
        local_24 = (code *)&local_44;
        local_28 = (uint *)local_30;
        local_14 = &local_28;
        local_1c = iVar5;
        FUN_015eedc4(iVar5 + 8,0,&local_14,&DAT_018ac418,&DAT_018ac4ac);
      }
      if (local_30[0] != '\x04') {
        local_4c = (code *)CONCAT31(uStack_2b,local_30[4]);
        local_50 = (uint *)CONCAT31(local_30._1_3_,local_30[0]);
        goto LAB_01636180;
      }
      if (*(char *)(iVar5 + 0xc) == '\0') {
        FUN_015e79d4(&local_50,0x28,&DAT_0041317a,0x21);
      }
      else {
        local_50 = (uint *)CONCAT31(local_50._1_3_,4);
      }
    }
    else {
      FUN_015e79d4(&local_50,0x28,&DAT_005643d0,0x10);
    }
  }
LAB_01635ff8:
  if ((char)local_50 == '\x04') {
    DataMemoryBarrier(0xb);
    if (DAT_018d90e8 != 0) {
      FUN_016449a0();
    }
    local_40[0] = param_2;
    if ((DAT_018d90e4 <= param_2 - 1) || (DAT_018d90e0 == 0)) {
      local_28 = local_40;
      local_24 = (code *)&LAB_00fac484;
                    /* WARNING: Subroutine does not return */
      FUN_00faa478(&DAT_005912a2,&local_28,&DAT_018ac9d8);
    }
    piVar4 = *(int **)(DAT_018d90e0 + (param_2 - 1) * 0x10);
    do {
      iVar5 = *piVar4;
      bVar2 = (bool)hasExclusiveAccess(piVar4);
    } while (!bVar2);
    *piVar4 = iVar5 + 1;
    if (iVar5 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xfdee,0x1636230);
      (*pcVar1)();
    }
    uVar6 = piVar4[0x27];
    piVar7 = piVar4 + 0x28;
    DataMemoryBarrier(0xb);
    do {
      bVar2 = (bool)hasExclusiveAccess(piVar7);
    } while (!bVar2);
    *piVar7 = *piVar7 + 1;
    param_1[1] = piVar4;
    param_1[2] = uVar6 & 0xfffffffe;
    *param_1 = 0;
    return;
  }
LAB_01636180:
  param_1[1] = local_50;
  param_1[2] = local_4c;
  *param_1 = 1;
  return;
}


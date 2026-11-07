// FUN_01ac1a94 @ 01ac1a94 size=660 calls_out=9 calls_in=3
// strings: 

uint FUN_01ac1a94(undefined4 *param_1)

{
  code *pcVar1;
  int iVar2;
  uint uVar3;
  undefined *puVar4;
  uint uVar5;
  int *piVar6;
  uint uVar7;
  bool bVar8;
  undefined8 uVar9;
  uint local_54;
  undefined *local_50;
  int local_4c;
  undefined *local_48;
  undefined4 local_44;
  undefined **local_40;
  code *local_3c;
  undefined **local_38;
  code *local_34;
  undefined **local_30;
  code *local_2c;
  undefined *local_28;
  code *local_24;
  
  FUN_019785a4();
  FUN_019784c8(&local_40);
  if ((local_40 == (undefined **)0x1) || (*(uint *)((int)local_3c + 0x14) < 2)) {
    FUN_00a97e8c(local_3c,(uint)local_38 & 0xff);
    FUN_019785a4();
    uVar7 = DAT_01d4fd84;
    DataMemoryBarrier(0xb);
    do {
      local_54 = DAT_01d4fd84;
      uVar3 = DAT_01d4fd84 + 1;
      bVar8 = (bool)hasExclusiveAccess(0x1d4fd84);
    } while (!bVar8);
    DataMemoryBarrier(0xb);
    bVar8 = 0xff < DAT_01d4fd84;
    DAT_01d4fd84 = uVar3;
    if (bVar8) {
      if (((DAT_01d51b08 & 0x7fffffff) == 0) || (iVar2 = FUN_0197ac0c(), iVar2 != 0)) {
        local_2c = FUN_012fd02c;
        local_3c = FUN_012fd02c;
        local_40 = (undefined **)&local_54;
        local_30 = (undefined **)&DAT_0056f0e0;
        local_38 = &local_48;
        local_44 = 0x20;
        local_48 = &DAT_0056b088;
        local_34 = (code *)&LAB_018a13b8;
                    /* WARNING: Subroutine does not return */
        FUN_012fb100(&DAT_005b1129,&local_40,&DAT_01d2f35c);
      }
      uVar9 = thunk_FUN_01bee35a(0,0x240);
      uVar3 = *(uint *)((int)uVar9 + (int)((ulonglong)uVar9 >> 0x20));
      if (uVar3 < 3) {
        piVar6 = (int *)FUN_019b03e8();
      }
      else {
        piVar6 = (int *)(uVar3 - 8);
        do {
          iVar2 = *piVar6;
          bVar8 = (bool)hasExclusiveAccess(piVar6);
        } while (!bVar8);
        *piVar6 = iVar2 + 1;
        if (iVar2 < 0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)software_udf(0xfdee,0x1ac1d24);
          (*pcVar1)();
        }
      }
      puVar4 = (undefined *)piVar6[4];
      if (puVar4 == (undefined *)0x0) {
        ClearExclusiveLocal();
        if (DAT_01d51ab0 == 0 && DAT_01d51ab4 == 0) {
          puVar4 = (undefined *)0x0;
          local_4c = DAT_01d51ab0;
        }
        else {
          puVar4 = &DAT_0056f91c;
          local_4c = 4;
          if (DAT_01d51ab0 != piVar6[2] || DAT_01d51ab4 != piVar6[3]) {
            puVar4 = (undefined *)0x0;
          }
        }
      }
      else {
        local_4c = piVar6[5] + -1;
      }
      if (puVar4 == (undefined *)0x0) {
        local_4c = 9;
      }
      local_48 = &DAT_0056b088;
      local_50 = &DAT_00531aad;
      if (puVar4 != (undefined *)0x0) {
        local_50 = puVar4;
      }
      local_44 = 0x20;
      local_30 = &local_48;
      local_38 = (undefined **)&local_54;
      local_40 = &local_50;
      local_24 = FUN_012fd02c;
      local_28 = &DAT_0056f0e0;
      local_2c = (code *)&LAB_018a13b8;
      local_34 = FUN_012fd02c;
      local_3c = (code *)&LAB_018a13b8;
      FUN_019a896c(&DAT_00531ab6,&local_40);
      DataMemoryBarrier(0xb);
      do {
        iVar2 = *piVar6;
        bVar8 = (bool)hasExclusiveAccess(piVar6);
      } while (!bVar8);
      *piVar6 = iVar2 + -1;
      if (iVar2 == 1) {
        DataMemoryBarrier(0xb);
        FUN_019a2ffc(piVar6);
      }
    }
  }
  else {
    *(uint *)((int)local_3c + 0x14) = *(uint *)((int)local_3c + 0x14) - 1;
    uVar5 = *(int *)((int)local_3c + 0x10) + 1;
    uVar7 = *(uint *)(*(int *)((int)local_3c + 0xc) + *(int *)((int)local_3c + 0x10) * 4);
    uVar3 = uVar5 - *(uint *)((int)local_3c + 8);
    if (uVar5 < *(uint *)((int)local_3c + 8)) {
      uVar3 = uVar5;
    }
    *(uint *)((int)local_3c + 0x10) = uVar3;
    FUN_00a97e8c(local_3c,(uint)local_38 & 0xff);
  }
  *param_1 = 1;
  param_1[1] = uVar7;
  return uVar7;
}


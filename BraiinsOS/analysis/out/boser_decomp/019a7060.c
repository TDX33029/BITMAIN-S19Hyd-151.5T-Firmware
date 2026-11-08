// FUN_019a7060 @ 019a7060 size=624 calls_out=8 calls_in=3
// strings: a formatting trait implementation returned an error when the underlying stream did not

void FUN_019a7060(uint *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  undefined4 *puVar4;
  uint *puVar5;
  int iVar6;
  uint *puVar7;
  code *pcVar8;
  uint uVar9;
  uint uVar10;
  undefined4 uVar11;
  undefined4 *puVar12;
  byte bVar13;
  uint uVar14;
  uint uVar15;
  undefined8 uVar16;
  uint *local_34;
  uint local_30;
  undefined4 *local_2c;
  uint **local_28;
  
  uVar16 = thunk_FUN_01bee35a();
  puVar7 = (uint *)((ulonglong)uVar16 >> 0x20);
  iVar6 = (int)uVar16;
  uVar9 = *(uint *)(iVar6 + 0x238);
  uVar10 = *(uint *)(iVar6 + 0x23c);
  if (uVar9 == 0 && uVar10 == 0) {
    ClearExclusiveLocal();
    uVar14 = DAT_01d51ab8;
    uVar15 = DAT_01d51abc;
    do {
      uVar3 = DAT_01d51abc;
      uVar2 = DAT_01d51ab8;
      uVar9 = uVar14 + 1;
      uVar10 = uVar15 + (0xfffffffe < uVar14);
      if (CARRY4(uVar15,(uint)(0xfffffffe < uVar14))) {
        FUN_019a7340();
        goto LAB_019a72b8;
      }
      if (DAT_01d51ab8 == uVar14 && DAT_01d51abc == uVar15) {
        bVar1 = (bool)hasExclusiveAccess(0x1d51ab8);
        if (bVar1) {
          DAT_01d51ab8 = uVar9;
          DAT_01d51abc = uVar10;
        }
        bVar13 = 0;
        if (bVar1) {
          bVar13 = 0xff;
        }
      }
      else {
        bVar13 = 0;
        ClearExclusiveLocal();
      }
      uVar14 = uVar2;
      uVar15 = uVar3;
    } while (!(bool)(bVar13 & 1));
    *(uint *)(iVar6 + 0x238) = uVar9;
    *(uint *)(iVar6 + 0x23c) = uVar10;
  }
  ClearExclusiveLocal();
  if (uVar9 == *puVar7 && uVar10 == puVar7[1]) {
    uVar9 = puVar7[3] + 1;
    if (puVar7[3] == 0xffffffff) {
                    /* WARNING: Subroutine does not return */
      FUN_0130739c(&DAT_00526837,0x26,&DAT_01d27c2c);
    }
  }
  else {
    puVar5 = puVar7 + 2;
    do {
      if (*puVar5 != 0) {
        ClearExclusiveLocal();
        FUN_0197ade4();
        goto LAB_019a7160;
      }
      bVar1 = (bool)hasExclusiveAccess(puVar5);
    } while (!bVar1);
    *puVar5 = 1;
    DataMemoryBarrier(0xb);
LAB_019a7160:
    do {
      bVar1 = (bool)hasExclusiveAccess(puVar7);
    } while (!bVar1);
    *puVar7 = uVar9;
    puVar7[1] = uVar10;
    uVar9 = 1;
  }
  puVar7[3] = uVar9;
  local_28 = &local_34;
  *(undefined1 *)param_1 = 4;
  local_2c = (undefined4 *)param_1[1];
  local_30 = *param_1;
  local_34 = puVar7;
  iVar6 = FUN_012fa178(&local_30,&DAT_01d276ec,param_3,param_4);
  puVar4 = local_2c;
  uVar9 = local_30 & 0xff;
  if (iVar6 == 0) {
    if ((uVar9 != 4) && (uVar9 == 3)) {
      uVar11 = *local_2c;
      puVar12 = (undefined4 *)local_2c[1];
      pcVar8 = (code *)*puVar12;
      if (pcVar8 != (code *)0x0) {
        (*pcVar8)(uVar11);
      }
      if (puVar12[1] != 0) {
        thunk_FUN_01be4678(uVar11);
      }
      thunk_FUN_01be4678(puVar4);
    }
  }
  else {
    if (uVar9 == 4) {
LAB_019a72b8:
                    /* WARNING: Subroutine does not return */
      FUN_012fb100("a formatting trait implementation returned an error when the underlying stream did not"
                   ,0xad,&DAT_01d276c4);
    }
    *param_1 = local_30;
    param_1[1] = (uint)local_2c;
  }
  uVar9 = local_34[3];
  local_34[3] = uVar9 - 1;
  if (uVar9 - 1 == 0) {
    do {
      bVar1 = (bool)hasExclusiveAccess(local_34);
    } while (!bVar1);
    *local_34 = 0;
    local_34[1] = 0;
    puVar7 = local_34 + 2;
    DataMemoryBarrier(0xb);
    do {
      uVar9 = *puVar7;
      bVar1 = (bool)hasExclusiveAccess(puVar7);
    } while (!bVar1);
    *puVar7 = 0;
    if (uVar9 == 2) {
      FUN_01be6c3c(0xf0,puVar7,0x81,1);
      return;
    }
  }
  return;
}


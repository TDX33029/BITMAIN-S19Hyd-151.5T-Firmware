// FUN_019a7988 @ 019a7988 size=736 calls_out=9 calls_in=3
// strings: stdout | a formatting trait implementation returned an error when the underlying stream did not

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_019a7988(undefined4 param_1,undefined4 param_2)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  uint *puVar6;
  int iVar7;
  code *pcVar8;
  uint uVar9;
  uint uVar10;
  byte bVar11;
  uint uVar12;
  uint uVar13;
  undefined4 *puVar14;
  undefined8 uVar15;
  char *local_50;
  undefined4 local_4c;
  char **local_48;
  undefined4 *local_44;
  char **local_40;
  undefined4 *puStack_3c;
  char **local_38;
  undefined4 *local_34;
  uint **local_30;
  code *pcStack_2c;
  
  local_4c = 6;
  local_50 = "stdout";
  DataMemoryBarrier(0xb);
  uVar5 = 0;
  if (DAT_01d50330 != 0) {
    uVar5 = FUN_019a7d0c();
  }
  uVar15 = thunk_FUN_01bee35a(uVar5,0x238);
  puVar6 = (uint *)((int)uVar15 + (int)((ulonglong)uVar15 >> 0x20));
  uVar9 = *puVar6;
  uVar10 = puVar6[1];
  if (uVar9 == 0 && uVar10 == 0) {
    ClearExclusiveLocal();
    uVar12 = DAT_01d51ab8;
    uVar13 = DAT_01d51abc;
    do {
      uVar3 = DAT_01d51abc;
      uVar2 = DAT_01d51ab8;
      uVar9 = uVar12 + 1;
      uVar10 = uVar13 + (0xfffffffe < uVar12);
      if (CARRY4(uVar13,(uint)(0xfffffffe < uVar12))) {
        FUN_019a7340();
        goto LAB_019a7c40;
      }
      if (DAT_01d51ab8 == uVar12 && DAT_01d51abc == uVar13) {
        bVar1 = (bool)hasExclusiveAccess(0x1d51ab8);
        if (bVar1) {
          DAT_01d51ab8 = uVar9;
          DAT_01d51abc = uVar10;
        }
        bVar11 = 0;
        if (bVar1) {
          bVar11 = 0xff;
        }
      }
      else {
        bVar11 = 0;
        ClearExclusiveLocal();
      }
      uVar12 = uVar2;
      uVar13 = uVar3;
    } while (!(bool)(bVar11 & 1));
    *puVar6 = uVar9;
    puVar6[1] = uVar10;
  }
  ClearExclusiveLocal();
  if (uVar9 == DAT_01d50308 && uVar10 == DAT_01d5030c) {
    iVar7 = DAT_01d50314 + 1;
    if (DAT_01d50314 == -1) {
                    /* WARNING: Subroutine does not return */
      FUN_0130739c(&DAT_00526837,0x26,&DAT_01d27c2c);
    }
  }
  else {
    do {
      if (DAT_01d50310 != 0) {
        ClearExclusiveLocal();
        FUN_0197ade4();
        goto LAB_019a7abc;
      }
      bVar1 = (bool)hasExclusiveAccess(0x1d50310);
    } while (!bVar1);
    DAT_01d50310 = 1;
    DataMemoryBarrier(0xb);
LAB_019a7abc:
    do {
      bVar1 = (bool)hasExclusiveAccess(0x1d50308);
    } while (!bVar1);
    iVar7 = 1;
    DAT_01d50308 = uVar9;
    DAT_01d5030c = uVar10;
  }
  local_48 = (char **)CONCAT31(local_48._1_3_,4);
  local_40 = (char **)&DAT_01d50308;
  local_34 = local_44;
  local_38 = local_48;
  local_30 = (uint **)&local_40;
  DAT_01d50314 = iVar7;
  iVar7 = FUN_012fa178(&local_38,&DAT_01d2771c,param_1,param_2);
  puVar4 = local_34;
  uVar9 = (uint)local_38 & 0xff;
  if (iVar7 == 0) {
    if ((uVar9 != 4) && (uVar9 == 3)) {
      uVar5 = *local_34;
      puVar14 = (undefined4 *)local_34[1];
      pcVar8 = (code *)*puVar14;
      if (pcVar8 != (code *)0x0) {
        (*pcVar8)(uVar5);
      }
      if (puVar14[1] != 0) {
        thunk_FUN_01be4678(uVar5);
      }
      thunk_FUN_01be4678(puVar4);
    }
  }
  else {
    if (uVar9 == 4) {
LAB_019a7c40:
                    /* WARNING: Subroutine does not return */
      FUN_012fb100("a formatting trait implementation returned an error when the underlying stream did not"
                   ,0xad,&DAT_01d276c4);
    }
    local_44 = local_34;
    local_48 = local_38;
  }
  uVar9 = (uint)local_40[3];
  local_40[3] = (char *)(uVar9 - 1);
  if (uVar9 - 1 == 0) {
    do {
      bVar1 = (bool)hasExclusiveAccess(local_40);
    } while (!bVar1);
    *local_40 = (char *)0x0;
    local_40[1] = (char *)0x0;
    puVar6 = (uint *)(local_40 + 2);
    DataMemoryBarrier(0xb);
    do {
      uVar9 = *puVar6;
      bVar1 = (bool)hasExclusiveAccess(puVar6);
    } while (!bVar1);
    *puVar6 = 0;
    if (uVar9 == 2) {
      FUN_01be6c3c(0xf0,puVar6,0x81,1);
    }
  }
  if ((char)local_48 != '\x04') {
    pcStack_2c = FUN_019a7d7c;
    local_38 = &local_50;
    puStack_3c = local_44;
    local_40 = local_48;
    local_34 = &DAT_0197a814;
    local_30 = (uint **)&local_40;
                    /* WARNING: Subroutine does not return */
    FUN_012fb100(&DAT_005744f9,&local_38,&DAT_01d27774);
  }
  return;
}


// FUN_015ef1b0 @ 015ef1b0 size=752 calls_out=9 calls_in=2
// strings: stdout | a formatting trait implementation returned an error when the underlying stream did not

/* WARNING: Removing unreachable block (ram,0x015ef22c) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_015ef1b0(undefined4 param_1,undefined4 param_2)

{
  bool bVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  uint *puVar4;
  int iVar5;
  code *pcVar6;
  uint uVar7;
  uint uVar8;
  undefined4 *puVar9;
  undefined8 uVar10;
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
  uVar3 = 0;
  if (DAT_018d9080 != 0) {
    uVar3 = FUN_015ef544();
  }
  uVar10 = thunk_FUN_016de0ee(uVar3,0x240);
  puVar4 = (uint *)((int)uVar10 + (int)((ulonglong)uVar10 >> 0x20));
  uVar7 = *puVar4;
  uVar8 = puVar4[1];
  if (uVar7 == 0 && uVar8 == 0) {
    ClearExclusiveLocal();
    do {
      uVar7 = DAT_018dd9a8 + 1;
      uVar8 = DAT_018dd9ac + (0xfffffffe < DAT_018dd9a8);
      if (CARRY4(DAT_018dd9ac,(uint)(0xfffffffe < DAT_018dd9a8))) {
        FUN_015ee8c8();
        goto LAB_015ef478;
      }
      bVar1 = (bool)hasExclusiveAccess(0x18dd9a8);
    } while (!bVar1);
    DAT_018dd9a8 = uVar7;
    DAT_018dd9ac = uVar8;
    *puVar4 = uVar7;
    puVar4[1] = uVar8;
  }
  ClearExclusiveLocal();
  if (uVar7 == DAT_018d9058 && uVar8 == DAT_018d905c) {
    iVar5 = DAT_018d9064 + 1;
    if (DAT_018d9064 == -1) {
                    /* WARNING: Subroutine does not return */
      FUN_00fb74b8(&DAT_00410806,0x26,&DAT_018aaff4);
    }
  }
  else {
    do {
      if (DAT_018d9060 != 0) {
        ClearExclusiveLocal();
        FUN_015bf680();
        goto LAB_015ef2f4;
      }
      bVar1 = (bool)hasExclusiveAccess(0x18d9060);
    } while (!bVar1);
    DAT_018d9060 = 1;
    DataMemoryBarrier(0xb);
LAB_015ef2f4:
    do {
      bVar1 = (bool)hasExclusiveAccess(0x18d9058);
    } while (!bVar1);
    iVar5 = 1;
    DAT_018d9058 = uVar7;
    DAT_018d905c = uVar8;
  }
  local_48 = (char **)CONCAT31(local_48._1_3_,4);
  local_40 = (char **)&DAT_018d9058;
  local_34 = local_44;
  local_38 = local_48;
  local_30 = (uint **)&local_40;
  DAT_018d9064 = iVar5;
  iVar5 = FUN_00fa948c(&local_38,&DAT_018aab08,param_1,param_2);
  puVar2 = local_34;
  uVar7 = (uint)local_38 & 0xff;
  if (iVar5 == 0) {
    if ((uVar7 != 4) && (uVar7 == 3)) {
      uVar3 = *local_34;
      puVar9 = (undefined4 *)local_34[1];
      pcVar6 = (code *)*puVar9;
      if (pcVar6 != (code *)0x0) {
        (*pcVar6)(uVar3);
      }
      if (puVar9[1] != 0) {
        thunk_FUN_016d3fb4(uVar3);
      }
      thunk_FUN_016d3fb4(puVar2);
    }
  }
  else {
    if (uVar7 == 4) {
LAB_015ef478:
                    /* WARNING: Subroutine does not return */
      FUN_00faa478("a formatting trait implementation returned an error when the underlying stream did not"
                   ,0xad,&DAT_018aaab0);
    }
    local_44 = local_34;
    local_48 = local_38;
  }
  uVar7 = (uint)local_40[3];
  local_40[3] = (char *)(uVar7 - 1);
  if (uVar7 - 1 == 0) {
    do {
      bVar1 = (bool)hasExclusiveAccess(local_40);
    } while (!bVar1);
    *local_40 = (char *)0x0;
    local_40[1] = (char *)0x0;
    puVar4 = (uint *)(local_40 + 2);
    DataMemoryBarrier(0xb);
    do {
      uVar7 = *puVar4;
      bVar1 = (bool)hasExclusiveAccess(puVar4);
    } while (!bVar1);
    *puVar4 = 0;
    if (uVar7 == 2) {
      FUN_016d6968(0xf0,puVar4,0x81,1);
    }
  }
  if ((char)local_48 != '\x04') {
    pcStack_2c = FUN_015ef5b4;
    local_38 = &local_50;
    puStack_3c = local_44;
    local_40 = local_48;
    local_34 = &DAT_015bee04;
    local_30 = (uint **)&local_40;
                    /* WARNING: Subroutine does not return */
    FUN_00faa478(&DAT_0056faa6,&local_38,&DAT_018aab78);
  }
  return;
}


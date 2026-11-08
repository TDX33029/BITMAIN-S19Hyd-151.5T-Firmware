// FUN_011f0ab8 @ 011f0ab8 size=1004 calls_out=11 calls_in=15
// strings: internal error: entered unreachable code: invalid Once state

int FUN_011f0ab8(undefined4 param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint *puVar6;
  undefined8 uVar7;
  undefined4 local_11c;
  uint local_c0;
  uint *local_bc;
  uint local_b8;
  uint *local_b4;
  uint uStack_b0;
  uint uStack_ac;
  int local_a8;
  int local_a4;
  undefined4 local_a0;
  int local_9c;
  int *piStack_98;
  undefined4 uStack_94;
  int *local_90;
  undefined4 local_8c;
  uint local_50;
  uint *local_4c;
  uint local_48;
  uint *puStack_44;
  uint uStack_40;
  uint local_3c;
  int *local_30;
  undefined4 local_2c;
  
  FUN_016dd1aa(&local_a8,param_1,0x80);
  uVar7 = CONCAT44(local_a0,local_a4);
  do {
    iVar5 = *local_30;
    bVar2 = (bool)hasExclusiveAccess(local_30);
  } while (!bVar2);
  *local_30 = iVar5 + 1;
  if (iVar5 < 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xfdee,0x11f0ec4);
    (*pcVar1)();
  }
  if (local_a8 == 0) {
    uVar7 = CONCAT44(local_2c,local_30);
  }
  else {
    if (local_a8 != 1) {
      if (local_9c - 2U < 2) {
        local_a4 = 0;
      }
      else if (local_9c != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa478("internal error: entered unreachable code: invalid Once state",0x79,
                     &DAT_018a9874);
      }
      uVar7 = CONCAT44(local_a0,local_a4);
      if (local_a4 == 0) {
        uVar7 = FUN_0123a948(piStack_98,uStack_94,local_90 + 2,local_8c);
      }
      DataMemoryBarrier(0xb);
      do {
        iVar5 = *local_90;
        bVar2 = (bool)hasExclusiveAccess(local_90);
      } while (!bVar2);
      *local_90 = iVar5 + -1;
      if (iVar5 == 1) {
        DataMemoryBarrier(0xb);
        FUN_0143daec(local_90,local_8c);
      }
      DataMemoryBarrier(0xb);
      do {
        iVar5 = *piStack_98;
        bVar2 = (bool)hasExclusiveAccess(piStack_98);
      } while (!bVar2);
      *piStack_98 = iVar5 + -1;
      if (iVar5 == 1) {
        DataMemoryBarrier(0xb);
        FUN_0143daec(piStack_98,uStack_94);
      }
    }
    DataMemoryBarrier(0xb);
    do {
      iVar5 = *local_30;
      bVar2 = (bool)hasExclusiveAccess(local_30);
    } while (!bVar2);
    *local_30 = iVar5 + -1;
    if (iVar5 == 1) {
      DataMemoryBarrier(0xb);
      FUN_0143daec(local_30,local_2c);
    }
  }
  local_11c = (undefined4)((ulonglong)uVar7 >> 0x20);
  thunk_FUN_016d3fb4(param_1);
  if ((local_50 & 0xff) == 6) {
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch((char)*local_4c) {
    case '\0':
      local_c0 = local_c0 & 0xffffff00;
      break;
    default:
      local_c0 = *local_4c;
      local_bc = (uint *)local_4c[1];
      local_b8 = local_4c[2];
      local_b4 = (uint *)local_4c[3];
      uStack_b0 = local_4c[4];
      uStack_ac = local_4c[5];
      break;
    case '\x03':
      puVar6 = (uint *)local_4c[3];
      uVar4 = local_4c[2];
      if (puVar6 == (uint *)0x0) {
        uVar3 = 1;
      }
      else {
        uVar3 = thunk_FUN_016d4a50(puVar6);
        if (uVar3 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00600af4(1,puVar6);
        }
      }
      FUN_016dd1aa(uVar3,uVar4,puVar6);
      local_c0 = CONCAT31(local_c0._1_3_,3);
      local_bc = puVar6;
      local_b8 = uVar3;
      local_b4 = puVar6;
      break;
    case '\x04':
      FUN_0115c22c((uint)&local_c0 | 4,local_4c + 1);
      local_c0 = CONCAT31(local_c0._1_3_,4);
      break;
    case '\x05':
      if (local_4c[3] == 0) {
        local_b4 = (uint *)0x0;
        local_bc = (uint *)0x0;
      }
      else {
        if (local_4c[1] == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00faa444(&DAT_018ac52c);
        }
        FUN_011f809c((uint)&local_c0 | 4,local_4c[1],local_4c[2]);
      }
      local_c0 = CONCAT31(local_c0._1_3_,5);
    }
  }
  else {
    local_c0 = local_50;
    local_bc = local_4c;
    local_b8 = local_48;
    local_b4 = puStack_44;
    uStack_b0 = uStack_40;
    uStack_ac = local_3c;
  }
  local_50 = local_c0;
  local_4c = local_bc;
  local_48 = local_b8;
  puStack_44 = local_b4;
  uStack_40 = uStack_b0;
  local_3c = uStack_ac;
  local_a0 = local_11c;
  local_a8 = 1;
  local_a4 = (int)uVar7;
  iVar5 = thunk_FUN_016d4a50(0x80);
  if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(8,0x80);
  }
  FUN_016dd1aa(iVar5,&local_a8,0x80);
  return iVar5;
}


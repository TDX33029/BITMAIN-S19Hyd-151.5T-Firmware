// FUN_01594a60 @ 01594a60 size=896 calls_out=11 calls_in=14
// strings: 

int FUN_01594a60(undefined4 param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  int iVar4;
  int *piVar5;
  undefined8 uVar6;
  int *local_f8;
  undefined4 local_f4;
  int local_f0;
  undefined4 uStack_ec;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 local_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 local_c0;
  undefined4 *local_bc;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  int local_a8;
  undefined8 local_a4;
  int local_9c;
  int *local_98;
  undefined4 local_94;
  int *local_90;
  undefined4 local_8c;
  int *local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 local_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 local_50;
  undefined4 *local_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  int *local_30;
  undefined4 local_2c;
  
  FUN_01bed4e2(&local_a8,param_1,0x80);
  uVar6 = CONCAT44(local_a4._4_4_,(int *)local_a4);
  do {
    iVar4 = *local_30;
    bVar2 = (bool)hasExclusiveAccess(local_30);
  } while (!bVar2);
  *local_30 = iVar4 + 1;
  if (iVar4 < 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xfdee,0x1594df8);
    (*pcVar1)();
  }
  if (local_a8 == 0) {
    uVar6 = CONCAT44(local_2c,local_30);
  }
  else {
    if (local_a8 != 1) {
      local_f4 = local_a4._4_4_;
      local_f0 = local_9c;
      local_f8 = (int *)local_a4;
      if (local_9c - 2U < 2) {
        piVar5 = (int *)0x0;
      }
      else {
        if (local_9c != 0) {
                    /* WARNING: Subroutine does not return */
          FUN_012fb100(&DAT_005342b4,0x79,&DAT_01d307b8);
        }
        local_f0 = 3;
        piVar5 = (int *)local_a4;
      }
      uVar6 = CONCAT44(local_a4._4_4_,piVar5);
      FUN_01532668(&local_f8);
      if (piVar5 == (int *)0x0) {
        uVar6 = FUN_01534d2c(local_98,local_94,local_90 + 2,local_8c);
      }
      DataMemoryBarrier(0xb);
      do {
        iVar4 = *local_90;
        bVar2 = (bool)hasExclusiveAccess(local_90);
      } while (!bVar2);
      *local_90 = iVar4 + -1;
      if (iVar4 == 1) {
        DataMemoryBarrier(0xb);
        FUN_0070451c(local_90,local_8c);
      }
      DataMemoryBarrier(0xb);
      do {
        iVar4 = *local_98;
        bVar2 = (bool)hasExclusiveAccess(local_98);
      } while (!bVar2);
      *local_98 = iVar4 + -1;
      if (iVar4 == 1) {
        DataMemoryBarrier(0xb);
        FUN_0070451c(local_98,local_94);
      }
    }
    DataMemoryBarrier(0xb);
    do {
      iVar4 = *local_30;
      bVar2 = (bool)hasExclusiveAccess(local_30);
    } while (!bVar2);
    *local_30 = iVar4 + -1;
    if (iVar4 == 1) {
      DataMemoryBarrier(0xb);
      FUN_0070451c(local_30,local_2c);
    }
  }
  local_f8 = local_88;
  local_f4 = uStack_84;
  local_f0 = uStack_80;
  uStack_ec = uStack_7c;
  local_e8 = local_78;
  uStack_e4 = uStack_74;
  uStack_e0 = uStack_70;
  uStack_dc = uStack_6c;
  uStack_d8 = uStack_68;
  local_d4 = local_64;
  uStack_d0 = uStack_60;
  uStack_cc = uStack_5c;
  uStack_c8 = uStack_58;
  uStack_c4 = uStack_54;
  thunk_FUN_01be4678(param_1);
  if ((char)local_50 == '\x06') {
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(*(undefined1 *)local_4c) {
    case 0:
      uVar3 = 0;
      break;
    case 1:
      local_c0 = *local_4c;
      local_bc = (undefined4 *)local_4c[1];
      local_b8 = local_4c[2];
      uStack_b4 = local_4c[3];
      uStack_b0 = local_4c[4];
      uStack_ac = local_4c[5];
      goto LAB_01594d44;
    case 2:
      local_b8 = local_4c[2];
      uStack_b4 = local_4c[3];
      uStack_b0 = local_4c[4];
      uStack_ac = local_4c[5];
      uVar3 = 2;
      break;
    case 3:
      FUN_006666fc((uint)&local_c0 | 4,local_4c[2],local_4c[3]);
      uVar3 = 3;
      break;
    case 4:
      FUN_014fcef8((uint)&local_c0 | 4,local_4c + 1);
      uVar3 = 4;
      break;
    case 5:
      FUN_0156aa80((uint)&local_c0 | 4,local_4c + 1);
      uVar3 = 5;
    }
    local_c0 = CONCAT31(local_c0._1_3_,uVar3);
  }
  else {
    local_c0 = local_50;
    local_bc = local_4c;
    local_b8 = local_48;
    uStack_b4 = uStack_44;
    uStack_b0 = uStack_40;
    uStack_ac = uStack_3c;
  }
LAB_01594d44:
  local_50 = local_c0;
  local_4c = local_bc;
  local_48 = local_b8;
  uStack_44 = uStack_b4;
  uStack_40 = uStack_b0;
  uStack_3c = uStack_ac;
  local_88 = local_f8;
  uStack_84 = local_f4;
  uStack_80 = local_f0;
  uStack_7c = uStack_ec;
  local_78 = local_e8;
  uStack_74 = uStack_e4;
  uStack_70 = uStack_e0;
  uStack_6c = uStack_dc;
  uStack_68 = uStack_d8;
  local_64 = local_d4;
  uStack_60 = uStack_d0;
  uStack_5c = uStack_cc;
  uStack_58 = uStack_c8;
  uStack_54 = uStack_c4;
  local_a8 = 1;
  local_a4 = uVar6;
  iVar4 = thunk_FUN_01be5118(0x80);
  if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0066439c(8,0x80);
  }
  FUN_01bed4e2(iVar4,&local_a8,0x80);
  return iVar4;
}


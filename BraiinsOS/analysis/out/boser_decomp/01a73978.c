// FUN_01a73978 @ 01a73978 size=1732 calls_out=20 calls_in=3
// strings: grpc-status | 6event /nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/tonic-0.13.1/src/status.rs:862 | grpc-message | grpc-message | grpc-status-details-binevent /nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/tonic-0.13.1/src/status.rs:471error_message | grpc-status-details-binevent /nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/tonic-0.13.1/src/status.rs:471error_message

void FUN_01a73978(undefined4 *param_1,int *param_2,undefined4 param_3)

{
  char *pcVar1;
  undefined *puVar2;
  int iVar3;
  undefined *puVar4;
  uint uVar5;
  undefined4 uVar6;
  bool bVar7;
  undefined8 uVar8;
  longlong lVar9;
  int local_178;
  uint local_174;
  int local_170;
  int local_16c;
  int local_150;
  int local_14c;
  undefined *local_148;
  undefined1 auStack_144 [4];
  char local_140;
  undefined1 auStack_110 [16];
  undefined *local_100;
  char *pcStack_fc;
  uint uStack_f8;
  int iStack_f4;
  undefined4 uStack_f0;
  undefined4 local_e8;
  undefined4 local_e4;
  undefined4 local_e0;
  int local_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined1 auStack_d0 [4];
  char local_cc;
  undefined *local_c8;
  char *local_c4;
  undefined4 local_c0;
  undefined4 uStack_bc;
  undefined *local_b8;
  char *pcStack_b4;
  uint uStack_b0;
  int iStack_ac;
  undefined4 uStack_a8;
  undefined *local_a0;
  char *local_9c;
  undefined *local_98;
  char *local_94;
  uint local_90;
  int local_8c;
  undefined8 local_88;
  undefined *local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  int local_74;
  int iStack_70;
  undefined *puStack_6c;
  undefined2 local_68;
  undefined *local_38;
  char *pcStack_34;
  uint uStack_30;
  int iStack_2c;
  undefined4 uStack_28;
  
  iVar3 = param_2[0xe];
  uVar8 = FUN_01ac635c(param_2[6],param_2[7]);
  FUN_0187b658(&local_b8,param_2[9],param_2[10]);
  FUN_017260a4(&local_150,param_2[0xc],param_2[0xd]);
  if (*param_2 == 0) {
    local_a0 = (undefined *)0x0;
  }
  else if (*param_2 == 1) {
    local_a0 = (undefined *)0x1;
  }
  else {
    local_16c = param_2[2];
    local_170 = param_2[3];
    local_174 = param_2[4];
    local_178 = param_2[5];
    local_a0 = (undefined *)0x2;
  }
  local_80 = local_b8;
  uStack_7c = pcStack_b4;
  uStack_78 = uStack_b0;
  local_74 = local_150;
  iStack_70 = local_14c;
  puStack_6c = local_148;
  local_98 = (undefined *)local_16c;
  local_94 = (char *)local_170;
  local_90 = local_174;
  local_9c = (char *)0x0;
  local_8c = local_178;
  local_68 = (short)iVar3;
  local_88 = uVar8;
  FUN_01a68e2c(&local_150);
  FUN_00713444(param_3,&local_150);
  pcVar1 = "0";
  local_b8 = &DAT_01d2d23c;
  pcStack_b4 = "grpc-status";
  uStack_b0 = 0xb;
  iStack_ac = 0;
  puVar2 = (undefined *)0x1;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch((char)param_2[0x19]) {
  case '\x01':
    pcVar1 = "1";
    break;
  case '\x02':
    pcVar1 = "2";
    break;
  case '\x03':
    pcVar1 = "3";
    break;
  case '\x04':
    pcVar1 = "4";
    break;
  case '\x05':
    pcVar1 = "5";
    break;
  case '\x06':
    pcVar1 = "6";
    break;
  case '\a':
    pcVar1 = "7";
    break;
  case '\b':
    pcVar1 = "8";
    break;
  case '\t':
    pcVar1 = "9";
    break;
  case '\n':
    pcVar1 = "1";
    iVar3 = 0;
    do {
      if (((byte)"1"[iVar3] != 9) && (0x5e < (byte)"1"[iVar3] - 0x20)) {
LAB_01a7406c:
                    /* WARNING: Subroutine does not return */
        FUN_012fb12c(0,0,&DAT_01d2e4bc);
      }
      bVar7 = iVar3 == 0;
      iVar3 = 1;
    } while (bVar7);
    goto LAB_01a73ce0;
  case '\v':
    pcVar1 = "11";
    goto LAB_01a73ce0;
  case '\f':
    pcVar1 = "1";
    iVar3 = 0;
    do {
      if (((byte)"1"[iVar3] != 9) && (0x5e < (byte)"1"[iVar3] - 0x20)) goto LAB_01a7406c;
      bVar7 = iVar3 == 0;
      iVar3 = 1;
    } while (bVar7);
    goto LAB_01a73ce0;
  case '\r':
    pcVar1 = "1";
    iVar3 = 0;
    do {
      if (((byte)"1"[iVar3] != 9) && (0x5e < (byte)"1"[iVar3] - 0x20)) goto LAB_01a7406c;
      bVar7 = iVar3 == 0;
      iVar3 = 1;
    } while (bVar7);
    goto LAB_01a73ce0;
  case '\x0e':
    pcVar1 = "1";
    iVar3 = 0;
    do {
      if (((byte)"1"[iVar3] != 9) && (0x5e < (byte)"1"[iVar3] - 0x20)) goto LAB_01a7406c;
      bVar7 = iVar3 == 0;
      iVar3 = 1;
    } while (bVar7);
    goto LAB_01a73ce0;
  case '\x0f':
    pcVar1 = "1";
    iVar3 = 0;
    do {
      if (((byte)"1"[iVar3] != 9) && (0x5e < (byte)"1"[iVar3] - 0x20)) goto LAB_01a7406c;
      bVar7 = iVar3 == 0;
      iVar3 = 1;
    } while (bVar7);
    goto LAB_01a73ce0;
  case '\x10':
    pcVar1 = "1";
    iVar3 = 0;
    do {
      if (((byte)"1"[iVar3] != 9) && (0x5e < (byte)"1"[iVar3] - 0x20)) goto LAB_01a7406c;
      bVar7 = iVar3 == 0;
      iVar3 = 1;
    } while (bVar7);
LAB_01a73ce0:
    puVar2 = (undefined *)0x2;
  }
  local_94 = (char *)0x0;
  local_90 = local_90 & 0xffffff00;
  local_a0 = &DAT_01d2d23c;
  local_9c = pcVar1;
  local_98 = puVar2;
  FUN_00714c58(&local_150,param_3,&local_b8,&local_a0);
  if (local_140 != '\x02') {
    (**(code **)(local_150 + 0x10))(auStack_144,local_14c,local_148);
  }
  if (param_2[0x18] == 0) {
LAB_01a73f14:
    if (param_2[0x12] != 0) {
      FUN_00711178(&local_e8,"",param_2[0x11]);
      local_c8 = &DAT_01d2d23c;
      local_c4 = 
      "grpc-status-details-binevent /nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/tonic-0.13.1/src/status.rs:471error_message"
      ;
      local_c0 = 0x17;
      uStack_bc = 0;
      FUN_01ac6204(&local_150,local_e4,local_e0);
      FUN_019bb7e0(local_e8,local_e4);
      FUN_01a741b8(&local_a0,&local_150);
      local_b8 = local_98;
      pcStack_b4 = local_94;
      uStack_b0 = local_90;
      iStack_ac = local_8c;
      uStack_a8 = (undefined4)local_88;
      if (local_a0 != (undefined *)0x3 || local_9c != (char *)0x0) goto LAB_01a73ff8;
      local_38 = local_98;
      pcStack_34 = local_94;
      uStack_30 = local_90;
      iStack_2c = local_8c;
      uStack_28 = (undefined4)local_88;
      FUN_00714c58(&local_dc,param_3,&local_c8);
      if (local_cc != '\x02') {
        (**(code **)(local_dc + 0x10))(auStack_d0,uStack_d8,uStack_d4);
      }
    }
    *param_1 = 3;
    param_1[1] = 0;
  }
  else {
    local_150 = param_2[0x17];
    local_148 = &DAT_00567ea8;
    local_14c = param_2[0x18];
    lVar9 = FUN_0165574c(&local_150);
    puVar4 = (undefined *)((ulonglong)lVar9 >> 0x20);
    puVar2 = (undefined *)0x80000000;
    if ((int)lVar9 == 0) {
      lVar9 = 1;
    }
    else {
      uVar8 = FUN_0165574c(&local_150);
      uVar5 = (uint)((ulonglong)uVar8 >> 0x20);
      if ((int)uVar8 != 0) {
        uVar6 = 0;
        if (lVar9 < 0) {
LAB_01a73d98:
                    /* WARNING: Subroutine does not return */
          FUN_00664620(uVar6,puVar4);
        }
        if (puVar4 == (undefined *)0x0) {
          pcVar1 = (char *)0x1;
          puVar2 = (undefined *)0x0;
        }
        else {
          uVar6 = 1;
          pcVar1 = (char *)FUN_01298504(puVar4,1);
          puVar2 = puVar4;
          if (pcVar1 == (char *)0x0) goto LAB_01a73d98;
        }
        FUN_01bed4e2(pcVar1,(int)lVar9,puVar4);
        local_a0 = puVar2;
        local_9c = pcVar1;
        local_98 = puVar4;
        if ((uint)((int)puVar2 - (int)puVar4) < uVar5) {
          FUN_006520b4(&local_a0,puVar4,uVar5,1,1);
        }
        puVar2 = local_98;
        FUN_01bed4e2(local_9c + (int)local_98,(int)uVar8,uVar5);
        local_98 = puVar2 + uVar5;
        FUN_01655840(&local_150,&local_a0);
        lVar9 = CONCAT44(local_98,local_9c);
        puVar2 = local_a0;
      }
    }
    FUN_012834b0(auStack_110,(int)lVar9,(int)((ulonglong)lVar9 >> 0x20));
    if (puVar2 != (undefined *)0x80000000) {
      FUN_019bb7e0(puVar2,(int)lVar9);
    }
    local_c8 = &DAT_01d2d23c;
    local_c4 = "grpc-message";
    local_c0 = 0xc;
    uStack_bc = 0;
    FUN_01429274(&local_150,auStack_110);
    FUN_01a741b8(&local_a0,&local_150);
    local_b8 = local_98;
    pcStack_b4 = local_94;
    uStack_b0 = local_90;
    iStack_ac = local_8c;
    uStack_a8 = (undefined4)local_88;
    if (local_a0 == (undefined *)0x3 && local_9c == (char *)0x0) {
      local_100 = local_98;
      pcStack_fc = local_94;
      uStack_f8 = local_90;
      iStack_f4 = local_8c;
      uStack_f0 = (undefined4)local_88;
      FUN_00714c58(&local_dc,param_3,&local_c8);
      if (local_cc != '\x02') {
        (**(code **)(local_dc + 0x10))(auStack_d0,uStack_d8,uStack_d4);
      }
      goto LAB_01a73f14;
    }
LAB_01a73ff8:
    pcVar1 = local_9c;
    puVar2 = local_a0;
    local_b8 = local_98;
    pcStack_b4 = local_94;
    uStack_b0 = local_90;
    iStack_ac = local_8c;
    uStack_a8 = (undefined4)local_88;
    FUN_01bed4e2(param_1 + 7,(int)&local_88 + 4,0x4c);
    param_1[2] = local_b8;
    param_1[3] = pcStack_b4;
    param_1[4] = uStack_b0;
    param_1[5] = iStack_ac;
    param_1[6] = uStack_a8;
    *param_1 = puVar2;
    param_1[1] = pcVar1;
    if (local_c8 != (undefined *)0x0) {
      (**(code **)(local_c8 + 0x10))(&uStack_bc,local_c4,local_c0);
    }
  }
  return;
}


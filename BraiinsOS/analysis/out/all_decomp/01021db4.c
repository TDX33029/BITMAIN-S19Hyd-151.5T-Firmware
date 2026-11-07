// FUN_01021db4 @ 01021db4 size=2444 calls_out=14 calls_in=2
// strings: Size of table != 0; but no headers left!h2::hpack::decoder/nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/h2-0.4.7/src/hpack/decoder.rshpack::decodeevent /nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/h2-0.4.7/src/proto/streams/recv.rs:814h2::proto::streams::recv/nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/h2-0.4.7/src/proto/streams/recv.rs

/* WARNING: Restarted to delay deadcode elimination for space: stack */

uint FUN_01021db4(int param_1,int *param_2,undefined4 param_3,int *param_4)

{
  char cVar1;
  byte bVar2;
  undefined1 uVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  uint *puVar10;
  uint extraout_r1;
  uint extraout_r1_00;
  uint extraout_r1_01;
  uint extraout_r1_02;
  int iVar11;
  uint extraout_r1_03;
  uint extraout_r1_04;
  int iVar12;
  uint extraout_r1_05;
  uint uVar13;
  int iVar14;
  uint uVar15;
  uint uVar16;
  int iVar17;
  int iVar18;
  undefined4 local_134;
  undefined1 local_12e;
  char local_12d;
  int local_12c;
  uint local_128;
  int local_124;
  int *local_120;
  char *local_114;
  undefined1 *local_110;
  int *local_10c;
  undefined4 *local_108;
  int local_104;
  int *local_100;
  int local_fc;
  undefined1 *local_f8;
  int *local_f4;
  int *local_f0;
  int *local_ec;
  int local_e8;
  short *local_e4;
  uint local_e0;
  uint uStack_dc;
  uint local_d8;
  uint local_d4;
  uint local_d0;
  uint uStack_cc;
  uint uStack_c8;
  uint uStack_c4;
  uint local_c0;
  uint local_bc;
  uint uStack_b8;
  uint uStack_b4;
  uint local_b0;
  uint uStack_ac;
  uint uStack_a8;
  uint uStack_a4;
  uint local_a0;
  uint local_98;
  uint local_94;
  uint local_90;
  uint uStack_8c;
  uint local_88;
  uint uStack_84;
  uint uStack_80;
  uint uStack_7c;
  uint local_78;
  undefined2 local_74;
  undefined1 local_72;
  uint local_70;
  uint uStack_6c;
  uint uStack_68;
  uint uStack_64;
  uint local_60;
  uint uStack_5c;
  uint uStack_58;
  uint uStack_54;
  uint local_50;
  uint local_4c;
  uint local_48;
  uint uStack_44;
  uint local_40;
  uint uStack_3c;
  uint local_38;
  uint uStack_34;
  uint local_30;
  
  local_12c = 0;
  local_f8 = (undefined1 *)(param_1 + 0x40);
  local_12e = *(int *)(param_1 + 0x28) != 0;
  local_12d = '\0';
  uVar13 = 7;
  local_134 = param_3;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*local_f8) {
  case 1:
  case 3:
    uVar13 = 3;
    break;
  case 2:
  case 5:
    uVar13 = 4;
    break;
  case 4:
    uVar13 = 6;
    break;
  case 6:
  case 8:
    uVar13 = 5;
    break;
  case 9:
    uVar13 = (uint)*(byte *)(param_1 + 0x50);
    if (0xf < uVar13) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa36c(0,uVar13,0xf,&DAT_0188450c);
    }
    break;
  case 10:
    uVar13 = *(uint *)(param_1 + 0x48);
    break;
  case 0xb:
    goto switchD_01021df0_caseD_b;
  }
  local_12c = uVar13 + 0x27;
switchD_01021df0_caseD_b:
  local_f4 = (int *)(param_1 + 0x54);
  local_e4 = (short *)(param_1 + 0x94);
  if (*local_f4 != 0) {
    local_12c = *(int *)(param_1 + 0x5c) + local_12c + 0x27;
  }
  if (*local_e4 != 0) {
    local_12c = local_12c + 0x2a;
  }
  local_f0 = (int *)(param_1 + 100);
  iVar17 = *param_4;
  if (*local_f0 != 0) {
    local_12c = *(int *)(param_1 + 0x6c) + local_12c + 0x2a;
  }
  local_100 = (int *)(param_1 + 0x98);
  local_12c = local_12c + *local_100;
  local_ec = (int *)(param_1 + 0x74);
  local_fc = param_1 + 0x9c;
  local_124 = 0;
  local_128 = 0;
  if (*local_ec != 0) {
    local_12c = *(int *)(param_1 + 0x7c) + local_12c + 0x25;
  }
  *param_4 = 0;
  local_e8 = param_1 + 0x84;
  local_108 = &local_134;
  local_10c = &local_12c;
  local_110 = &local_12e;
  local_114 = &local_12d;
  if (iVar17 == 1) {
    param_4[0xc] = param_4[1];
  }
  local_38 = DAT_018d807c;
  local_48 = 2;
  local_120 = param_2;
  local_104 = param_1;
  if (DAT_018dd947 == 0) {
    local_90 = DAT_018d807c + 0x1c;
    local_94 = 0;
    local_98 = 4;
    FUN_01694880(&local_50,&local_98);
  }
  local_e0 = local_50;
  uStack_dc = local_4c;
  local_d8 = local_48;
  local_d4 = uStack_44;
  local_d0 = local_40;
  uStack_cc = uStack_3c;
  uStack_c8 = local_38;
  uStack_c4 = uStack_34;
  if (local_48 != 2) {
    uVar13 = uStack_44;
    if ((local_48 & 1) != 0) {
      uVar13 = uStack_44 + (*(int *)(local_40 + 8) - 1U & 0xfffffff8) + 8;
    }
    (**(code **)(local_40 + 0x30))(uVar13,&local_e0);
  }
  uVar5 = (uint)&local_98 | 1;
  uVar6 = (uint)&local_50 | 1;
  bVar4 = true;
  uVar13 = 0;
  do {
    if ((uint)local_120[1] <= uVar13) break;
    bVar2 = *(byte *)(*local_120 + uVar13);
    if ((char)bVar2 < '\0') {
      FUN_0101393c(&local_c0,&local_128,7);
      if ((char)local_c0 == '\x01') {
        uVar15 = local_c0 >> 8 & 0xff;
        uVar13 = extraout_r1_00;
      }
      else {
        FUN_01013d1c(&local_50,param_4 + 2,local_bc);
        cVar1 = (char)local_30;
        uVar3 = (char)local_50;
        uVar15 = local_50 & 0xff;
        uVar13 = extraout_r1_01;
        if ((char)local_30 != '\b') {
          FUN_016dd1aa(uVar5,uVar6,0x1f);
          local_78 = CONCAT31(local_78._1_3_,cVar1);
          local_98 = CONCAT31(local_98._1_3_,uVar3);
          FUN_01012da4(&local_50,&local_128,0);
          (**(code **)(local_50 + 0x10))(&uStack_44,local_4c,local_48);
          FUN_01013018(&local_114,&local_98);
          goto LAB_01022614;
        }
      }
joined_r0x010226c4:
      if (local_d8 != 2) {
        uVar13 = local_d4;
        if ((local_d8 & 1) != 0) {
          uVar13 = local_d4 + (*(int *)(local_d0 + 8) - 1U & 0xfffffff8) + 8;
        }
        (**(code **)(local_d0 + 0x34))(uVar13,&local_e0);
        uVar13 = extraout_r1_05;
      }
      FUN_005c3320(&local_e0,uVar13);
      if (uVar15 == 0xc) goto LAB_01022720;
      goto LAB_01022734;
    }
    uVar13 = (uint)bVar2;
    if (uVar13 < 0x40) {
      if ((uVar13 & 0x30) == 0x10) {
        FUN_01011f40(&local_50,param_4,&local_128,0);
        cVar1 = (char)local_30;
        uVar3 = (char)local_50;
        uVar15 = local_50 & 0xff;
        uVar13 = extraout_r1_03;
        if ((char)local_30 != '\b') {
          FUN_016dd1aa(uVar5,uVar6,0x1f);
          local_78 = CONCAT31(local_78._1_3_,cVar1);
          local_98 = CONCAT31(local_98._1_3_,uVar3);
          FUN_01012da4(&local_50,&local_128,0);
          (**(code **)(local_50 + 0x10))(&uStack_44,local_4c,local_48);
          FUN_01013018(&local_114,&local_98);
          goto LAB_01022614;
        }
      }
      else if ((bVar2 & 0x30) == 0) {
        FUN_01011f40(&local_50,param_4,&local_128,0);
        cVar1 = (char)local_30;
        uVar3 = (char)local_50;
        uVar15 = local_50 & 0xff;
        uVar13 = extraout_r1;
        if ((char)local_30 != '\b') {
          FUN_016dd1aa(uVar5,uVar6,0x1f);
          local_78 = CONCAT31(local_78._1_3_,cVar1);
          local_98 = CONCAT31(local_98._1_3_,uVar3);
          FUN_01012da4(&local_50,&local_128,0);
          (**(code **)(local_50 + 0x10))(&uStack_44,local_4c,local_48);
          FUN_01013018(&local_114,&local_98);
          goto LAB_01022614;
        }
      }
      else if (uVar13 < 0x20) {
        uVar15 = 3;
      }
      else {
        uVar15 = 10;
        uVar13 = (uint)DAT_018dd947;
        if (bVar4) {
          FUN_0101393c(&local_50,&local_128,5);
          uVar7 = local_4c;
          uVar13 = extraout_r1_04;
          if ((char)local_50 == '\x01') {
            uVar15 = local_50 >> 8 & 0xff;
          }
          else if (local_4c <= (uint)param_4[0xc]) {
            uVar13 = param_4[6];
            param_4[7] = local_4c;
            if (local_4c < uVar13) {
              iVar14 = param_4[4];
              uVar15 = param_4[2];
              iVar12 = param_4[5];
              iVar17 = param_4[3] + (iVar12 + iVar14) * 0x24;
              do {
                iVar12 = iVar12 + -1;
                iVar17 = iVar17 + -0x24;
                if (iVar12 == -1) {
                    /* WARNING: Subroutine does not return */
                  FUN_00faa478("Size of table != 0, but no headers left!h2::hpack::decoder/nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/h2-0.4.7/src/hpack/decoder.rshpack::decodeevent /nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/h2-0.4.7/src/proto/streams/recv.rs:814h2::proto::streams::recv/nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/h2-0.4.7/src/proto/streams/recv.rs"
                               ,0x51,&DAT_01882338);
                }
                uVar16 = iVar14 + iVar12;
                uVar8 = uVar15;
                if (uVar16 < uVar15) {
                  uVar8 = 0;
                }
                iVar9 = FUN_01020a90(iVar17 + uVar8 * -0x24);
                uVar13 = uVar13 - iVar9;
                param_4[5] = iVar12;
                param_4[6] = uVar13;
                uVar8 = uVar15;
                if (uVar16 < uVar15) {
                  uVar8 = 0;
                }
                puVar10 = (uint *)(iVar17 + uVar8 * -0x24);
                local_50 = *puVar10;
                local_4c = puVar10[1];
                local_48 = puVar10[2];
                uStack_44 = puVar10[3];
                local_40 = puVar10[4];
                uStack_3c = puVar10[5];
                local_38 = puVar10[6];
                uStack_34 = puVar10[7];
                local_30 = puVar10[8];
                if ((char)local_30 != '\b') {
                  FUN_014f073c(&local_50);
                }
              } while (uVar7 < uVar13);
            }
            FUN_01012da4(&local_50,&local_128,0);
            (**(code **)(local_50 + 0x10))(&uStack_44,local_4c,local_48);
            bVar4 = true;
            goto LAB_01022618;
          }
        }
      }
      goto joined_r0x010226c4;
    }
    FUN_01011f40(&local_50,param_4,&local_128,1);
    cVar1 = (char)local_30;
    uVar3 = (char)local_50;
    uVar15 = local_50 & 0xff;
    uVar13 = extraout_r1_02;
    if ((char)local_30 == '\b') goto joined_r0x010226c4;
    FUN_016dd1aa((uint)&local_c0 | 1,uVar6,0x1f);
    local_a0 = CONCAT31(local_a0._1_3_,cVar1);
    local_c0 = CONCAT31(local_c0._1_3_,uVar3);
    FUN_01013adc(&local_98,&local_c0);
    iVar17 = FUN_01020a90(&local_98);
    iVar12 = param_4[6];
    uVar15 = param_4[7];
    uVar13 = iVar12 + iVar17;
    if (uVar15 < uVar13) {
      uVar7 = param_4[2];
      iVar9 = param_4[4];
      iVar14 = param_4[5];
      iVar18 = param_4[3] + (iVar14 + iVar9) * 0x24 + -4;
      do {
        iVar14 = iVar14 + -1;
        if (iVar14 == -1) {
LAB_0102252c:
          uVar13 = iVar12 + iVar17;
          break;
        }
        param_4[5] = iVar14;
        uVar13 = uVar7;
        if ((uint)(iVar9 + iVar14) < uVar7) {
          uVar13 = 0;
        }
        iVar11 = iVar18 + uVar13 * -0x24;
        local_70 = *(uint *)(iVar11 + -0x20);
        uStack_6c = *(uint *)(iVar11 + -0x1c);
        uStack_68 = *(uint *)(iVar11 + -0x18);
        uStack_64 = *(uint *)(iVar11 + -0x14);
        local_60 = *(uint *)(iVar11 + -0x10);
        uStack_5c = *(uint *)(iVar11 + -0xc);
        uStack_58 = *(uint *)(iVar11 + -8);
        uStack_54 = *(uint *)(iVar11 + -4);
        cVar1 = *(char *)(iVar18 + uVar13 * -0x24);
        local_74 = *(undefined2 *)(iVar11 + 1);
        local_72 = *(undefined1 *)(iVar11 + 3);
        if (cVar1 == '\b') goto LAB_0102252c;
        local_30 = CONCAT31(local_30._1_3_,cVar1);
        local_50 = local_70;
        local_4c = uStack_6c;
        local_48 = uStack_68;
        uStack_44 = uStack_64;
        local_40 = local_60;
        uStack_3c = uStack_5c;
        local_38 = uStack_58;
        uStack_34 = uStack_54;
        iVar11 = FUN_01020a90(&local_50);
        iVar12 = iVar12 - iVar11;
        param_4[6] = iVar12;
        FUN_014f073c(&local_50);
        uVar13 = iVar12 + iVar17;
        iVar18 = iVar18 + -0x24;
      } while (uVar15 < uVar13);
    }
    if (uVar15 < uVar13) {
      FUN_014f073c(&local_98);
    }
    else {
      param_4[6] = uVar13;
      uVar13 = param_4[2];
      uVar15 = param_4[5];
      local_50 = local_98;
      local_4c = local_94;
      local_48 = local_90;
      uStack_44 = uStack_8c;
      local_40 = local_88;
      uStack_3c = uStack_84;
      local_38 = uStack_80;
      uStack_34 = uStack_7c;
      local_30 = local_78;
      if (uVar15 == uVar13) {
        FUN_0102a218(param_4 + 2);
        uVar13 = param_4[2];
        uVar15 = param_4[5];
      }
      uVar8 = param_4[4] - 1;
      uVar7 = uVar8 + uVar13;
      if (!CARRY4(uVar8,uVar13)) {
        uVar7 = uVar8;
      }
      param_4[4] = uVar7;
      param_4[5] = uVar15 + 1;
      puVar10 = (uint *)(param_4[3] + uVar7 * 0x24);
      *puVar10 = local_50;
      puVar10[1] = local_4c;
      puVar10[2] = local_48;
      puVar10[3] = uStack_44;
      puVar10[4] = local_40;
      puVar10[5] = uStack_3c;
      puVar10[6] = local_38;
      puVar10[7] = uStack_34;
      puVar10[8] = local_30;
    }
    FUN_01012da4(&local_50,&local_128,0);
    (**(code **)(local_50 + 0x10))(&uStack_44,local_4c,local_48);
    local_50 = local_c0;
    local_4c = local_bc;
    local_48 = uStack_b8;
    uStack_44 = uStack_b4;
    local_40 = local_b0;
    uStack_3c = uStack_ac;
    local_38 = uStack_a8;
    uStack_34 = uStack_a4;
    local_30 = local_a0;
    FUN_01013018(&local_114,&local_50);
LAB_01022614:
    bVar4 = false;
LAB_01022618:
    uVar13 = local_128;
  } while (local_124 == 0);
  if (local_d8 != 2) {
    uVar13 = local_d4;
    if ((local_d8 & 1) != 0) {
      uVar13 = local_d4 + (*(int *)(local_d0 + 8) - 1U & 0xfffffff8) + 8;
    }
    (**(code **)(local_d0 + 0x34))(uVar13,&local_e0);
  }
  FUN_005c3320(&local_e0);
LAB_01022720:
  uVar13 = 0x15;
  uVar15 = 0x13;
  if (local_12d == '\x01') {
LAB_01022734:
    uVar13 = uVar15;
  }
  return uVar13;
}


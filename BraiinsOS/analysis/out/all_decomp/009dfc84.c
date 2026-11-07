// FUN_009dfc84 @ 009dfc84 size=1928 calls_out=11 calls_in=0
// strings: Span not found; this is a bugnewtime.busytime.idleenter

void FUN_009dfc84(undefined4 ***param_1,undefined4 param_2,int param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint *puVar5;
  uint uVar6;
  int *piVar7;
  uint uVar8;
  uint *puVar9;
  uint uVar10;
  int iVar11;
  bool bVar12;
  undefined8 uVar13;
  int local_128;
  uint local_110 [2];
  uint local_108;
  uint local_104;
  int local_100;
  uint local_f8;
  uint local_f4;
  uint *local_f0;
  int local_ec;
  uint local_e8;
  int local_e4;
  uint local_e0;
  uint local_dc;
  uint local_d8;
  uint local_d4;
  uint ****local_d0;
  code *local_cc;
  undefined4 local_c8;
  undefined4 local_c4;
  uint ***local_c0;
  undefined *local_bc;
  uint *local_b8;
  uint ****local_b4;
  uint ****local_b0;
  undefined *local_ac;
  undefined4 ***local_a8;
  uint *local_a4;
  undefined *local_a0;
  uint **local_98;
  undefined *local_94;
  undefined *local_90;
  undefined4 local_8c;
  undefined4 local_88;
  uint ***local_80;
  undefined4 local_7c;
  undefined4 ***local_78;
  undefined4 local_74;
  undefined4 local_70;
  uint ***local_68;
  int local_64;
  uint *local_60;
  undefined4 local_5c;
  undefined4 local_58;
  uint ****local_54;
  undefined4 local_50;
  undefined4 ****local_4c;
  uint *local_48;
  uint local_44;
  uint local_40;
  undefined4 local_3c;
  undefined4 ****local_38;
  uint local_34;
  undefined4 ***local_30;
  undefined4 ***local_2c;
  code *local_28;
  
  FUN_009f418c(local_110,param_1[0xb],param_5,param_6,param_7);
  bVar12 = (local_110[0] & 1) != 0;
  if (bVar12) {
    local_110[0] = (uint)*(byte *)((int)param_1 + 0x15);
  }
  if (!bVar12 || (local_110[0] & 8) == 0) {
    return;
  }
  if ((local_100 != 0) && (FUN_016a4f80(&local_48,local_100,param_3 + -1), local_48 != (uint *)0x0))
  {
    local_b4 = (uint ****)local_44;
    local_b0 = (uint ****)local_40;
    local_bc = (undefined *)0x0;
    local_c0 = (uint ***)0x0;
    local_ac = (undefined *)local_100;
    local_b8 = local_48;
    if ((*local_48 & local_108) == 0 && (local_48[1] & local_104) == 0) {
      local_e8 = local_40;
      local_f8 = local_108;
      local_ec = local_44;
      local_e4 = local_100;
      local_f0 = local_48;
      local_f4 = local_104;
      uVar13 = FUN_016a108c();
      puVar1 = (uint *)((ulonglong)uVar13 >> 0x20);
      piVar7 = (int *)uVar13;
      if (piVar7[3] != 0) {
        iVar11 = *piVar7;
        uVar4 = piVar7[1];
        local_128 = 0;
        uVar2 = uVar4 & 0x852d8214;
        while( true ) {
          uVar6 = *(uint *)(iVar11 + uVar2);
          uVar8 = (uVar6 & 0x80808080 ^ 0x80808080) & (uVar6 ^ 0x42424242) + 0xfefefeff;
          while (uVar8 != 0) {
            uVar3 = uVar2 + ((uint)LZCOUNT(uVar8 << 0x18 | (uVar8 >> 8 & 0xff) << 0x10 |
                                           (uVar8 >> 0x10 & 0xff) << 8 | uVar8 >> 0x18) >> 3) &
                    uVar4;
            piVar7 = (int *)(iVar11 + -0x18 + uVar3 * -0x18);
            uVar8 = uVar8 - 1 & uVar8;
            if ((*piVar7 == 0x51809c7c && piVar7[2] == -0x7ad27dec) &&
                (piVar7[1] == 0x4a853532 && piVar7[3] == 0x7af5abf6)) {
              iVar11 = iVar11 + uVar3 * -0x18;
              puVar5 = *(uint **)(iVar11 + -8);
              (**(code **)(*(int *)(iVar11 + -4) + 0xc))(&local_c0,puVar5);
              if ((local_c0 == (uint ***)0x51809c7c && local_b8 == (uint *)0x852d8214) &&
                  (local_bc == (undefined *)0x4a853532 && local_b4 == (uint ****)0x7af5abf6)) {
                uVar3 = *puVar5;
                uVar10 = puVar5[1];
                puVar9 = (uint *)puVar5[6];
                uVar4 = puVar5[7];
                uVar2 = puVar5[8];
                uVar6 = puVar5[2];
                uVar8 = puVar5[3];
                FUN_015f3b0c(&local_c0,1);
                local_68 = local_c0;
                local_64 = (int)local_bc;
                local_60 = local_b8;
                local_48 = puVar9;
                local_44 = uVar4;
                local_40 = uVar2;
                FUN_015f3c24(&local_c0,&local_68,&local_48);
                uVar2 = (uint)(ZEXT48(local_b8) * 1000000000);
                local_cc = (code *)0x3;
                local_d0 = (uint ****)&DAT_0186b594;
                local_94 = (undefined *)0x3;
                uVar4 = uVar3 + uVar2;
                uVar2 = uVar10 + (int)local_b4 * 1000000000 +
                                 (int)(ZEXT48(local_b8) * 1000000000 >> 0x20) +
                        (uint)CARRY4(uVar3,uVar2);
                if (((uint)local_c0 & 1) != 0) {
                  uVar4 = uVar3;
                  uVar2 = uVar10;
                }
                local_98 = (uint **)&DAT_0186b594;
                local_dc = uVar2 + CARRY4(uVar4,(uint)local_b0);
                local_e0 = uVar4 + (int)local_b0;
                if (((uint)local_c0 & 1) != 0) {
                  local_dc = uVar2;
                  local_e0 = uVar4;
                }
                local_34 = local_f0[0xc];
                local_c8 = *(undefined4 *)(local_34 + 0x24);
                local_c4 = *(undefined4 *)(local_34 + 0x28);
                local_70 = 1;
                local_80 = (uint ***)&DAT_0186b594;
                local_88 = 0;
                local_7c = 3;
                local_a0 = &DAT_0186b5b4;
                local_ac = &DAT_0186b5b4;
                local_b0 = (uint ****)&local_d8;
                local_b4 = &local_80;
                local_c0 = &local_98;
                local_4c = &local_d0;
                local_54 = &local_c0;
                local_64 = 3;
                local_68 = (uint ***)&DAT_0186b594;
                local_a4 = &local_e0;
                local_a8 = &local_68;
                local_38 = &local_54;
                local_58 = 2;
                local_b8 = (uint *)&DAT_0186b55c;
                local_bc = &DAT_0186b5ac;
                local_50 = 3;
                local_44 = 0;
                local_48 = (uint *)0x2;
                DataMemoryBarrier(0xb);
                do {
                  uVar2 = *puVar1;
                  bVar12 = (bool)hasExclusiveAccess(puVar1);
                } while (!bVar12);
                *puVar1 = uVar2 - 1;
                local_d8 = uVar6;
                local_d4 = uVar8;
                local_90 = (undefined *)local_c8;
                local_8c = local_c4;
                local_78 = (undefined4 ***)local_c8;
                local_74 = local_c4;
                local_60 = (uint *)local_c8;
                local_5c = local_c4;
                local_40 = param_3;
                local_3c = param_4;
                if ((uVar2 - 1 & 0xbfffffff) == 0x80000000) {
                  FUN_015e9814(puVar1);
                }
                uVar2 = local_f0[0xe];
                puVar1 = local_f0 + 0xe;
                DataMemoryBarrier(0xb);
                do {
                  if ((uVar2 & 3) == 2) {
                    local_30 = (undefined4 ***)0x2;
                    local_28 = FUN_00facc48;
                    local_2c = &local_30;
                    /* WARNING: Subroutine does not return */
                    FUN_00faa478(&DAT_0041504f,&local_2c,&DAT_018ae754);
                  }
                  uVar4 = (uVar2 & 0x3fffffff) >> 2;
                  uVar8 = uVar2 & 3 ^ 1;
                  uVar3 = uVar2 & 0xc0000000 | 3;
                  uVar6 = uVar4 ^ 1;
                  if (uVar8 != 0 || uVar6 != 0) {
                    uVar3 = uVar4 * 4 - 4 | uVar2 & 0xc0000003;
                  }
                  uVar4 = *puVar1;
                  if (*puVar1 == uVar2) {
                    DataMemoryBarrier(0xb);
                    do {
                      bVar12 = (bool)hasExclusiveAccess(puVar1);
                      if (bVar12) {
                        *puVar1 = uVar3;
                        DataMemoryBarrier(0xb);
                        if (uVar8 == 0 && uVar6 == 0) {
                          FUN_009ebe80(local_ec,local_e8);
                        }
                        local_2c = (undefined4 ***)&local_48;
                        local_30 = param_1;
                        FUN_009e38c0(&local_30,&local_2c);
                        return;
                      }
                      uVar4 = *puVar1;
                    } while (*puVar1 == uVar2);
                  }
                  uVar2 = uVar4;
                  ClearExclusiveLocal();
                  DataMemoryBarrier(0xb);
                } while( true );
              }
              goto LAB_009e01f4;
            }
          }
          if ((uVar6 & 0x80808080 & uVar6 << 1) != 0) break;
          local_128 = local_128 + 4;
          uVar2 = uVar2 + local_128 & uVar4;
        }
      }
LAB_009e01f4:
      local_98 = &local_48;
      local_ac = (undefined *)local_f0[0xc];
      local_60 = *(uint **)((int)local_ac + 0x24);
      local_94 = &DAT_0186b5ac;
      local_5c = *(undefined4 *)((int)local_ac + 0x28);
      local_48 = (uint *)&DAT_018aeb80;
      local_44 = 1;
      local_78 = &local_68;
      local_68 = (uint ***)&DAT_018aeb80;
      local_64 = 1;
      local_38 = (undefined4 ****)0x0;
      local_bc = (undefined *)0x0;
      local_7c = 1;
      local_80 = &local_98;
      local_b0 = &local_80;
      local_90 = &DAT_0186b55c;
      local_c0 = (uint ***)0x2;
      DataMemoryBarrier(0xb);
      do {
        uVar2 = *puVar1;
        bVar12 = (bool)hasExclusiveAccess(puVar1);
      } while (!bVar12);
      *puVar1 = uVar2 - 1;
      local_b8 = (uint *)param_3;
      local_b4 = (uint ****)param_4;
      local_40 = (uint)local_60;
      local_3c = local_5c;
      if ((uVar2 - 1 & 0xbfffffff) == 0x80000000) {
        FUN_015e9814(puVar1);
      }
      uVar2 = local_f0[0xe];
      puVar1 = local_f0 + 0xe;
      DataMemoryBarrier(0xb);
      do {
        if ((uVar2 & 3) == 2) {
          local_54 = (uint ****)0x2;
          local_cc = FUN_00facc48;
          local_d0 = (uint ****)&local_54;
                    /* WARNING: Subroutine does not return */
          FUN_00faa478(&DAT_0041504f,&local_d0,&DAT_018ae754);
        }
        uVar4 = (uVar2 & 0x3fffffff) >> 2;
        uVar8 = uVar2 & 3 ^ 1;
        uVar3 = uVar2 & 0xc0000000 | 3;
        uVar6 = uVar4 ^ 1;
        if (uVar8 != 0 || uVar6 != 0) {
          uVar3 = uVar4 * 4 - 4 | uVar2 & 0xc0000003;
        }
        uVar4 = *puVar1;
        if (*puVar1 == uVar2) {
          DataMemoryBarrier(0xb);
          do {
            bVar12 = (bool)hasExclusiveAccess(puVar1);
            if (bVar12) {
              *puVar1 = uVar3;
              DataMemoryBarrier(0xb);
              if (uVar8 == 0 && uVar6 == 0) {
                FUN_009ebe80(local_ec,local_e8);
              }
              local_d0 = &local_c0;
              local_54 = (uint ****)param_1;
              FUN_009e38c0(&local_54,&local_d0);
              return;
            }
            uVar4 = *puVar1;
          } while (*puVar1 == uVar2);
        }
        uVar2 = uVar4;
        ClearExclusiveLocal();
        DataMemoryBarrier(0xb);
      } while( true );
    }
    FUN_009ee6c0();
  }
                    /* WARNING: Subroutine does not return */
  FUN_00fb74b8("Span not found, this is a bugnewtime.busytime.idleenter",0x1d,&DAT_0186b584);
}


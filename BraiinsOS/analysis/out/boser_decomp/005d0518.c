// FUN_005d0518 @ 005d0518 size=2680 calls_out=16 calls_in=2
// strings: fan_control | temp_control | target_temp | dangerous_temp | cold_temp | speed

void FUN_005d0518(undefined4 *param_1,int *param_2,int param_3)

{
  undefined1 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  undefined1 *local_580;
  int local_57c;
  int local_578;
  int local_52c;
  undefined4 local_518 [2];
  undefined1 auStack_510 [104];
  undefined1 *local_4a8;
  int local_4a4;
  int local_4a0;
  int local_454;
  int local_440;
  undefined1 auStack_43c [68];
  undefined1 *local_3f8;
  int local_3f4;
  int local_3f0;
  undefined4 uStack_3ec;
  int local_3a4;
  undefined1 *local_388;
  int iStack_384;
  int iStack_380;
  undefined4 uStack_37c;
  int local_378;
  undefined1 auStack_374 [100];
  undefined1 *local_310;
  int local_30c;
  int local_308;
  int local_2bc;
  undefined4 local_2a8 [2];
  undefined1 auStack_2a0 [104];
  undefined1 *local_238;
  int iStack_234;
  int iStack_230;
  undefined4 uStack_22c;
  int local_228;
  undefined1 auStack_224 [100];
  undefined1 *local_1c0;
  int local_1bc;
  int local_1b8;
  undefined4 uStack_1b4;
  int local_1b0;
  undefined1 auStack_1ac [100];
  undefined1 *local_148;
  int local_144;
  int local_140;
  undefined4 uStack_13c;
  int local_f4;
  undefined4 local_e0 [2];
  undefined1 auStack_d8 [108];
  undefined1 auStack_6c [72];
  
  iVar13 = *param_2;
  iVar10 = param_2[1];
  iVar8 = param_2[0x22];
  iVar6 = param_2[0x26];
  iVar2 = param_2[0x33];
  if (((param_2[0x12] == 3 && param_2[0x13] == 0) ||
      (FUN_00d48bdc(&local_1c0,param_3), puVar1 = local_1c0, local_1c0 == &DAT_80000005)) &&
     ((iVar8 == 0 ||
      (FUN_00d48f74(&local_1c0,param_3,param_2 + 0x22), puVar1 = local_1c0,
      local_1c0 == &DAT_80000005)))) {
    if (iVar13 != 2 || iVar10 != 0) {
      FUN_00644720(&local_1c0,param_3,"temp_control",0xc);
      puVar1 = local_1c0;
      if (local_1c0 != &DAT_80000005) goto LAB_005d0c48;
      if (*(int *)(param_3 + 0x10) == -0x80000000) goto LAB_005d0f80;
      iVar10 = *param_2;
      iVar8 = param_2[1];
      if (iVar10 == 2 && iVar8 == 0) goto LAB_005d05bc;
      uVar12 = (uint)*(byte *)(param_2 + 0x10);
      iVar7 = param_2[5];
      iVar9 = param_2[9];
      iVar11 = param_2[0xd];
      iVar3 = param_2[4];
      iVar13 = iVar10;
      if (uVar12 != 4) {
        iVar13 = iVar10 + 1;
      }
      iVar4 = param_2[8];
      iVar5 = param_2[0xc];
      FUN_01a4c5c8(&local_1c0,iVar13 + iVar3 + iVar4 + iVar5);
      iVar13 = local_1b0;
      if (local_1b0 == -0x7fffffff) {
        local_3f8 = local_1c0;
        local_3f4 = local_1bc;
        local_3f0 = local_1b8;
        local_580 = local_1c0;
        local_57c = local_1bc;
        local_578 = local_1b8;
      }
      else {
        local_3f8 = local_1c0;
        local_3f4 = local_1bc;
        local_3f0 = local_1b8;
        uStack_3ec = uStack_1b4;
        FUN_01bed4e2(auStack_224,auStack_1ac,100);
        local_238 = local_3f8;
        iStack_234 = local_3f4;
        iStack_230 = local_3f0;
        uStack_22c = uStack_3ec;
        local_228 = iVar13;
        if (uVar12 == 4 || iVar13 == -0x80000000) {
LAB_005d07cc:
          if ((((iVar10 == 0 && iVar8 == 0) ||
               (FUN_00644ddc((int)*(undefined8 *)(param_2 + 2),&local_1c0,&local_238,"target_temp",
                             0xb,*param_2,param_2[1]), local_1c0 == &DAT_80000005)) &&
              (((iVar3 == 0 && iVar7 == 0 ||
                (FUN_00644ddc((int)*(undefined8 *)(param_2 + 6),&local_1c0,&local_238,&DAT_00570ea8,
                              8,param_2[4],param_2[5]), local_1c0 == &DAT_80000005)) &&
               ((iVar4 == 0 && iVar9 == 0 ||
                (FUN_00644ddc((int)*(undefined8 *)(param_2 + 10),&local_1c0,&local_238,
                              "dangerous_temp",0xe,param_2[8],param_2[9]),
                local_1c0 == &DAT_80000005)))))) &&
             ((iVar5 == 0 && iVar11 == 0 ||
              (FUN_00644ddc((int)*(undefined8 *)(param_2 + 0xe),&local_1c0,&local_238,"cold_temp",9,
                            param_2[0xc],param_2[0xd]), local_1c0 == &DAT_80000005)))) {
            FUN_01bed4e2(&local_1c0,&local_238,0x78);
            FUN_01a4aaf4(&local_580,&local_1c0);
            if (local_52c != 8) {
              local_310 = *(undefined1 **)(param_3 + 0x30);
              *(undefined4 *)(param_3 + 0x30) = 0x80000000;
              if (local_310 == (undefined1 *)0x80000000) {
                    /* WARNING: Subroutine does not return */
                FUN_012fb0cc(&DAT_01d2bdfc);
              }
              FUN_01bed4e2(&local_30c,param_3 + 0x34,0x44);
              FUN_01bed4e2(&iStack_380,&local_580,0x68);
              local_388 = (undefined1 *)0x1;
              FUN_01a4b734(&local_1c0,param_3,&local_310,&local_388);
              if (local_1c0 != (undefined1 *)0x4) {
                FUN_005f6530(&local_1c0);
              }
              goto LAB_005d05bc;
            }
            goto LAB_005d09a8;
          }
          local_580 = local_1c0;
          local_57c = local_1bc;
          local_578 = local_1b8;
        }
        else {
          FUN_01a5bfb4(&local_3f8,*(undefined4 *)(&DAT_01c03238 + uVar12 * 4),
                       *(undefined4 *)(&DAT_00568568 + uVar12 * 4));
          if (local_3a4 != 8) {
            FUN_01bed4e2(auStack_510,&local_3f8,0x68);
            local_518[0] = 1;
            FUN_01a60d04(&local_148,&DAT_0056d358,4);
            FUN_01a4b734(&local_1c0,&local_238,&local_148,local_518);
            if (local_1c0 != (undefined1 *)0x4) {
              FUN_005f6530(&local_1c0);
            }
            goto LAB_005d07cc;
          }
          if (local_3f8 == &DAT_80000005) goto LAB_005d07cc;
          local_580 = local_3f8;
          local_57c = local_3f4;
          local_578 = local_3f0;
        }
        FUN_005f8054(&local_238);
      }
LAB_005d09a8:
      if (local_580 != &DAT_80000005) {
        local_4a8 = local_580;
        local_1bc = local_57c;
        local_1b8 = local_578;
        goto LAB_005d0c50;
      }
    }
LAB_005d05bc:
    if (iVar6 != 2) {
      FUN_00644720(&local_1c0,param_3,"fan_control",0xb);
      puVar1 = local_1c0;
      if (local_1c0 != &DAT_80000005) goto LAB_005d0c48;
      if (*(int *)(param_3 + 0x10) == -0x80000000) {
LAB_005d0f80:
                    /* WARNING: Subroutine does not return */
        FUN_012fb100("internal error: entered unreachable code: datetimes should only be serialized as structs, not maps"
                     ,0xc5,&DAT_01d2bdec);
      }
      iVar6 = param_2[0x26];
      if (iVar6 == 2) goto LAB_005d0c10;
      iVar11 = param_2[0x28];
      iVar7 = param_2[0x2a];
      iVar8 = param_2[0x2c];
      iVar13 = param_2[0x30];
      iVar9 = param_2[0x2e];
      iVar10 = iVar11 + iVar6 + iVar7 + iVar8 + iVar9;
      if (iVar13 != 2) {
        iVar10 = iVar10 + 1;
      }
      FUN_01a4c5c8(&local_1c0,iVar10);
      iVar10 = local_1b0;
      if (local_1b0 == -0x7fffffff) {
        local_238 = local_1c0;
        iStack_234 = local_1bc;
        iStack_230 = local_1b8;
        local_4a8 = local_1c0;
        local_4a4 = local_1bc;
        local_4a0 = local_1b8;
      }
      else {
        local_238 = local_1c0;
        iStack_234 = local_1bc;
        iStack_230 = local_1b8;
        uStack_22c = uStack_1b4;
        FUN_01bed4e2(auStack_374,auStack_1ac,100);
        local_388 = local_238;
        iStack_384 = iStack_234;
        iStack_380 = iStack_230;
        uStack_37c = uStack_22c;
        local_378 = iVar10;
        if (((((iVar6 == 0) ||
              (FUN_00645110(&local_1c0,&local_388,"speed",5,param_2[0x26],param_2[0x27]),
              local_1c0 == &DAT_80000005)) &&
             ((iVar11 == 0 ||
              (FUN_00645110(&local_1c0,&local_388,&DAT_00570be0,8,param_2[0x28],param_2[0x29]),
              local_1c0 == &DAT_80000005)))) &&
            ((iVar7 == 0 ||
             (FUN_00645110(&local_1c0,&local_388,"min_fan_rpm",0xb,param_2[0x2a],param_2[0x2b]),
             local_1c0 == &DAT_80000005)))) &&
           (((iVar8 == 0 ||
             (FUN_00645110(&local_1c0,&local_388,"min_fan_speed",0xd,param_2[0x2c],param_2[0x2d]),
             local_1c0 == &DAT_80000005)) &&
            ((iVar9 == 0 ||
             (FUN_00645110(&local_1c0,&local_388,"max_fan_speed",0xd,param_2[0x2e],param_2[0x2f]),
             local_1c0 == &DAT_80000005)))))) {
          iVar6 = iVar13;
          if (iVar13 != 2) {
            iVar6 = local_378;
          }
          if (iVar13 != 2 && iVar6 != -0x80000000) {
            uVar12 = (uint)*(byte *)(param_2 + 0x32);
            iVar6 = iVar13;
            if (uVar12 != 3) {
              iVar6 = iVar13 + 1;
            }
            FUN_01a4c5c8(&local_1c0,iVar6);
            if (local_1b0 == -0x7fffffff) {
              local_148 = local_1c0;
              local_144 = local_1bc;
              local_140 = local_1b8;
              local_310 = local_1c0;
              local_30c = local_1bc;
              local_308 = local_1b8;
            }
            else {
              local_148 = local_1c0;
              local_144 = local_1bc;
              local_140 = local_1b8;
              uStack_13c = uStack_1b4;
              FUN_01bed4e2(auStack_224,auStack_1ac,100);
              local_238 = local_148;
              iStack_234 = local_144;
              iStack_230 = local_140;
              uStack_22c = uStack_13c;
              local_228 = local_1b0;
              if (uVar12 == 3 || local_1b0 == -0x80000000) {
LAB_005d0da8:
                if ((iVar13 == 0) ||
                   (FUN_00645110(&local_1c0,&local_238,"cooldown_fan_speed",0x12,param_2[0x30],
                                 param_2[0x31]), local_1c0 == &DAT_80000005)) {
                  FUN_01bed4e2(&local_1c0,&local_238,0x78);
                  FUN_01a4aaf4(&local_310,&local_1c0);
                  if (local_2bc != 8) {
                    FUN_01bed4e2(auStack_2a0,&local_310,0x68);
                    local_2a8[0] = 1;
                    FUN_01a60d04(&local_238,"pause",5);
                    FUN_01a4b734(&local_1c0,&local_388,&local_238,local_2a8);
                    if (local_1c0 != (undefined1 *)0x4) {
                      FUN_005f6530(&local_1c0);
                    }
                    goto LAB_005d0b40;
                  }
                  goto LAB_005d0edc;
                }
                local_310 = local_1c0;
                local_30c = local_1bc;
                local_308 = local_1b8;
              }
              else {
                FUN_01a5bfb4(&local_148,*(undefined4 *)(&DAT_01c03220 + uVar12 * 4),
                             *(undefined4 *)(&DAT_003d3eb8 + uVar12 * 4));
                if (local_f4 != 8) {
                  FUN_01bed4e2(auStack_d8,&local_148,0x68);
                  local_e0[0] = 1;
                  FUN_01a60d04(auStack_6c,&DAT_0056d358,4);
                  FUN_01a4b734(&local_1c0,&local_238,auStack_6c,local_e0);
                  if (local_1c0 != (undefined1 *)0x4) {
                    FUN_005f6530(&local_1c0);
                  }
                  goto LAB_005d0da8;
                }
                if (local_148 == &DAT_80000005) goto LAB_005d0da8;
                local_310 = local_148;
                local_30c = local_144;
                local_308 = local_140;
              }
              FUN_005f8054(&local_238);
            }
LAB_005d0edc:
            if (local_310 != &DAT_80000005) {
              local_4a8 = local_310;
              local_4a4 = local_30c;
              local_4a0 = local_308;
              goto LAB_005d0bf4;
            }
          }
LAB_005d0b40:
          FUN_01bed4e2(&local_1c0,&local_388,0x78);
          FUN_01a4aaf4(&local_4a8,&local_1c0);
          if (local_454 != 8) {
            local_440 = *(int *)(param_3 + 0x30);
            *(undefined4 *)(param_3 + 0x30) = 0x80000000;
            if (local_440 == -0x80000000) {
                    /* WARNING: Subroutine does not return */
              FUN_012fb0cc(&DAT_01d2bdfc);
            }
            FUN_01bed4e2(auStack_43c,param_3 + 0x34,0x44);
            FUN_01bed4e2(&local_3f0,&local_4a8,0x68);
            local_3f8 = (undefined1 *)0x1;
            FUN_01a4b734(&local_1c0,param_3,&local_440,&local_3f8);
            if (local_1c0 != (undefined1 *)0x4) {
              FUN_005f6530(&local_1c0);
            }
            goto LAB_005d0c10;
          }
        }
        else {
          local_4a8 = local_1c0;
          local_4a4 = local_1bc;
          local_4a0 = local_1b8;
LAB_005d0bf4:
          FUN_005f8054(&local_388);
        }
      }
      if (local_4a8 != &DAT_80000005) {
        local_1bc = local_4a4;
        local_1b8 = local_4a0;
        goto LAB_005d0c50;
      }
    }
LAB_005d0c10:
    if ((iVar2 == -0x80000000) ||
       (FUN_00d49530(&local_1c0,param_3,param_2 + 0x33), puVar1 = local_1c0,
       local_1c0 == &DAT_80000005)) {
      *param_1 = &DAT_80000005;
      return;
    }
  }
LAB_005d0c48:
  local_4a8 = puVar1;
LAB_005d0c50:
  *param_1 = local_4a8;
  param_1[1] = local_1bc;
  param_1[2] = local_1b8;
  return;
}


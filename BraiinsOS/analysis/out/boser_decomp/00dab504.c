// FUN_00dab504 @ 00dab504 size=900 calls_out=14 calls_in=3
// strings: autotuning | enabled | power_target | hashrate_target | hashrate_target | power_target

void FUN_00dab504(undefined4 *param_1,int param_2,int *param_3)

{
  char cVar1;
  byte bVar2;
  int iVar3;
  undefined1 *puVar4;
  char *pcVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  int iVar9;
  undefined1 *local_358;
  undefined4 local_354;
  undefined4 local_350;
  int local_304;
  int local_2f0;
  undefined1 auStack_2ec [68];
  undefined4 local_2a8 [2];
  undefined1 auStack_2a0 [104];
  undefined1 *local_238;
  undefined4 uStack_234;
  undefined4 uStack_230;
  undefined4 uStack_22c;
  undefined1 *local_228;
  undefined1 auStack_224 [100];
  undefined1 *local_1c0;
  undefined4 local_1bc;
  undefined4 local_1b8;
  undefined4 uStack_1b4;
  undefined1 *local_1b0;
  undefined1 auStack_1ac [100];
  undefined1 *local_148;
  undefined4 local_144;
  undefined4 local_140;
  undefined4 uStack_13c;
  int local_f4;
  undefined4 local_e0 [2];
  undefined1 auStack_d8 [108];
  undefined1 auStack_6c [72];
  
  FUN_00644720(&local_1c0,param_2,"autotuning",10);
  if (local_1c0 != &DAT_80000005) {
    *param_1 = local_1c0;
    param_1[1] = local_1bc;
    param_1[2] = local_1b8;
    if ((undefined1 *)*param_1 != &DAT_80000005) {
      return;
    }
  }
  if (*(int *)(param_2 + 0x10) == -0x80000000) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb100("internal error: entered unreachable code: datetimes should only be serialized as structs, not maps"
                 ,0xc5,&DAT_01d2bdec);
  }
  iVar9 = *param_3;
  iVar6 = param_3[1];
  if (iVar9 == 2 && iVar6 == 0) goto LAB_00dab79c;
  cVar1 = (char)param_3[6];
  bVar2 = *(byte *)((int)param_3 + 0x19);
  iVar7 = param_3[4];
  iVar3 = iVar9;
  if (cVar1 != '\x02') {
    iVar3 = iVar9 + 1;
  }
  iVar3 = iVar3 + iVar7;
  if (bVar2 != 2) {
    iVar3 = iVar3 + 1;
  }
  FUN_01a4c5c8(&local_1c0,iVar3);
  if (local_1b0 == (undefined1 *)0x80000001) {
    local_358 = local_1c0;
    local_354 = local_1bc;
    local_350 = local_1b8;
  }
  else {
    local_148 = local_1c0;
    local_144 = local_1bc;
    local_140 = local_1b8;
    uStack_13c = uStack_1b4;
    FUN_01bed4e2(auStack_224,auStack_1ac,100);
    local_238 = local_148;
    uStack_234 = local_144;
    uStack_230 = local_140;
    uStack_22c = uStack_13c;
    local_228 = local_1b0;
    puVar4 = local_148;
    if (cVar1 == '\x02') {
LAB_00dab654:
      if (bVar2 != 2) {
        puVar4 = local_228;
      }
      if (bVar2 == 2 || puVar4 == (undefined1 *)0x80000000) {
LAB_00dab668:
        if (((iVar7 == 0) ||
            (FUN_00645110(&local_1c0,&local_238,"power_target",0xc,iVar7,param_3[5]),
            local_1c0 == &DAT_80000005)) &&
           ((iVar9 == 0 && iVar6 == 0 ||
            (FUN_00644ddc((int)*(undefined8 *)(param_3 + 2),&local_1c0,&local_238,"hashrate_target",
                          0xf,iVar9,iVar6), local_1c0 == &DAT_80000005)))) {
          FUN_01bed4e2(&local_1c0,&local_238,0x78);
          FUN_01a4aaf4(&local_358,&local_1c0);
          if (local_304 != 8) {
            local_2f0 = *(int *)(param_2 + 0x30);
            *(undefined4 *)(param_2 + 0x30) = 0x80000000;
            if (local_2f0 == -0x80000000) {
                    /* WARNING: Subroutine does not return */
              FUN_012fb0cc(&DAT_01d2bdfc);
            }
            FUN_01bed4e2(auStack_2ec,param_2 + 0x34,0x44);
            FUN_01bed4e2(auStack_2a0,&local_358,0x68);
            local_2a8[0] = 1;
            FUN_01a4b734(&local_1c0,param_2,&local_2f0,local_2a8);
            if (local_1c0 != (undefined1 *)0x4) {
              FUN_005f6530(&local_1c0);
            }
            goto LAB_00dab79c;
          }
          goto LAB_00dab790;
        }
        goto LAB_00dab778;
      }
      uVar8 = 0xc;
      pcVar5 = "power_target";
      if ((bVar2 & 1) != 0) {
        uVar8 = 0xf;
        pcVar5 = "hashrate_target";
      }
      FUN_01a5bfb4(&local_148,pcVar5,uVar8);
      if (local_f4 != 8) {
        FUN_01bed4e2(auStack_d8,&local_148,0x68);
        local_e0[0] = 1;
        FUN_01a60d04(auStack_6c,&DAT_0056d358,4);
        FUN_01a4b734(&local_1c0,&local_238,auStack_6c,local_e0);
        if (local_1c0 != (undefined1 *)0x4) {
          FUN_005f6530(&local_1c0);
        }
        goto LAB_00dab668;
      }
      if (local_148 == &DAT_80000005) goto LAB_00dab668;
      local_358 = local_148;
      local_1bc = local_144;
      local_1b8 = local_140;
    }
    else {
      FUN_00a25ef0(&local_1c0,&local_238,"enabled",7,cVar1);
      puVar4 = local_1c0;
      if (local_1c0 == &DAT_80000005) goto LAB_00dab654;
LAB_00dab778:
      local_358 = local_1c0;
    }
    local_354 = local_1bc;
    local_350 = local_1b8;
    FUN_005f8054(&local_238);
  }
LAB_00dab790:
  if (local_358 != &DAT_80000005) {
    *param_1 = local_358;
    param_1[1] = local_354;
    param_1[2] = local_350;
    return;
  }
LAB_00dab79c:
  *param_1 = &DAT_80000005;
  return;
}


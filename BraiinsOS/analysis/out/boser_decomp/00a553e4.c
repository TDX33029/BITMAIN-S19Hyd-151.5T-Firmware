// FUN_00a553e4 @ 00a553e4 size=1332 calls_out=15 calls_in=3
// strings: 

void FUN_00a553e4(undefined4 *param_1,int param_2,undefined4 param_3)

{
  undefined1 uVar1;
  uint *puVar2;
  uint uVar3;
  undefined1 *puVar4;
  uint uVar5;
  undefined4 extraout_r1;
  int iVar6;
  char *pcVar7;
  uint uVar8;
  undefined1 *local_2ac;
  int local_2a8;
  int local_2a4;
  undefined1 auStack_2a0 [80];
  undefined1 auStack_250 [80];
  uint local_200;
  uint local_1fc;
  uint local_1f8;
  undefined4 local_1f4 [26];
  undefined4 local_18c;
  int local_f0;
  uint uStack_ec;
  uint uStack_e8;
  undefined4 local_e4;
  uint local_e0;
  uint local_dc;
  undefined4 local_d8;
  uint local_90;
  uint local_8c;
  uint local_88;
  undefined1 auStack_84 [96];
  
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(undefined1 *)(param_2 + 0xc0)) {
  case 0:
    *(undefined1 *)(param_2 + 0xbc) = 0;
switchD_00a55448_caseD_0:
    *(undefined1 *)(param_2 + 0xba) = 0;
    iVar6 = 0x16;
    *(undefined4 *)(param_2 + 0x10) = 4;
    *(undefined4 *)(param_2 + 0x14) = 0;
    *(undefined4 *)(param_2 + 0x18) = 0;
    pcVar7 = "/";
    *(undefined4 *)(param_2 + 4) = 0;
    *(undefined4 *)(param_2 + 0xc) = 0x800000;
    *(undefined1 *)(param_2 + 0x1c) = 1;
    *(char **)(param_2 + 0x30) = "/";
    *(undefined4 *)(param_2 + 0x34) = 0x16;
    *(char **)(param_2 + 0x38) = "/";
    *(undefined4 *)(param_2 + 0x3c) = 0x16;
    *(undefined2 *)(param_2 + 0xb8) = 1;
LAB_00a554c8:
    if (*pcVar7 == '\0') {
      FUN_01bed93e(&local_200,0,0x6b);
      if (iVar6 - 1U < 0x6c) {
        FUN_01bed4e2(&local_200,pcVar7 + 1);
        uVar5 = local_200;
        FUN_01bed4e2(&local_90,(uint)&local_200 | 1,0x6a);
        FUN_01bed4e2(&local_200,&local_90,0x6c);
        *(int *)(param_2 + 0x40) = iVar6 + 2;
        *(uint *)(param_2 + 0x44) = uVar5 << 0x18 | 1;
        puVar2 = &local_200;
        goto LAB_00a5563c;
      }
      uVar3 = 2;
      uVar8 = 0x1d2ce;
      uVar5 = 0xf0000000;
    }
    else {
LAB_00a554d4:
      *(undefined1 *)(param_2 + 0xb8) = 0;
      FUN_019a8a34(&local_200,pcVar7,iVar6);
      uVar5 = local_1fc;
      if ((local_200 & 1) == 0) {
        puVar2 = &local_90;
        FUN_01bed4e2(puVar2,&local_1f8,0x6a);
        *(undefined4 *)(param_2 + 0x40) = local_18c;
        *(uint *)(param_2 + 0x44) = uVar5;
LAB_00a5563c:
        local_2ac = (undefined1 *)(param_2 + 0xb9);
        local_2a8 = param_2 + 0x20;
        FUN_01bed4e2(param_2 + 0x48,puVar2,0x6c);
        FUN_01609718(&local_200,param_2 + 0x40);
        if (((char)local_200 == '\x04') || (uVar3 = local_200 & 0xff, uVar3 == 4)) {
          *local_2ac = 0;
          FUN_019dc1a0(&local_200,local_1fc);
          if (local_200 != 2) {
            *(uint *)(param_2 + 0x24) = local_1fc;
            *(uint *)(param_2 + 0x28) = local_1f8;
            *(uint *)(param_2 + 0x20) = local_200;
            *(int *)(param_2 + 0xb4) = local_2a8;
            *(undefined4 *)(param_2 + 0x2c) = local_1f4[0];
            iVar6 = local_2a8;
            goto LAB_00a556dc;
          }
          uVar5 = local_1fc >> 8 | local_1f8 << 0x18;
          uVar3 = local_1fc & 0xff;
          uVar8 = local_1f8 >> 8;
        }
        else {
          uVar5 = local_200 >> 8 | local_1fc << 0x18;
          uVar8 = local_1fc >> 8;
        }
        goto LAB_00a55798;
      }
      puVar2 = (uint *)((uint)&local_200 | 4);
      uVar3 = *puVar2;
      uVar5 = puVar2[1];
      uVar8 = uVar5 >> 8;
      uVar5 = uVar3 >> 8 | uVar5 << 0x18;
      uVar3 = uVar3 & 0xff;
    }
LAB_00a557a0:
    uVar3 = uVar3 | uVar5 << 8;
    *(undefined1 *)(param_2 + 0xba) = 1;
    *(undefined1 *)(param_2 + 0xb8) = 0;
    uVar5 = uVar8 << 8 | uVar5 >> 0x18;
LAB_00a557bc:
    FUN_01bed4e2(auStack_2a0,&local_e0,0x50);
    *(undefined1 *)(param_2 + 0xbc) = 1;
    uVar8 = 2;
    break;
  case 1:
                    /* WARNING: Subroutine does not return */
    FUN_013079f0(&DAT_01c19dbc);
  case 2:
                    /* WARNING: Subroutine does not return */
    FUN_01307a10(&DAT_01c19dbc);
  case 3:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(*(undefined1 *)(param_2 + 0xbc)) {
    case 0:
      goto switchD_00a55448_caseD_0;
    case 1:
                    /* WARNING: Subroutine does not return */
      FUN_013079f0(&DAT_01c1f180);
    case 2:
                    /* WARNING: Subroutine does not return */
      FUN_01307a10(&DAT_01c1f180);
    }
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(*(undefined1 *)(param_2 + 0xba)) {
    case 0:
      *(undefined2 *)(param_2 + 0xb8) = 1;
      pcVar7 = *(char **)(param_2 + 0x38);
      iVar6 = *(int *)(param_2 + 0x3c);
      *(char **)(param_2 + 0x30) = pcVar7;
      *(int *)(param_2 + 0x34) = iVar6;
      if (iVar6 != 0) goto LAB_00a554c8;
      iVar6 = 0;
      goto LAB_00a554d4;
    case 1:
                    /* WARNING: Subroutine does not return */
      FUN_013079f0(&DAT_01d1e10c);
    case 2:
                    /* WARNING: Subroutine does not return */
      FUN_01307a10(&DAT_01d1e10c);
    case 3:
      iVar6 = *(int *)(param_2 + 0xb4);
    }
LAB_00a556dc:
    local_2a4 = param_2 + 4;
    local_2a8 = param_2 + 0x20;
    FUN_019e7220(&local_200,*(undefined4 *)(iVar6 + 8),param_3,1);
    if (local_200 == 2) {
      *(undefined1 *)(param_2 + 0xba) = 3;
LAB_00a55700:
      *(undefined1 *)(param_2 + 0xbc) = 3;
LAB_00a55708:
      *param_1 = 0x80000006;
      uVar1 = 3;
      goto LAB_00a55854;
    }
    if ((local_200 & 1) != 0) {
      uVar3 = local_1fc & 0xff;
      uVar5 = local_1fc >> 8 | local_1f8 << 0x18;
LAB_00a55790:
      uVar8 = local_1f8 >> 8;
      FUN_00b76614(local_2a8);
LAB_00a55798:
      *(undefined1 *)(param_2 + 0xb9) = 0;
      goto LAB_00a557a0;
    }
    if (*(int *)(param_2 + 0x2c) == -1) {
                    /* WARNING: Subroutine does not return */
      FUN_012fb0cc(&DAT_01d28f7c);
    }
    FUN_0160968c(&local_200);
    uVar5 = local_1fc >> 8 | local_1f8 << 0x18;
    uVar3 = local_1fc & 0xff;
    if (local_200 != 0 || uVar3 != 4) goto LAB_00a55790;
    *(undefined1 *)(param_2 + 0xba) = 1;
    uVar3 = *(uint *)(param_2 + 0x24);
    uVar5 = *(uint *)(param_2 + 0x28);
    iVar6 = *(int *)(param_2 + 0x20);
    *(undefined2 *)(param_2 + 0xb8) = 0;
    if (iVar6 == 2) goto LAB_00a557bc;
    if (iVar6 == 3) goto LAB_00a55700;
    local_f0 = iVar6;
    uStack_ec = uVar3;
    uStack_e8 = uVar5;
    local_e4 = *(undefined4 *)(param_2 + 0x2c);
    FUN_00a882bc(&local_200,local_2a4,&local_f0);
    FUN_01bed4e2(&local_e0,local_1f4,0x50);
    FUN_01bed4e2(auStack_2a0,&local_e0,0x50);
    *(undefined1 *)(param_2 + 0xbc) = 1;
    uVar3 = local_1fc;
    uVar8 = local_200;
    uVar5 = local_1f8;
    if (local_200 == 3) goto LAB_00a55708;
  }
  local_2a4 = param_2 + 4;
  FUN_01bed4e2(auStack_250,auStack_2a0,0x50);
  FUN_00b99500(local_2a4);
  if (uVar8 == 2) {
    puVar4 = &DAT_80000004;
    local_d8 = extraout_r1;
    local_e0 = uVar3;
    local_dc = uVar5;
  }
  else {
    FUN_01bed4e2(auStack_84,auStack_250,0x50);
    local_90 = uVar8;
    local_8c = uVar3;
    local_88 = uVar5;
    FUN_009db320(&local_200,&local_90);
    FUN_00929014(&local_e0,&local_200);
    puVar4 = &DAT_80000005;
  }
  *param_1 = puVar4;
  param_1[1] = local_e0;
  param_1[2] = local_dc;
  uVar1 = 1;
  param_1[3] = local_d8;
LAB_00a55854:
  *(undefined1 *)(param_2 + 0xc0) = uVar1;
  return;
}


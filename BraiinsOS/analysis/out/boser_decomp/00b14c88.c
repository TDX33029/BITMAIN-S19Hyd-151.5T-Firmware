// FUN_00b14c88 @ 00b14c88 size=1912 calls_out=21 calls_in=1
// strings: default | minimum | maximumconditional_messageevent /nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/tarpc-0.33.0/src/client.rs:566 | x-documentationUrl | x-unit | x-category

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_00b14c88(int *param_1,undefined4 *param_2)

{
  char cVar1;
  char cVar2;
  char cVar3;
  undefined2 uVar4;
  int iVar5;
  undefined4 uVar6;
  char *pcVar7;
  int *piVar8;
  undefined4 *puVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  int iVar14;
  int iVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  int iVar20;
  int iVar21;
  int iVar22;
  int iVar23;
  char *pcVar24;
  char *pcVar25;
  char *pcVar26;
  int iVar27;
  char *pcVar28;
  int iVar29;
  bool bVar30;
  int local_1c4;
  int local_138;
  undefined4 local_110;
  int local_10c;
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  char local_f8 [4];
  int local_f4;
  undefined4 local_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  int local_e0;
  int iStack_dc;
  int iStack_d8;
  int local_d4;
  int iStack_d0;
  int iStack_cc;
  int iStack_c8;
  int local_c0;
  int local_bc;
  int iStack_b8;
  int local_b4;
  int local_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  undefined4 uStack_a4;
  int local_a0;
  int local_9c;
  int local_98;
  int local_94;
  int iStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  char local_80 [4];
  int local_7c;
  int local_68;
  undefined4 local_64;
  undefined4 uStack_60;
  int local_4c;
  undefined4 local_48;
  undefined4 local_44;
  int local_40;
  int iStack_3c;
  undefined4 uStack_38;
  int local_30;
  int local_2c;
  undefined4 uStack_28;
  
  pcVar7 = (char *)param_2[1];
  local_138 = param_2[2];
  piVar8 = (int *)param_2[3];
  puVar9 = (undefined4 *)((uint)&local_e0 | 4);
  local_1c4 = -0x80000000;
  pcVar28 = (char *)*param_2;
  do {
    if (pcVar28 == pcVar7) {
LAB_00b15358:
      *param_1 = local_1c4;
      return;
    }
    *param_2 = pcVar28 + 0xd8;
    uVar10 = *(undefined4 *)(pcVar28 + 0x9c);
    uVar11 = *(undefined4 *)(pcVar28 + 0x90);
    uVar12 = *(undefined4 *)(pcVar28 + 0x78);
    uVar13 = *(undefined4 *)(pcVar28 + 0x84);
    cVar1 = pcVar28[0xc5];
    iVar14 = *(int *)(pcVar28 + 0xc0);
    iVar15 = *(int *)(pcVar28 + 0x60);
    cVar2 = *pcVar28;
    iVar21 = *(int *)(pcVar28 + 0x94);
    local_b0 = -0x80000000;
    local_b4 = 0;
    local_bc = 0;
    local_c0 = 0;
    iVar22 = *(int *)(pcVar28 + 0x88);
    pcVar24 = (char *)0x0;
    if (iVar15 != -0x80000000) {
      pcVar24 = pcVar28 + 0x48;
    }
    uVar16 = 0;
    if (iVar21 != -0x80000000) {
      uVar16 = *(undefined4 *)(pcVar28 + 0x98);
    }
    iVar27 = *(int *)(pcVar28 + 0x7c);
    uVar17 = 0;
    if (iVar22 != -0x80000000) {
      uVar17 = *(undefined4 *)(pcVar28 + 0x8c);
    }
    iVar29 = *(int *)(pcVar28 + 0x70);
    uVar18 = 0;
    if (iVar27 != -0x80000000) {
      uVar18 = *(undefined4 *)(pcVar28 + 0x80);
    }
    cVar3 = pcVar28[0x18];
    uVar19 = 0;
    if (iVar29 != -0x80000000) {
      uVar19 = *(undefined4 *)(pcVar28 + 0x74);
    }
    iVar23 = *(int *)(pcVar28 + 0xbc);
    pcVar25 = (char *)0x0;
    if (cVar3 != '\x06') {
      pcVar25 = pcVar28 + 0x18;
    }
    pcVar26 = (char *)0x0;
    if (cVar2 != '\x06') {
      pcVar26 = pcVar28;
    }
    iVar20 = FUN_012727e0(&local_c0,&DAT_0056df8c,pcVar28[0xc4]);
    if (iVar20 != 0) {
LAB_00b152bc:
      FUN_0127464c(&local_c0);
      local_f4 = iVar20;
LAB_00b152c4:
      iVar14 = FUN_0069a804(local_f4);
LAB_00b152d0:
      puVar9 = (undefined4 *)*piVar8;
      if (puVar9 != (undefined4 *)0x0) {
        (**(code **)*puVar9)();
      }
      *piVar8 = iVar14;
      param_2[2] = local_138 + 1;
      goto LAB_00b15358;
    }
    if (local_c0 == 1) {
      local_a0 = 10;
      iVar20 = FUN_01966fbc(&local_a0,0,0);
LAB_00b153c0:
      goto LAB_00b152bc;
    }
    iVar20 = FUN_007025b0(&local_c0,"default",7);
    uVar6 = local_ac;
    iVar5 = local_b0;
    if (iVar20 != 0) goto LAB_00b152bc;
    if (local_c0 == 1) goto LAB_00b153d0;
    bVar30 = local_b0 == -0x80000000;
    local_b0 = -0x80000000;
    if (bVar30) goto LAB_00b153ec;
    local_68 = iVar5;
    local_64 = local_ac;
    uStack_60 = local_a8;
    FUN_01274488(local_80,pcVar28 + 0x30);
    if (local_80[0] == '\x06') {
      FUN_019bb7e0(iVar5,uVar6);
      iVar20 = local_7c;
      goto LAB_00b152bc;
    }
    FUN_0196b484(&local_a0,(uint)&local_c0 | 4,&local_68,local_80);
    if ((char)local_a0 != '\x06') {
      FUN_00db4764(&local_a0);
    }
    if (cVar2 != '\x06') {
      iVar20 = FUN_00a413d0(&local_c0,"minimum",pcVar26);
      if (iVar20 != 0) goto LAB_00b152bc;
    }
    if (cVar3 != '\x06') {
      iVar20 = FUN_00a413d0(&local_c0,
                            "maximumconditional_messageevent /nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/tarpc-0.33.0/src/client.rs:566"
                            ,pcVar25);
      if (iVar20 != 0) goto LAB_00b152bc;
    }
    if (iVar14 != 0) {
      if (local_c0 == 1) {
        local_a0 = 10;
        iVar20 = FUN_01966fbc(&local_a0,0,0);
        goto LAB_00b153c0;
      }
      iVar20 = FUN_007025b0(&local_c0,&DAT_0056cb60,4);
      uVar6 = local_ac;
      iVar5 = local_b0;
      if (iVar20 == 0) {
        if (local_c0 != 0) {
LAB_00b153d0:
                    /* WARNING: Subroutine does not return */
          FUN_012fb0ec("internal error: entered unreachable code",0x28,&DAT_01cf9574);
        }
        bVar30 = local_b0 == -0x80000000;
        local_b0 = -0x80000000;
        if (bVar30) {
LAB_00b153ec:
          local_b0 = 0x80000000;
                    /* WARNING: Subroutine does not return */
          FUN_0130739c("serialize_value called before serialize_key",0x2b,&DAT_01cf9564);
        }
        local_4c = iVar5;
        local_48 = local_ac;
        local_44 = local_a8;
        FUN_0196aa8c(&local_30,iVar14);
        if (local_30 != -0x80000000) {
          local_40 = local_30;
          iStack_3c = local_2c;
          uStack_38 = uStack_28;
          iVar14 = iVar14 * 0xc;
          while (iVar14 != 0) {
            iVar20 = FUN_0127191c(&local_40,*(undefined4 *)(iVar23 + 4),*(undefined4 *)(iVar23 + 8))
            ;
            iVar14 = iVar14 + -0xc;
            iVar23 = iVar23 + 0xc;
            if (iVar20 != 0) {
              FUN_00949b70(&local_40);
              local_2c = iVar20;
              goto LAB_00b152b0;
            }
          }
          local_9c = local_40;
          local_98 = *(int *)((uint)&local_40 | 4);
          local_94 = ((int *)((uint)&local_40 | 4))[1];
          local_a0 = CONCAT31(local_a0._1_3_,4);
          FUN_0196b484(&local_68,(uint)&local_c0 | 4,&local_4c,&local_a0);
          if ((char)local_68 != '\x06') {
            FUN_00db4764(&local_68);
          }
          goto LAB_00b15094;
        }
LAB_00b152b0:
        FUN_019bb7e0(iVar5,uVar6);
        iVar20 = local_2c;
      }
      goto LAB_00b152bc;
    }
LAB_00b15094:
    iVar20 = FUN_0127247c(&local_c0,&DAT_00570720,cVar1);
    if (iVar20 != 0) goto LAB_00b152bc;
    if (iVar29 != -0x80000000) {
      iVar20 = FUN_00a41520(&local_c0,"x-documentationUrl",0x12,uVar19,uVar12);
      if (iVar20 != 0) goto LAB_00b152bc;
    }
    if (iVar27 != -0x80000000) {
      iVar20 = FUN_00a41520(&local_c0,"x-unit",6,uVar18,uVar13);
      if (iVar20 != 0) goto LAB_00b152bc;
    }
    if (iVar22 != -0x80000000) {
      iVar20 = FUN_00a41520(&local_c0,"x-category",10,uVar17,uVar11);
      if (iVar20 != 0) goto LAB_00b152bc;
    }
    if (iVar21 != -0x80000000) {
      iVar20 = FUN_00a41520(&local_c0,"x-minVersion",0xc,uVar16,uVar10);
      if (iVar20 != 0) goto LAB_00b152bc;
    }
    if (iVar15 != -0x80000000) {
      iVar20 = FUN_00a416a8(&local_c0,pcVar24);
      if (iVar20 != 0) goto LAB_00b152bc;
    }
    iVar20 = FUN_00a41804(&local_c0,local_138);
    if (iVar20 != 0) goto LAB_00b152bc;
    local_a0 = local_c0;
    local_9c = local_bc;
    local_98 = iStack_b8;
    local_94 = local_b4;
    iStack_90 = local_b0;
    uStack_8c = local_ac;
    uStack_88 = local_a8;
    uStack_84 = uStack_a4;
    FUN_0196ac88(local_f8,&local_a0);
    if (local_f8[0] == '\x06') goto LAB_00b152c4;
    uVar4 = *(undefined2 *)((uint)local_f8 | 1);
    *(undefined1 *)((undefined2 *)((uint)&local_110 | 1) + 1) =
         *(undefined1 *)((undefined2 *)((uint)local_f8 | 1) + 1);
    *(undefined2 *)((uint)&local_110 | 1) = uVar4;
    local_108 = local_f0;
    uStack_104 = uStack_ec;
    uStack_100 = uStack_e8;
    uStack_fc = uStack_e4;
    local_10c = local_f4;
    local_110 = CONCAT31(local_110._1_3_,local_f8[0]);
    FUN_006666fc(&local_a0,*(undefined4 *)(pcVar28 + 0xd0),*(undefined4 *)(pcVar28 + 0xd4));
    *puVar9 = local_110;
    puVar9[1] = local_10c;
    puVar9[2] = local_108;
    puVar9[3] = uStack_104;
    puVar9[4] = uStack_100;
    puVar9[5] = uStack_fc;
    iVar14 = local_9c;
    if (local_a0 == -0x80000000) goto LAB_00b152d0;
    local_138 = local_138 + 1;
    param_2[2] = local_138;
    if (local_a0 != -0x7fffffff) {
      param_1[1] = local_9c;
      param_1[2] = local_98;
      param_1[3] = local_e0;
      param_1[4] = iStack_dc;
      param_1[5] = iStack_d8;
      param_1[6] = local_d4;
      param_1[7] = iStack_d0;
      param_1[8] = iStack_cc;
      param_1[9] = iStack_c8;
      local_1c4 = local_a0;
      goto LAB_00b15358;
    }
    pcVar28 = pcVar28 + 0xd8;
  } while( true );
}


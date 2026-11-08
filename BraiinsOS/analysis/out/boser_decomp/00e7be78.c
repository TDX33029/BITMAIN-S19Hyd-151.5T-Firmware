// FUN_00e7be78 @ 00e7be78 size=1264 calls_out=13 calls_in=2
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_00e7be78(undefined4 *param_1,int param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  int *piVar11;
  int *piVar12;
  undefined4 uVar13;
  uint uVar14;
  undefined1 *puVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  int *piVar20;
  int *piVar21;
  int *piVar22;
  int *piVar23;
  uint local_100;
  uint local_fc;
  uint local_c0;
  uint local_bc;
  uint uStack_b8;
  int *local_b0;
  int *local_ac;
  int *local_a8;
  int *local_a4;
  int *piStack_a0;
  undefined4 uStack_9c;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  uint local_80;
  int *local_7c;
  undefined4 local_78;
  uint local_74;
  uint local_70;
  undefined4 local_6c;
  undefined4 local_68;
  uint local_64;
  uint local_60;
  undefined1 local_5c;
  int *local_58;
  int *local_54;
  int *local_50;
  int *local_4c;
  int *piStack_48;
  undefined4 uStack_44;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  puVar1 = (undefined4 *)((uint)&local_b0 | 4);
  piVar11 = *(int **)(param_2 + 0x58);
  do {
    piVar20 = *(int **)(param_2 + 0x34);
    piVar22 = *(int **)(param_2 + 0x38);
    do {
      piVar21 = piVar20;
      piVar23 = piVar22;
      if (piVar22 <= piVar20) {
        local_b0 = *(int **)(param_2 + 0x10);
        local_ac = *(int **)(param_2 + 0x14);
        local_a8 = (int *)0x0;
        local_a4 = local_ac;
        FUN_01209080(&local_80,param_2 + 0x18U,param_3,&local_b0);
        if ((char)local_80 == '\x05') goto LAB_00e7c100;
        uVar14 = local_80 & 0xff;
        if (uVar14 != 4) {
          if (uVar14 == 5) goto LAB_00e7c100;
          uVar3 = local_80 >> 8;
          piVar12 = local_7c;
          goto LAB_00e7c004;
        }
        if (local_ac < local_a8) {
                    /* WARNING: Subroutine does not return */
          FUN_012faff4(0,local_a8,local_ac,&DAT_01d2e4e0);
        }
        piVar21 = (int *)0x0;
        *(undefined4 *)(param_2 + 0x34) = 0;
        *(int **)(param_2 + 0x38) = local_a8;
        piVar23 = local_a8;
      }
      if ((piVar23 < piVar21) || (*(int **)(param_2 + 0x14) < piVar23)) {
                    /* WARNING: Subroutine does not return */
        FUN_012faff4(piVar21,piVar23,*(int **)(param_2 + 0x14),&DAT_01c24264);
      }
      uVar14 = (int)piVar23 - (int)piVar21;
      puVar15 = (undefined1 *)(*(int *)(param_2 + 0x10) + (int)piVar21);
      iVar2 = FUN_01bed7c2(puVar15,10,uVar14);
      if (iVar2 != 0) {
        uVar3 = iVar2 - (int)puVar15;
        if (uVar14 <= uVar3) {
                    /* WARNING: Subroutine does not return */
          FUN_012faff4(0,uVar3,uVar14,&DAT_01c24274);
        }
        iVar2 = uVar3 + 1;
        FUN_01ac6cbc(param_2 + 0x4c,puVar15,iVar2);
        piVar12 = (int *)(iVar2 + (int)piVar11);
        uVar14 = *(int *)(param_2 + 0x34) + iVar2;
        if (*(uint *)(param_2 + 0x38) < uVar14) {
          uVar14 = *(uint *)(param_2 + 0x38);
        }
        *(uint *)(param_2 + 0x34) = uVar14;
        break;
      }
      FUN_01ac6cbc(param_2 + 0x4c,puVar15,uVar14);
      piVar22 = *(int **)(param_2 + 0x38);
      piVar12 = (int *)(uVar14 + (int)piVar11);
      *(int **)(param_2 + 0x58) = piVar12;
      piVar20 = (int *)(*(int *)(param_2 + 0x34) + uVar14);
      if (piVar22 < piVar20) {
        piVar20 = piVar22;
      }
      *(int **)(param_2 + 0x34) = piVar20;
      piVar11 = piVar12;
    } while (piVar23 != piVar21);
    piVar11 = (int *)0x0;
    *(undefined4 *)(param_2 + 0x58) = 0;
    uVar14 = 4;
    uVar3 = param_2 + 0x18U;
LAB_00e7c004:
    piVar22 = *(int **)(param_2 + 0x54);
    piVar21 = *(int **)(param_2 + 0x50);
    piVar20 = *(int **)(param_2 + 0x4c);
    *(undefined4 *)(param_2 + 0x4c) = 0;
    *(undefined4 *)(param_2 + 0x54) = 0;
    *(undefined4 *)(param_2 + 0x50) = 1;
    FUN_012fbd94(&local_b0,piVar21,piVar22);
    if (local_b0 == (int *)&DAT_00000001) {
      local_4c = local_ac;
      piStack_48 = local_a8;
      local_58 = piVar20;
      local_50 = piVar22;
      piVar20 = piVar21;
    }
    else {
      local_58 = (int *)&DAT_80000000;
      local_50 = piVar21;
      local_4c = piVar22;
    }
    local_b0 = (int *)(uVar14 | uVar3 << 8);
    local_ac = piVar12;
    local_54 = piVar20;
    FUN_019ecbb0(&local_c0,&local_b0,&local_58,piVar11,param_2 + 0x40,0);
    if ((char)local_c0 != '\x05') {
      uVar14 = 0x80000001;
      local_fc = local_c0;
      local_100 = local_bc;
      if ((local_c0 & 0xff) != 4) goto LAB_00e7c168;
      iVar2 = *(int *)(param_2 + 0x48);
      if (local_bc != 0) {
        if (iVar2 != 0) goto LAB_00e7c110;
LAB_00e7c144:
        uVar14 = *(uint *)(param_2 + 0x40);
        local_fc = *(uint *)(param_2 + 0x44);
        local_100 = *(uint *)(param_2 + 0x48);
        *(undefined4 *)(param_2 + 0x40) = 0;
        *(undefined4 *)(param_2 + 0x44) = 1;
        *(undefined4 *)(param_2 + 0x48) = 0;
        goto LAB_00e7c168;
      }
      if (iVar2 != 0) {
LAB_00e7c110:
        if (*(char *)(*(int *)(param_2 + 0x44) + iVar2 + -1) == '\n') {
          iVar6 = iVar2 + -1;
          *(int *)(param_2 + 0x48) = iVar6;
          if ((iVar6 != 0) && (*(char *)(*(int *)(param_2 + 0x44) + iVar6 + -1) == '\r')) {
            *(int *)(param_2 + 0x48) = iVar2 + -2;
          }
        }
        goto LAB_00e7c144;
      }
LAB_00e7c2cc:
      uVar4 = 0x80000000;
LAB_00e7c2d8:
      *param_1 = uVar4;
      return;
    }
LAB_00e7c100:
    uVar14 = 0x80000002;
LAB_00e7c168:
    uStack_b8 = local_100;
    if (uVar14 == 0x80000001) {
      local_bc = local_fc;
      local_c0 = 0x80000000;
      FUN_00eab9a0(&local_c0);
    }
    else {
      if (uVar14 == 0x80000000) goto LAB_00e7c2cc;
      if (uVar14 == 0x80000002) {
        uVar4 = 0x80000001;
        goto LAB_00e7c2d8;
      }
      local_64 = local_fc;
      local_bc = local_fc;
      local_74 = local_fc;
      local_5c = 0x80;
      local_68 = 0;
      local_6c = 0;
      local_78 = 0;
      local_7c = (int *)&DAT_00000001;
      local_80 = 0;
      local_c0 = uVar14;
      local_70 = local_100;
      local_60 = local_100;
      FUN_0126a1cc(&local_b0,&local_80);
      piVar20 = local_b0;
      piVar22 = (int *)&DAT_80000000;
      if (local_b0 != (int *)&DAT_80000000) {
        local_58 = local_b0;
        local_54 = local_ac;
        local_50 = local_a8;
        local_4c = local_a4;
        piStack_48 = piStack_a0;
        uStack_44 = uStack_9c;
        local_40 = local_98;
        uStack_3c = uStack_94;
        uStack_38 = uStack_90;
        uStack_34 = uStack_8c;
        uStack_30 = uStack_88;
        uStack_2c = uStack_84;
        piVar21 = (int *)FUN_01964600(&local_80);
        piVar22 = piVar20;
        if (piVar21 != (int *)0x0) {
          piVar22 = (int *)&DAT_80000000;
          local_b0 = (int *)&DAT_80000000;
          local_ac = piVar21;
          FUN_01269f9c(&local_58);
        }
      }
      FUN_019bb7e0(local_80,local_7c);
      piVar20 = local_ac;
      if (piVar22 != (int *)&DAT_80000000) {
        uVar4 = *puVar1;
        uVar7 = puVar1[1];
        uVar9 = puVar1[2];
        uVar16 = puVar1[3];
        uVar18 = puVar1[4];
        uVar5 = puVar1[5];
        uVar8 = puVar1[6];
        uVar10 = puVar1[7];
        uVar13 = puVar1[8];
        uVar17 = puVar1[9];
        uVar19 = puVar1[10];
        FUN_019bb7e0(uVar14,local_fc);
        *param_1 = piVar22;
        param_1[1] = uVar4;
        param_1[2] = uVar7;
        param_1[3] = uVar9;
        param_1[4] = uVar16;
        param_1[5] = uVar18;
        param_1[6] = uVar5;
        param_1[7] = uVar8;
        param_1[8] = uVar10;
        param_1[9] = uVar13;
        param_1[10] = uVar17;
        param_1[0xb] = uVar19;
        return;
      }
      if (*local_ac == 1) {
        FUN_0069d8a4((char)local_ac[1],local_ac[2]);
      }
      else if ((*local_ac == 0) && (local_ac[2] != 0)) {
        thunk_FUN_01be4678(local_ac[1]);
      }
      thunk_FUN_01be4678(piVar20);
      FUN_019bb7e0(uVar14,local_fc);
    }
  } while( true );
}


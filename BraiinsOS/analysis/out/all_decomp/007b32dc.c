// FUN_007b32dc @ 007b32dc size=2200 calls_out=13 calls_in=1
// strings: encryption failedresp-step0ii_noise_core::cryptography::noise_nx_secp256k1_chachapoly_sha256/nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/f2e45444cf1a7616fcedf64afbe898d8191f44f31eed23608ce2310d851ca320/ii-noise-core-0.2.0/src/cryptography/noise_nx_secp256k1_chachapoly_sha256.rsinit-step1init-step0 | not enough space for MAC in buffer | encryption failedresp-step0ii_noise_core::cryptography::noise_nx_secp256k1_chachapoly_sha256/nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/f2e45444cf1a7616fcedf64afbe898d8191f44f31eed23608ce2310d851ca320/ii-noise-core-0.2.0/src/cryptography/noise_nx_secp256k1_chachapoly_sha256.rsinit-step1init-step0 | a Display implementation returned an error unexpectedly | a Display implementation returned an error unexpectedly

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_007b32dc(undefined4 *param_1,int param_2,int *param_3)

{
  ushort *puVar1;
  undefined4 *puVar2;
  int iVar3;
  int *piVar4;
  undefined2 *puVar5;
  char **ppcVar6;
  char **ppcVar7;
  char **ppcVar8;
  int *piVar9;
  uint uVar10;
  undefined4 *puVar11;
  code *pcVar12;
  int iVar13;
  char **ppcVar14;
  char **ppcVar15;
  char **ppcVar16;
  char **local_e8;
  char **ppcStack_e4;
  char **ppcStack_e0;
  int local_d8;
  int local_d4;
  int iStack_d0;
  char **local_cc;
  uint local_c8;
  int local_c0;
  int local_bc;
  char **local_b8;
  char **ppcStack_b4;
  uint uStack_b0;
  char **local_a8;
  char **ppcStack_a4;
  char **ppcStack_a0;
  undefined4 local_98;
  char **local_94;
  char **local_90;
  char **local_8c;
  char **local_88;
  undefined4 uStack_84;
  int iStack_80;
  undefined4 uStack_7c;
  char **local_78;
  char **local_74;
  char **local_70;
  char **ppcStack_6c;
  char **local_68;
  undefined4 uStack_64;
  int local_60;
  undefined4 uStack_5c;
  char **local_54;
  undefined1 local_50;
  undefined2 local_4c;
  undefined1 local_4a;
  char **local_48;
  undefined1 local_44;
  char ***local_3c;
  undefined1 *local_38;
  uint local_34;
  char *local_30;
  undefined4 local_2c;
  
  local_d8 = *param_3;
  local_d4 = param_3[1];
  iStack_d0 = param_3[2];
  ppcVar8 = (char **)param_3[3];
  uVar10 = param_3[4];
  piVar4 = (int *)(param_2 + 0x10);
  piVar9 = (int *)(param_2 + 0x540);
  local_cc = ppcVar8;
  local_c8 = uVar10;
  if (*piVar4 == 2) {
    FUN_0161e6ac(&local_78,&local_d8,piVar9);
    if (local_78 != (char **)&DAT_80000008) {
      local_e8 = local_70;
      ppcStack_e4 = ppcStack_6c;
      ppcStack_e0 = local_68;
      ppcVar16 = local_74;
      if (local_d8 != 0) {
        thunk_FUN_016d3fb4(local_d4);
      }
      goto LAB_007b36e8;
    }
    if (local_d8 != 0) {
      thunk_FUN_016d3fb4(local_d4);
      *param_1 = &DAT_8000000d;
      return;
    }
    goto LAB_007b36c4;
  }
  local_c0 = *param_3;
  local_bc = param_3[1];
  local_b8 = (char **)param_3[2];
  local_60 = DAT_018d90a8;
  local_70 = (char **)&SUB_00000002;
  ppcStack_b4 = ppcVar8;
  uStack_b0 = uVar10;
  if (DAT_018dd947 == '\0') {
    local_90 = (char **)(DAT_018d90a8 + 0x1c);
    local_94 = (char **)0x0;
    local_98 = (char **)0x4;
    FUN_01694880(&local_78,&local_98);
  }
  local_98 = local_78;
  local_94 = local_74;
  local_90 = local_70;
  local_8c = ppcStack_6c;
  local_88 = local_68;
  uStack_84 = uStack_64;
  iStack_80 = local_60;
  uStack_7c = uStack_5c;
  if (local_70 != (char **)&SUB_00000002) {
    if (((uint)local_70 & 1) != 0) {
      ppcStack_6c = (char **)((int)ppcStack_6c + ((uint)(local_68[2] + -1) & 0xfffffff8) + 8);
    }
    (*(code *)local_68[0xc])(ppcStack_6c,&local_98);
  }
  ppcVar16 = (char **)0x0;
  local_78 = local_98;
  local_74 = local_94;
  local_70 = local_90;
  ppcStack_6c = local_8c;
  local_68 = local_88;
  uStack_64 = uStack_84;
  local_60 = iStack_80;
  uStack_5c = uStack_7c;
  if (local_b8 == ppcVar8) {
    ppcVar6 = (char **)(((uint)ppcVar8 / 0xffef) * 0x10000 - (uint)ppcVar8 / 0xffef);
    if ((uint)ppcVar8 % 0xffef != 0) {
      ppcVar6 = (char **)((int)ppcVar6 + (uint)ppcVar8 % 0xffef + 0x10);
    }
    if ((uint)(*(int *)(param_2 + 0x548) - *(int *)(param_2 + 0x544)) < (int)ppcVar6 + 0x16U) {
      FUN_00f5f538(piVar9);
    }
    ppcVar16 = (char **)0x6;
    puVar1 = (ushort *)FUN_016d38c8(6,1);
    if (puVar1 == (ushort *)0x0) {
LAB_007b3b6c:
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(1,ppcVar16);
    }
    puVar2 = (undefined4 *)FUN_016d38c8(0x16,1);
    if (puVar2 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(1,0x16);
    }
    *(char *)(puVar1 + 1) = (char)(uVar10 >> 0x10);
    *puVar1 = (ushort)(uVar10 >> 9) & 0x8000 | (ushort)uVar10;
    if ((char **)0xffffff < ppcVar8) {
      local_3c = &ppcStack_b4;
      local_38 = &LAB_00fac484;
      FUN_00600d2c(&local_94,&DAT_0058bf1c,&local_3c);
      ppcVar16 = (char **)&SUB_00000002;
      local_a8 = local_94;
      ppcStack_a4 = local_90;
      ppcStack_a0 = local_8c;
LAB_007b368c:
      thunk_FUN_016d3fb4(puVar2);
LAB_007b3694:
      thunk_FUN_016d3fb4(puVar1);
      goto LAB_007b369c;
    }
    *(short *)((int)puVar1 + 3) = (short)ppcVar8;
    *(char *)((int)puVar1 + 5) = (char)((uint)ppcVar8 >> 0x10);
    *(ushort *)(puVar2 + 1) = puVar1[2];
    puVar11 = (undefined4 *)(param_2 + 0x230);
    local_38 = (undefined1 *)*puVar11;
    *puVar2 = *(undefined4 *)puVar1;
    uVar10 = *(uint *)(param_2 + 0x234);
    if (((uint)local_38 & uVar10) == 0xffffffff) {
LAB_007b35a0:
      local_38 = &LAB_00640850;
      local_3c = &local_48;
      local_2c = 0x11;
      local_30 = 
      "encryption failedresp-step0ii_noise_core::cryptography::noise_nx_secp256k1_chachapoly_sha256/nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/f2e45444cf1a7616fcedf64afbe898d8191f44f31eed23608ce2310d851ca320/ii-noise-core-0.2.0/src/cryptography/noise_nx_secp256k1_chachapoly_sha256.rsinit-step1init-step0"
      ;
      local_90 = (char **)0x0;
      local_98 = (char **)0x0;
      local_48 = &local_30;
      local_94 = (char **)&DAT_00000001;
      iVar3 = FUN_00fa948c(&local_98,&DAT_01887680,&DAT_0056b319,&local_3c);
      if (iVar3 != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00fb74f8("a Display implementation returned an error unexpectedly",0x37,&local_3c,
                     &DAT_01887698,&DAT_018af130);
      }
      ppcVar16 = (char **)&DAT_00000001;
      local_a8 = local_98;
      ppcStack_a4 = local_94;
      ppcStack_a0 = local_90;
      goto LAB_007b368c;
    }
    *puVar11 = local_38 + 1;
    *(uint *)(param_2 + 0x234) = uVar10 + ((undefined1 *)0xfffffffe < local_38);
    pcVar12 = *(code **)(*(int *)(param_2 + 0x220) + 4);
    local_3c = (char ***)0x0;
    DataMemoryBarrier(0xb);
    local_34 = uVar10;
    if (DAT_018dd942 != '\x02') {
      FUN_01110ec4();
    }
    (*pcVar12)(&local_98,piVar4,&local_3c,1,0,puVar2,6);
    if ((char)local_98 == '\x01') goto LAB_007b35a0;
    *(undefined1 *)(puVar2 + 2) = local_98._3_1_;
    *(undefined2 *)((int)puVar2 + 6) = local_98._1_2_;
    local_48 = local_8c;
    local_44 = local_88._0_1_;
    *(undefined1 *)((int)puVar2 + 0x15) = local_88._0_1_;
    *(char ***)((int)puVar2 + 0x11) = local_8c;
    *(char ***)((int)puVar2 + 0xd) = local_90;
    *(char ***)((int)puVar2 + 9) = local_94;
    iVar3 = *(int *)(param_2 + 0x544);
    if ((uint)(*(int *)(param_2 + 0x548) - iVar3) < 0x16) {
      FUN_00f5f538(piVar9,0x16);
      iVar3 = *(int *)(param_2 + 0x544);
      iVar13 = *(int *)(param_2 + 0x548);
      FUN_016dd1aa(*(int *)(param_2 + 0x540) + iVar3,puVar2,0x16);
      ppcVar8 = (char **)(iVar13 - iVar3);
      if (ppcVar8 < (char **)0x16) {
        local_98 = (char **)0x16;
        local_94 = ppcVar8;
                    /* WARNING: Subroutine does not return */
        FUN_00f600c0(&local_98);
      }
    }
    else {
      FUN_016dd1aa(*piVar9 + iVar3,puVar2,0x16);
    }
    *(int *)(param_2 + 0x544) = iVar3 + 0x16;
    if (0xffffffe9 < *(uint *)(param_2 + 0x4ec)) {
      ppcVar16 = (char **)&DAT_00000005;
      goto LAB_007b368c;
    }
    *(uint *)(param_2 + 0x4ec) = *(uint *)(param_2 + 0x4ec) + 0x16;
    thunk_FUN_016d3fb4(puVar2);
    thunk_FUN_016d3fb4(puVar1);
    ppcVar16 = (char **)0xffff;
    if (ppcVar6 < (char **)0xffff) {
      ppcVar16 = ppcVar6;
    }
    if (ppcVar6 == (char **)0x0) {
      puVar1 = (ushort *)&DAT_00000001;
      iVar3 = local_bc;
      ppcVar8 = local_b8;
    }
    else {
      puVar1 = (ushort *)FUN_016d38c8(ppcVar16,1);
      iVar3 = local_bc;
      ppcVar8 = local_b8;
      if (puVar1 == (ushort *)0x0) goto LAB_007b3b6c;
    }
    local_bc = iVar3;
    local_b8 = ppcVar8;
    if (ppcVar8 != (char **)0x0) {
      do {
        ppcVar15 = (char **)0xffef;
        if (ppcVar8 < (char **)0xffef) {
          ppcVar15 = ppcVar8;
        }
        ppcVar7 = ppcVar15 + 4;
        if (ppcVar16 < ppcVar7) {
          local_2c = 0x22;
          local_30 = "not enough space for MAC in buffer";
LAB_007b3a50:
          local_90 = (char **)0x0;
          local_98 = (char **)0x0;
          local_48 = &local_30;
          local_3c = &local_48;
          local_94 = (char **)&DAT_00000001;
          local_38 = &LAB_00640850;
          iVar3 = FUN_00fa948c(&local_98,&DAT_01887680,&DAT_0056b319,&local_3c);
          if (iVar3 != 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00fb74f8("a Display implementation returned an error unexpectedly",0x37,&local_3c,
                         &DAT_01887698,&DAT_018af130);
          }
          ppcVar16 = (char **)&DAT_00000001;
          local_a8 = local_98;
          ppcStack_a4 = local_94;
          ppcStack_a0 = local_90;
joined_r0x007b3acc:
          if (ppcVar6 == (char **)0x0) goto LAB_007b369c;
          goto LAB_007b3694;
        }
        FUN_016dd1aa(puVar1,iVar3,ppcVar15);
        local_38 = (undefined1 *)*puVar11;
        uVar10 = *(uint *)(param_2 + 0x234);
        if (local_38 == (undefined1 *)0xffffffff && uVar10 == 0xffffffff) {
LAB_007b3a44:
          local_2c = 0x11;
          local_30 = 
          "encryption failedresp-step0ii_noise_core::cryptography::noise_nx_secp256k1_chachapoly_sha256/nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/f2e45444cf1a7616fcedf64afbe898d8191f44f31eed23608ce2310d851ca320/ii-noise-core-0.2.0/src/cryptography/noise_nx_secp256k1_chachapoly_sha256.rsinit-step1init-step0"
          ;
          goto LAB_007b3a50;
        }
        *puVar11 = local_38 + 1;
        *(uint *)(param_2 + 0x234) = uVar10 + ((undefined1 *)0xfffffffe < local_38);
        local_3c = (char ***)0x0;
        pcVar12 = *(code **)(*(int *)(param_2 + 0x220) + 4);
        DataMemoryBarrier(0xb);
        local_34 = uVar10;
        if (DAT_018dd942 != '\x02') {
          FUN_01110ec4();
        }
        (*pcVar12)(&local_98,piVar4,&local_3c,1,0,puVar1,ppcVar15);
        if ((char)local_98 == '\x01') goto LAB_007b3a44;
        local_54 = local_8c;
        local_4c = local_98._1_2_;
        local_4a = local_98._3_1_;
        local_50 = local_88._0_1_;
        puVar5 = (undefined2 *)((int)puVar1 + (int)ppcVar15);
        *puVar5 = local_98._1_2_;
        *(undefined1 *)(puVar5 + 1) = local_98._3_1_;
        *(char ***)((int)puVar5 + 7) = local_90;
        *(char ***)((int)puVar5 + 3) = local_94;
        *(char ***)((int)puVar5 + 0xb) = local_8c;
        *(undefined1 *)((int)puVar5 + 0xf) = local_88._0_1_;
        iVar13 = *(int *)(param_2 + 0x544);
        ppcVar14 = (char **)(*(int *)(param_2 + 0x548) - iVar13);
        if (ppcVar14 < ppcVar7) {
          FUN_00f5f538(piVar9,ppcVar7);
          iVar13 = *(int *)(param_2 + 0x544);
          ppcVar14 = (char **)(*(int *)(param_2 + 0x548) - iVar13);
        }
        FUN_016dd1aa(*piVar9 + iVar13,puVar1,ppcVar7);
        if (ppcVar14 < ppcVar7) {
          local_98 = ppcVar7;
          local_94 = ppcVar14;
                    /* WARNING: Subroutine does not return */
          FUN_00f600c0(&local_98);
        }
        *(int *)(param_2 + 0x544) = iVar13 + (int)ppcVar7;
        if (CARRY4(*(uint *)(param_2 + 0x4ec),(uint)ppcVar7)) {
          ppcVar16 = (char **)&DAT_00000005;
          goto joined_r0x007b3acc;
        }
        ppcVar8 = (char **)((int)ppcVar8 - (int)ppcVar15);
        iVar3 = iVar3 + (int)ppcVar15;
        *(uint *)(param_2 + 0x4ec) = *(uint *)(param_2 + 0x4ec) + (int)ppcVar7;
      } while (ppcVar8 != (char **)0x0);
    }
    *(int *)(param_2 + 0x4e4) = *(int *)(param_2 + 0x4e4) + 1;
    if (ppcVar6 != (char **)0x0) {
      thunk_FUN_016d3fb4(puVar1);
    }
    ppcVar16 = (char **)&DAT_00000006;
    FUN_0110d7bc(&local_78);
  }
  else {
LAB_007b369c:
    FUN_0110d7bc(&local_78);
  }
  if (local_c0 != 0) {
    thunk_FUN_016d3fb4(local_bc);
  }
  if (ppcVar16 != (char **)&DAT_00000006) {
    local_78 = (char **)&DAT_8000000b;
    local_e8 = local_a8;
    ppcStack_e4 = ppcStack_a4;
    ppcStack_e0 = ppcStack_a0;
LAB_007b36e8:
    *param_1 = local_78;
    param_1[1] = ppcVar16;
    param_1[2] = local_e8;
    param_1[3] = ppcStack_e4;
    param_1[4] = ppcStack_e0;
    return;
  }
LAB_007b36c4:
  *param_1 = &DAT_8000000d;
  return;
}


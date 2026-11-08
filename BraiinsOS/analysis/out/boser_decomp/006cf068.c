// FUN_006cf068 @ 006cf068 size=3644 calls_out=27 calls_in=2
// strings: __InputValue | async_graphql::model::input_value::__InputValue<'_> | __InputValue | __fake_type__ | __InputValue | async_graphql::model::input_value::__InputValue<'_>

void FUN_006cf068(undefined8 *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined *puVar4;
  uint *puVar5;
  undefined4 *puVar6;
  int iVar7;
  uint uVar8;
  undefined *puVar9;
  char ***pppcVar10;
  undefined4 uVar11;
  uint *puVar12;
  undefined4 *puVar13;
  undefined4 ****ppppuVar14;
  uint uVar15;
  undefined8 uVar16;
  longlong lVar17;
  undefined4 ****local_1fc;
  undefined4 local_1f8;
  char *local_1f4;
  undefined4 local_1f0;
  undefined1 local_1e9;
  undefined1 local_1e8 [16];
  uint ****local_1d8;
  undefined1 *local_1d4;
  uint local_1d0;
  char ***local_1cc;
  uint local_1c8;
  uint local_1c4;
  uint local_1c0;
  undefined4 *puStack_1bc;
  uint uStack_1b8;
  uint uStack_1b4;
  uint uStack_1b0;
  uint uStack_1ac;
  undefined8 local_1a8;
  uint local_1a0;
  char ***local_19c;
  undefined4 *local_198;
  uint local_194;
  char ***local_190;
  undefined4 *puStack_18c;
  uint local_188;
  char ***pppcStack_184;
  undefined4 *puStack_180;
  uint uStack_17c;
  undefined4 uStack_178;
  undefined4 local_f4;
  undefined4 *local_f0;
  undefined4 local_ec;
  char ****local_e8;
  char *local_e4;
  char ***local_e0;
  code *local_dc;
  undefined4 *****local_d8;
  char ***local_d4;
  undefined4 *puStack_d0;
  uint uStack_cc;
  char ***pppcStack_c8;
  undefined4 *puStack_c4;
  uint uStack_c0;
  char ***pppcStack_bc;
  undefined4 *puStack_b8;
  uint local_b4;
  char ***local_b0;
  undefined4 *local_ac;
  uint local_a8;
  undefined4 uStack_a4;
  undefined4 local_a0;
  undefined4 local_9c;
  char *local_98;
  undefined4 local_94;
  undefined4 local_90;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  int local_6c;
  undefined4 *local_68;
  int local_64;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 local_54;
  undefined4 local_50;
  uint local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined1 local_3c;
  undefined2 local_3b;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  
  local_1e9 = 1;
  local_1f4 = "async_graphql::model::input_value::__InputValue<\'_>";
  local_1f0 = 0x33;
  local_1f8 = 0xc;
  local_1fc = (undefined4 ****)0x401540;
  iVar1 = FUN_006c176c(*(undefined4 *)(param_2 + 0x40),*(undefined4 *)(param_2 + 0x44));
  if (iVar1 == 0) {
    iVar1 = thunk_FUN_01be5118(0xc);
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00664620(1,0xc);
    }
    FUN_01bed4e2(iVar1,"__InputValue",0xc);
    local_1d0 = 0xc;
    local_1d8 = (undefined4 ****)0xc;
    local_1d4 = (undefined1 *)iVar1;
    FUN_006a0cfc(&local_e8,1,"async_graphql::model::input_value::__InputValue<\'_>",0x33);
    FUN_006c2a34(&local_1a8,(undefined4 *)(param_2 + 0x40),&local_1d8,&local_e8);
    if (local_198 != (undefined4 *)0x80000006) {
      FUN_006a723c(&local_1a8);
    }
    local_e0 = (char ***)0xc;
    local_e8 = (char ****)0x80000000;
    local_e4 = "__InputValue";
    FUN_0160ec7c(local_1e8,&local_e8);
    lVar17 = FUN_013245a0("\nArguments provided to Fields or Directives and the input fields of an\nInputObject are represented as Input Values which describe their type and\noptionally a default value."
                          ,0xac);
    iVar1 = (int)((ulonglong)lVar17 >> 0x20);
    uVar11 = 0;
    if (lVar17 < 0) {
LAB_006cf1c8:
                    /* WARNING: Subroutine does not return */
      FUN_00664620(uVar11,iVar1);
    }
    if (iVar1 == 0) {
      puVar3 = (undefined4 *)&DAT_00000001;
      iVar2 = 0;
    }
    else {
      uVar11 = 1;
      puVar3 = (undefined4 *)FUN_01298504(iVar1,1);
      iVar2 = iVar1;
      if (puVar3 == (undefined4 *)0x0) goto LAB_006cf1c8;
    }
    uVar11 = FUN_01bed4e2(puVar3,(int)lVar17);
    uVar16 = thunk_FUN_01bee35a(uVar11,0x2c0);
    puVar12 = (uint *)((int)uVar16 + (int)((ulonglong)uVar16 >> 0x20));
    if ((char)puVar12[4] == '\0') {
      FUN_019ae6ac(&local_e8);
      *puVar12 = (uint)local_e8;
      puVar12[1] = (uint)local_e4;
      puVar12[2] = (uint)local_e0;
      puVar12[3] = (uint)local_dc;
      *(undefined1 *)(puVar12 + 4) = 1;
    }
    ppppuVar14 = (undefined4 ****)*puVar12;
    uVar15 = puVar12[1];
    puVar5 = puVar12 + 2;
    uVar8 = *puVar5;
    puVar13 = (undefined4 *)(uVar15 + ((undefined4 ****)0xfffffffe < ppppuVar14));
    *puVar12 = (int)ppppuVar14 + 1U;
    puVar12[1] = (uint)puVar13;
    local_1c4 = 8;
    local_1c0 = 0;
    local_1c8 = 0;
    pppcVar10 = (char ***)puVar12[3];
    puStack_1bc = &DAT_0056d238;
    uStack_1b8 = 0;
    uStack_1b4 = 0;
    uStack_1b0 = 0;
    uVar11 = 4;
    local_1d8 = ppppuVar14;
    local_1d4 = (undefined1 *)uVar15;
    local_1d0 = uVar8;
    local_1cc = pppcVar10;
    puVar6 = (undefined4 *)thunk_FUN_01be5118(4);
    if (puVar6 != (undefined4 *)0x0) {
      *puVar6 = 0x656d616e;
      local_ec = 4;
      local_f4 = 4;
      local_f0 = puVar6;
      puVar6 = (undefined4 *)thunk_FUN_01be5118(4);
      if (puVar6 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00664620(1,4);
      }
      *puVar6 = 0x656d616e;
      *puVar12 = (int)ppppuVar14 + 2;
      puVar12[1] = uVar15 + ((undefined4 ****)0xfffffffd < ppppuVar14);
      local_190 = (char ***)0x0;
      local_194 = 4;
      local_198 = (undefined4 *)0x0;
      puStack_18c = &DAT_0056d238;
      local_188 = 0;
      pppcStack_184 = (char ***)0x0;
      puStack_180 = (undefined4 *)0x0;
      local_1a8._0_4_ = (char ***)((int)ppppuVar14 + 1U);
      local_1a8._4_4_ = puVar13;
      local_1a0 = uVar8;
      local_19c = pppcVar10;
      FUN_006c86e0(&local_38,param_2);
      local_64 = 4;
      local_6c = 4;
      local_9c = 0x80000000;
      local_e0 = (char ***)local_1a8;
      local_dc = (code *)local_1a8._4_4_;
      local_d8 = (undefined4 *****)local_1a0;
      local_d4 = local_19c;
      puStack_d0 = local_198;
      uStack_cc = local_194;
      pppcStack_c8 = local_190;
      puStack_c4 = puStack_18c;
      uStack_c0 = local_188;
      pppcStack_bc = pppcStack_184;
      puStack_b8 = puStack_180;
      local_b4 = uStack_17c;
      local_60 = local_38;
      uStack_5c = uStack_34;
      uStack_58 = uStack_30;
      local_e4 = (char *)CONCAT31(local_e4._1_3_,1);
      local_a8 = 0x80000001;
      local_3c = 0;
      local_e8 = (char ****)0x0;
      local_84 = 0x80000000;
      local_90 = 0x80000000;
      local_3b = 0;
      local_b0 = (char ***)0x0;
      local_4c = 0;
      local_50 = 4;
      local_54 = 0;
      local_78 = 0x80000000;
      local_40 = 0;
      local_44 = 8;
      local_48 = 0;
      local_ac = (undefined4 *)0x0;
      local_68 = puVar6;
      FUN_006e10e8(&local_1a8,&local_1d8,&local_f4);
      FUN_01041150(&local_1a8);
      uVar11 = 0xb;
      puVar6 = (undefined4 *)thunk_FUN_01be5118(0xb);
      if (puVar6 != (undefined4 *)0x0) {
        FUN_01bed4e2(puVar6,"description",0xb);
        local_ec = 0xb;
        local_f4 = 0xb;
        local_f0 = puVar6;
        puVar6 = (undefined4 *)thunk_FUN_01be5118(0xb);
        if (puVar6 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_00664620(1,0xb);
        }
        FUN_01bed4e2(puVar6,"description",0xb);
        if ((char)puVar12[4] == '\0') {
          FUN_019ae6ac(&local_e8);
          *puVar12 = (uint)local_e8;
          puVar12[1] = (uint)local_e4;
          *puVar5 = (uint)local_e0;
          puVar12[3] = (uint)local_dc;
          *(undefined1 *)(puVar12 + 4) = 1;
        }
        local_1a8._0_4_ = (char ***)*puVar12;
        local_1a8._4_4_ = (undefined4 *)puVar12[1];
        local_1a0 = *puVar5;
        local_19c = (char ***)puVar12[3];
        *puVar12 = (int)(char ***)local_1a8 + 1;
        puVar12[1] = (int)local_1a8._4_4_ + (uint)((char ***)0xfffffffe < (char ***)local_1a8);
        local_198 = (undefined4 *)0x0;
        local_194 = 4;
        local_190 = (char ***)0x0;
        puStack_18c = &DAT_0056d238;
        local_188 = 0;
        pppcStack_184 = (char ***)0x0;
        puStack_180 = (undefined4 *)0x0;
        FUN_006c06dc(&local_38,param_2);
        local_64 = 0xb;
        local_6c = 0xb;
        local_9c = 0x80000000;
        local_e0 = (char ***)local_1a8;
        local_dc = (code *)local_1a8._4_4_;
        local_d8 = (undefined4 *****)local_1a0;
        local_d4 = local_19c;
        puStack_d0 = local_198;
        uStack_cc = local_194;
        pppcStack_c8 = local_190;
        puStack_c4 = puStack_18c;
        uStack_c0 = local_188;
        pppcStack_bc = pppcStack_184;
        puStack_b8 = puStack_180;
        local_b4 = uStack_17c;
        local_60 = local_38;
        uStack_5c = uStack_34;
        uStack_58 = uStack_30;
        local_e4 = (char *)CONCAT31(local_e4._1_3_,1);
        local_a8 = 0x80000001;
        local_3c = 0;
        local_3b = 0;
        local_e8 = (char ****)0x0;
        local_84 = 0x80000000;
        local_90 = 0x80000000;
        local_b0 = (char ***)0x0;
        local_4c = 0;
        local_50 = 4;
        local_54 = 0;
        local_78 = 0x80000000;
        local_40 = 0;
        local_44 = 8;
        local_48 = 0;
        local_ac = (undefined4 *)0x0;
        local_68 = puVar6;
        FUN_006e10e8(&local_1a8,&local_1d8,&local_f4,&local_e8);
        FUN_01041150(&local_1a8);
        uVar11 = 4;
        puVar6 = (undefined4 *)thunk_FUN_01be5118(4);
        if (puVar6 != (undefined4 *)0x0) {
          *puVar6 = 0x65707974;
          local_ec = 4;
          local_f4 = 4;
          local_f0 = puVar6;
          puVar6 = (undefined4 *)thunk_FUN_01be5118();
          if (puVar6 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_00664620(1,4);
          }
          *puVar6 = 0x65707974;
          if ((char)puVar12[4] == '\0') {
            FUN_019ae6ac(&local_e8);
            *puVar12 = (uint)local_e8;
            puVar12[1] = (uint)local_e4;
            *puVar5 = (uint)local_e0;
            puVar12[3] = (uint)local_dc;
            *(undefined1 *)(puVar12 + 4) = 1;
          }
          local_1a8._0_4_ = (char ***)*puVar12;
          local_1a8._4_4_ = (undefined4 *)puVar12[1];
          local_1a0 = *puVar5;
          local_19c = (char ***)puVar12[3];
          *puVar12 = (int)(char ***)local_1a8 + 1;
          puVar12[1] = (int)local_1a8._4_4_ + (uint)((char ***)0xfffffffe < (char ***)local_1a8);
          local_198 = (undefined4 *)0x0;
          local_190 = (char ***)0x0;
          local_194 = 4;
          puStack_18c = &DAT_0056d238;
          local_188 = 0;
          pppcStack_184 = (char ***)0x0;
          puStack_180 = (undefined4 *)0x0;
          FUN_006aaf00(&local_38,param_2);
          local_64 = 4;
          local_6c = 4;
          local_9c = 0x80000000;
          local_e0 = (char ***)local_1a8;
          local_dc = (code *)local_1a8._4_4_;
          local_d8 = (undefined4 *****)local_1a0;
          local_d4 = local_19c;
          puStack_d0 = local_198;
          uStack_cc = local_194;
          pppcStack_c8 = local_190;
          puStack_c4 = puStack_18c;
          uStack_c0 = local_188;
          pppcStack_bc = pppcStack_184;
          puStack_b8 = puStack_180;
          local_b4 = uStack_17c;
          local_60 = local_38;
          uStack_5c = uStack_34;
          uStack_58 = uStack_30;
          local_e4 = (char *)CONCAT31(local_e4._1_3_,1);
          local_a8 = 0x80000001;
          local_3c = 0;
          local_3b = 0;
          local_e8 = (char ****)0x0;
          local_84 = 0x80000000;
          local_90 = 0x80000000;
          local_b0 = (char ***)0x0;
          local_4c = 0;
          local_50 = 4;
          local_54 = 0;
          local_78 = 0x80000000;
          local_40 = 0;
          local_44 = 8;
          local_48 = 0;
          local_ac = (undefined4 *)0x0;
          local_68 = puVar6;
          FUN_006e10e8(&local_1a8,&local_1d8,&local_f4,&local_e8);
          FUN_01041150(&local_1a8);
          uVar11 = 0xc;
          puVar6 = (undefined4 *)thunk_FUN_01be5118(0xc);
          if (puVar6 != (undefined4 *)0x0) {
            FUN_01bed4e2(puVar6,"defaultValue",0xc);
            local_ec = 0xc;
            local_f4 = 0xc;
            local_f0 = puVar6;
            puVar6 = (undefined4 *)thunk_FUN_01be5118(0xc);
            if (puVar6 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_00664620(1,0xc);
            }
            FUN_01bed4e2(puVar6,"defaultValue",0xc);
            if ((char)puVar12[4] == '\0') {
              FUN_019ae6ac(&local_e8);
              *puVar12 = (uint)local_e8;
              puVar12[1] = (uint)local_e4;
              *puVar5 = (uint)local_e0;
              puVar12[3] = (uint)local_dc;
              *(undefined1 *)(puVar12 + 4) = 1;
            }
            local_1a8._0_4_ = (char ***)*puVar12;
            local_1a8._4_4_ = (undefined4 *)puVar12[1];
            local_1a0 = *puVar5;
            local_19c = (char ***)puVar12[3];
            *puVar12 = (int)(char ***)local_1a8 + 1;
            puVar12[1] = (int)local_1a8._4_4_ + (uint)((char ***)0xfffffffe < (char ***)local_1a8);
            local_198 = (undefined4 *)0x0;
            local_190 = (char ***)0x0;
            local_194 = 4;
            puStack_18c = &DAT_0056d238;
            local_188 = 0;
            pppcStack_184 = (char ***)0x0;
            puStack_180 = (undefined4 *)0x0;
            FUN_006c06dc(&local_38,param_2);
            local_64 = 0xc;
            local_6c = 0xc;
            local_9c = 0x80000000;
            local_e0 = (char ***)local_1a8;
            local_dc = (code *)local_1a8._4_4_;
            local_d8 = (undefined4 *****)local_1a0;
            local_d4 = local_19c;
            puStack_d0 = local_198;
            uStack_cc = local_194;
            pppcStack_c8 = local_190;
            puStack_c4 = puStack_18c;
            uStack_c0 = local_188;
            pppcStack_bc = pppcStack_184;
            puStack_b8 = puStack_180;
            local_b4 = uStack_17c;
            local_60 = local_38;
            uStack_5c = uStack_34;
            uStack_58 = uStack_30;
            local_e4 = (char *)CONCAT31(local_e4._1_3_,1);
            local_a8 = 0x80000001;
            local_3c = 0;
            local_3b = 0;
            local_e8 = (char ****)0x0;
            local_84 = 0x80000000;
            local_90 = 0x80000000;
            local_b0 = (char ***)0x0;
            local_4c = 0;
            local_50 = 4;
            local_54 = 0;
            local_78 = 0x80000000;
            local_40 = 0;
            local_44 = 8;
            local_48 = 0;
            local_ac = (undefined4 *)0x0;
            local_68 = puVar6;
            FUN_006e10e8(&local_1a8,&local_1d8,&local_f4,&local_e8);
            FUN_01041150(&local_1a8);
            uVar11 = 0xc;
            puVar6 = (undefined4 *)thunk_FUN_01be5118(0xc);
            if (puVar6 != (undefined4 *)0x0) {
              FUN_01bed4e2(puVar6,"isDeprecated",0xc);
              local_ec = 0xc;
              local_f4 = 0xc;
              local_f0 = puVar6;
              puVar6 = (undefined4 *)thunk_FUN_01be5118(0xc);
              if (puVar6 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_00664620(1,0xc);
              }
              FUN_01bed4e2(puVar6,"isDeprecated",0xc);
              if ((char)puVar12[4] == '\0') {
                FUN_019ae6ac(&local_e8);
                *puVar12 = (uint)local_e8;
                puVar12[1] = (uint)local_e4;
                *puVar5 = (uint)local_e0;
                puVar12[3] = (uint)local_dc;
                *(undefined1 *)(puVar12 + 4) = 1;
              }
              local_1a8._0_4_ = (char ***)*puVar12;
              local_1a8._4_4_ = (undefined4 *)puVar12[1];
              local_1a0 = *puVar5;
              local_19c = (char ***)puVar12[3];
              *puVar12 = (int)(char ***)local_1a8 + 1;
              puVar12[1] = (int)local_1a8._4_4_ + (uint)((char ***)0xfffffffe < (char ***)local_1a8)
              ;
              local_198 = (undefined4 *)0x0;
              local_190 = (char ***)0x0;
              local_194 = 4;
              puStack_18c = &DAT_0056d238;
              local_188 = 0;
              pppcStack_184 = (char ***)0x0;
              puStack_180 = (undefined4 *)0x0;
              FUN_006ded7c(&local_38,param_2);
              local_64 = 0xc;
              local_6c = 0xc;
              local_9c = 0x80000000;
              local_e0 = (char ***)local_1a8;
              local_dc = (code *)local_1a8._4_4_;
              local_d8 = (undefined4 *****)local_1a0;
              local_d4 = local_19c;
              puStack_d0 = local_198;
              uStack_cc = local_194;
              pppcStack_c8 = local_190;
              puStack_c4 = puStack_18c;
              uStack_c0 = local_188;
              pppcStack_bc = pppcStack_184;
              puStack_b8 = puStack_180;
              local_b4 = uStack_17c;
              local_60 = local_38;
              uStack_5c = uStack_34;
              uStack_58 = uStack_30;
              local_e4 = (char *)CONCAT31(local_e4._1_3_,1);
              local_a8 = 0x80000001;
              local_3c = 0;
              local_3b = 0;
              local_e8 = (char ****)0x0;
              local_84 = 0x80000000;
              local_90 = 0x80000000;
              local_b0 = (char ***)0x0;
              local_4c = 0;
              local_50 = 4;
              local_54 = 0;
              local_78 = 0x80000000;
              local_40 = 0;
              local_44 = 8;
              local_48 = 0;
              local_ac = (undefined4 *)0x0;
              local_68 = puVar6;
              FUN_006e10e8(&local_1a8,&local_1d8,&local_f4,&local_e8);
              FUN_01041150(&local_1a8);
              uVar11 = 0x11;
              puVar6 = (undefined4 *)thunk_FUN_01be5118(0x11);
              if (puVar6 != (undefined4 *)0x0) {
                FUN_01bed4e2(puVar6,"deprecationReason",0x11);
                local_ec = 0x11;
                local_f4 = 0x11;
                local_f0 = puVar6;
                iVar7 = thunk_FUN_01be5118(0x11);
                if (iVar7 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_00664620(1,0x11);
                }
                FUN_01bed4e2(iVar7,"deprecationReason",0x11);
                if ((char)puVar12[4] == '\0') {
                  FUN_019ae6ac(&local_e8);
                  *puVar12 = (uint)local_e8;
                  puVar12[1] = (uint)local_e4;
                  *puVar5 = (uint)local_e0;
                  puVar12[3] = (uint)local_dc;
                  *(undefined1 *)(puVar12 + 4) = 1;
                }
                local_1a8._0_4_ = (char ***)*puVar12;
                local_1a8._4_4_ = (undefined4 *)puVar12[1];
                local_1a0 = *puVar5;
                local_19c = (char ***)puVar12[3];
                *puVar12 = (int)(char ***)local_1a8 + 1;
                puVar12[1] = (int)local_1a8._4_4_ +
                             (uint)((char ***)0xfffffffe < (char ***)local_1a8);
                local_198 = (undefined4 *)0x0;
                local_190 = (char ***)0x0;
                local_194 = 4;
                puStack_18c = &DAT_0056d238;
                local_188 = 0;
                pppcStack_184 = (char ***)0x0;
                puStack_180 = (undefined4 *)0x0;
                FUN_006c06dc(&local_38,param_2);
                local_64 = 0x11;
                local_6c = 0x11;
                local_9c = 0x80000000;
                local_e0 = (char ***)local_1a8;
                local_dc = (code *)local_1a8._4_4_;
                local_d8 = (undefined4 *****)local_1a0;
                local_d4 = local_19c;
                puStack_d0 = local_198;
                uStack_cc = local_194;
                pppcStack_c8 = local_190;
                puStack_c4 = puStack_18c;
                uStack_c0 = local_188;
                pppcStack_bc = pppcStack_184;
                puStack_b8 = puStack_180;
                local_e4 = (char *)CONCAT31(local_e4._1_3_,1);
                local_a8 = 0x80000001;
                local_3c = 0;
                local_3b = 0;
                local_e8 = (char ****)0x0;
                local_84 = 0x80000000;
                local_90 = 0x80000000;
                local_b0 = (char ***)0x0;
                local_4c = 0;
                local_50 = 4;
                local_54 = 0;
                local_78 = 0x80000000;
                local_40 = 0;
                local_44 = 8;
                local_48 = 0;
                local_ac = (undefined4 *)0x0;
                local_68 = (undefined4 *)iVar7;
                FUN_006e10e8(&local_1a8,&local_1d8,&local_f4,&local_e8);
                FUN_01041150(&local_1a8);
                puVar12 = (uint *)((uint)&local_1a8 | 4);
                *puVar12 = (uint)local_1d8;
                puVar12[1] = (uint)local_1d4;
                puVar12[2] = local_1d0;
                puVar12[3] = (uint)local_1cc;
                puVar12[4] = local_1c8;
                puVar12[5] = local_1c4;
                puVar12[6] = local_1c0;
                puVar12[7] = (uint)puStack_1bc;
                puVar12[8] = uStack_1b8;
                puVar12[9] = uStack_1b4;
                puVar12[10] = uStack_1b0;
                puVar12[0xb] = uStack_1ac;
                local_d8 = (undefined4 *****)0x80000001;
                local_d4 = (char ***)local_1a8;
                puStack_d0 = local_1a8._4_4_;
                uStack_cc = local_1a0;
                pppcStack_c8 = local_19c;
                puStack_c4 = local_198;
                uStack_c0 = local_194;
                pppcStack_bc = local_190;
                puStack_b8 = puStack_18c;
                local_b4 = local_188;
                local_b0 = pppcStack_184;
                local_ac = puStack_180;
                local_a8 = uStack_17c;
                uStack_a4 = uStack_178;
                local_54 = 0;
                local_70 = 0;
                local_78 = 0;
                local_4c = local_4c & 0xffff0000;
                local_50 = 0x10000;
                local_60 = 0x80000000;
                local_74 = 8;
                local_80 = 4;
                local_7c = 0;
                local_84 = 0;
                local_94 = 0x33;
                local_a0 = 0;
                local_98 = "async_graphql::model::input_value::__InputValue<\'_>";
                local_9c = CONCAT31(local_9c._1_3_,1);
                local_6c = iVar2;
                local_68 = puVar3;
                local_64 = iVar1;
                iVar1 = FUN_006c4014(*(undefined4 *)(param_2 + 0x40),*(undefined4 *)(param_2 + 0x44)
                                     ,"__InputValue",0xc);
                if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_012fb0cc(&DAT_01c226c0);
                }
                FUN_006a723c();
                FUN_01bed4e2(iVar1,&local_e8,0xb0);
                goto LAB_006cfca4;
              }
            }
          }
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_00664620(1,uVar11);
  }
  uVar16 = FUN_006a71d4();
  iVar7 = (int)((ulonglong)uVar16 >> 0x20);
  iVar2 = (int)uVar16;
  if (iVar2 == 0) goto LAB_006cfca4;
  local_1a8 = uVar16;
  if (iVar7 == 0x33) {
    iVar2 = thunk_FUN_01bed842("async_graphql::model::input_value::__InputValue<\'_>",iVar2,0x33);
    if (iVar2 != 0) goto LAB_006cf228;
  }
  else {
    if (iVar7 == 0xd) {
      iVar2 = thunk_FUN_01bed842(iVar2,"__fake_type__",0xd);
      if (iVar2 == 0) goto LAB_006cfca4;
    }
LAB_006cf228:
    iVar2 = FUN_006e5bc0(param_2 + 0x20,"__InputValue",0xc);
    if (iVar2 == 0) {
      local_d8 = &local_1fc;
      puVar9 = &DAT_01c226d0;
      puVar4 = &DAT_00572c5c;
      local_e0 = (char ***)&local_1f4;
      local_dc = (code *)&DAT_0132b6a0;
      local_e8 = (char ****)&local_1a8;
      goto LAB_006cfd30;
    }
  }
  uVar8 = 2;
  if ((int)*(uint *)(iVar1 + 0x10) < 0) {
    uVar8 = *(uint *)(iVar1 + 0x10) ^ 0x80000000;
  }
  if (uVar8 == 1) {
LAB_006cfca4:
    FUN_006d197c(&local_e8);
    FUN_019bb7e0(local_e8,local_e4);
    FUN_006d197c(&local_e8);
    local_1d4 = &LAB_00632348;
    local_1d8 = (uint ****)&local_e8;
    FUN_00664898(&local_1a8,&DAT_005791cb,&local_1d8);
    FUN_019bb7e0(local_e8,local_e4);
    *param_1 = local_1a8;
    *(uint *)(param_1 + 1) = local_1a0;
    return;
  }
  local_d8 = &local_1d8;
  local_e0 = (char ***)&local_1e9;
  puVar9 = &DAT_01c226e0;
  local_1d8 = (uint ****)CONCAT31(local_1d8._1_3_,(char)uVar8);
  puVar4 = &DAT_005b5680;
  local_dc = FUN_006a7514;
  local_e8 = (char ****)&local_1fc;
LAB_006cfd30:
  local_e4 = (char *)&DAT_0132b6a0;
  local_d4 = (char ***)local_dc;
                    /* WARNING: Subroutine does not return */
  FUN_012fb100(puVar4,&local_e8,puVar9);
}


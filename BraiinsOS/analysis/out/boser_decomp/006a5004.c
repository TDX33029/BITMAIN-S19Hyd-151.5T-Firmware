// FUN_006a5004 @ 006a5004 size=7800 calls_out=21 calls_in=1
// strings: async_graphql::model::directive::__DirectiveLocation | __fake_type__ | async_graphql::model::directive::__DirectiveLocation | async_graphql::model::directive::__DirectiveLocation | __DirectiveLocation |  A Directive can be adjacent to many parts of the GraphQL language; a __DirectiveLocation describes one such possible adjacencies.

void FUN_006a5004(int param_1,int param_2,uint param_3)

{
  undefined1 uVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  uint *puVar6;
  int iVar7;
  uint *puVar8;
  undefined4 uVar9;
  uint *puVar10;
  uint uVar11;
  bool bVar12;
  longlong lVar13;
  undefined8 uVar14;
  int local_1f4;
  undefined4 *local_1e8;
  int local_1e4;
  uint local_1e0;
  char *local_1dc;
  undefined4 local_1d8;
  undefined1 local_1d1;
  undefined8 local_1d0 [2];
  int local_1c0;
  int *local_120;
  uint *local_11c;
  char **local_118;
  code *local_114;
  uint *local_110;
  code *local_10c;
  char *local_108;
  undefined4 local_104;
  uint local_100;
  uint *local_fc;
  uint local_f8;
  uint *local_f4;
  undefined4 local_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 *local_e4;
  uint local_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 local_d0;
  int local_cc;
  int local_c8;
  int local_c4;
  undefined4 local_b4;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined4 local_a0;
  undefined1 local_9c;
  undefined1 local_70 [16];
  uint local_60;
  uint local_5c;
  uint local_58;
  uint uStack_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 *puStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 local_30;
  undefined4 *local_2c;
  undefined4 local_28;
  
  local_1d8 = 0x34;
  local_1d1 = 4;
  local_1dc = "async_graphql::model::directive::__DirectiveLocation";
  local_1e4 = param_2;
  local_1e0 = param_3;
  iVar2 = FUN_006c176c(*(undefined4 *)(param_1 + 0x40),*(undefined4 *)(param_1 + 0x44),param_2,
                       param_3);
  if (iVar2 == 0) {
    uVar9 = 0;
    if ((int)param_3 < 0) {
LAB_006a50b4:
                    /* WARNING: Subroutine does not return */
      FUN_00664620(uVar9,param_3);
    }
    if (param_3 == 0) {
      uVar11 = 0;
      iVar2 = 1;
    }
    else {
      uVar9 = 1;
      iVar2 = FUN_01298504(param_3,1);
      uVar11 = param_3;
      if (iVar2 == 0) goto LAB_006a50b4;
    }
    FUN_01bed4e2(iVar2,param_2,param_3);
    local_60 = uVar11;
    local_5c = iVar2;
    local_58 = param_3;
    FUN_006a0cfc(&local_120,4,"async_graphql::model::directive::__DirectiveLocation",0x34);
    FUN_006c2a34(local_1d0,(undefined4 *)(param_1 + 0x40),&local_60,&local_120);
    if (local_1c0 != -0x7ffffffa) {
      FUN_006a723c(local_1d0);
    }
    local_118 = (char **)0x13;
    local_11c = (uint *)0x3d7280;
    local_120 = (int *)0x80000000;
    FUN_0160ec7c(local_70,&local_120);
    lVar13 = FUN_013245a0("\nA Directive can be adjacent to many parts of the GraphQL language, a\n__DirectiveLocation describes one such possible adjacencies."
                          ,0x82);
    iVar3 = (int)((ulonglong)lVar13 >> 0x20);
    if (lVar13 < 0) {
      uVar9 = 0;
      iVar3 = iVar2;
LAB_006a51dc:
                    /* WARNING: Subroutine does not return */
      FUN_00664620(uVar9,iVar3);
    }
    if (iVar3 == 0) {
      local_1f4 = 0;
      iVar2 = 1;
    }
    else {
      uVar9 = 1;
      iVar2 = FUN_01298504(iVar3,1);
      if (iVar2 == 0) goto LAB_006a51dc;
      local_1f4 = iVar3;
    }
    uVar9 = FUN_01bed4e2(iVar2,(int)lVar13,iVar3);
    uVar14 = thunk_FUN_01bee35a(uVar9,0x2c0);
    puVar8 = (uint *)((int)uVar14 + (int)((ulonglong)uVar14 >> 0x20));
    if ((char)puVar8[4] == '\0') {
      FUN_019ae6ac(&local_120);
      *puVar8 = (uint)local_120;
      puVar8[1] = (uint)local_11c;
      puVar8[2] = (uint)local_118;
      puVar8[3] = (uint)local_114;
      *(undefined1 *)(puVar8 + 4) = 1;
    }
    local_60 = *puVar8;
    local_5c = puVar8[1];
    local_58 = puVar8[2];
    uStack_54 = puVar8[3];
    *puVar8 = local_60 + 1;
    puVar8[1] = local_5c + (0xfffffffe < local_60);
    local_48 = 0;
    local_50 = 0;
    local_4c = 4;
    puStack_44 = &DAT_0056d238;
    uStack_40 = 0;
    uStack_3c = 0;
    uStack_38 = 0;
    puVar4 = (undefined4 *)thunk_FUN_01be5118(5);
    if (puVar4 == (undefined4 *)0x0) {
      local_1e8 = (undefined4 *)&DAT_00000005;
    }
    else {
      *(undefined1 *)(puVar4 + 1) = 0x59;
      *puVar4 = 0x52455551;
      local_28 = 5;
      local_30 = 5;
      local_2c = puVar4;
      puVar8 = (uint *)thunk_FUN_01be5118(5);
      if (puVar8 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00664620(1,5);
      }
      *(undefined1 *)(puVar8 + 1) = 0x59;
      *puVar8 = 0x52455551;
      lVar13 = FUN_013245a0("\nLocation adjacent to a query operation.",0x28);
      local_f4 = (uint *)((ulonglong)lVar13 >> 0x20);
      if (lVar13 < 0) {
        uVar9 = 0;
        local_f4 = &local_60;
LAB_006a5328:
                    /* WARNING: Subroutine does not return */
        FUN_00664620(uVar9,local_f4);
      }
      if (local_f4 == (uint *)0x0) {
        iVar5 = 1;
        puVar6 = (uint *)0x0;
      }
      else {
        uVar9 = 1;
        iVar5 = FUN_01298504(local_f4,1);
        if (iVar5 == 0) goto LAB_006a5328;
        puVar6 = local_f4;
      }
      FUN_01bed4e2(iVar5,(int)lVar13,local_f4);
      local_e0 = local_e0 & 0xffffff00;
      local_f0 = 0x80000001;
      local_118 = (char **)0x5;
      local_104 = 8;
      local_e4 = (undefined4 *)0x0;
      local_120 = (int *)0x5;
      local_100 = 0;
      local_108 = (char *)0x0;
      local_10c = (code *)0x0;
      local_110 = (uint *)0x4;
      local_114 = (code *)0x0;
      local_11c = puVar8;
      local_fc = puVar6;
      local_f8 = iVar5;
      FUN_006e0c4c(local_1d0,&local_60,&local_30,&local_120);
      FUN_006a74b8(local_1d0);
      puVar4 = (undefined4 *)thunk_FUN_01be5118(8);
      if (puVar4 == (undefined4 *)0x0) {
        local_1e8 = (undefined4 *)&DAT_00000008;
      }
      else {
        puVar4[1] = 0x4e4f4954;
        *puVar4 = 0x4154554d;
        local_28 = 8;
        local_30 = 8;
        local_2c = puVar4;
        puVar8 = (uint *)thunk_FUN_01be5118(8);
        if (puVar8 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_00664620(1,8);
        }
        *puVar8 = 0x4154554d;
        puVar8[1] = 0x4e4f4954;
        lVar13 = FUN_013245a0("\nLocation adjacent to a mutation operation.",0x2b);
        puVar6 = (uint *)((ulonglong)lVar13 >> 0x20);
        if (lVar13 < 0) {
          uVar9 = 0;
          puVar6 = (uint *)0x4154554d;
LAB_006a547c:
                    /* WARNING: Subroutine does not return */
          FUN_00664620(uVar9,puVar6);
        }
        if (puVar6 == (uint *)0x0) {
          iVar5 = 1;
          puVar10 = (uint *)0x0;
        }
        else {
          uVar9 = 1;
          iVar5 = FUN_01298504(puVar6,1);
          if (iVar5 == 0) goto LAB_006a547c;
          puVar10 = puVar6;
        }
        FUN_01bed4e2(iVar5,(int)lVar13,puVar6);
        local_e0 = local_e0 & 0xffffff00;
        local_f0 = 0x80000001;
        local_118 = (char **)0x8;
        local_104 = 8;
        local_e4 = (undefined4 *)0x0;
        local_120 = (int *)0x8;
        local_100 = 0;
        local_108 = (char *)0x0;
        local_10c = (code *)0x0;
        local_110 = (uint *)0x4;
        local_114 = (code *)0x0;
        local_11c = puVar8;
        local_fc = puVar10;
        local_f8 = iVar5;
        local_f4 = puVar6;
        FUN_006e0c4c(local_1d0,&local_60,&local_30,&local_120);
        FUN_006a74b8(local_1d0);
        puVar4 = (undefined4 *)thunk_FUN_01be5118(0xc);
        if (puVar4 == (undefined4 *)0x0) {
          local_1e8 = (undefined4 *)&DAT_0000000c;
        }
        else {
          FUN_01bed4e2(puVar4,"SUBSCRIPTIONFIELD",0xc);
          local_28 = 0xc;
          local_30 = 0xc;
          local_2c = puVar4;
          puVar6 = (uint *)thunk_FUN_01be5118(0xc);
          if (puVar6 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_00664620(1,0xc);
          }
          FUN_01bed4e2(puVar6,"SUBSCRIPTIONFIELD",0xc);
          lVar13 = FUN_013245a0("\nLocation adjacent to a subscription operation.",0x2f);
          puVar10 = (uint *)((ulonglong)lVar13 >> 0x20);
          if (lVar13 < 0) {
            uVar9 = 0;
            puVar10 = puVar8;
LAB_006a55d0:
                    /* WARNING: Subroutine does not return */
            FUN_00664620(uVar9,puVar10);
          }
          if (puVar10 == (uint *)0x0) {
            iVar5 = 1;
            puVar8 = (uint *)0x0;
          }
          else {
            uVar9 = 1;
            iVar5 = FUN_01298504(puVar10,1);
            if (iVar5 == 0) goto LAB_006a55d0;
            puVar8 = puVar10;
          }
          FUN_01bed4e2(iVar5,(int)lVar13,puVar10);
          local_e0 = local_e0 & 0xffffff00;
          local_f0 = 0x80000001;
          local_118 = (char **)0xc;
          local_104 = 8;
          local_e4 = (undefined4 *)0x0;
          local_120 = (int *)0xc;
          local_100 = 0;
          local_108 = (char *)0x0;
          local_10c = (code *)0x0;
          local_110 = (uint *)0x4;
          local_114 = (code *)0x0;
          local_11c = puVar6;
          local_fc = puVar8;
          local_f8 = iVar5;
          local_f4 = puVar10;
          FUN_006e0c4c(local_1d0,&local_60,&local_30,&local_120);
          FUN_006a74b8(local_1d0);
          puVar4 = (undefined4 *)thunk_FUN_01be5118(5);
          if (puVar4 == (undefined4 *)0x0) {
            local_1e8 = (undefined4 *)&DAT_00000005;
          }
          else {
            *(undefined1 *)(puVar4 + 1) = 0x44;
            *puVar4 = 0x4c454946;
            local_28 = 5;
            local_30 = 5;
            local_2c = puVar4;
            puVar8 = (uint *)thunk_FUN_01be5118(5);
            if (puVar8 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_00664620(1,5);
            }
            *(undefined1 *)(puVar8 + 1) = 0x44;
            *puVar8 = 0x4c454946;
            lVar13 = FUN_013245a0("\nLocation adjacent to a field.",0x1e);
            puVar6 = (uint *)((ulonglong)lVar13 >> 0x20);
            if (lVar13 < 0) {
              uVar9 = 0;
              puVar6 = (uint *)0x4c454946;
LAB_006a571c:
                    /* WARNING: Subroutine does not return */
              FUN_00664620(uVar9,puVar6);
            }
            if (puVar6 == (uint *)0x0) {
              iVar5 = 1;
              puVar10 = (uint *)0x0;
            }
            else {
              uVar9 = 1;
              iVar5 = FUN_01298504(puVar6,1);
              if (iVar5 == 0) goto LAB_006a571c;
              puVar10 = puVar6;
            }
            FUN_01bed4e2(iVar5,(int)lVar13,puVar6);
            local_e0 = local_e0 & 0xffffff00;
            local_f0 = 0x80000001;
            local_118 = (char **)0x5;
            local_104 = 8;
            local_e4 = (undefined4 *)0x0;
            local_120 = (int *)0x5;
            local_100 = 0;
            local_108 = (char *)0x0;
            local_10c = (code *)0x0;
            local_110 = (uint *)0x4;
            local_114 = (code *)0x0;
            local_11c = puVar8;
            local_fc = puVar10;
            local_f8 = iVar5;
            local_f4 = puVar6;
            FUN_006e0c4c(local_1d0,&local_60,&local_30,&local_120);
            FUN_006a74b8(local_1d0);
            puVar4 = (undefined4 *)thunk_FUN_01be5118(0x13);
            if (puVar4 == (undefined4 *)0x0) {
              local_1e8 = (undefined4 *)&DAT_00000013;
            }
            else {
              FUN_01bed4e2(puVar4,"FRAGMENT_DEFINITION",0x13);
              local_28 = 0x13;
              local_30 = 0x13;
              local_2c = puVar4;
              puVar6 = (uint *)thunk_FUN_01be5118(0x13);
              if (puVar6 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_00664620(1,0x13);
              }
              FUN_01bed4e2(puVar6,"FRAGMENT_DEFINITION",0x13);
              lVar13 = FUN_013245a0("\nLocation adjacent to a fragment definition.",0x2c);
              puVar10 = (uint *)((ulonglong)lVar13 >> 0x20);
              if (lVar13 < 0) {
                uVar9 = 0;
                puVar10 = puVar8;
LAB_006a5874:
                    /* WARNING: Subroutine does not return */
                FUN_00664620(uVar9,puVar10);
              }
              if (puVar10 == (uint *)0x0) {
                iVar5 = 1;
                puVar8 = (uint *)0x0;
              }
              else {
                uVar9 = 1;
                iVar5 = FUN_01298504(puVar10,1);
                if (iVar5 == 0) goto LAB_006a5874;
                puVar8 = puVar10;
              }
              FUN_01bed4e2(iVar5,(int)lVar13,puVar10);
              local_e0 = local_e0 & 0xffffff00;
              local_f0 = 0x80000001;
              local_118 = (char **)0x13;
              local_104 = 8;
              local_e4 = (undefined4 *)0x0;
              local_120 = (int *)0x13;
              local_100 = 0;
              local_108 = (char *)0x0;
              local_10c = (code *)0x0;
              local_110 = (uint *)0x4;
              local_114 = (code *)0x0;
              local_11c = puVar6;
              local_fc = puVar8;
              local_f8 = iVar5;
              local_f4 = puVar10;
              FUN_006e0c4c(local_1d0,&local_60,&local_30,&local_120);
              FUN_006a74b8(local_1d0);
              puVar4 = (undefined4 *)thunk_FUN_01be5118(0xf);
              if (puVar4 == (undefined4 *)0x0) {
                local_1e8 = (undefined4 *)&DAT_0000000f;
              }
              else {
                FUN_01bed4e2(puVar4,"FRAGMENT_SPREAD",0xf);
                local_28 = 0xf;
                local_30 = 0xf;
                local_2c = puVar4;
                puVar8 = (uint *)thunk_FUN_01be5118(0xf);
                if (puVar8 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_00664620(1,0xf);
                }
                FUN_01bed4e2(puVar8,"FRAGMENT_SPREAD",0xf);
                lVar13 = FUN_013245a0("\nLocation adjacent to a fragment spread.",0x28);
                puVar6 = (uint *)((ulonglong)lVar13 >> 0x20);
                if (lVar13 < 0) {
                  uVar9 = 0;
                  puVar6 = puVar10;
LAB_006a59cc:
                    /* WARNING: Subroutine does not return */
                  FUN_00664620(uVar9,puVar6);
                }
                if (puVar6 == (uint *)0x0) {
                  iVar5 = 1;
                  puVar10 = (uint *)0x0;
                }
                else {
                  uVar9 = 1;
                  iVar5 = FUN_01298504(puVar6,1);
                  if (iVar5 == 0) goto LAB_006a59cc;
                  puVar10 = puVar6;
                }
                FUN_01bed4e2(iVar5,(int)lVar13,puVar6);
                local_e0 = local_e0 & 0xffffff00;
                local_f0 = 0x80000001;
                local_118 = (char **)0xf;
                local_104 = 8;
                local_e4 = (undefined4 *)0x0;
                local_120 = (int *)0xf;
                local_100 = 0;
                local_108 = (char *)0x0;
                local_10c = (code *)0x0;
                local_110 = (uint *)0x4;
                local_114 = (code *)0x0;
                local_11c = puVar8;
                local_fc = puVar10;
                local_f8 = iVar5;
                local_f4 = puVar6;
                FUN_006e0c4c(local_1d0,&local_60,&local_30,&local_120);
                FUN_006a74b8(local_1d0);
                puVar4 = (undefined4 *)thunk_FUN_01be5118(0xf);
                if (puVar4 == (undefined4 *)0x0) {
                  local_1e8 = (undefined4 *)&DAT_0000000f;
                }
                else {
                  FUN_01bed4e2(puVar4,"INLINE_FRAGMENT",0xf);
                  local_28 = 0xf;
                  local_30 = 0xf;
                  local_2c = puVar4;
                  puVar8 = (uint *)thunk_FUN_01be5118(0xf);
                  if (puVar8 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
                    FUN_00664620(1,0xf);
                  }
                  FUN_01bed4e2(puVar8,"INLINE_FRAGMENT",0xf);
                  lVar13 = FUN_013245a0("\nLocation adjacent to an inline fragment.",0x29);
                  puVar10 = (uint *)((ulonglong)lVar13 >> 0x20);
                  if (lVar13 < 0) {
                    uVar9 = 0;
                    puVar10 = puVar6;
LAB_006a5b24:
                    /* WARNING: Subroutine does not return */
                    FUN_00664620(uVar9,puVar10);
                  }
                  if (puVar10 == (uint *)0x0) {
                    iVar5 = 1;
                    puVar6 = (uint *)0x0;
                  }
                  else {
                    uVar9 = 1;
                    iVar5 = FUN_01298504(puVar10,1);
                    if (iVar5 == 0) goto LAB_006a5b24;
                    puVar6 = puVar10;
                  }
                  FUN_01bed4e2(iVar5,(int)lVar13,puVar10);
                  local_e0 = local_e0 & 0xffffff00;
                  local_f0 = 0x80000001;
                  local_118 = (char **)0xf;
                  local_104 = 8;
                  local_e4 = (undefined4 *)0x0;
                  local_120 = (int *)0xf;
                  local_100 = 0;
                  local_108 = (char *)0x0;
                  local_10c = (code *)0x0;
                  local_110 = (uint *)0x4;
                  local_114 = (code *)0x0;
                  local_11c = puVar8;
                  local_fc = puVar6;
                  local_f8 = iVar5;
                  local_f4 = puVar10;
                  FUN_006e0c4c(local_1d0,&local_60,&local_30,&local_120);
                  FUN_006a74b8(local_1d0);
                  puVar4 = (undefined4 *)thunk_FUN_01be5118(0x13);
                  if (puVar4 == (undefined4 *)0x0) {
                    local_1e8 = (undefined4 *)&DAT_00000013;
                  }
                  else {
                    FUN_01bed4e2(puVar4,"VARIABLE_DEFINITIONSCHEMA",0x13);
                    local_28 = 0x13;
                    local_30 = 0x13;
                    local_2c = puVar4;
                    puVar8 = (uint *)thunk_FUN_01be5118(0x13);
                    if (puVar8 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
                      FUN_00664620(1,0x13);
                    }
                    FUN_01bed4e2(puVar8,"VARIABLE_DEFINITIONSCHEMA",0x13);
                    lVar13 = FUN_013245a0("\nLocation adjacent to a variable definition.",0x2c);
                    puVar6 = (uint *)((ulonglong)lVar13 >> 0x20);
                    if (lVar13 < 0) {
                      uVar9 = 0;
                      puVar6 = puVar10;
LAB_006a5c7c:
                    /* WARNING: Subroutine does not return */
                      FUN_00664620(uVar9,puVar6);
                    }
                    if (puVar6 == (uint *)0x0) {
                      iVar5 = 1;
                      puVar10 = (uint *)0x0;
                    }
                    else {
                      uVar9 = 1;
                      iVar5 = FUN_01298504(puVar6,1);
                      if (iVar5 == 0) goto LAB_006a5c7c;
                      puVar10 = puVar6;
                    }
                    FUN_01bed4e2(iVar5,(int)lVar13,puVar6);
                    local_e0 = local_e0 & 0xffffff00;
                    local_f0 = 0x80000001;
                    local_118 = (char **)0x13;
                    local_104 = 8;
                    local_e4 = (undefined4 *)0x0;
                    local_120 = (int *)0x13;
                    local_100 = 0;
                    local_108 = (char *)0x0;
                    local_10c = (code *)0x0;
                    local_110 = (uint *)0x4;
                    local_114 = (code *)0x0;
                    local_11c = puVar8;
                    local_fc = puVar10;
                    local_f8 = iVar5;
                    local_f4 = puVar6;
                    FUN_006e0c4c(local_1d0,&local_60,&local_30,&local_120);
                    FUN_006a74b8(local_1d0);
                    puVar4 = (undefined4 *)thunk_FUN_01be5118(6);
                    if (puVar4 == (undefined4 *)0x0) {
                      local_1e8 = (undefined4 *)&DAT_00000006;
                    }
                    else {
                      *(undefined2 *)(puVar4 + 1) = 0x414d;
                      *puVar4 = 0x45484353;
                      local_28 = 6;
                      local_30 = 6;
                      local_2c = puVar4;
                      puVar8 = (uint *)thunk_FUN_01be5118(6);
                      if (puVar8 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
                        FUN_00664620(1,6);
                      }
                      *(undefined2 *)(puVar8 + 1) = 0x414d;
                      *puVar8 = 0x45484353;
                      lVar13 = FUN_013245a0("\nLocation adjacent to a schema definition.",0x2a);
                      puVar6 = (uint *)((ulonglong)lVar13 >> 0x20);
                      if (lVar13 < 0) {
                        uVar9 = 0;
                        puVar6 = (uint *)0x45484353;
LAB_006a5e0c:
                    /* WARNING: Subroutine does not return */
                        FUN_00664620(uVar9,puVar6);
                      }
                      if (puVar6 == (uint *)0x0) {
                        iVar5 = 1;
                        puVar10 = (uint *)0x0;
                      }
                      else {
                        uVar9 = 1;
                        iVar5 = FUN_01298504(puVar6,1);
                        if (iVar5 == 0) goto LAB_006a5e0c;
                        puVar10 = puVar6;
                      }
                      FUN_01bed4e2(iVar5,(int)lVar13,puVar6);
                      local_e0 = local_e0 & 0xffffff00;
                      local_f0 = 0x80000001;
                      local_118 = (char **)0x6;
                      local_104 = 8;
                      local_e4 = (undefined4 *)0x0;
                      local_120 = (int *)0x6;
                      local_100 = 0;
                      local_108 = (char *)0x0;
                      local_10c = (code *)0x0;
                      local_110 = (uint *)0x4;
                      local_114 = (code *)0x0;
                      local_11c = puVar8;
                      local_fc = puVar10;
                      local_f8 = iVar5;
                      local_f4 = puVar6;
                      FUN_006e0c4c(local_1d0,&local_60,&local_30,&local_120);
                      FUN_006a74b8(local_1d0);
                      puVar4 = (undefined4 *)thunk_FUN_01be5118(6);
                      if (puVar4 == (undefined4 *)0x0) {
                        local_1e8 = (undefined4 *)&DAT_00000006;
                      }
                      else {
                        *(undefined2 *)(puVar4 + 1) = 0x5241;
                        *puVar4 = 0x4c414353;
                        local_28 = 6;
                        local_30 = 6;
                        local_2c = puVar4;
                        puVar8 = (uint *)thunk_FUN_01be5118(6);
                        if (puVar8 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
                          FUN_00664620(1,6);
                        }
                        *(undefined2 *)(puVar8 + 1) = 0x5241;
                        *puVar8 = 0x4c414353;
                        lVar13 = FUN_013245a0("\nLocation adjacent to a scalar definition.",0x2a);
                        puVar6 = (uint *)((ulonglong)lVar13 >> 0x20);
                        if (lVar13 < 0) {
                          uVar9 = 0;
                          puVar6 = (uint *)0x4c414353;
LAB_006a5f5c:
                    /* WARNING: Subroutine does not return */
                          FUN_00664620(uVar9,puVar6);
                        }
                        if (puVar6 == (uint *)0x0) {
                          iVar5 = 1;
                          puVar10 = (uint *)0x0;
                        }
                        else {
                          uVar9 = 1;
                          iVar5 = FUN_01298504(puVar6,1);
                          if (iVar5 == 0) goto LAB_006a5f5c;
                          puVar10 = puVar6;
                        }
                        FUN_01bed4e2(iVar5,(int)lVar13,puVar6);
                        local_e0 = local_e0 & 0xffffff00;
                        local_f0 = 0x80000001;
                        local_118 = (char **)0x6;
                        local_104 = 8;
                        local_e4 = (undefined4 *)0x0;
                        local_100 = 0;
                        local_108 = (char *)0x0;
                        local_10c = (code *)0x0;
                        local_110 = (uint *)0x4;
                        local_114 = (code *)0x0;
                        local_120 = (int *)0x6;
                        local_11c = puVar8;
                        local_fc = puVar10;
                        local_f8 = iVar5;
                        local_f4 = puVar6;
                        FUN_006e0c4c(local_1d0,&local_60,&local_30,&local_120);
                        FUN_006a74b8(local_1d0);
                        puVar4 = (undefined4 *)thunk_FUN_01be5118(6);
                        if (puVar4 == (undefined4 *)0x0) {
                          local_1e8 = (undefined4 *)&DAT_00000006;
                        }
                        else {
                          *(undefined2 *)(puVar4 + 1) = 0x5443;
                          *puVar4 = 0x454a424f;
                          local_28 = 6;
                          local_30 = 6;
                          local_2c = puVar4;
                          puVar8 = (uint *)thunk_FUN_01be5118(6);
                          if (puVar8 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
                            FUN_00664620(1,6);
                          }
                          *(undefined2 *)(puVar8 + 1) = 0x5443;
                          *puVar8 = 0x454a424f;
                          lVar13 = FUN_013245a0("\nLocation adjacent to an object type definition.",
                                                0x30);
                          puVar6 = (uint *)((ulonglong)lVar13 >> 0x20);
                          if (lVar13 < 0) {
                            uVar9 = 0;
                            puVar6 = (uint *)0x454a424f;
LAB_006a60f8:
                    /* WARNING: Subroutine does not return */
                            FUN_00664620(uVar9,puVar6);
                          }
                          if (puVar6 == (uint *)0x0) {
                            iVar5 = 1;
                            puVar10 = (uint *)0x0;
                          }
                          else {
                            uVar9 = 1;
                            iVar5 = FUN_01298504(puVar6,1);
                            if (iVar5 == 0) goto LAB_006a60f8;
                            puVar10 = puVar6;
                          }
                          FUN_01bed4e2(iVar5,(int)lVar13,puVar6);
                          local_e0 = local_e0 & 0xffffff00;
                          local_f0 = 0x80000001;
                          local_118 = (char **)0x6;
                          local_104 = 8;
                          local_e4 = (undefined4 *)0x0;
                          local_120 = (int *)0x6;
                          local_100 = 0;
                          local_108 = (char *)0x0;
                          local_10c = (code *)0x0;
                          local_110 = (uint *)0x4;
                          local_114 = (code *)0x0;
                          local_11c = puVar8;
                          local_fc = puVar10;
                          local_f8 = iVar5;
                          local_f4 = puVar6;
                          FUN_006e0c4c(local_1d0,&local_60,&local_30,&local_120);
                          FUN_006a74b8(local_1d0);
                          local_1e8 = (undefined4 *)thunk_FUN_01be5118(0x10);
                          bVar12 = local_1e8 == (undefined4 *)0x0;
                          if (bVar12) {
                            local_1e8 = (undefined4 *)&DAT_00000010;
                          }
                          if (!bVar12) {
                            FUN_01bed4e2(local_1e8,&DAT_0056a098,0x10);
                            local_28 = 0x10;
                            local_30 = 0x10;
                            local_2c = local_1e8;
                            puVar6 = (uint *)thunk_FUN_01be5118(0x10);
                            if (puVar6 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
                              FUN_00664620(1,0x10);
                            }
                            FUN_01bed4e2(puVar6,&DAT_0056a098,0x10);
                            lVar13 = FUN_013245a0("\nLocation adjacent to a field definition.",0x29)
                            ;
                            puVar10 = (uint *)((ulonglong)lVar13 >> 0x20);
                            if (lVar13 < 0) {
                              uVar9 = 0;
                              puVar10 = puVar8;
LAB_006a627c:
                    /* WARNING: Subroutine does not return */
                              FUN_00664620(uVar9,puVar10);
                            }
                            if (puVar10 == (uint *)0x0) {
                              iVar5 = 1;
                              puVar8 = (uint *)0x0;
                            }
                            else {
                              uVar9 = 1;
                              iVar5 = FUN_01298504(puVar10,1);
                              if (iVar5 == 0) goto LAB_006a627c;
                              puVar8 = puVar10;
                            }
                            FUN_01bed4e2(iVar5,(int)lVar13,puVar10);
                            local_e0 = local_e0 & 0xffffff00;
                            local_f0 = 0x80000001;
                            local_118 = (char **)0x10;
                            local_104 = 8;
                            local_e4 = (undefined4 *)0x0;
                            local_120 = (int *)0x10;
                            local_100 = 0;
                            local_108 = (char *)0x0;
                            local_10c = (code *)0x0;
                            local_110 = (uint *)0x4;
                            local_114 = (code *)0x0;
                            local_11c = puVar6;
                            local_fc = puVar8;
                            local_f8 = iVar5;
                            local_f4 = puVar10;
                            FUN_006e0c4c(local_1d0,&local_60,&local_30,&local_120);
                            FUN_006a74b8(local_1d0);
                            local_1e8 = (undefined4 *)thunk_FUN_01be5118(0x13);
                            bVar12 = local_1e8 == (undefined4 *)0x0;
                            if (bVar12) {
                              local_1e8 = (undefined4 *)&DAT_00000013;
                            }
                            if (!bVar12) {
                              FUN_01bed4e2(local_1e8,"ARGUMENT_DEFINITION",0x13);
                              local_28 = 0x13;
                              local_30 = 0x13;
                              local_2c = local_1e8;
                              puVar8 = (uint *)thunk_FUN_01be5118(0x13);
                              if (puVar8 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
                                FUN_00664620(1,0x13);
                              }
                              FUN_01bed4e2(puVar8,"ARGUMENT_DEFINITION",0x13);
                              lVar13 = FUN_013245a0("\nLocation adjacent to an argument definition."
                                                    ,0x2d);
                              puVar6 = (uint *)((ulonglong)lVar13 >> 0x20);
                              if (lVar13 < 0) {
                                uVar9 = 0;
                                puVar6 = puVar10;
LAB_006a63f0:
                    /* WARNING: Subroutine does not return */
                                FUN_00664620(uVar9,puVar6);
                              }
                              if (puVar6 == (uint *)0x0) {
                                iVar5 = 1;
                                puVar10 = (uint *)0x0;
                              }
                              else {
                                uVar9 = 1;
                                iVar5 = FUN_01298504(puVar6,1);
                                if (iVar5 == 0) goto LAB_006a63f0;
                                puVar10 = puVar6;
                              }
                              FUN_01bed4e2(iVar5,(int)lVar13,puVar6);
                              local_e0 = local_e0 & 0xffffff00;
                              local_f0 = 0x80000001;
                              local_118 = (char **)0x13;
                              local_104 = 8;
                              local_e4 = (undefined4 *)0x0;
                              local_120 = (int *)0x13;
                              local_100 = 0;
                              local_108 = (char *)0x0;
                              local_10c = (code *)0x0;
                              local_110 = (uint *)0x4;
                              local_114 = (code *)0x0;
                              local_11c = puVar8;
                              local_fc = puVar10;
                              local_f8 = iVar5;
                              local_f4 = puVar6;
                              FUN_006e0c4c(local_1d0,&local_60,&local_30,&local_120);
                              FUN_006a74b8(local_1d0);
                              local_1e8 = (undefined4 *)thunk_FUN_01be5118(9);
                              bVar12 = local_1e8 == (undefined4 *)0x0;
                              if (bVar12) {
                                local_1e8 = (undefined4 *)&DAT_00000009;
                              }
                              if (!bVar12) {
                                FUN_01bed4e2(local_1e8,"INTERFACEUNION",9);
                                local_28 = 9;
                                local_30 = 9;
                                local_2c = local_1e8;
                                puVar8 = (uint *)thunk_FUN_01be5118(9);
                                if (puVar8 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
                                  FUN_00664620(1,9);
                                }
                                FUN_01bed4e2(puVar8,"INTERFACEUNION",9);
                                lVar13 = FUN_013245a0(
                                                  "\nLocation adjacent to an interface definition.",
                                                  0x2e);
                                puVar10 = (uint *)((ulonglong)lVar13 >> 0x20);
                                if (lVar13 < 0) {
                                  uVar9 = 0;
                                  puVar10 = puVar6;
LAB_006a6570:
                    /* WARNING: Subroutine does not return */
                                  FUN_00664620(uVar9,puVar10);
                                }
                                if (puVar10 == (uint *)0x0) {
                                  iVar5 = 1;
                                  puVar6 = (uint *)0x0;
                                }
                                else {
                                  uVar9 = 1;
                                  iVar5 = FUN_01298504(puVar10,1);
                                  if (iVar5 == 0) goto LAB_006a6570;
                                  puVar6 = puVar10;
                                }
                                FUN_01bed4e2(iVar5,(int)lVar13,puVar10);
                                local_e0 = local_e0 & 0xffffff00;
                                local_f0 = 0x80000001;
                                local_118 = (char **)0x9;
                                local_104 = 8;
                                local_e4 = (undefined4 *)0x0;
                                local_120 = (int *)0x9;
                                local_100 = 0;
                                local_108 = (char *)0x0;
                                local_10c = (code *)0x0;
                                local_110 = (uint *)0x4;
                                local_114 = (code *)0x0;
                                local_11c = puVar8;
                                local_fc = puVar6;
                                local_f8 = iVar5;
                                local_f4 = puVar10;
                                FUN_006e0c4c(local_1d0,&local_60,&local_30,&local_120);
                                FUN_006a74b8(local_1d0);
                                local_1e8 = (undefined4 *)thunk_FUN_01be5118(5);
                                bVar12 = local_1e8 == (undefined4 *)0x0;
                                if (bVar12) {
                                  local_1e8 = (undefined4 *)&DAT_00000005;
                                }
                                if (!bVar12) {
                                  *(undefined1 *)(local_1e8 + 1) = 0x4e;
                                  *local_1e8 = 0x4f494e55;
                                  local_28 = 5;
                                  local_30 = 5;
                                  local_2c = local_1e8;
                                  puVar8 = (uint *)thunk_FUN_01be5118(5);
                                  if (puVar8 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
                                    FUN_00664620(1,5);
                                  }
                                  *(undefined1 *)(puVar8 + 1) = 0x4e;
                                  *puVar8 = 0x4f494e55;
                                  lVar13 = FUN_013245a0("\nLocation adjacent to a union definition."
                                                        ,0x29);
                                  puVar6 = (uint *)((ulonglong)lVar13 >> 0x20);
                                  if (lVar13 < 0) {
                                    uVar9 = 0;
                                    puVar6 = (uint *)0x4f494e55;
LAB_006a66e4:
                    /* WARNING: Subroutine does not return */
                                    FUN_00664620(uVar9,puVar6);
                                  }
                                  if (puVar6 == (uint *)0x0) {
                                    iVar5 = 1;
                                    puVar10 = (uint *)0x0;
                                  }
                                  else {
                                    uVar9 = 1;
                                    iVar5 = FUN_01298504(puVar6,1);
                                    if (iVar5 == 0) goto LAB_006a66e4;
                                    puVar10 = puVar6;
                                  }
                                  FUN_01bed4e2(iVar5,(int)lVar13,puVar6);
                                  local_e0 = local_e0 & 0xffffff00;
                                  local_f0 = 0x80000001;
                                  local_118 = (char **)0x5;
                                  local_104 = 8;
                                  local_e4 = (undefined4 *)0x0;
                                  local_120 = (int *)0x5;
                                  local_100 = 0;
                                  local_108 = (char *)0x0;
                                  local_10c = (code *)0x0;
                                  local_110 = (uint *)0x4;
                                  local_114 = (code *)0x0;
                                  local_11c = puVar8;
                                  local_fc = puVar10;
                                  local_f8 = iVar5;
                                  local_f4 = puVar6;
                                  FUN_006e0c4c(local_1d0,&local_60,&local_30,&local_120);
                                  FUN_006a74b8(local_1d0);
                                  local_1e8 = (undefined4 *)thunk_FUN_01be5118(4);
                                  bVar12 = local_1e8 == (undefined4 *)0x0;
                                  if (bVar12) {
                                    local_1e8 = (undefined4 *)&SUB_00000004;
                                  }
                                  if (!bVar12) {
                                    *local_1e8 = 0x4d554e45;
                                    local_28 = 4;
                                    local_30 = 4;
                                    local_2c = local_1e8;
                                    puVar8 = (uint *)thunk_FUN_01be5118(4);
                                    if (puVar8 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
                                      FUN_00664620(1,4);
                                    }
                                    *puVar8 = 0x4d554e45;
                                    lVar13 = FUN_013245a0(
                                                  "\nLocation adjacent to an enum definition.",0x29)
                                    ;
                                    puVar10 = (uint *)((ulonglong)lVar13 >> 0x20);
                                    if (lVar13 < 0) {
                                      uVar9 = 0;
                                      puVar10 = puVar6;
LAB_006a6854:
                    /* WARNING: Subroutine does not return */
                                      FUN_00664620(uVar9,puVar10);
                                    }
                                    if (puVar10 == (uint *)0x0) {
                                      iVar5 = 1;
                                      puVar6 = (uint *)0x0;
                                    }
                                    else {
                                      uVar9 = 1;
                                      iVar5 = FUN_01298504(puVar10,1);
                                      if (iVar5 == 0) goto LAB_006a6854;
                                      puVar6 = puVar10;
                                    }
                                    FUN_01bed4e2(iVar5,(int)lVar13,puVar10);
                                    local_f0 = 0x80000001;
                                    local_e0 = local_e0 & 0xffffff00;
                                    local_e4 = (undefined4 *)0x0;
                                    local_118 = (char **)0x4;
                                    local_120 = (int *)0x4;
                                    local_100 = 0;
                                    local_104 = 8;
                                    local_108 = (char *)0x0;
                                    local_10c = (code *)0x0;
                                    local_110 = (uint *)0x4;
                                    local_114 = (code *)0x0;
                                    local_11c = puVar8;
                                    local_fc = puVar6;
                                    local_f8 = iVar5;
                                    local_f4 = puVar10;
                                    FUN_006e0c4c(local_1d0,&local_60,&local_30,&local_120);
                                    FUN_006a74b8(local_1d0);
                                    local_1e8 = (undefined4 *)thunk_FUN_01be5118(10);
                                    bVar12 = local_1e8 == (undefined4 *)0x0;
                                    if (bVar12) {
                                      local_1e8 = (undefined4 *)&DAT_0000000a;
                                    }
                                    if (!bVar12) {
                                      FUN_01bed4e2(local_1e8,"ENUM_VALUE",10);
                                      local_28 = 10;
                                      local_30 = 10;
                                      local_2c = local_1e8;
                                      puVar6 = (uint *)thunk_FUN_01be5118(10);
                                      if (puVar6 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
                                        FUN_00664620(1,10);
                                      }
                                      FUN_01bed4e2(puVar6,"ENUM_VALUE",10);
                                      lVar13 = FUN_013245a0(
                                                  "\nLocation adjacent to an enum value definition."
                                                  ,0x2f);
                                      puVar10 = (uint *)((ulonglong)lVar13 >> 0x20);
                                      if (lVar13 < 0) {
                                        uVar9 = 0;
                                        puVar10 = puVar8;
LAB_006a69d4:
                    /* WARNING: Subroutine does not return */
                                        FUN_00664620(uVar9,puVar10);
                                      }
                                      if (puVar10 == (uint *)0x0) {
                                        iVar5 = 1;
                                        puVar8 = (uint *)0x0;
                                      }
                                      else {
                                        uVar9 = 1;
                                        iVar5 = FUN_01298504(puVar10,1);
                                        if (iVar5 == 0) goto LAB_006a69d4;
                                        puVar8 = puVar10;
                                      }
                                      FUN_01bed4e2(iVar5,(int)lVar13,puVar10);
                                      local_e0 = local_e0 & 0xffffff00;
                                      local_f0 = 0x80000001;
                                      local_118 = (char **)0xa;
                                      local_104 = 8;
                                      local_e4 = (undefined4 *)0x0;
                                      local_120 = (int *)0xa;
                                      local_100 = 0;
                                      local_108 = (char *)0x0;
                                      local_10c = (code *)0x0;
                                      local_110 = (uint *)0x4;
                                      local_114 = (code *)0x0;
                                      local_11c = puVar6;
                                      local_fc = puVar8;
                                      local_f8 = iVar5;
                                      local_f4 = puVar10;
                                      FUN_006e0c4c(local_1d0,&local_60,&local_30,&local_120);
                                      FUN_006a74b8(local_1d0);
                                      local_1e8 = (undefined4 *)thunk_FUN_01be5118(0xc);
                                      bVar12 = local_1e8 == (undefined4 *)0x0;
                                      if (bVar12) {
                                        local_1e8 = (undefined4 *)&DAT_0000000c;
                                      }
                                      if (!bVar12) {
                                        FUN_01bed4e2(local_1e8,"INPUT_OBJECT",0xc);
                                        local_28 = 0xc;
                                        local_30 = 0xc;
                                        local_2c = local_1e8;
                                        puVar8 = (uint *)thunk_FUN_01be5118(0xc);
                                        if (puVar8 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
                                          FUN_00664620(1,0xc);
                                        }
                                        FUN_01bed4e2(puVar8,"INPUT_OBJECT",0xc);
                                        lVar13 = FUN_013245a0(
                                                  "\nLocation adjacent to an input object type definition."
                                                  ,0x36);
                                        puVar6 = (uint *)((ulonglong)lVar13 >> 0x20);
                                        if (lVar13 < 0) {
                                          uVar9 = 0;
                                          puVar6 = puVar10;
LAB_006a6bb4:
                    /* WARNING: Subroutine does not return */
                                          FUN_00664620(uVar9,puVar6);
                                        }
                                        if (puVar6 == (uint *)0x0) {
                                          iVar5 = 1;
                                          puVar10 = (uint *)0x0;
                                        }
                                        else {
                                          uVar9 = 1;
                                          iVar5 = FUN_01298504(puVar6,1);
                                          if (iVar5 == 0) goto LAB_006a6bb4;
                                          puVar10 = puVar6;
                                        }
                                        FUN_01bed4e2(iVar5,(int)lVar13,puVar6);
                                        local_e0 = local_e0 & 0xffffff00;
                                        local_f0 = 0x80000001;
                                        local_118 = (char **)0xc;
                                        local_104 = 8;
                                        local_e4 = (undefined4 *)0x0;
                                        local_120 = (int *)0xc;
                                        local_100 = 0;
                                        local_108 = (char *)0x0;
                                        local_10c = (code *)0x0;
                                        local_110 = (uint *)0x4;
                                        local_114 = (code *)0x0;
                                        local_11c = puVar8;
                                        local_fc = puVar10;
                                        local_f8 = iVar5;
                                        local_f4 = puVar6;
                                        FUN_006e0c4c(local_1d0,&local_60,&local_30,&local_120);
                                        FUN_006a74b8(local_1d0);
                                        local_1e8 = (undefined4 *)thunk_FUN_01be5118(0x16);
                                        bVar12 = local_1e8 == (undefined4 *)0x0;
                                        if (bVar12) {
                                          local_1e8 = (undefined4 *)&DAT_00000016;
                                        }
                                        if (!bVar12) {
                                          FUN_01bed4e2(local_1e8,"INPUT_FIELD_DEFINITION",0x16);
                                          local_28 = 0x16;
                                          local_30 = 0x16;
                                          local_2c = local_1e8;
                                          iVar5 = thunk_FUN_01be5118(0x16);
                                          if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
                                            FUN_00664620(1,0x16);
                                          }
                                          FUN_01bed4e2(iVar5,"INPUT_FIELD_DEFINITION",0x16);
                                          lVar13 = FUN_013245a0(
                                                  "\nLocation adjacent to an input object field definition."
                                                  ,0x37);
                                          puVar8 = (uint *)((ulonglong)lVar13 >> 0x20);
                                          if (lVar13 < 0) {
                                            uVar9 = 0;
                                            puVar8 = puVar6;
LAB_006a6d44:
                    /* WARNING: Subroutine does not return */
                                            FUN_00664620(uVar9,puVar8);
                                          }
                                          if (puVar8 == (uint *)0x0) {
                                            iVar7 = 1;
                                            puVar6 = (uint *)0x0;
                                          }
                                          else {
                                            uVar9 = 1;
                                            iVar7 = FUN_01298504(puVar8,1);
                                            if (iVar7 == 0) goto LAB_006a6d44;
                                            puVar6 = puVar8;
                                          }
                                          FUN_01bed4e2(iVar7,(int)lVar13,puVar8);
                                          local_e0 = local_e0 & 0xffffff00;
                                          local_f0 = 0x80000001;
                                          local_118 = (char **)0x16;
                                          local_104 = 8;
                                          local_e4 = (undefined4 *)0x0;
                                          local_120 = (int *)0x16;
                                          local_100 = 0;
                                          local_108 = (char *)0x0;
                                          local_10c = (code *)0x0;
                                          local_110 = (uint *)0x4;
                                          local_114 = (code *)0x0;
                                          local_11c = (uint *)iVar5;
                                          local_fc = puVar6;
                                          local_f8 = iVar7;
                                          local_f4 = puVar8;
                                          FUN_006e0c4c(local_1d0,&local_60,&local_30,&local_120);
                                          FUN_006a74b8(local_1d0);
                                          local_100 = local_60;
                                          local_fc = (uint *)local_5c;
                                          local_f8 = local_58;
                                          local_f4 = (uint *)uStack_54;
                                          local_f0 = local_50;
                                          uStack_ec = local_4c;
                                          uStack_e8 = local_48;
                                          local_e4 = puStack_44;
                                          local_e0 = uStack_40;
                                          uStack_dc = uStack_3c;
                                          uStack_d8 = uStack_38;
                                          uStack_d4 = uStack_34;
                                          local_cc = local_1f4;
                                          local_a4 = 8;
                                          local_9c = 0;
                                          local_a0 = 0;
                                          local_a8 = 0;
                                          local_ac = 0;
                                          local_b4 = 0;
                                          local_d0 = 0;
                                          local_b0 = 4;
                                          local_104 = 0x34;
                                          local_110 = (uint *)&DAT_80000004;
                                          local_108 = 
                                          "async_graphql::model::directive::__DirectiveLocation";
                                          local_c8 = iVar2;
                                          local_c4 = iVar3;
                                          iVar2 = FUN_006c4014(*(undefined4 *)(param_1 + 0x40),
                                                               *(undefined4 *)(param_1 + 0x44),
                                                               param_2,param_3);
                                          if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
                                            FUN_012fb0cc(&DAT_01c226c0);
                                          }
                                          FUN_006a723c();
                                          FUN_01bed4e2(iVar2,&local_120,0xb0);
                                          return;
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_00664620(1,local_1e8);
  }
  local_1d0[0] = FUN_006a71d4();
  iVar5 = (int)((ulonglong)local_1d0[0] >> 0x20);
  iVar3 = (int)local_1d0[0];
  if (iVar3 == 0) {
    return;
  }
  if (iVar5 == 0x34) {
    iVar3 = thunk_FUN_01bed842("async_graphql::model::directive::__DirectiveLocation",iVar3,0x34);
    if (iVar3 == 0) goto LAB_006a511c;
  }
  else if (iVar5 == 0xd) {
    iVar3 = thunk_FUN_01bed842(iVar3,"__fake_type__",0xd);
    if (iVar3 == 0) {
      return;
    }
  }
  iVar3 = FUN_006e5bc0(param_1 + 0x20,param_2,param_3);
  if (iVar3 == 0) {
    local_110 = (uint *)&local_1e4;
    local_10c = (code *)&DAT_0132b6a0;
    local_114 = (code *)&DAT_0132b6a0;
    local_11c = (uint *)&DAT_0132b6a0;
    local_118 = &local_1dc;
    local_120 = (int *)local_1d0;
                    /* WARNING: Subroutine does not return */
    FUN_012fb100(&DAT_00572c5c,&local_120,&DAT_01c226d0);
  }
LAB_006a511c:
  if (*(undefined1 **)(iVar2 + 0x10) != &DAT_80000004) {
    uVar1 = FUN_006a7508();
    local_60 = CONCAT31(local_60._1_3_,uVar1);
    local_110 = &local_60;
    local_118 = (char **)&local_1d1;
    local_120 = &local_1e4;
    local_11c = (uint *)&DAT_0132b6a0;
    local_10c = FUN_006a7514;
    local_114 = FUN_006a7514;
                    /* WARNING: Subroutine does not return */
    FUN_012fb100(&DAT_005b5680,&local_120,&DAT_01c226e0);
  }
  return;
}


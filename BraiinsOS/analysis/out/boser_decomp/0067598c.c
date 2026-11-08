// FUN_0067598c @ 0067598c size=1452 calls_out=11 calls_in=0
// strings: BUG: no ApiLogCommonInfo in context for GraphQL subscription.struct ApiUsageState with 6 elementsstruct UserAgentEntry with 3 elementsstruct ApiUsageStats with 4 elements | api_logging::middleware::graphql_extensionopen/utils-rs/api-logging/src/middleware/graphql_extension.rsevent open/utils-rs/api-logging/src/middleware/graphql_extension.rs:245event open/utils-rs/api-logging/src/middleware/graphql_extension.rs:259event open/utils-rs/api-logging/src/middleware/graphql_extension.rs:283 | InvalidParamSegmentInvalidParamInvalidCatchAll | InvalidParamSegmentInvalidParamInvalidCatchAll | InvalidParamSegmentInvalidParamInvalidCatchAll | api_logging::middleware::graphql_extensionopen/utils-rs/api-logging/src/middleware/graphql_extension.rsevent open/utils-rs/api-logging/src/middleware/graphql_extension.rs:245event open/utils-rs/api-logging/src/middleware/graphql_extension.rs:259event open/utils-rs/api-logging/src/middleware/graphql_extension.rs:283

undefined8
FUN_0067598c(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            int *param_5,int param_6)

{
  code *pcVar1;
  bool bVar2;
  char *pcVar3;
  char cVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  undefined4 *puVar9;
  undefined8 uVar10;
  undefined4 *****local_104;
  undefined4 local_100;
  undefined4 *local_fc;
  char *local_f8;
  undefined4 local_f4;
  undefined4 local_f0;
  undefined4 local_ec;
  undefined4 local_e8;
  int ****local_e4;
  char **local_e0;
  undefined4 *local_dc;
  undefined4 ****local_d8;
  int *****local_d4;
  undefined1 *local_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 local_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 local_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  int ***local_98;
  int iStack_94;
  undefined4 uStack_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined8 local_50;
  int *local_48;
  int *local_44;
  int *local_40;
  int *local_3c;
  undefined4 local_38;
  int *local_34;
  int *local_30;
  int *local_2c;
  int *local_28;
  
  uVar10 = CONCAT44(param_4,param_3);
  if (param_6 != 0) {
    uVar10 = (**(code **)(param_5[1] + 0x10))
                       (*param_5 + (*(int *)(param_5[1] + 8) - 1U & 0xfffffff8) + 8,param_2,param_3,
                        param_4,param_5 + 2,param_6 + -1);
  }
  uVar5 = FUN_0067ace4(param_2);
  FUN_0067c2f4(&local_98,uVar5);
  if (local_98 != (int ***)0x80000000) {
    local_d8 = (undefined4 ****)local_98;
    local_d4 = (int *****)iStack_94;
    local_d0 = (undefined1 *)uStack_90;
    uStack_cc = local_8c;
    uStack_c8 = local_88;
    local_c4 = local_84;
    uStack_c0 = uStack_80;
    uStack_bc = uStack_7c;
    uStack_b8 = uStack_78;
    uStack_b4 = uStack_74;
    local_b0 = local_70;
    uStack_ac = uStack_6c;
    uStack_a8 = uStack_68;
    uStack_a4 = uStack_64;
    uStack_a0 = uStack_60;
    local_48 = (int *)*param_1;
    piVar8 = local_48 + 0x26;
    do {
      bVar2 = (bool)hasExclusiveAccess(piVar8);
    } while (!bVar2);
    *piVar8 = *piVar8 + 1;
    do {
      iVar6 = *local_48;
      bVar2 = (bool)hasExclusiveAccess(local_48);
    } while (!bVar2);
    *local_48 = iVar6 + 1;
    if (-1 < iVar6) {
      local_44 = (int *)param_1[1];
      do {
        iVar6 = *local_44;
        bVar2 = (bool)hasExclusiveAccess(local_44);
      } while (!bVar2);
      *local_44 = iVar6 + 1;
      if (-1 < iVar6) {
        local_40 = (int *)param_1[2];
        piVar8 = local_40 + 0x26;
        do {
          bVar2 = (bool)hasExclusiveAccess(piVar8);
        } while (!bVar2);
        *piVar8 = *piVar8 + 1;
        do {
          iVar6 = *local_40;
          bVar2 = (bool)hasExclusiveAccess(local_40);
        } while (!bVar2);
        *local_40 = iVar6 + 1;
        if (-1 < iVar6) {
          local_3c = (int *)param_1[3];
          local_38 = param_1[4];
          do {
            iVar6 = *local_3c;
            bVar2 = (bool)hasExclusiveAccess(local_3c);
          } while (!bVar2);
          *local_3c = iVar6 + 1;
          if (-1 < iVar6) {
            piVar8 = local_3c + 0x29;
            do {
              bVar2 = (bool)hasExclusiveAccess(piVar8);
            } while (!bVar2);
            *piVar8 = *piVar8 + 1;
            local_34 = (int *)param_1[5];
            do {
              iVar6 = *local_34;
              bVar2 = (bool)hasExclusiveAccess(local_34);
            } while (!bVar2);
            *local_34 = iVar6 + 1;
            if (-1 < iVar6) {
              local_30 = (int *)param_1[6];
              piVar8 = local_30 + 0x26;
              do {
                bVar2 = (bool)hasExclusiveAccess(piVar8);
              } while (!bVar2);
              *piVar8 = *piVar8 + 1;
              do {
                iVar6 = *local_30;
                bVar2 = (bool)hasExclusiveAccess(local_30);
              } while (!bVar2);
              *local_30 = iVar6 + 1;
              if (-1 < iVar6) {
                local_2c = (int *)param_1[7];
                do {
                  iVar6 = *local_2c;
                  bVar2 = (bool)hasExclusiveAccess(local_2c);
                } while (!bVar2);
                *local_2c = iVar6 + 1;
                if (-1 < iVar6) {
                  local_28 = (int *)param_1[8];
                  do {
                    iVar6 = *local_28;
                    bVar2 = (bool)hasExclusiveAccess(local_28);
                  } while (!bVar2);
                  *local_28 = iVar6 + 1;
                  if (-1 < iVar6) {
                    local_54 = 0;
                    local_5c = 0;
                    local_58 = 4;
                    local_50 = uVar10;
                    iVar6 = thunk_FUN_01be5118(0x74);
                    if (iVar6 == 0) {
                    /* WARNING: Subroutine does not return */
                      FUN_0066439c(4,0x74);
                    }
                    FUN_01bed4e2(iVar6,&local_98,0x74);
                    return CONCAT44(&UNK_01c04658,iVar6);
                  }
                }
              }
            }
          }
        }
      }
    }
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xfdee,0x675f38);
    (*pcVar1)();
  }
  if ((DAT_01d50f88 < 5) &&
     (((DAT_01d4b508 - 1 < 2 ||
       ((DAT_01d4b508 != 0 && (cVar4 = FUN_01aaafa8(&DAT_01d4b500), cVar4 != '\0')))) &&
      (iVar6 = FUN_01aaa278(DAT_01d4b500), iVar6 != 0)))) {
    iStack_94 = *(int *)(DAT_01d4b500 + 0x20);
    if (iStack_94 == 0) {
LAB_00675f20:
                    /* WARNING: Subroutine does not return */
      FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,&DAT_01c0466c);
    }
    local_e0 = &local_f8;
    uStack_90 = *(undefined4 *)(DAT_01d4b500 + 0x24);
    local_8c = *(undefined4 *)(DAT_01d4b500 + 0x28);
    local_fc = (undefined4 *)(DAT_01d4b500 + 0x1c);
    local_98 = (int ***)*local_fc;
    local_104 = &local_e4;
    local_88 = 0;
    local_100 = 1;
    local_dc = (undefined4 *)&DAT_01d2ea4c;
    local_f4 = 0x7b;
    local_f8 = 
    "BUG: no ApiLogCommonInfo in context for GraphQL subscription.struct ApiUsageState with 6 elementsstruct UserAgentEntry with 3 elementsstruct ApiUsageStats with 4 elements"
    ;
    local_e4 = &local_98;
    FUN_01aaaecc(DAT_01d4b500,&local_104);
    iVar6 = DAT_01d4b500;
    if ((DAT_01d51ae9 == '\0') && (DAT_01d51b00 != 0)) {
      local_d4 = *(int ******)(DAT_01d4b500 + 0x14);
      local_d0 = *(undefined1 **)(DAT_01d4b500 + 0x18);
      local_d8 = (undefined4 ****)0x1;
      DataMemoryBarrier(0xb);
      puVar9 = DAT_01d4edc8;
      pcVar3 = DAT_01d4edc4;
      if (DAT_01d51174 != 2) {
        puVar9 = &DAT_01cfc5e0;
        pcVar3 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
      }
      iVar7 = (*(code *)puVar9[3])(pcVar3,&local_d8);
      if (iVar7 != 0) {
        FUN_01aaa328(iVar6,pcVar3,puVar9[4],&local_d8,&local_104);
      }
    }
  }
  else {
    iVar6 = DAT_01d4b500;
    if ((DAT_01d51ae9 == '\0') && (DAT_01d51b00 != 0)) {
      local_ec = *(undefined4 *)(DAT_01d4b500 + 0x14);
      local_e8 = *(undefined4 *)(DAT_01d4b500 + 0x18);
      local_f0 = 1;
      DataMemoryBarrier(0xb);
      puVar9 = DAT_01d4edc8;
      pcVar3 = DAT_01d4edc4;
      if (DAT_01d51174 != 2) {
        puVar9 = &DAT_01cfc5e0;
        pcVar3 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
      }
      iVar7 = (*(code *)puVar9[3])(pcVar3,&local_f0);
      if (iVar7 != 0) {
        local_dc = (undefined4 *)(DAT_01d4b500 + 0x1c);
        local_98 = (int ***)*local_dc;
        iStack_94 = *(int *)(DAT_01d4b500 + 0x20);
        if (iStack_94 == 0) goto LAB_00675f20;
        local_d4 = (int *****)&local_104;
        uStack_90 = *(undefined4 *)(DAT_01d4b500 + 0x24);
        local_8c = *(undefined4 *)(DAT_01d4b500 + 0x28);
        local_e4 = (int ****)&local_d8;
        local_e0 = (char **)0x1;
        local_88 = 0;
        local_d0 = &DAT_01d2ea4c;
        local_100 = 0x7b;
        local_104 = (undefined4 *****)0x3d4710;
        local_d8 = &local_98;
        FUN_01aaa328(iVar6,pcVar3,puVar9[4],&local_f0,&local_e4);
      }
    }
  }
  return uVar10;
}


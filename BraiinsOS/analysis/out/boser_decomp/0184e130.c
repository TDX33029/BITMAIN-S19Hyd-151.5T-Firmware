// FUN_0184e130 @ 0184e130 size=1240 calls_out=11 calls_in=0
// strings: Map must not be polled after it returned `Poll::Ready` | hyper_ut | InvalidParamSegmentInvalidParamInvalidCatchAll | InvalidParamSegmentInvalidParamInvalidCatchAll | InvalidParamSegmentInvalidParamInvalidCatchAll | hyper_ut

bool FUN_0184e130(int *param_1,undefined4 param_2)

{
  char *pcVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  bool bVar5;
  undefined4 *puVar6;
  uint uVar7;
  undefined2 local_e7;
  undefined1 local_e5;
  undefined2 local_e4;
  undefined1 local_e2;
  undefined4 local_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 local_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 local_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 ****local_a8;
  undefined4 local_a4;
  undefined4 *local_a0;
  undefined4 ****local_9c;
  undefined **local_98;
  undefined4 *local_94;
  undefined4 ***local_90;
  int local_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined *local_7c;
  undefined4 **local_78;
  undefined4 *local_74;
  code *local_70;
  undefined4 ***local_6c;
  undefined **local_68;
  undefined1 *local_64;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 local_54;
  undefined4 uStack_50;
  undefined4 local_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  uint local_28;
  
  if (*param_1 == 10 || *param_1 == 9) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb0ec("Map must not be polled after it returned `Poll::Ready`",0x36,&DAT_01d2da7c);
  }
  FUN_018228bc(&local_60,param_1,param_2);
  if ((char)local_28 == '\x03') {
    bVar5 = true;
  }
  else {
    if (*param_1 == 9) {
                    /* WARNING: Subroutine does not return */
      FUN_012fb0ec("internal error: entered unreachable code",0x28,&DAT_01d2da6c);
    }
    FUN_01820c90(param_1);
    uVar7 = local_28 & 0xff;
    *param_1 = 9;
    if (uVar7 == 2) {
      if ((DAT_01d50f88 == 0) &&
         (((DAT_01d4fc1c - 1 < 2 ||
           ((DAT_01d4fc1c != 0 && (cVar2 = FUN_01aaafa8(&DAT_01d4fc14), cVar2 != '\0')))) &&
          (iVar4 = FUN_01aaa278(DAT_01d4fc14), iVar4 != 0)))) {
        local_8c = *(int *)(DAT_01d4fc14 + 0x20);
        if (local_8c == 0) {
LAB_0184e5f8:
                    /* WARNING: Subroutine does not return */
          FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,&DAT_01d210c8);
        }
        local_88 = *(undefined4 *)(DAT_01d4fc14 + 0x24);
        local_84 = *(undefined4 *)(DAT_01d4fc14 + 0x28);
        local_a0 = (undefined4 *)(DAT_01d4fc14 + 0x1c);
        local_90 = (undefined4 ***)*local_a0;
        local_98 = &local_7c;
        local_9c = &local_90;
        local_a8 = &local_9c;
        local_a4 = 1;
        local_78 = &local_74;
        local_80 = 0;
        local_94 = (undefined4 *)&DAT_01d2ea4c;
        local_7c = &DAT_00588f59;
        local_70 = FUN_01442fc0;
        local_74 = &local_60;
        FUN_01aaaecc(DAT_01d4fc14,&local_a8);
        iVar4 = DAT_01d4fc14;
        if ((DAT_01d51ae9 == '\0') && (4 < DAT_01d51b00)) {
          local_68 = *(undefined ***)(DAT_01d4fc14 + 0x14);
          local_64 = *(undefined1 **)(DAT_01d4fc14 + 0x18);
          local_6c = (undefined4 ***)&DAT_00000005;
          DataMemoryBarrier(0xb);
          puVar6 = DAT_01d4edc8;
          pcVar1 = DAT_01d4edc4;
          if (DAT_01d51174 != 2) {
            puVar6 = &DAT_01cfc5e0;
            pcVar1 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
          }
          iVar3 = (*(code *)puVar6[3])(pcVar1,&local_6c);
          if (iVar3 != 0) {
            FUN_01aaa328(iVar4,pcVar1,puVar6[4],&local_6c,&local_a8);
          }
        }
      }
      else {
        iVar4 = DAT_01d4fc14;
        if ((DAT_01d51ae9 == '\0') && (4 < DAT_01d51b00)) {
          local_a4 = *(undefined4 *)(DAT_01d4fc14 + 0x14);
          local_a0 = *(undefined4 **)(DAT_01d4fc14 + 0x18);
          local_a8 = (undefined4 ****)&DAT_00000005;
          DataMemoryBarrier(0xb);
          puVar6 = DAT_01d4edc8;
          pcVar1 = DAT_01d4edc4;
          if (DAT_01d51174 != 2) {
            puVar6 = &DAT_01cfc5e0;
            pcVar1 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
          }
          iVar3 = (*(code *)puVar6[3])(pcVar1,&local_a8);
          if (iVar3 != 0) {
            local_94 = (undefined4 *)(DAT_01d4fc14 + 0x1c);
            local_90 = (undefined4 ***)*local_94;
            local_8c = *(int *)(DAT_01d4fc14 + 0x20);
            if (local_8c == 0) goto LAB_0184e5f8;
            local_6c = &local_90;
            local_9c = &local_6c;
            local_88 = *(undefined4 *)(DAT_01d4fc14 + 0x24);
            local_80 = 0;
            local_84 = *(undefined4 *)(DAT_01d4fc14 + 0x28);
            local_68 = &local_7c;
            local_98 = (undefined **)&DAT_00000001;
            local_64 = &DAT_01d2ea4c;
            local_78 = &local_74;
            local_7c = &DAT_00588f59;
            local_70 = FUN_01442fc0;
            local_74 = &local_60;
            FUN_01aaa328(iVar4,pcVar1,puVar6[4],&local_a8,&local_9c);
          }
        }
      }
      FUN_0184f010(&local_60);
      bVar5 = false;
    }
    else {
      local_e0 = local_60;
      uStack_dc = uStack_5c;
      uStack_d8 = uStack_58;
      uStack_d4 = local_54;
      local_d0 = uStack_50;
      uStack_cc = local_4c;
      uStack_c8 = uStack_48;
      uStack_c4 = uStack_44;
      uStack_c0 = uStack_40;
      local_bc = uStack_3c;
      uStack_b8 = local_38;
      uStack_b4 = uStack_34;
      uStack_b0 = uStack_30;
      uStack_ac = uStack_2c;
      local_e5 = (undefined1)(local_28 >> 0x18);
      local_e2 = local_e5;
      local_e7 = (undefined2)(local_28 >> 8);
      local_e4 = local_e7;
      bVar5 = uVar7 == 3;
      if (uVar7 == 3) {
        return true;
      }
    }
    if (*param_1 != 9) {
      if (*param_1 == 10) {
                    /* WARNING: Subroutine does not return */
        FUN_012fb0ec("internal error: entered unreachable code",0x28,&DAT_01d2da6c);
      }
      FUN_01820c90(param_1);
    }
    *param_1 = 10;
    local_60 = local_e0;
    uStack_5c = uStack_dc;
    uStack_58 = uStack_d8;
    local_54 = uStack_d4;
    uStack_50 = local_d0;
    local_4c = uStack_cc;
    uStack_48 = uStack_c8;
    uStack_44 = uStack_c4;
    uStack_40 = uStack_c0;
    uStack_3c = local_bc;
    local_38 = uStack_b8;
    uStack_34 = uStack_b4;
    uStack_30 = uStack_b0;
    uStack_2c = uStack_ac;
    if ((char)local_28 != '\x02') {
      local_28 = CONCAT13(local_e2,CONCAT21(local_e4,(char)local_28));
      FUN_0188b2f8(&local_60);
    }
  }
  return bVar5;
}


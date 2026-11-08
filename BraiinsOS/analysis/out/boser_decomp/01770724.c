// FUN_01770724 @ 01770724 size=2996 calls_out=34 calls_in=0
// strings: Map must not be polled after it returned `Poll::Ready` | hyper_ut | InvalidParamSegmentInvalidParamInvalidCatchAll | InvalidParamSegmentInvalidParamInvalidCatchAll | hyper_ut | InvalidParamSegmentInvalidParamInvalidCatchAll

/* WARNING: Type propagation algorithm not settling */

undefined4 FUN_01770724(int *param_1,undefined4 param_2)

{
  char *pcVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  int ******ppppppiVar5;
  int iVar6;
  undefined *puVar7;
  int *piVar8;
  int *******pppppppiVar9;
  undefined4 *puVar10;
  uint uVar11;
  int *******pppppppiVar12;
  bool bVar13;
  ulonglong uVar14;
  int *******local_270;
  int *******local_26c;
  int ******local_268;
  int *******local_260;
  int *******local_25c;
  int ******local_258;
  uint uStack_254;
  int *******local_250;
  int *******local_24c;
  int *******local_248;
  int *******local_244;
  undefined4 local_240;
  uint uStack_23c;
  int local_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined1 auStack_d8 [16];
  char local_c8;
  undefined4 local_c4;
  int *******local_b8;
  int *******local_b4;
  int ******local_b0;
  int *******local_ac;
  int *******local_a8;
  int ******local_a4;
  uint local_a0;
  int local_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 uStack_88;
  int *******local_7c;
  int *******local_78;
  int ******local_74;
  int *******local_70;
  int ******local_6c;
  int local_68;
  uint local_64;
  int *******local_5c;
  int *******local_58;
  int ******local_54;
  uint local_50;
  int ******local_4c;
  int *******local_48;
  int *******local_44;
  int ******local_40;
  undefined1 *local_3c;
  int ******local_34;
  int *******local_30;
  int *******local_2c;
  int ******local_28;
  
  iVar3 = *param_1;
  iVar6 = param_1[1];
  bVar13 = iVar3 == 6 && iVar6 == 0;
  if (iVar3 != 6 || iVar6 != 0) {
    bVar13 = iVar3 == 5 && iVar6 == 0;
  }
  if (bVar13) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb0ec("Map must not be polled after it returned `Poll::Ready`",0x36,&DAT_01d2da7c);
  }
  if (iVar3 == 4 && iVar6 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb0cc(&DAT_01d1f0b0);
  }
  uVar14 = FUN_01761068(param_1,param_2);
  pppppppiVar9 = (int *******)(uVar14 >> 0x20);
  if ((uVar14 & 1) != 0) {
    return 1;
  }
  if (pppppppiVar9 == (int *******)0x0) {
    if (((char)param_1[100] == '\0') && (param_1[0x10] != 4 || param_1[0x11] != 0)) {
      return 1;
    }
    iVar3 = param_1[0x23];
    iVar6 = param_1[0x22];
    param_1[0x22] = 0;
    if (iVar6 == 0) {
      (**(code **)(param_1[0x50] + 0x18))(&local_b8,param_1[0x4f],param_2);
      if ((char)local_b8 == '\x05') {
        return 1;
      }
      if (((uint)local_b8 & 0xff) == 4) {
        pppppppiVar9 = (int *******)param_1[0x39];
        ppppppiVar5 = (int ******)0x0;
        param_1[0x39] = 0;
        if (pppppppiVar9 == (int *******)0x0) goto LAB_01770828;
      }
      else {
        local_250 = local_b8;
        local_24c = local_b4;
        pppppppiVar9 = (int *******)FUN_01427bac(&local_250);
      }
      goto LAB_01770798;
    }
    pppppppiVar9 = (int *******)param_1[0x39];
    param_1[0x39] = 0;
    if (pppppppiVar9 != (int *******)0x0) {
      FUN_01429548();
      goto LAB_01770798;
    }
    ppppppiVar5 = (int ******)*param_1;
    iVar6 = param_1[1];
    *param_1 = 4;
    param_1[1] = 0;
    if (ppppppiVar5 == (int ******)0x4 && iVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_012fb0cc(&DAT_01d1f0c0);
    }
    FUN_01bed4e2(&local_248,param_1 + 2,400);
    local_250 = (int *******)ppppppiVar5;
    local_24c = (int *******)iVar6;
    FUN_01bed4e2(&local_b8,param_1 + 0x40,0x5c);
    if ((local_64 & 1) == 0) {
      ppppppiVar5 = local_6c;
      pppppppiVar9 = (int *******)&DAT_01d2e520;
      uVar11 = local_64;
      pppppppiVar12 = local_70;
    }
    else {
      local_28 = (int ******)((int)local_6c + (local_64 >> 5));
      local_2c = (int *******)((int)local_70 - (local_64 >> 5));
      local_30 = (int *******)(local_68 + (local_64 >> 5));
      FUN_01283524(&local_5c,&local_30);
      local_4c = (int ******)(local_64 >> 5);
      if (local_54 < local_4c) {
        local_40 = (int ******)&local_34;
        local_34 = local_54;
        local_3c = &LAB_01a6a304;
        local_44 = (int *******)&LAB_01a6a304;
        local_48 = &local_4c;
                    /* WARNING: Subroutine does not return */
        FUN_012fb100(&DAT_005ac267,&local_48,&DAT_01d2e534);
      }
      ppppppiVar5 = (int ******)((int)local_54 - (int)local_4c);
      pppppppiVar12 = (int *******)((int)local_58 + (int)local_4c);
      pppppppiVar9 = local_5c;
      uVar11 = local_50;
    }
    FUN_019bb7e0(local_b0,local_ac);
    FUN_01725b0c(&local_a0);
    FUN_0175cf68(&local_250);
    local_b4 = local_78;
    local_b0 = local_74;
    local_b8 = local_7c;
    local_9c = local_f0;
    uStack_98 = uStack_ec;
    uStack_94 = uStack_e8;
    local_90 = uStack_e4;
    local_8c = uStack_e0;
    uStack_88 = uStack_dc;
    local_ac = pppppppiVar9;
    local_a8 = pppppppiVar12;
    local_a4 = ppppppiVar5;
    local_a0 = uVar11;
    if (local_c8 != '\x03') {
      FUN_01820460(auStack_d8);
    }
    FUN_0184c690(local_c4);
    local_250 = local_ac;
    local_24c = local_a8;
    local_248 = (int *******)local_a4;
    local_244 = (int *******)local_a0;
    if (local_9c != 2) {
      FUN_017421d8(&local_9c);
    }
    FUN_017431b8(local_90,local_8c);
    local_260 = local_250;
    local_25c = local_24c;
    local_258 = (int ******)local_248;
    uStack_254 = (uint)local_244;
    local_26c = local_78;
    local_270 = local_7c;
    local_268 = local_74;
    ppppppiVar5 = (int ******)thunk_FUN_01be5118(0xc);
    if (ppppppiVar5 == (int ******)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0066439c(4,0xc);
    }
    *ppppppiVar5 = (int *****)local_270;
    ppppppiVar5[1] = (int *****)local_26c;
    ppppppiVar5[2] = (int *****)local_268;
    local_248 = local_260;
    local_244 = local_25c;
    local_240 = local_258;
    uStack_23c = uStack_254;
    local_24c = (int *******)&DAT_01d1953c;
    local_250 = (int *******)ppppppiVar5;
    FUN_01429650(iVar3,&local_250);
    ppppppiVar5 = (int ******)0x0;
  }
  else {
LAB_01770798:
    cVar2 = (char)param_1[0x62];
    *(undefined1 *)(param_1 + 0x62) = 3;
    if (cVar2 != '\x03') {
      local_250 = (int *******)param_1[0x5e];
      local_24c = (int *******)param_1[0x5f];
      local_248 = (int *******)param_1[0x60];
      local_244 = (int *******)param_1[0x61];
      local_240 = (int ******)
                  CONCAT13(*(undefined1 *)((int)param_1 + 0x18b),
                           CONCAT21(*(undefined2 *)((int)param_1 + 0x189),cVar2));
      uVar4 = FUN_01427b74(8);
      FUN_01427c64(uVar4,&DAT_00567c68,0x10);
      FUN_01423388(local_248,cVar2,uVar4);
      FUN_01820460(&local_250);
    }
    local_24c = (int *******)0x0;
    local_250 = (int *******)&DAT_00000003;
    local_248 = pppppppiVar9;
    ppppppiVar5 = (int ******)FUN_0175b8e0(param_1 + 0x58,&local_250);
  }
LAB_01770828:
  if (*param_1 == 5 && param_1[1] == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb0ec("internal error: entered unreachable code",0x28,&DAT_01d2da6c);
  }
  piVar8 = (int *)param_1[0x66];
  local_250 = (int *******)0x0;
  local_24c = (int *******)piVar8;
  FUN_0175ce6c(param_1);
  *param_1 = 5;
  param_1[1] = 0;
  if (ppppppiVar5 == (int ******)0x0) {
    if (piVar8 == (int *)0x0) goto LAB_01770f94;
    FUN_014295d0(piVar8 + 2);
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar8;
      bVar13 = (bool)hasExclusiveAccess(piVar8);
    } while (!bVar13);
    *piVar8 = iVar3 + -1;
LAB_01770f24:
    if (iVar3 == 1) {
      DataMemoryBarrier(0xb);
      FUN_017051c8(piVar8);
    }
  }
  else {
    local_34 = ppppppiVar5;
    if ((DAT_01d50f88 < 2) &&
       (((DAT_01d4fbe0 - 1 < 2 ||
         ((DAT_01d4fbe0 != 0 && (cVar2 = FUN_01aaafa8(&DAT_01d4fbd8), cVar2 != '\0')))) &&
        (iVar3 = FUN_01aaa278(DAT_01d4fbd8), iVar3 != 0)))) {
      if (*(int **)(DAT_01d4fbd8 + 0x20) == (int *)0x0) {
LAB_017712cc:
        puVar7 = &DAT_01d21038;
        goto LAB_017712e0;
      }
      local_58 = (int *******)&local_270;
      local_248 = *(int ********)(DAT_01d4fbd8 + 0x24);
      local_244 = *(int ********)(DAT_01d4fbd8 + 0x28);
      local_260 = (int *******)&local_5c;
      local_258 = (int ******)(DAT_01d4fbd8 + 0x1c);
      local_250 = (int *******)*local_258;
      local_240 = (int ******)0x0;
      local_25c = (int *******)&DAT_00000001;
      local_26c = (int *******)&local_30;
      local_54 = (int ******)&DAT_01d2ea4c;
      local_2c = (int *******)FUN_01427508;
      local_270 = (int *******)&DAT_005a5635;
      local_30 = &local_34;
      local_24c = (int *******)*(int **)(DAT_01d4fbd8 + 0x20);
      local_5c = (int *******)&local_250;
      FUN_01aaaecc(DAT_01d4fbd8,&local_260);
      iVar3 = DAT_01d4fbd8;
      if ((DAT_01d51ae9 == '\0') && (3 < DAT_01d51b00)) {
        local_44 = *(int ********)(DAT_01d4fbd8 + 0x14);
        local_40 = *(int *******)(DAT_01d4fbd8 + 0x18);
        local_48 = (int *******)&SUB_00000004;
        DataMemoryBarrier(0xb);
        puVar10 = DAT_01d4edc8;
        pcVar1 = DAT_01d4edc4;
        if (DAT_01d51174 != 2) {
          puVar10 = &DAT_01cfc5e0;
          pcVar1 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
        }
        iVar6 = (*(code *)puVar10[3])(pcVar1,&local_48);
        if (iVar6 != 0) {
          local_b8 = local_48;
          local_b4 = local_44;
          local_b0 = local_40;
          FUN_01aaa328(iVar3,pcVar1,puVar10[4],&local_b8,&local_260);
        }
      }
    }
    else {
      iVar3 = DAT_01d4fbd8;
      if ((DAT_01d51ae9 == '\0') && (3 < DAT_01d51b00)) {
        local_2c = *(int ********)(DAT_01d4fbd8 + 0x14);
        local_28 = *(int *******)(DAT_01d4fbd8 + 0x18);
        local_30 = (int *******)&SUB_00000004;
        DataMemoryBarrier(0xb);
        puVar10 = DAT_01d4edc8;
        pcVar1 = DAT_01d4edc4;
        if (DAT_01d51174 != 2) {
          puVar10 = &DAT_01cfc5e0;
          pcVar1 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
        }
        iVar6 = (*(code *)puVar10[3])(pcVar1,&local_30);
        if (iVar6 != 0) {
          if (*(int **)(DAT_01d4fbd8 + 0x20) == (int *)0x0) goto LAB_017712cc;
          local_5c = (int *******)&local_48;
          local_248 = *(int ********)(DAT_01d4fbd8 + 0x24);
          local_244 = *(int ********)(DAT_01d4fbd8 + 0x28);
          local_44 = (int *******)&local_270;
          local_240 = (int ******)0x0;
          local_58 = (int *******)&DAT_00000001;
          local_40 = (int ******)&DAT_01d2ea4c;
          local_26c = (int *******)&local_260;
          local_270 = (int *******)&DAT_005a5635;
          local_25c = (int *******)FUN_01427508;
          local_260 = &local_34;
          local_b8 = local_30;
          local_b4 = local_2c;
          local_b0 = local_28;
          local_250 = (int *******)*(int *******)(DAT_01d4fbd8 + 0x1c);
          local_24c = (int *******)*(int **)(DAT_01d4fbd8 + 0x20);
          local_54 = (int ******)(DAT_01d4fbd8 + 0x1c);
          local_48 = (int *******)&local_250;
          FUN_01aaa328(iVar3,pcVar1,puVar10[4],&local_b8,&local_5c);
        }
      }
    }
    if (((DAT_01d50f88 == 0) &&
        ((DAT_01d4fbec - 1 < 2 ||
         ((DAT_01d4fbec != 0 && (cVar2 = FUN_01aaafa8(&DAT_01d4fbe4), cVar2 != '\0')))))) &&
       (iVar3 = FUN_01aaa278(DAT_01d4fbe4), iVar3 != 0)) {
      if (*(int **)(DAT_01d4fbe4 + 0x20) == (int *)0x0) {
LAB_017712d8:
        puVar7 = &DAT_01d21048;
LAB_017712e0:
                    /* WARNING: Subroutine does not return */
        FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,puVar7);
      }
      local_58 = (int *******)&local_270;
      local_248 = *(int ********)(DAT_01d4fbe4 + 0x24);
      local_244 = *(int ********)(DAT_01d4fbe4 + 0x28);
      local_258 = (int ******)(DAT_01d4fbe4 + 0x1c);
      local_250 = (int *******)*local_258;
      local_260 = (int *******)&local_5c;
      local_240 = (int ******)0x0;
      local_25c = (int *******)&DAT_00000001;
      local_54 = (int ******)&DAT_01d2ea4c;
      local_26c = (int *******)&DAT_00000053;
      local_270 = (int *******)&DAT_0051cf18;
      local_24c = (int *******)*(int **)(DAT_01d4fbe4 + 0x20);
      local_5c = (int *******)&local_250;
      FUN_01aaaecc(DAT_01d4fbe4,&local_260);
      iVar3 = DAT_01d4fbe4;
      if ((DAT_01d51ae9 == '\0') && (4 < DAT_01d51b00)) {
        local_44 = *(int ********)(DAT_01d4fbe4 + 0x14);
        local_40 = *(int *******)(DAT_01d4fbe4 + 0x18);
        local_48 = (int *******)&DAT_00000005;
        DataMemoryBarrier(0xb);
        puVar10 = DAT_01d4edc8;
        pcVar1 = DAT_01d4edc4;
        if (DAT_01d51174 != 2) {
          puVar10 = &DAT_01cfc5e0;
          pcVar1 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
        }
        iVar6 = (*(code *)puVar10[3])(pcVar1,&local_48);
        if (iVar6 != 0) {
          local_b8 = local_48;
          local_b4 = local_44;
          local_b0 = local_40;
          FUN_01aaa328(iVar3,pcVar1,puVar10[4],&local_b8,&local_260);
        }
      }
    }
    else {
      iVar3 = DAT_01d4fbe4;
      if ((DAT_01d51ae9 == '\0') && (4 < DAT_01d51b00)) {
        local_25c = *(int ********)(DAT_01d4fbe4 + 0x14);
        local_258 = *(int *******)(DAT_01d4fbe4 + 0x18);
        local_260 = (int *******)&DAT_00000005;
        DataMemoryBarrier(0xb);
        puVar10 = DAT_01d4edc8;
        pcVar1 = DAT_01d4edc4;
        if (DAT_01d51174 != 2) {
          puVar10 = &DAT_01cfc5e0;
          pcVar1 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
        }
        iVar6 = (*(code *)puVar10[3])(pcVar1,&local_260);
        if (iVar6 != 0) {
          if (*(int **)(DAT_01d4fbe4 + 0x20) == (int *)0x0) goto LAB_017712d8;
          local_5c = (int *******)&local_48;
          local_248 = *(int ********)(DAT_01d4fbe4 + 0x24);
          local_244 = *(int ********)(DAT_01d4fbe4 + 0x28);
          local_44 = (int *******)&local_270;
          local_240 = (int ******)0x0;
          local_58 = (int *******)&DAT_00000001;
          local_40 = (int ******)&DAT_01d2ea4c;
          local_26c = (int *******)&DAT_00000053;
          local_270 = (int *******)&DAT_0051cf18;
          local_b8 = local_260;
          local_b4 = local_25c;
          local_b0 = local_258;
          local_250 = (int *******)*(int *******)(DAT_01d4fbe4 + 0x1c);
          local_24c = (int *******)*(int **)(DAT_01d4fbe4 + 0x20);
          local_54 = (int ******)(DAT_01d4fbe4 + 0x1c);
          local_48 = (int *******)&local_250;
          FUN_01aaa328(iVar3,pcVar1,puVar10[4],&local_b8,&local_5c);
        }
      }
    }
    ppppppiVar5 = local_34;
    if (piVar8 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_012fb0cc(&DAT_01d2ce08);
    }
    if (piVar8[7] != 0) {
      FUN_01704b6c();
    }
    piVar8[7] = (int)ppppppiVar5;
    iVar3 = FUN_014295d0(piVar8 + 2);
    if (iVar3 != 0) {
      DataMemoryBarrier(0xb);
      do {
        iVar3 = *piVar8;
        bVar13 = (bool)hasExclusiveAccess(piVar8);
      } while (!bVar13);
      *piVar8 = iVar3 + -1;
      goto LAB_01770f24;
    }
    iVar3 = piVar8[7];
    piVar8[7] = 0;
    if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_012fb0cc(&DAT_01d2ce18);
    }
    DataMemoryBarrier(0xb);
    do {
      iVar6 = *piVar8;
      bVar13 = (bool)hasExclusiveAccess(piVar8);
    } while (!bVar13);
    *piVar8 = iVar6 + -1;
    if (iVar6 == 1) {
      DataMemoryBarrier(0xb);
      FUN_017051c8(piVar8);
    }
    FUN_01a69838(iVar3);
  }
  if (*param_1 == 6 && param_1[1] == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb0ec("internal error: entered unreachable code",0x28,&DAT_01d2da6c);
  }
LAB_01770f94:
  FUN_0175d774(param_1);
  *param_1 = 6;
  param_1[1] = 0;
  return 0;
}


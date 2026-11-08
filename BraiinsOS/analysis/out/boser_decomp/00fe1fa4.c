// FUN_00fe1fa4 @ 00fe1fa4 size=1640 calls_out=17 calls_in=0
// strings: accept-enco | Map must not be polled after it returned `Poll::Ready` | internal error: entered unreachable code

void FUN_00fe1fa4(undefined4 *param_1,int *param_2)

{
  byte *pbVar1;
  ulonglong uVar2;
  int iVar3;
  byte *pbVar4;
  byte bVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  undefined8 uVar13;
  undefined4 local_734;
  int local_730;
  undefined1 auStack_728 [288];
  int local_608;
  int local_604;
  undefined1 auStack_600 [64];
  int local_5c0;
  int local_5bc;
  undefined4 local_5b8;
  undefined4 local_5b4;
  undefined1 auStack_5b0 [208];
  int local_4e0;
  int local_4dc;
  undefined4 local_4d8;
  undefined4 local_4d4;
  undefined4 uStack_4d0;
  undefined4 uStack_4cc;
  undefined4 uStack_4c8;
  undefined4 local_4c4;
  undefined4 uStack_4c0;
  undefined4 uStack_4bc;
  undefined4 uStack_4b8;
  undefined4 uStack_4b4;
  undefined4 local_4b0;
  undefined4 uStack_4ac;
  undefined4 uStack_4a8;
  undefined4 uStack_4a4;
  undefined4 uStack_4a0;
  undefined4 uStack_49c;
  undefined4 local_498;
  undefined4 local_494;
  undefined4 local_490;
  int local_48c;
  undefined1 auStack_488 [208];
  undefined1 auStack_3b8 [208];
  undefined4 local_2e8;
  undefined4 uStack_2e4;
  undefined4 uStack_2e0;
  undefined4 uStack_2dc;
  undefined4 uStack_2d8;
  undefined4 local_2d4;
  undefined4 uStack_2d0;
  undefined4 uStack_2cc;
  undefined4 uStack_2c8;
  undefined4 uStack_2c4;
  undefined4 local_2c0;
  undefined4 uStack_2bc;
  undefined4 uStack_2b8;
  undefined4 uStack_2b4;
  undefined4 uStack_2b0;
  undefined4 uStack_2ac;
  undefined **local_2a8;
  int local_2a4;
  undefined1 auStack_2a0 [64];
  undefined4 local_260;
  int local_25c;
  int local_258;
  int local_254;
  undefined4 local_250;
  undefined4 uStack_24c;
  undefined4 uStack_248;
  undefined4 uStack_244;
  undefined4 uStack_240;
  undefined4 local_23c;
  undefined4 uStack_238;
  undefined4 uStack_234;
  undefined4 uStack_230;
  undefined4 uStack_22c;
  undefined4 local_228;
  undefined4 uStack_224;
  undefined4 uStack_220;
  undefined4 uStack_21c;
  undefined4 uStack_218;
  undefined4 uStack_214;
  undefined **local_210;
  char *local_20c;
  uint local_208;
  int local_204;
  uint local_200;
  int local_1fc;
  undefined4 local_110;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  
  if (*param_2 == 6 && param_2[1] == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb0ec("Map must not be polled after it returned `Poll::Ready`",0x36,&DAT_01d2da7c);
  }
  FUN_00eba594(&local_210,param_2);
  if (local_210 == (undefined **)0x3 && local_20c == (char *)0x0) goto LAB_00fe23b0;
  FUN_01bed4e2(auStack_2a0,&local_208,0x48);
  local_2a4 = (int)local_20c;
  local_2a8 = local_210;
  local_210 = (undefined **)0x0;
  local_20c = (char *)0x16;
  local_208 = 0;
  local_204 = 0;
  iVar3 = FUN_0137f4c4(&local_2a8,&local_210);
  if (iVar3 == 0) {
    local_210 = (undefined **)0x0;
    local_20c = (char *)0x1a;
    local_208 = 0;
    local_204 = 0;
    iVar3 = FUN_0137f4c4(&local_2a8,&local_210);
    if (iVar3 == 0) {
      local_730 = local_25c;
      (**(code **)(local_25c + 0x14))(&local_210,local_260);
      local_734 = local_260;
      if ((((uint)local_210 & 1) != 0) &&
         (uVar2 = CONCAT44(local_1fc,local_200), local_200 == local_208 && local_1fc == local_204))
      goto LAB_00fe20e0;
      local_110 = 0;
      uStack_10c = 0x18;
      uStack_108 = 0;
      uStack_104 = 0;
      iVar3 = FUN_0160ab20(&local_2a8);
      if (iVar3 != 0) {
        pbVar4 = *(byte **)(iVar3 + 4);
        uVar12 = *(uint *)(iVar3 + 8);
        uVar6 = 0;
        do {
          if (uVar12 == uVar6) {
            if (uVar12 == 0) break;
            if (uVar12 == 1) {
              bVar5 = *pbVar4;
              if ((bVar5 == 0x2b) || (bVar5 == 0x2d)) break;
            }
            else {
              bVar5 = *pbVar4;
            }
            if (bVar5 == 0x2b) {
              pbVar4 = pbVar4 + 1;
              uVar12 = uVar12 - 1;
            }
            if (0x10 < uVar12) {
              uVar7 = 0;
              uVar6 = 0;
              goto LAB_00fe24d8;
            }
            if (uVar12 != 0) {
              uVar2 = 0;
              goto LAB_00fe2498;
            }
            uVar2 = 0;
            goto LAB_00fe20e0;
          }
          pbVar1 = pbVar4 + uVar6;
          uVar6 = uVar6 + 1;
        } while ((*pbVar1 == 9) || (*pbVar1 - 0x20 < 0x5f));
      }
      goto LAB_00fe2170;
    }
  }
  FUN_01bed4e2(&local_258,&local_2a8,0x48);
  local_734 = local_260;
  goto LAB_00fe22c0;
  while( true ) {
    uVar7 = uVar10 + uVar11;
    pbVar4 = pbVar4 + 1;
    uVar6 = uVar8 + CARRY4(uVar10,uVar11);
    uVar12 = uVar12 - 1;
    if (CARRY4(uVar8,(uint)CARRY4(uVar10,uVar11))) break;
LAB_00fe24d8:
    uVar2 = CONCAT44(uVar6,uVar7);
    if (uVar12 == 0) goto LAB_00fe20e0;
    uVar10 = (uint)((ulonglong)uVar7 * 10);
    uVar11 = (uint)((ulonglong)uVar7 * 10 >> 0x20);
    uVar7 = (uint)((ulonglong)uVar6 * 10);
    uVar8 = uVar11 + uVar7;
    if (((int)((ulonglong)uVar6 * 10 >> 0x20) != 0 || CARRY4(uVar11,uVar7)) ||
       (uVar11 = *pbVar4 - 0x30, 9 < uVar11)) break;
  }
LAB_00fe2170:
  iVar3 = FUN_00ec9900(param_2 + 0x32,&local_2a8);
  if ((iVar3 == 0) || (iVar3 = FUN_00ec9900(param_2 + 0x39,&local_2a8), iVar3 == 0))
  goto LAB_00fe22ac;
  iVar3 = FUN_00ec9900(param_2 + 0x3f,&local_2a8);
  FUN_01bed4e2(&local_258,&local_2a8,0x48);
  if (iVar3 == 0) goto LAB_00fe22c0;
  local_110 = 0;
  uStack_10c = 0x49;
  uStack_108 = 0;
  uStack_104 = 0;
  FUN_0141e078(&local_48,&local_258);
  FUN_0141c42c(&local_210,local_40,local_48,local_44);
  while (iVar3 = FUN_0141ea00(&local_210), iVar3 != 0) {
    iVar9 = *(int *)(iVar3 + 4);
    uVar12 = *(uint *)(iVar3 + 8);
    uVar13 = FUN_00f80570(&DAT_0056adb8);
    uVar6 = (uint)((ulonglong)uVar13 >> 0x20);
    for (; uVar6 <= uVar12; uVar12 = uVar12 - 1) {
      uVar7 = 0;
      do {
        if (uVar6 == uVar7) goto LAB_00fe2584;
        uVar8 = (uint)*(byte *)((int)uVar13 + uVar7);
        uVar10 = (uint)*(byte *)(iVar9 + uVar7);
        uVar7 = uVar7 + 1;
        if (uVar8 - 0x41 < 0x1a) {
          uVar8 = uVar8 | 0x20;
        }
        if (uVar10 - 0x41 < 0x1a) {
          uVar10 = uVar10 | 0x20;
        }
      } while (uVar10 == uVar8);
      if (uVar12 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_012faff4(1,0,0,&DAT_01d2e4ac);
      }
      iVar9 = iVar9 + 1;
    }
  }
  local_110 = 0;
  uStack_10c = 0x49;
  uStack_108 = 0;
  uStack_104 = 0;
  local_204 = 0;
  local_208 = 0xf;
  local_20c = "accept-enco";
  local_200 = local_200 & 0xffffff00;
  local_210 = &PTR_FUN_01cf426c;
  FUN_01ac2aa0(&local_258,&local_110,&local_210);
LAB_00fe2584:
  if ((char)param_2[0x45] == '\x02') {
                    /* WARNING: Could not recover jumptable at 0x00fe25a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(&DAT_00fe25ac + *(int *)(&DAT_00fe25ac + param_2[0x30] * 4)))();
    return;
  }
  goto LAB_00fe22c4;
  while( true ) {
    pbVar4 = pbVar4 + 1;
    uVar12 = uVar12 - 1;
    uVar2 = (uVar2 & 0xffffffff) * 10 + CONCAT44((int)(uVar2 >> 0x20) * 10,bVar5 - 0x30);
    if (uVar12 == 0) break;
LAB_00fe2498:
    bVar5 = *pbVar4;
    if (9 < bVar5 - 0x30) goto LAB_00fe2170;
  }
LAB_00fe20e0:
  uVar12 = (uint)(uVar2 >> 0x20);
  if (uVar12 != 0 || uVar12 < ((uint)*(ushort *)(param_2 + 0x38) <= (uint)uVar2)) goto LAB_00fe2170;
LAB_00fe22ac:
  FUN_01bed4e2(&local_258,&local_2a8,0x48);
LAB_00fe22c0:
  local_730 = local_25c;
LAB_00fe22c4:
  local_2e8 = local_250;
  uStack_2e4 = uStack_24c;
  uStack_2e0 = uStack_248;
  uStack_2dc = uStack_244;
  uStack_2d8 = uStack_240;
  local_2d4 = local_23c;
  uStack_2d0 = uStack_238;
  uStack_2cc = uStack_234;
  uStack_2c8 = uStack_230;
  uStack_2c4 = uStack_22c;
  local_2c0 = local_228;
  uStack_2bc = uStack_224;
  uStack_2b8 = uStack_220;
  uStack_2b4 = uStack_21c;
  uStack_2b0 = uStack_218;
  uStack_2ac = uStack_214;
  if (local_258 != 3 || local_254 != 0) {
    local_4d8 = local_250;
    local_4d4 = uStack_24c;
    uStack_4d0 = uStack_248;
    uStack_4cc = uStack_244;
    uStack_4c8 = uStack_240;
    local_4c4 = local_23c;
    uStack_4c0 = uStack_238;
    uStack_4bc = uStack_234;
    uStack_4b8 = uStack_230;
    uStack_4b4 = uStack_22c;
    local_4b0 = local_228;
    uStack_4ac = uStack_224;
    uStack_4a8 = uStack_220;
    uStack_4a4 = uStack_21c;
    uStack_4a0 = uStack_218;
    uStack_49c = uStack_214;
    FUN_01bed4e2(auStack_488,auStack_3b8,0xd0);
    local_48c = local_730;
    local_490 = local_734;
    local_494 = 0;
    local_498 = 5;
    local_4dc = local_254;
    local_4e0 = local_258;
    if (*param_2 == 6 && param_2[1] == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_012fb0ec("internal error: entered unreachable code",0x28,&DAT_01d2da6c);
    }
    FUN_00f80144(param_2);
    FUN_00f80ea8(param_2 + 0x32);
    iVar9 = local_4dc;
    iVar3 = local_4e0;
    *param_2 = 6;
    param_2[1] = 0;
    FUN_01bed4e2(auStack_728,&local_4d8,0x120);
    if (iVar3 != 3 || iVar9 != 0) {
      FUN_01bed4e2(auStack_600,auStack_728,0x120);
      local_604 = iVar9;
      local_608 = iVar3;
      if (local_5c0 == 6 && local_5bc == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_012fb0cc(&DAT_01c15fcc);
      }
      FUN_01bed4e2(&uStack_4d0,auStack_5b0,0xd0);
      local_4dc = local_5bc;
      local_4e0 = local_5c0;
      local_4d4 = local_5b4;
      local_4d8 = local_5b8;
      iVar3 = thunk_FUN_01be5118(0xe0);
      if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_0066439c(8,0xe0);
      }
      FUN_01bed4e2(iVar3,&local_4e0,0xe0);
      FUN_01bed4e2(param_1,&local_608,0x48);
      param_1[0x12] = iVar3;
      param_1[0x13] = &DAT_01c150b8;
      return;
    }
  }
LAB_00fe23b0:
  *param_1 = 3;
  param_1[1] = 0;
  return;
}


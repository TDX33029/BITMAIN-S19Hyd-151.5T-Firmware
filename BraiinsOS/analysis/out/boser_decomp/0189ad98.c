// FUN_0189ad98 @ 0189ad98 size=964 calls_out=13 calls_in=0
// strings: internal error: entered unreachable code

void FUN_0189ad98(undefined1 *param_1,int *param_2,undefined4 *param_3,undefined4 param_4,
                 undefined4 param_5,int param_6,uint param_7,uint param_8)

{
  int iVar1;
  uint uVar2;
  undefined *puVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  undefined1 auStack_400 [288];
  int *local_2e0;
  undefined4 local_2dc;
  undefined4 local_2d8;
  undefined4 local_2d4;
  undefined1 *local_1b0;
  int *local_1ac;
  undefined1 *local_1a8;
  undefined4 local_1a4;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  undefined4 uStack_198;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined1 local_68 [16];
  int *local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined1 uStack_25;
  
  if (*param_2 == 1) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb0ec("internal error: entered unreachable code",0x28,&DAT_01d21edc);
  }
  if ((param_7 < param_8) ||
     (FUN_01895338(&local_1b0,param_2 + 4,param_4,param_5,param_7 - param_8),
     (char)local_1b0 == '\x01')) {
    *param_1 = 1;
    return;
  }
  param_2 = param_2 + 0x44;
  FUN_01bed4e2((int)&local_2d4 + 3,&uStack_1a0,0x120);
  FUN_01bed4e2(auStack_400,(int)&local_2d4 + 3,0x120);
  local_78 = *param_3;
  uStack_74 = param_3[1];
  uStack_70 = param_3[2];
  uStack_6c = 0x1000000;
  FUN_01890850(local_68,&local_78);
  uVar7 = param_7 - param_8 & 0xfffffff0;
  if (uVar7 != 0) {
    uVar4 = 0;
    uVar5 = param_8;
    uVar6 = uVar7;
    if (0xbff < uVar7) {
      uVar6 = 0xc00;
    }
    do {
      if (param_7 < uVar5) {
        puVar3 = &DAT_01d21e9c;
        goto LAB_0189b0e8;
      }
      if (param_7 - uVar5 < uVar6) {
                    /* WARNING: Subroutine does not return */
        FUN_012faff4(0,uVar6,param_7 - uVar5,&DAT_01d21eac);
      }
      FUN_01895174(auStack_400,param_6 + uVar5,uVar6);
      if (param_7 < uVar4) {
        puVar3 = &DAT_01d21ebc;
        uVar5 = uVar4;
        goto LAB_0189b0e8;
      }
      uVar2 = uVar6 + param_8;
      if (param_7 - uVar4 < uVar2) {
                    /* WARNING: Subroutine does not return */
        FUN_012faff4(0,uVar2,param_7 - uVar4,&DAT_01d21ecc);
      }
      FUN_0189b184(param_2,param_6 + uVar4,uVar2,param_8,&local_78);
      uVar4 = uVar6 + uVar4;
      uVar5 = uVar6 + uVar5;
      uVar2 = uVar7 - uVar4;
      if (uVar6 <= uVar7 - uVar4) {
        uVar2 = uVar6;
      }
      uVar6 = uVar2;
    } while (uVar7 != uVar4);
  }
  if (uVar7 <= param_7) {
    local_1b0 = auStack_400;
    local_1a4 = local_78;
    uStack_1a0 = uStack_74;
    uStack_19c = uStack_70;
    uStack_198 = uStack_6c;
    local_1a8 = &uStack_25;
    param_7 = param_7 - uVar7;
    local_1ac = param_2;
    if (param_7 < param_8) {
                    /* WARNING: Subroutine does not return */
      FUN_012faff4(param_8,param_7,param_7,&DAT_01d217c4);
    }
    if (param_7 != param_8) {
      param_7 = param_7 - param_8;
      local_2d4 = 0;
      local_2d8 = 0;
      local_2dc = 0;
      local_2e0 = (int *)0x0;
      if (0x10 < param_7) {
                    /* WARNING: Subroutine does not return */
        FUN_012faff4(0,param_7,0x10,&DAT_01d217b4);
      }
      FUN_01bed4e2(&local_2e0,param_6 + uVar7 + param_8,param_7);
      local_58 = local_2e0;
      uStack_54 = local_2dc;
      uStack_50 = local_2d8;
      uStack_4c = local_2d4;
      FUN_01894c58(auStack_400,&local_2e0);
      FUN_01890aec(&local_2e0,&local_1a4);
      uVar5 = 1;
      if ((DAT_01d53480 & 4) == 0) {
        uVar5 = DAT_01d53480 & 1 ^ 3;
      }
      if (uVar5 == 1) {
        FUN_01bd8f20(&local_2e0,&local_48,param_2);
      }
      else if (uVar5 == 2) {
        FUN_01bda190(&local_2e0,&local_48,param_2);
      }
      else {
        FUN_01bcf57c(&local_2e0,&local_48,param_2);
      }
      iVar1 = 0;
      local_38 = local_48;
      uStack_34 = uStack_44;
      uStack_30 = uStack_40;
      uStack_2c = uStack_3c;
      do {
        *(byte *)((int)&local_38 + iVar1) =
             *(byte *)((int)&local_38 + iVar1) ^ local_68[iVar1 + 0x10];
        iVar1 = iVar1 + 1;
      } while (iVar1 != 0x10);
      FUN_01bed4e2(param_6 + uVar7,&local_38,param_7);
    }
    FUN_01bed4e2(&local_1b0,auStack_400,0x120);
    local_2e0 = param_2;
    FUN_01894ae0(param_1 + 1,&local_1b0);
    *param_1 = 0;
    return;
  }
  puVar3 = &DAT_01d21e8c;
  uVar5 = uVar7;
LAB_0189b0e8:
                    /* WARNING: Subroutine does not return */
  FUN_012faff4(uVar5,param_7,param_7,puVar3);
}


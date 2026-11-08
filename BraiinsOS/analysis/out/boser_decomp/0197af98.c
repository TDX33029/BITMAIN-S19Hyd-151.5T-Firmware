// FUN_0197af98 @ 0197af98 size=920 calls_out=7 calls_in=1
// strings: a formatting trait implementation returned an error when the underlying stream did not

/* WARNING: Removing unreachable block (ram,0x0197b094) */

void FUN_0197af98(undefined4 *param_1,int *param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  code *pcVar5;
  undefined *puVar6;
  undefined4 *extraout_r2;
  int extraout_r3;
  undefined4 uVar7;
  undefined4 *puVar8;
  uint uVar9;
  undefined4 *puVar10;
  uint uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined *local_278;
  int local_274;
  int local_270;
  int local_26c;
  undefined1 auStack_268 [512];
  undefined1 *local_68;
  undefined4 local_64;
  uint local_60;
  undefined4 local_5c;
  undefined **local_54;
  undefined4 *local_50;
  int *local_4c;
  code *local_48;
  undefined4 local_44;
  code *local_40;
  undefined4 local_3c;
  undefined4 *local_38;
  uint local_34;
  undefined4 *local_30;
  undefined1 **local_2c;
  
  uVar1 = DAT_01d51ab4;
  uVar4 = DAT_01d51ab0;
  if (param_2 == (int *)0x0) {
    ClearExclusiveLocal();
    local_274 = 0;
    if ((DAT_01d51ab0 | DAT_01d51ab4) != 0) {
      iVar2 = thunk_FUN_01bee35a(param_1,DAT_01d51ab0 | DAT_01d51ab4,param_1,0x238);
      uVar9 = *(uint *)(iVar2 + extraout_r3);
      uVar11 = ((uint *)(iVar2 + extraout_r3))[1];
      param_1 = extraout_r2;
      goto LAB_0197b03c;
    }
LAB_0197b04c:
    puVar6 = (undefined *)0x0;
  }
  else {
    local_274 = *param_2;
    puVar6 = *(undefined **)(local_274 + 0x10);
    if (puVar6 == (undefined *)0x0) {
      ClearExclusiveLocal();
      if (DAT_01d51ab0 == 0 && DAT_01d51ab4 == 0) goto LAB_0197b04c;
      uVar9 = *(uint *)(local_274 + 8);
      uVar11 = *(uint *)(local_274 + 0xc);
LAB_0197b03c:
      puVar6 = &DAT_0056f91c;
      if (uVar4 != uVar9 || uVar1 != uVar11) {
        puVar6 = (undefined *)0x0;
      }
      local_274 = 4;
    }
    else {
      local_274 = *(int *)(local_274 + 0x14) + -1;
    }
  }
  uVar7 = param_1[1];
  uVar12 = param_1[2];
  if (puVar6 == (undefined *)0x0) {
    local_274 = 9;
  }
  uVar14 = *param_1;
  local_278 = &DAT_00531aad;
  if (puVar6 != (undefined *)0x0) {
    local_278 = puVar6;
  }
  iVar2 = param_1[3];
  local_270 = FUN_01be6c3c(0xe0);
  local_26c = local_270 >> 0x1f;
  FUN_01bed93e(auStack_268,0,0x200);
  local_5c = 0;
  local_60 = 0;
  local_2c = &local_68;
  local_48 = FUN_012fd074;
  local_64 = 0x200;
  local_40 = FUN_0197a798;
  local_38 = &DAT_0197a814;
  local_50 = &DAT_0197a814;
  local_34 = 4;
  local_68 = auStack_268;
  local_54 = &local_278;
  local_4c = &local_270;
  local_44 = uVar14;
  local_3c = uVar7;
  iVar3 = FUN_012fa178(&local_34,&DAT_01d276d4,&DAT_00590344,&local_54);
  puVar8 = local_30;
  uVar4 = local_34 & 0xff;
  if (iVar3 == 0) {
    if ((uVar4 != 4) && (uVar4 == 3)) {
      uVar7 = *local_30;
      puVar8 = (undefined4 *)local_30[1];
      pcVar5 = (code *)*puVar8;
      if (pcVar5 != (code *)0x0) {
        (*pcVar5)(uVar7);
      }
      if (puVar8[1] != 0) {
        thunk_FUN_01be4678(uVar7);
      }
      thunk_FUN_01be4678(local_30);
    }
LAB_0197b1b4:
    if (0x200 < local_60) {
                    /* WARNING: Subroutine does not return */
      FUN_012faff4(0,local_60,0x200,&DAT_01d27d78);
    }
    (**(code **)(iVar2 + 0x1c))(&local_54,uVar12,auStack_268);
    local_30 = local_50;
    if (((uint)local_54 & 0xff) == 4) {
      return;
    }
    if (((uint)local_54 & 0xff) != 3) {
      return;
    }
    puVar8 = (undefined4 *)local_50[1];
    uVar7 = *local_50;
    if ((code *)*puVar8 != (code *)0x0) {
      (*(code *)*puVar8)(uVar7);
    }
  }
  else {
    if (uVar4 == 4) {
                    /* WARNING: Subroutine does not return */
      FUN_012fb100("a formatting trait implementation returned an error when the underlying stream did not"
                   ,0xad,&DAT_01d276c4);
    }
    if ((local_34 & 0xff) == 3) {
      puVar10 = (undefined4 *)local_30[1];
      uVar13 = *local_30;
      pcVar5 = (code *)*puVar10;
      if (pcVar5 != (code *)0x0) {
        (*pcVar5)(uVar13);
      }
      if (puVar10[1] != 0) {
        thunk_FUN_01be4678(uVar13);
      }
      thunk_FUN_01be4678(puVar8);
    }
    else if ((local_34 & 0xff) == 4) goto LAB_0197b1b4;
    local_38 = &DAT_0197a814;
    local_40 = FUN_0197a798;
    local_48 = FUN_012fd074;
    local_50 = &DAT_0197a814;
    local_54 = &local_278;
    local_4c = &local_270;
    local_44 = uVar14;
    local_3c = uVar7;
    (**(code **)(iVar2 + 0x24))(&local_34,uVar12,&DAT_00590344,&local_54);
    if ((local_34 & 0xff) == 4) {
      return;
    }
    if ((local_34 & 0xff) != 3) {
      return;
    }
    puVar8 = (undefined4 *)local_30[1];
    uVar7 = *local_30;
    if ((code *)*puVar8 != (code *)0x0) {
      (*(code *)*puVar8)(uVar7);
    }
  }
  if (puVar8[1] != 0) {
    thunk_FUN_01be4678(uVar7);
  }
  thunk_FUN_01be4678(local_30);
  return;
}


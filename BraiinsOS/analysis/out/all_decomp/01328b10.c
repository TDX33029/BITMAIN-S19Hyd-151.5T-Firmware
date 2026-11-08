// FUN_01328b10 @ 01328b10 size=976 calls_out=4 calls_in=47
// strings: assertion failed: field_number > 0 && field_number <= FIELD_NUMBER_MAX

void FUN_01328b10(int *param_1,undefined4 param_2,undefined4 *param_3,uint param_4)

{
  short sVar1;
  int *piVar2;
  uint uVar3;
  uint uVar4;
  int *piVar5;
  uint uVar6;
  int iVar7;
  int *piVar8;
  uint *unaff_r4;
  uint *puVar9;
  int unaff_r5;
  int *piVar10;
  uint *puVar11;
  undefined4 uVar12;
  uint local_6c;
  int *local_60;
  int local_58;
  int *local_54;
  int local_50;
  int local_40;
  int local_3c;
  int local_38;
  int local_30;
  int local_2c;
  int local_28;
  
  if (param_3 == (undefined4 *)0x0) {
    puVar11 = (uint *)0x0;
    iVar7 = 0;
  }
  else {
    puVar11 = (uint *)*param_3;
    iVar7 = param_3[3];
    unaff_r4 = puVar11 + 1;
    param_4 = ~*puVar11 & 0x80808080;
  }
LAB_01328e8c:
  if (puVar11 == (uint *)0x0 || iVar7 == 0) {
    *param_1 = 4;
    return;
  }
  puVar9 = unaff_r4;
  if (param_4 == 0) {
    do {
      unaff_r4 = puVar9 + 1;
      uVar4 = *puVar9;
      puVar11 = puVar11 + -0x34;
      puVar9 = unaff_r4;
    } while ((uVar4 & 0x80808080) == 0x80808080);
    param_4 = uVar4 & 0x80808080 ^ 0x80808080;
  }
  sVar1 = (short)((uint)LZCOUNT(param_4 << 0x18 | (param_4 >> 8 & 0xff) << 0x10 |
                                (param_4 >> 0x10 & 0xff) << 8 | param_4 >> 0x18) >> 3);
  local_54 = (int *)puVar11[-sVar1 * 0xd + -8];
  local_60 = (int *)puVar11[-sVar1 * 0xd + -5];
  piVar8 = local_54 + puVar11[-sVar1 * 0xd + -7] * 2;
  piVar5 = local_60 + puVar11[-sVar1 * 0xd + -4] * 2;
  local_6c = puVar11[-sVar1 * 0xd + -2];
  uVar6 = puVar11[-sVar1 * 0xd + -0xd];
  piVar10 = (int *)puVar11[-sVar1 * 0xd + -0xb];
  uVar4 = local_6c + puVar11[-sVar1 * 0xd + -1] * 0xc;
  param_4 = param_4 - 1 & param_4;
  piVar2 = piVar10 + puVar11[-sVar1 * 0xd + -10];
  iVar7 = iVar7 + -1;
joined_r0x01328c28:
  if (piVar10 != piVar2) goto LAB_01328c60;
  do {
    piVar10 = piVar2;
    if (local_54 == piVar8) {
      local_54 = piVar8;
      if (local_60 == piVar5) {
        if (local_6c == uVar4) goto LAB_01328e8c;
        local_50 = *(int *)(local_6c + 4);
        uVar12 = 3;
        unaff_r5 = *(int *)(local_6c + 8);
        local_6c = local_6c + 0xc;
        uVar3 = 2;
        local_60 = piVar5;
      }
      else {
        local_58 = local_60[1];
        uVar12 = 2;
        unaff_r5 = *local_60;
        local_60 = local_60 + 2;
        uVar3 = 0;
      }
    }
    else {
      local_58 = local_54[1];
      uVar12 = 1;
      unaff_r5 = *local_54;
      uVar3 = 1;
      local_54 = local_54 + 2;
    }
    while( true ) {
      if (0x1ffffffe < uVar6 - 1) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa464("assertion failed: field_number > 0 && field_number <= FIELD_NUMBER_MAX",0x46,
                     &DAT_01890660);
      }
      FUN_01328ef8(&local_30,param_2,uVar6 << 3 | uVar3);
      if (local_30 != 4) {
        *param_1 = local_30;
        param_1[1] = local_2c;
        param_1[2] = local_28;
        return;
      }
      switch(uVar12) {
      case 0:
        local_30 = local_50;
        FUN_01328914(&local_40,param_2,&local_30,4);
        break;
      case 1:
        local_30 = unaff_r5;
        local_2c = local_58;
        FUN_01328914(&local_40,param_2,&local_30,8);
        break;
      case 2:
        FUN_0132901c(&local_40,param_2,unaff_r5,local_58);
        break;
      case 3:
        FUN_01328ef8(&local_30,param_2,unaff_r5);
        if (local_30 == 4) {
          FUN_01328914(&local_30,param_2,local_50,unaff_r5);
          if (local_30 == 4) goto joined_r0x01328c28;
          local_40 = local_30;
          local_3c = local_2c;
          local_38 = local_28;
        }
        else {
          local_40 = local_30;
          local_3c = local_2c;
          local_38 = local_28;
        }
      }
      if (local_40 != 4) {
        *param_1 = local_40;
        param_1[1] = local_3c;
        param_1[2] = local_38;
        return;
      }
      if (piVar10 == piVar2) break;
LAB_01328c60:
      local_50 = *piVar10;
      uVar3 = 5;
      uVar12 = 0;
      piVar10 = piVar10 + 1;
    }
  } while( true );
}


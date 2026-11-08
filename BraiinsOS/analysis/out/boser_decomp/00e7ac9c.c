// FUN_00e7ac9c @ 00e7ac9c size=952 calls_out=9 calls_in=0
// strings: filled must not become larger than initialized | filled must not become larger than initialized

void FUN_00e7ac9c(undefined1 *param_1,uint *param_2,undefined4 param_3)

{
  code *pcVar1;
  uint uVar2;
  uint **ppuVar3;
  uint uVar4;
  uint uVar5;
  undefined *puVar6;
  uint *puVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint *puVar11;
  uint *puVar12;
  uint *puVar13;
  uint *local_8c;
  uint local_80;
  uint local_7c;
  uint local_78;
  uint local_74;
  uint *local_70;
  uint *local_6c;
  uint *local_68;
  uint *local_64;
  undefined4 local_60;
  uint **local_50;
  uint local_4c;
  uint local_48;
  undefined4 local_44;
  uint local_40;
  uint local_3c;
  uint *local_38;
  code *local_34;
  uint *local_30;
  code *local_2c;
  
  puVar12 = (uint *)param_2[7];
  uVar4 = param_2[5];
  uVar5 = param_2[6];
  puVar7 = (uint *)param_2[2];
  do {
    if (((*param_2 - (int)puVar7 < 0x20) && (param_2[4] == *param_2)) && (0x1f < param_2[4])) {
      uVar8 = 0;
      local_4c = 0x20;
      local_50 = &local_70;
      local_44 = 0;
      local_48 = 0;
      FUN_019df8a4(&local_38,*(undefined4 *)(uVar4 + 8),*(undefined4 *)(uVar4 + 0xc),param_3,
                   &local_50);
      puVar7 = local_38;
      uVar9 = local_48;
      ppuVar3 = local_50;
      if (local_4c < local_48) {
        puVar6 = &DAT_01d2e4e0;
        uVar4 = local_4c;
        uVar10 = local_48;
LAB_00e7b008:
                    /* WARNING: Subroutine does not return */
        FUN_012faff4(uVar8,uVar10,uVar4,puVar6);
      }
      local_8c = (uint *)local_34;
      uVar8 = param_2[2];
      uVar10 = param_2[3];
      if (uVar10 < uVar8) {
LAB_00e7afe0:
                    /* WARNING: Subroutine does not return */
        FUN_012fb100("filled must not become larger than initialized",0x5d,&DAT_01d270a0);
      }
      local_7c = *param_2;
      local_80 = param_2[1];
      local_3c = local_7c - uVar8;
      local_74 = uVar10;
      if (local_3c < local_48) {
        FUN_010a1a50(param_2);
        uVar8 = param_2[2];
        if (param_2[3] < uVar8) goto LAB_00e7afe0;
        local_7c = *param_2;
        local_80 = param_2[1];
        local_3c = local_7c - uVar8;
        local_74 = param_2[3];
      }
      uVar2 = local_74;
      if (local_3c < uVar9) {
        local_30 = &local_3c;
        local_38 = &local_40;
        local_40 = uVar9;
        local_2c = FUN_012fd02c;
        local_34 = FUN_012fd02c;
                    /* WARNING: Subroutine does not return */
        FUN_012fb100(&DAT_0058d12f,&local_38,&DAT_01d27090);
      }
      uVar10 = uVar8 + uVar9;
      if ((CARRY4(uVar8,uVar9)) || (local_7c < uVar10)) {
        puVar6 = &DAT_01d27090;
        uVar4 = local_7c;
        goto LAB_00e7b008;
      }
      FUN_01bed4e2(local_80 + uVar8,ppuVar3,uVar9);
      local_78 = uVar10;
      if (uVar2 < uVar10) {
        local_74 = uVar10;
      }
    }
    else {
      FUN_010a1a50(param_2);
      uVar9 = param_2[2];
      uVar8 = param_2[3];
      if (uVar8 < uVar9) {
                    /* WARNING: Subroutine does not return */
        FUN_012fb100("filled must not become larger than initialized",0x5d,&DAT_01d270a0);
      }
      local_7c = *param_2;
      local_80 = param_2[1];
      local_78 = uVar9;
      local_74 = uVar8;
      if (local_7c < uVar9) {
                    /* WARNING: Subroutine does not return */
        FUN_012faff4(0,uVar9,local_7c,&DAT_01d2e4e0);
      }
      FUN_019df8a4(&local_70,*(undefined4 *)(uVar4 + 8),*(undefined4 *)(uVar4 + 0xc),param_3,
                   &local_80);
      if (local_7c < local_78) {
                    /* WARNING: Subroutine does not return */
        FUN_012faff4(0,local_78,local_7c,&DAT_01d2e4e0);
      }
      uVar9 = local_78 - uVar9;
      local_8c = local_6c;
      puVar7 = local_70;
    }
    uVar8 = (uint)puVar7 & 0xff;
    FUN_019e6be4(&local_70,&local_80);
    puVar13 = (uint *)param_2[1];
    local_38 = puVar13;
    if (puVar13 != local_70) {
      FUN_01a680b0(&local_38,&local_70,&DAT_01d270b0);
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xfdee,0xe7b05c);
      (*pcVar1)();
    }
    param_2[2] = (uint)local_6c;
    param_2[3] = (uint)local_68;
    if (uVar8 != 4) {
      if (uVar8 == 5) {
        *param_1 = 5;
        return;
      }
      puVar7 = (uint *)((uint)puVar7 >> 8);
      puVar11 = puVar12;
      goto LAB_00e7aed8;
    }
    if (uVar9 == 0) {
      param_2[7] = 0;
      uVar8 = 4;
      puVar11 = (uint *)0x0;
      local_8c = puVar12;
LAB_00e7aed8:
      puVar12 = (uint *)*param_2;
      *param_2 = 0;
      param_2[1] = 1;
      param_2[3] = 0;
      param_2[2] = 0;
      FUN_012fbd94(&local_38,puVar13,local_6c);
      if (local_38 == (uint *)0x1) {
        local_60 = local_30;
        local_64 = (uint *)local_34;
        local_68 = local_6c;
        local_70 = puVar12;
        local_6c = puVar13;
      }
      else {
        local_64 = local_6c;
        local_70 = (uint *)0x80000000;
        local_6c = puVar12;
        local_68 = puVar13;
      }
      local_38 = (uint *)(uVar8 | (int)puVar7 << 8);
      local_34 = (code *)local_8c;
      FUN_019ecbb0(param_1,&local_38,&local_70,puVar11,uVar5,1);
      return;
    }
    puVar12 = (uint *)(uVar9 + (int)puVar12);
    param_2[7] = (uint)puVar12;
    puVar7 = local_6c;
  } while( true );
}


// FUN_00f86604 @ 00f86604 size=1128 calls_out=19 calls_in=3
// strings: 

undefined8 FUN_00f86604(int param_1,int param_2)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  undefined4 uVar5;
  undefined1 *puVar6;
  uint uVar7;
  ulonglong uVar8;
  undefined8 uVar9;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 local_60;
  int local_5c;
  int iStack_58;
  int local_54;
  undefined4 local_50;
  int local_4c;
  int local_48;
  char local_44;
  undefined1 *local_40;
  undefined1 local_3c;
  undefined8 local_38;
  int *local_30;
  undefined8 local_2c;
  undefined1 uStack_21;
  
  local_54 = 0;
  local_44 = -0x80;
  local_50 = 0;
  local_60 = 0;
  local_68 = 0;
  uStack_64 = 1;
  local_5c = param_1;
  iStack_58 = param_2;
  local_4c = param_1;
  local_48 = param_2;
  if (param_2 != 0) {
    do {
      uVar7 = (uint)*(byte *)(param_1 + local_54);
      if ((0x17 < uVar7 - 9) || ((1 << (uVar7 - 9 & 0xff) & 0x800013U) == 0)) {
        if (uVar7 != 0x5b) {
          if (uVar7 != 0x7b) {
            piVar2 = (int *)FUN_019659c8(&local_68,&uStack_21,&DAT_01c1cd98);
            uVar8 = CONCAT44(local_38._4_4_,(undefined8 *)local_38);
            goto LAB_00f86978;
          }
          local_54 = local_54 + 1;
          local_44 = '\x7f';
          local_3c = 1;
          piVar2 = (int *)0x0;
          local_40 = (undefined1 *)&local_68;
          goto LAB_00f866ec;
        }
        local_54 = local_54 + 1;
        local_44 = '\x7f';
        local_2c._4_4_ = (int *)CONCAT31(local_2c._5_3_,1);
        local_2c._0_4_ = &local_68;
        FUN_01965170(&local_38,&local_2c);
        if ((char)local_38 == '\x01') {
LAB_00f86854:
          uVar8 = CONCAT44(local_38._4_4_,&DAT_00000001);
        }
        else {
          if (local_38._1_1_ != '\x01') {
            local_38._4_4_ = (int *)FUN_012cc2c0(0,&DAT_01c1af2c,&DAT_01d064b8);
            goto LAB_00f86854;
          }
          uVar8 = FUN_0116caf4((undefined4 *)local_2c);
        }
        piVar2 = (int *)(uVar8 >> 0x20);
        local_44 = local_44 + '\x01';
        local_2c = uVar8;
        local_30 = (int *)FUN_01964fb0(&local_68);
        if ((local_30 != (int *)0x0) && ((uVar8 & 1) == 0)) {
          DataMemoryBarrier(0xb);
          do {
            iVar3 = *piVar2;
            bVar1 = (bool)hasExclusiveAccess(piVar2);
          } while (!bVar1);
          *piVar2 = iVar3 + -1;
          goto LAB_00f86964;
        }
        local_38 = uVar8;
        if (local_30 != (int *)0x0) {
          FUN_00f80260(&local_30);
        }
        puVar6 = (undefined1 *)((uint)uVar8 & 1);
        uVar8 = local_38;
        goto LAB_00f8699c;
      }
      local_54 = local_54 + 1;
    } while (param_2 != local_54);
  }
  local_38._0_4_ = (undefined8 *)&DAT_00000005;
  piVar2 = (int *)FUN_01964674(&local_68,&local_38);
  goto LAB_00f86684;
LAB_00f866ec:
  FUN_01965d20(&local_38,&local_40);
  puVar6 = local_40;
  if ((char)local_38 != '\x01') {
    if (local_38._1_1_ != '\x01') {
      puVar6 = (undefined1 *)0x0;
      if (piVar2 == (int *)0x0) {
        uVar9 = FUN_01016ff8();
        piVar2 = (int *)((ulonglong)uVar9 >> 0x20);
        puVar6 = (undefined1 *)((uint)uVar9 & 1);
      }
      goto LAB_00f86910;
    }
    piVar4 = (int *)(local_40 + 0x14);
    *(undefined4 *)(local_40 + 8) = 0;
    *(int *)(puVar6 + 0x14) = *piVar4 + 1;
    FUN_019686b4(&local_38,puVar6 + 0xc,puVar6);
    piVar4 = local_38._4_4_;
    if ((undefined8 *)local_38 == (undefined8 *)0x2) goto LAB_00f868cc;
    if ((local_30 == (int *)&DAT_00000006) &&
       (iVar3 = thunk_FUN_01bed842(local_38._4_4_,&DAT_0051d9f5,6), iVar3 == 0)) {
      if (piVar2 != (int *)0x0) {
        local_38._4_4_ = (int *)&DAT_0132b6a0;
        local_38._0_4_ = &local_2c;
        local_2c._4_4_ = (int *)&DAT_00000006;
        local_2c._0_4_ = (undefined4 *)&DAT_0051d9f5;
        piVar4 = (int *)FUN_019676ac(&DAT_005ab34f,&local_38);
        goto LAB_00f868d4;
      }
      iVar3 = FUN_01965c98(puVar6);
      if (iVar3 == 0) {
        uVar8 = FUN_0116caf4(puVar6);
      }
      else {
        uVar8 = CONCAT44(iVar3,1);
      }
      piVar2 = (int *)(uVar8 >> 0x20);
      if ((uVar8 & 1) != 0) {
        puVar6 = &DAT_00000001;
        goto LAB_00f86910;
      }
    }
    else {
      piVar4 = (int *)FUN_01965c98(puVar6);
      if ((piVar4 != (int *)0x0) || (piVar4 = (int *)FUN_01965eac(puVar6), piVar4 != (int *)0x0))
      goto LAB_00f868cc;
    }
    goto LAB_00f866ec;
  }
  piVar4 = local_38._4_4_;
LAB_00f868cc:
  if (piVar2 != (int *)0x0) {
LAB_00f868d4:
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar2;
      bVar1 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar1);
    *piVar2 = iVar3 + -1;
    if (iVar3 == 1) {
      DataMemoryBarrier(0xb);
      FUN_019db20c(piVar2);
    }
  }
  puVar6 = &DAT_00000001;
  piVar2 = piVar4;
LAB_00f86910:
  uVar8 = CONCAT44(piVar2,puVar6);
  local_44 = local_44 + '\x01';
  local_2c._0_4_ = (undefined4 *)puVar6;
  local_2c._4_4_ = piVar2;
  local_30 = (int *)FUN_019650c4(&local_68);
  if ((local_30 == (int *)0x0) || (puVar6 != (undefined1 *)0x0)) {
    if (local_30 != (int *)0x0) {
      local_38._0_4_ = (undefined8 *)puVar6;
      local_38._4_4_ = piVar2;
      FUN_00f80260(&local_30);
      uVar8 = CONCAT44(local_38._4_4_,(undefined8 *)local_38);
    }
LAB_00f8699c:
    if (puVar6 == (undefined1 *)0x0) {
      local_38 = uVar8;
      piVar4 = (int *)FUN_01964600(&local_68);
      if (piVar4 == (int *)0x0) {
        uVar5 = 0;
      }
      else {
        DataMemoryBarrier(0xb);
        do {
          iVar3 = *piVar2;
          bVar1 = (bool)hasExclusiveAccess(piVar2);
        } while (!bVar1);
        *piVar2 = iVar3 + -1;
        uVar5 = 1;
        if (iVar3 == 1) {
          DataMemoryBarrier(0xb);
          FUN_019db20c(piVar2);
        }
        piVar2 = piVar4;
      }
      goto LAB_00f8668c;
    }
  }
  else {
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar2;
      bVar1 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar1);
    *piVar2 = iVar3 + -1;
LAB_00f86964:
    piVar2 = local_30;
    local_38._4_4_ = (int *)(uVar8 >> 0x20);
    if (iVar3 == 1) {
      DataMemoryBarrier(0xb);
      FUN_019db20c(local_38._4_4_);
      local_38 = uVar8;
      uVar8 = local_38;
    }
  }
LAB_00f86978:
  local_38 = uVar8;
  piVar2 = (int *)FUN_01966f00(piVar2,&local_68);
LAB_00f86684:
  uVar5 = 1;
LAB_00f8668c:
  FUN_019bb7e0(local_68,uStack_64);
  return CONCAT44(piVar2,uVar5);
}


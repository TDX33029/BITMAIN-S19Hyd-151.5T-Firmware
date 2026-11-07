// FUN_00662b90 @ 00662b90 size=1756 calls_out=24 calls_in=0
// strings: /etc/bosminer-experimental.toml | /etc/bosminer-experimental.toml | /etc/bosminer-experimental.toml | SetGloba | SetGloba | lDefaultError

void FUN_00662b90(undefined4 *param_1,undefined4 *param_2)

{
  code *pcVar1;
  undefined *puVar2;
  char cVar3;
  uint *puVar4;
  uint uVar5;
  uint uVar6;
  undefined1 *puVar7;
  undefined1 uVar8;
  byte bVar9;
  uint uVar10;
  undefined1 uVar11;
  undefined1 *puVar12;
  undefined4 *puVar13;
  int iVar14;
  char *pcVar15;
  byte *pbVar16;
  int *piVar17;
  bool bVar18;
  undefined8 uVar19;
  ulonglong uVar20;
  undefined4 *local_d8 [21];
  char local_82;
  undefined4 *local_80;
  undefined4 **local_7c;
  undefined4 local_78;
  undefined4 *local_74;
  undefined4 *local_70;
  undefined **local_6c;
  undefined *local_68;
  undefined4 local_64;
  int iStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined *local_50;
  undefined4 ***local_4c;
  undefined4 **local_48;
  code *local_44;
  char *local_40;
  undefined4 local_3c;
  undefined1 *local_38;
  undefined4 uStack_34;
  undefined4 ***local_30;
  int local_2c;
  
  puVar4 = (uint *)(&switchD_00662bac::switchdataD_00662bb0)[*(byte *)(param_1 + 0xd)];
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(byte *)(param_1 + 0xd)) {
  case 0:
    DataMemoryBarrier(0xb);
    if (DAT_018dae14 != 0) {
      FUN_00f426e0();
    }
    param_1[0xc] = &DAT_018dae04;
    local_30 = (undefined4 ***)&DAT_3b9aca00;
    local_3c = 0x1f;
    local_40 = "/etc/bosminer-experimental.toml";
    FUN_0071405c(&local_40);
    puVar13 = param_1 + 6;
    *param_1 = local_40;
    param_1[1] = local_3c;
    param_1[2] = local_38;
    param_1[3] = uStack_34;
    param_1[4] = local_30;
    param_1[5] = local_2c;
    FUN_01651a54(puVar13,local_40,10,0,0,&DAT_0185838c);
    param_1[0xf] = puVar13;
    *(undefined1 *)(param_1 + 0x10) = 0;
    param_1[0xe] = puVar13;
    break;
  case 1:
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xfdee,0x663308);
    (*pcVar1)();
  case 2:
                    /* WARNING: Subroutine does not return */
    FUN_00fb7cc0(&DAT_0185839c);
  case 3:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(*(undefined1 *)(param_1 + 0x10)) {
    case 0:
      puVar13 = (undefined4 *)param_1[0xe];
      param_1[0xf] = puVar13;
      break;
    case 1:
                    /* WARNING: Subroutine does not return */
      FUN_00fb7ca0(&DAT_01879154);
    case 2:
                    /* WARNING: Subroutine does not return */
      FUN_00fb7cc0(&DAT_01879154);
    case 3:
      puVar13 = (undefined4 *)param_1[0xf];
    }
    break;
  case 4:
    pbVar16 = (byte *)param_1[0x1a];
    piVar17 = (int *)param_1[0x1b];
    goto LAB_00662d48;
  }
  FUN_016510c8(&local_40,puVar13,param_2);
  uVar8 = 1;
  uVar11 = 3;
  if (local_38 == &DAT_3b9aca00) {
    uVar8 = 3;
  }
  *(undefined1 *)(param_1 + 0x10) = uVar8;
  if (local_38 == &DAT_3b9aca00) {
LAB_00662cc4:
    *(undefined1 *)(param_1 + 0xd) = uVar11;
    return;
  }
LAB_0066322c:
  puVar4 = (uint *)param_1[0xc];
  pbVar16 = (byte *)(param_1 + 0xe);
  *pbVar16 = 0;
  uVar5 = *puVar4;
  DataMemoryBarrier(0xb);
  piVar17 = param_1 + 0xf;
  *piVar17 = (int)(param_1 + 6);
  param_1[0x1a] = pbVar16;
  *(undefined1 *)(param_1 + 0x19) = 0;
  param_1[0x18] = 0;
  param_1[0x12] = puVar4;
  param_1[0x13] = uVar5 >> 2;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  *(undefined1 *)(param_1 + 0x11) = 0;
  param_1[0x1b] = piVar17;
LAB_00662d48:
  uVar19 = thunk_FUN_016de0ee(puVar4,0x40);
  iVar14 = (int)uVar19 + (int)((ulonglong)uVar19 >> 0x20);
  if (*(char *)(iVar14 + 0x38) != '\x01') {
    if (*(char *)(iVar14 + 0x38) == '\x02') {
                    /* WARNING: Subroutine does not return */
      FUN_015f853c(&DAT_018ae900);
    }
    FUN_015e8e6c(iVar14,FUN_009948a0);
    *(undefined1 *)(iVar14 + 0x38) = 1;
  }
  cVar3 = *(char *)(iVar14 + 0x30);
  bVar18 = cVar3 == '\x01';
  if (bVar18) {
    cVar3 = *(char *)(iVar14 + 0x31);
  }
  if (!bVar18 || cVar3 != '\0') {
    if ((*(uint *)(iVar14 + 0x24) & 1) == 0) {
      uVar19 = FUN_0164e918();
      if ((uint)uVar19 < 2) {
        uVar19 = CONCAT44((int)((ulonglong)uVar19 >> 0x20),1);
      }
    }
    else {
      uVar19 = CONCAT44(*(undefined4 *)(iVar14 + 0x28),*(undefined4 *)(iVar14 + 0x2c));
    }
    uVar5 = (uint)((ulonglong)uVar19 >> 0x20);
    uVar10 = (uint)uVar19;
    uVar5 = uVar5 ^ uVar5 << 0x11;
    *(uint *)(iVar14 + 0x28) = uVar10;
    *(undefined4 *)(iVar14 + 0x24) = 1;
    uVar5 = uVar10 >> 0x10 ^ uVar5 >> 7 ^ uVar10 ^ uVar5;
    *(uint *)(iVar14 + 0x2c) = uVar5;
    bVar9 = *pbVar16;
    uVar6 = (uint)bVar9;
    if ((int)(uVar5 + uVar10) < 0) {
      uVar5 = (uVar6 & 2) >> 1;
      if ((bVar9 & 2) == 0) {
        iVar14 = FUN_0163c044(piVar17 + 3,param_2);
        bVar9 = 2;
        puVar12 = &DAT_3b9aca00;
        if (iVar14 != 0) {
          uVar6 = (uint)*pbVar16;
          goto LAB_00662e30;
        }
      }
      else {
LAB_00662e30:
        if ((uVar6 & 1) != 0) goto LAB_00662efc;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
        switch((char)piVar17[2]) {
        case '\0':
          iVar14 = *piVar17;
          piVar17[1] = iVar14;
          break;
        case '\x01':
switchD_00662e44_caseD_1:
                    /* WARNING: Subroutine does not return */
          FUN_00fb7ca0(&DAT_01879154);
        case '\x02':
switchD_00662e44_caseD_2:
                    /* WARNING: Subroutine does not return */
          FUN_00fb7cc0(&DAT_01879154);
        case '\x03':
          iVar14 = piVar17[1];
        }
        FUN_016510c8(&local_40,iVar14,param_2);
        uVar8 = 1;
        if (local_38 == &DAT_3b9aca00) {
          uVar8 = 3;
        }
        *(undefined1 *)(piVar17 + 2) = uVar8;
        if (local_38 == &DAT_3b9aca00) goto LAB_00663290;
LAB_00662f44:
        bVar9 = 1;
        puVar12 = local_38;
      }
LAB_00662f48:
      *pbVar16 = *pbVar16 | bVar9;
    }
    else {
      uVar5 = uVar6 & 1;
      if ((bVar9 & 1) == 0) {
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
        switch((char)piVar17[2]) {
        case '\0':
          iVar14 = *piVar17;
          piVar17[1] = iVar14;
          break;
        case '\x01':
          goto switchD_00662e44_caseD_1;
        case '\x02':
          goto switchD_00662e44_caseD_2;
        case '\x03':
          iVar14 = piVar17[1];
        }
        FUN_016510c8(&local_40,iVar14,param_2);
        uVar8 = 1;
        if (local_38 == &DAT_3b9aca00) {
          uVar8 = 3;
        }
        *(undefined1 *)(piVar17 + 2) = uVar8;
        if (local_38 == &DAT_3b9aca00) {
          uVar6 = (uint)*pbVar16;
          goto LAB_00662ed0;
        }
        goto LAB_00662f44;
      }
LAB_00662ed0:
      if ((uVar6 & 2) == 0) {
        iVar14 = FUN_0163c044(piVar17 + 3,param_2);
        bVar9 = 2;
        puVar12 = &DAT_3b9aca00;
        if (iVar14 != 0) goto LAB_00663290;
        goto LAB_00662f48;
      }
LAB_00662efc:
      puVar12 = (undefined1 *)0x3b9aca01;
      if (uVar5 != 1) {
LAB_00663290:
        *(undefined1 *)(param_1 + 0xd) = 4;
        return;
      }
    }
    FUN_0163bdc0(param_1 + 0x12);
    if (param_1[0x16] != 0) {
      (**(code **)(param_1[0x16] + 0xc))(param_1[0x17]);
    }
    puVar7 = puVar12 + -999999999;
    if (puVar12 < (undefined1 *)0x3b9ac9ff) {
      puVar7 = (undefined1 *)0x0;
    }
    if (puVar7 == (undefined1 *)0x0) goto LAB_00662fa0;
    if (puVar7 != (undefined1 *)0x1) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa478("all branches are disabled and there is no else branch",0x6b,&DAT_018583bc);
    }
    FUN_0071405c(param_1);
    goto LAB_00662fb0;
  }
  uVar11 = 4;
  FUN_016455a4(*param_2,param_2[1]);
  goto LAB_00662cc4;
LAB_00662fa0:
  iVar14 = FUN_0071405c(param_1);
  if (iVar14 == 0) goto LAB_0066322c;
LAB_00662fb0:
  FUN_006fce58(local_d8);
  if (local_82 != '\x02') {
    uVar20 = FUN_007143c8();
    piVar17 = (int *)uVar20;
    FUN_016dd1aa(piVar17 + 2,local_d8,0x58);
    if ((((uVar20 & 0x100000000) == 0) && ((DAT_018dd988 & 0x7fffffff) != 0)) &&
       (iVar14 = FUN_015bf3f8(), iVar14 == 0)) {
      *(undefined1 *)(piVar17 + 1) = 1;
    }
    DataMemoryBarrier(0xb);
    do {
      iVar14 = *piVar17;
      bVar18 = (bool)hasExclusiveAccess(piVar17);
    } while (!bVar18);
    *piVar17 = 0;
    if (iVar14 == 2) {
      FUN_016d6968(0xf0,piVar17,0x81,1);
    }
    goto LAB_0066322c;
  }
  local_80 = local_d8[0];
  if ((4 < DAT_018d9130) || (DAT_018d9290 == '\0')) goto LAB_0066321c;
  if (DAT_018d9290 == '\x01') {
LAB_00663038:
    DataMemoryBarrier(0xb);
    pcVar15 = s_SetGloba_00414c05;
    puVar2 = &DAT_018ae394;
    if ((DAT_018dd984 == 2) && (pcVar15 = DAT_018daa74, puVar2 = DAT_018daa78, DAT_018daa70 != 0)) {
      pcVar15 = DAT_018daa74 + (*(int *)(DAT_018daa78 + 8) - 1U & 0xfffffff8) + 8;
    }
    iVar14 = (**(code **)(puVar2 + 0x14))(pcVar15,DAT_018d9288);
    if (iVar14 == 0) goto LAB_0066321c;
  }
  else if (DAT_018d9290 != '\x02') {
    cVar3 = FUN_0169ac90(&DAT_018d9288);
    if (cVar3 == '\0') goto LAB_0066321c;
    if (cVar3 != '\x02') goto LAB_00663038;
  }
  if (*(int *)(DAT_018d9288 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00fb74b8(&DAT_00411c02,0x22,&DAT_018583ac);
  }
  uStack_5c = *(undefined4 *)(DAT_018d9288 + 0x24);
  uStack_58 = *(undefined4 *)(DAT_018d9288 + 0x28);
  local_6c = &local_50;
  local_74 = (undefined4 *)(DAT_018d9288 + 0x1c);
  local_64 = *local_74;
  local_70 = &local_64;
  local_7c = &local_70;
  uStack_54 = 0;
  local_4c = &local_48;
  local_78 = 1;
  local_68 = &DAT_018abb78;
  local_50 = &DAT_0057e44e;
  local_40 = (char *)0x1;
  local_30 = &local_7c;
  local_44 = FUN_00604528;
  local_48 = &local_80;
  local_3c = 0;
  DataMemoryBarrier(0xb);
  pcVar15 = s_SetGloba_00414c05;
  puVar2 = &DAT_018ae394;
  if ((DAT_018dd984 == 2) && (pcVar15 = DAT_018daa74, puVar2 = DAT_018daa78, DAT_018daa70 != 0)) {
    pcVar15 = DAT_018daa74 + (*(int *)(DAT_018daa78 + 8) - 1U & 0xfffffff8) + 8;
  }
  iStack_60 = *(int *)(DAT_018d9288 + 0x20);
  local_2c = DAT_018d9288;
  iVar14 = (**(code **)(puVar2 + 0x28))(pcVar15,&local_40);
  if (iVar14 != 0) {
    (**(code **)(puVar2 + 0x2c))(pcVar15,&local_40);
  }
LAB_0066321c:
  (**(code **)*local_80)();
  goto LAB_0066322c;
}


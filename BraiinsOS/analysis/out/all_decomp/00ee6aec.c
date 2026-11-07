// FUN_00ee6aec @ 00ee6aec size=1764 calls_out=13 calls_in=2
// strings: stage | hashboard_idx | frequency_mhz | measured_hashrate | dead_cores | errors

void FUN_00ee6aec(int *param_1,int *param_2)

{
  int **ppiVar1;
  undefined1 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  int *piVar13;
  uint uVar14;
  undefined1 *puVar15;
  uint uVar16;
  int iVar17;
  int local_50;
  undefined1 *local_4c;
  int local_48;
  int *local_44;
  undefined4 local_40;
  int **local_3c;
  undefined4 local_38;
  int **local_34;
  undefined4 local_30;
  undefined4 local_2c;
  
  local_4c = (undefined1 *)thunk_FUN_016d4a50(0x80);
  if (local_4c == (undefined1 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(1,0x80);
  }
  local_44 = &local_50;
  *local_4c = 0x7b;
  local_48 = 1;
  local_3c = &local_44;
  local_50 = 0x80;
  local_40 = CONCAT22(local_40._2_2_,0x100);
  iVar3 = FUN_00e63424(&local_40,param_2 + 0x14);
  ppiVar1 = local_3c;
  if (iVar3 != 0) goto LAB_00ee7040;
  if ((char)local_40 == '\x01') {
    local_30 = 10;
    iVar3 = FUN_0157c50c(&local_30,0,0);
    goto LAB_00ee7040;
  }
  if (local_40._1_1_ != '\x01') {
    piVar13 = *local_3c;
    iVar3 = piVar13[2];
    if (*piVar13 == iVar3) {
      FUN_00edff4c(piVar13,iVar3,1,1,1);
      iVar3 = piVar13[2];
    }
    *(undefined1 *)(piVar13[1] + iVar3) = 0x2c;
    piVar13[2] = iVar3 + 1;
  }
  local_40._0_2_ = CONCAT11(2,(char)local_40);
  FUN_00e5d350(&local_30,*ppiVar1,&DAT_00569478,4);
  if ((char)local_30 != '\x04') {
    iVar3 = FUN_0157c4a0(local_30,local_2c);
    goto LAB_00ee7040;
  }
  piVar13 = *ppiVar1;
  iVar3 = piVar13[2];
  if (*piVar13 == iVar3) {
    FUN_00edff4c(piVar13,iVar3,1,1,1);
    iVar3 = piVar13[2];
  }
  uVar16 = (uint)*(ushort *)(param_2 + 0xc);
  puVar15 = (undefined1 *)param_2[10];
  *(undefined1 *)(piVar13[1] + iVar3) = 0x3a;
  piVar13[2] = iVar3 + 1;
  iVar4 = param_2[2];
  uVar14 = uVar16;
  if (puVar15 != &DAT_3b9aca00) {
    uVar14 = uVar16 + 1;
  }
  iVar5 = param_2[4];
  iVar6 = param_2[6];
  uVar7 = (uint)*(ushort *)(param_2 + 0xd);
  uVar8 = (uint)*(ushort *)(param_2 + 0xe);
  uVar9 = (uint)*(ushort *)(param_2 + 0xf);
  uVar10 = (uint)*(ushort *)(param_2 + 0x10);
  uVar11 = (uint)*(ushort *)(param_2 + 0x11);
  uVar12 = (uint)*(ushort *)(param_2 + 0x12);
  iVar17 = *param_2;
  piVar13 = *ppiVar1;
  iVar3 = piVar13[2];
  if (*piVar13 == iVar3) {
    FUN_00edff4c(piVar13,iVar3,1,1,1);
    iVar3 = piVar13[2];
  }
  *(undefined1 *)(piVar13[1] + iVar3) = 0x7b;
  iVar3 = iVar3 + 1;
  piVar13[2] = iVar3;
  uVar2 = 1;
  if (uVar14 + iVar17 + uVar7 + uVar8 + uVar9 + iVar4 + uVar10 + iVar5 + uVar11 + uVar12 == 0 &&
      iVar6 == 0) {
    if (*piVar13 == iVar3) {
      FUN_00edff4c(piVar13,iVar3,1,1,1);
      iVar3 = piVar13[2];
    }
    *(undefined1 *)(piVar13[1] + iVar3) = 0x7d;
    piVar13[2] = iVar3 + 1;
    uVar2 = 0;
  }
  local_34 = ppiVar1;
  local_38 = (uint)CONCAT21(local_38._2_2_,uVar2) << 8;
  if ((puVar15 != &DAT_3b9aca00) &&
     (iVar3 = FUN_00e611cc(&local_38,ppiVar1,param_2[8],param_2[9],puVar15), iVar3 != 0))
  goto LAB_00ee7040;
  if (uVar16 == 0) {
LAB_00ee6db0:
    if (iVar17 != 0) {
      if ((char)local_38 != '\0') goto LAB_00ee7024;
      iVar3 = FUN_00e66024(&local_38,&DAT_00567b50,4,iVar17,param_2[1]);
      if (iVar3 != 0) goto LAB_00ee7040;
    }
    if (uVar7 != 0) {
      if ((char)local_38 != '\0') goto LAB_00ee7024;
      iVar3 = FUN_00e64138(&local_38,"hashboard_idx",0xd,uVar7,*(undefined2 *)((int)param_2 + 0x36))
      ;
      if (iVar3 != 0) goto LAB_00ee7040;
    }
    if (uVar8 != 0) {
      if ((char)local_38 != '\0') goto LAB_00ee7024;
      iVar3 = FUN_00e64138(&local_38,&DAT_0056a828,8,uVar8,*(undefined2 *)((int)param_2 + 0x3a));
      if (iVar3 != 0) goto LAB_00ee7040;
    }
    if (uVar9 != 0) {
      if ((char)local_38 != '\0') goto LAB_00ee7024;
      iVar3 = FUN_00e64138(&local_38,"frequency_mhz",0xd,uVar9,*(undefined2 *)((int)param_2 + 0x3e))
      ;
      if (iVar3 != 0) goto LAB_00ee7040;
    }
    if (iVar4 != 0) {
      if ((char)local_38 != '\0') goto LAB_00ee7024;
      iVar3 = FUN_00e65e10(param_2[3],&local_38,"measured_hashrate",0x11,iVar4);
      if (iVar3 != 0) goto LAB_00ee7040;
    }
    if (uVar10 != 0) {
      if ((char)local_38 != '\0') goto LAB_00ee7024;
      iVar3 = FUN_00e64138(&local_38,"dead_cores",10,uVar10,*(undefined2 *)((int)param_2 + 0x42));
      if (iVar3 != 0) goto LAB_00ee7040;
    }
    if (iVar5 != 0) {
      if ((char)local_38 != '\0') goto LAB_00ee7024;
      iVar3 = FUN_00e66024(&local_38,"errors",6,iVar5,param_2[5]);
      if (iVar3 != 0) goto LAB_00ee7040;
    }
    if (uVar11 != 0) {
      if ((char)local_38 != '\0') goto LAB_00ee7024;
      iVar3 = FUN_00e64138(&local_38,"underclock_count",0x10,uVar11,
                           *(undefined2 *)((int)param_2 + 0x46));
      if (iVar3 != 0) goto LAB_00ee7040;
    }
    if (uVar12 != 0) {
      if ((char)local_38 != '\0') goto LAB_00ee7024;
      iVar3 = FUN_00e64138(&local_38,"next_frequency_mhz",0x12,uVar12,
                           *(undefined2 *)((int)param_2 + 0x4a));
      if (iVar3 != 0) goto LAB_00ee7040;
    }
    if (iVar6 == 0) {
LAB_00ee7124:
      if (((local_38 & 0xff00) != 0) && ((local_38 & 1) == 0)) {
        FUN_00f1f6ac(*local_34,"}",1);
      }
      if (((local_40 & 0xff00) != 0) && ((local_40 & 1) == 0)) {
        piVar13 = *ppiVar1;
        iVar3 = piVar13[2];
        if (*piVar13 == iVar3) {
          FUN_00edff4c(piVar13,iVar3,1,1,1);
          iVar3 = piVar13[2];
        }
        *(undefined1 *)(piVar13[1] + iVar3) = 0x7d;
        piVar13[2] = iVar3 + 1;
      }
      *param_1 = local_50;
      param_1[1] = (int)local_4c;
      param_1[2] = local_48;
      return;
    }
    if ((char)local_38 == '\0') {
      iVar3 = FUN_00e65e10(param_2[7],&local_38,"mcr",3,iVar6);
      if (iVar3 == 0) goto LAB_00ee7124;
      goto LAB_00ee7040;
    }
  }
  else if ((char)local_38 == '\0') {
    iVar3 = FUN_00e64138(&local_38,"stage",5,uVar16,*(undefined2 *)((int)param_2 + 0x32));
    if (iVar3 != 0) goto LAB_00ee7040;
    goto LAB_00ee6db0;
  }
LAB_00ee7024:
  local_30 = 10;
  iVar3 = FUN_0157c50c(&local_30,0,0);
LAB_00ee7040:
  *param_1 = -0x80000000;
  param_1[1] = iVar3;
  if (local_50 == 0) {
    return;
  }
  thunk_FUN_016d3fb4(local_4c);
  return;
}


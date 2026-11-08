// function @ 00ee54a0  size=2012  volt_strings=1
// strings: session_id | hashboard_idx | hashboard_fingerprint | hb_type | pcb_version | bom_version | total_hashrate_ghs1 | chip_type | chip_info | voltage1 | hw_model_detected

void FUN_00ee54a0(int *param_1,int *param_2)

{
  int **ppiVar1;
  undefined1 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int *piVar15;
  uint uVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  int iVar22;
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
  iVar3 = FUN_00e63424(&local_40,param_2 + 0x30);
  ppiVar1 = local_3c;
  if (iVar3 != 0) goto LAB_00ee5a60;
  if ((char)local_40 == '\x01') {
    local_30 = 10;
    iVar3 = FUN_0157c50c(&local_30,0,0);
    goto LAB_00ee5a60;
  }
  if (local_40._1_1_ != '\x01') {
    piVar15 = *local_3c;
    iVar3 = piVar15[2];
    if (*piVar15 == iVar3) {
      FUN_00edff4c(piVar15,iVar3,1,1,1);
      iVar3 = piVar15[2];
    }
    *(undefined1 *)(piVar15[1] + iVar3) = 0x2c;
    piVar15[2] = iVar3 + 1;
  }
  local_40._0_2_ = CONCAT11(2,(char)local_40);
  FUN_00e5d350(&local_30,*ppiVar1,&DAT_00569478,4);
  if ((char)local_30 != '\x04') {
    iVar3 = FUN_0157c4a0(local_30,local_2c);
    goto LAB_00ee5a60;
  }
  piVar15 = *ppiVar1;
  iVar3 = piVar15[2];
  if (*piVar15 == iVar3) {
    FUN_00edff4c(piVar15,iVar3,1,1,1);
    iVar3 = piVar15[2];
  }
  iVar20 = *param_2;
  iVar21 = param_2[1];
  uVar16 = (uint)*(ushort *)(param_2 + 0x2f);
  *(undefined1 *)(piVar15[1] + iVar3) = 0x3a;
  piVar15[2] = iVar3 + 1;
  iVar22 = param_2[0x17];
  iVar3 = iVar20;
  if (iVar22 != -0x80000000) {
    iVar3 = iVar20 + 1;
  }
  iVar9 = param_2[8];
  iVar17 = param_2[4];
  iVar10 = param_2[5];
  iVar3 = iVar3 + uVar16 + iVar17;
  iVar18 = param_2[0x1a];
  iVar19 = param_2[0x1d];
  if (iVar18 != -0x80000000) {
    iVar3 = iVar3 + 1;
  }
  if (iVar19 != -0x80000000) {
    iVar3 = iVar3 + 1;
  }
  iVar5 = param_2[10];
  iVar3 = iVar3 + iVar9;
  iVar11 = param_2[0x20];
  iVar12 = param_2[0x23];
  if (iVar11 != -0x80000000) {
    iVar3 = iVar3 + 1;
  }
  iVar13 = param_2[0x26];
  if (iVar12 != -0x80000000) {
    iVar3 = iVar3 + 1;
  }
  if (iVar13 != -0x80000000) {
    iVar3 = iVar3 + 1;
  }
  iVar14 = param_2[0xf];
  iVar3 = iVar3 + iVar5;
  iVar6 = param_2[0x29];
  iVar4 = param_2[0x16];
  if (iVar6 != -0x80000000) {
    iVar3 = iVar3 + 1;
  }
  if (iVar4 != 0) {
    iVar3 = iVar3 + 1;
  }
  iVar7 = param_2[0x2c];
  if (iVar7 != -0x80000000) {
    iVar3 = iVar3 + 1;
  }
  piVar15 = *ppiVar1;
  iVar8 = piVar15[2];
  if (*piVar15 == iVar8) {
    FUN_00edff4c(piVar15,iVar8,1,1,1);
    iVar8 = piVar15[2];
  }
  *(undefined1 *)(piVar15[1] + iVar8) = 0x7b;
  iVar8 = iVar8 + 1;
  uVar2 = 1;
  piVar15[2] = iVar8;
  if (iVar3 == 0 && iVar14 == 0) {
    if (*piVar15 == iVar8) {
      FUN_00edff4c(piVar15,iVar8,1,1,1);
      iVar8 = piVar15[2];
    }
    *(undefined1 *)(piVar15[1] + iVar8) = 0x7d;
    piVar15[2] = iVar8 + 1;
    uVar2 = 0;
  }
  local_38 = (uint)CONCAT21(local_38._2_2_,uVar2) << 8;
  local_34 = ppiVar1;
  if ((iVar20 != 0 || iVar21 != 0) &&
     (iVar3 = FUN_00e64458(&local_38,"session_id",10,param_2[3],iVar20,iVar21,param_2[2],param_2[3])
     , iVar3 != 0)) goto LAB_00ee5a60;
  if (iVar22 == -0x80000000) {
LAB_00ee57e0:
    if (uVar16 != 0) {
      if ((char)local_38 != '\0') goto LAB_00ee5a44;
      iVar3 = FUN_00e64138(&local_38,"hashboard_idx",0xd,uVar16,*(undefined2 *)((int)param_2 + 0xbe)
                          );
      if (iVar3 != 0) goto LAB_00ee5a60;
    }
    if (iVar17 != 0 || iVar10 != 0) {
      if ((char)local_38 != '\0') goto LAB_00ee5a44;
      iVar3 = FUN_00e64458(&local_38,"hashboard_fingerprint",0x15,param_2[7],iVar17,iVar10,
                           param_2[6],param_2[7]);
      if (iVar3 != 0) goto LAB_00ee5a60;
    }
    if (iVar18 != -0x80000000) {
      if ((char)local_38 != '\0') goto LAB_00ee5a44;
      iVar3 = FUN_00e61384(&local_38,"hb_type",7,param_2 + 0x1a);
      if (iVar3 != 0) goto LAB_00ee5a60;
    }
    if (iVar19 != -0x80000000) {
      if ((char)local_38 != '\0') goto LAB_00ee5a44;
      iVar3 = FUN_00e61384(&local_38,"pcb_version",0xb,param_2 + 0x1d);
      if (iVar3 != 0) goto LAB_00ee5a60;
    }
    if (iVar11 != -0x80000000) {
      if ((char)local_38 != '\0') goto LAB_00ee5a44;
      iVar3 = FUN_00e61384(&local_38,"bom_version",0xb,param_2 + 0x20);
      if (iVar3 != 0) goto LAB_00ee5a60;
    }
    if (iVar9 != 0) {
      if ((char)local_38 != '\0') goto LAB_00ee5a44;
      iVar3 = FUN_00e65e10(param_2[9],&local_38,"total_hashrate_ghs1",0x13,iVar9);
      if (iVar3 != 0) goto LAB_00ee5a60;
    }
    if (iVar12 != -0x80000000) {
      if ((char)local_38 != '\0') goto LAB_00ee5a44;
      iVar3 = FUN_00e61384(&local_38,&DAT_00409140,0xd,param_2 + 0x23);
      if (iVar3 != 0) goto LAB_00ee5a60;
    }
    if (iVar13 != -0x80000000) {
      if ((char)local_38 != '\0') goto LAB_00ee5a44;
      iVar3 = FUN_00e61384(&local_38,"chip_type",9,param_2 + 0x26);
      if (iVar3 != 0) goto LAB_00ee5a60;
    }
    if (iVar6 != -0x80000000) {
      if ((char)local_38 != '\0') goto LAB_00ee5a44;
      iVar3 = FUN_00e61384(&local_38,"chip_info",9,param_2 + 0x29);
      if (iVar3 != 0) goto LAB_00ee5a60;
    }
    if (iVar5 != 0) {
      if ((char)local_38 != '\0') goto LAB_00ee5a44;
      iVar3 = FUN_00e65e10(param_2[0xb],&local_38,"voltage1",8,iVar5);
      if (iVar3 != 0) goto LAB_00ee5a60;
    }
    if ((iVar4 != 0) && (iVar3 = FUN_00ecfb14(&local_38,param_2[0x15]), iVar3 != 0))
    goto LAB_00ee5a60;
    if (iVar7 != -0x80000000) {
      if ((char)local_38 != '\0') goto LAB_00ee5a44;
      iVar3 = FUN_00e61384(&local_38,"hw_model_detected",0x11,param_2 + 0x2c);
      if (iVar3 != 0) goto LAB_00ee5a60;
    }
    if ((iVar14 == 0) || (iVar3 = FUN_00ecfb6c(&local_38,param_2 + 0xc), iVar3 == 0)) {
      if (((local_38 & 0xff00) != 0) && ((local_38 & 1) == 0)) {
        FUN_00f1f6ac(*local_34,"}",1);
      }
      if (((local_40 & 0xff00) != 0) && ((local_40 & 1) == 0)) {
        piVar15 = *ppiVar1;
        iVar3 = piVar15[2];
        if (*piVar15 == iVar3) {
          FUN_00edff4c(piVar15,iVar3,1,1,1);
          iVar3 = piVar15[2];
        }
        *(undefined1 *)(piVar15[1] + iVar3) = 0x7d;
        piVar15[2] = iVar3 + 1;
      }
      *param_1 = local_50;
      param_1[1] = (int)local_4c;
      param_1[2] = local_48;
      return;
    }
  }
  else {
    if ((char)local_38 == '\0') {
      iVar3 = FUN_00e61384(&local_38,&DAT_0056a108,8,param_2 + 0x17);
      if (iVar3 != 0) goto LAB_00ee5a60;
      goto LAB_00ee57e0;
    }
LAB_00ee5a44:
    local_30 = 10;
    iVar3 = FUN_0157c50c(&local_30,0,0);
  }
LAB_00ee5a60:
  *param_1 = -0x80000000;
  param_1[1] = iVar3;
  if (local_50 == 0) {
    return;
  }
  thunk_FUN_016d3fb4(local_4c);
  return;
}


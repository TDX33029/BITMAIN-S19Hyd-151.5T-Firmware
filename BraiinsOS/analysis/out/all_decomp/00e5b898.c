// FUN_00e5b898 @ 00e5b898 size=1248 calls_out=9 calls_in=2
// strings: elapsed | last_share | best_share | difficulty | valid_network_diff | valid_job_diff

int FUN_00e5b898(char *param_1,undefined4 param_2,uint *param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  char *pcVar6;
  undefined4 extraout_r1;
  uint uVar7;
  undefined4 uVar8;
  int iVar9;
  uint uVar10;
  int *piVar11;
  undefined4 *puVar12;
  uint uVar13;
  uint uVar14;
  undefined4 uVar15;
  uint local_38;
  undefined4 *local_34;
  uint local_30;
  undefined4 *local_2c;
  
  iVar3 = FUN_00e5b230(param_1,param_2,6);
  if (iVar3 != 0) {
    return iVar3;
  }
  if (*param_1 == '\x01') goto LAB_00e5bd00;
  puVar12 = *(undefined4 **)(param_1 + 4);
  piVar11 = (int *)*puVar12;
  iVar3 = piVar11[2];
  if ((uint)(*piVar11 - iVar3) < 2) {
    FUN_00edff4c(piVar11,iVar3,2,1,1);
    iVar3 = piVar11[2];
  }
  piVar11[2] = iVar3 + 2;
  *(undefined2 *)(piVar11[1] + iVar3) = 0x203a;
  piVar11 = (int *)*puVar12;
  iVar3 = piVar11[2];
  iVar9 = *piVar11;
  *(undefined1 *)(puVar12 + 4) = 0;
  puVar12[3] = puVar12[3] + 1;
  if (iVar9 == iVar3) {
    FUN_00edff4c(piVar11,iVar3,1,1,1);
    iVar3 = piVar11[2];
  }
  *(undefined1 *)(piVar11[1] + iVar3) = 0x7b;
  piVar11[2] = iVar3 + 1;
  local_38 = CONCAT22(local_38._2_2_,0x100);
  local_34 = puVar12;
  iVar3 = FUN_00e5b230(&local_38,"elapsed",7);
  puVar1 = local_34;
  if (iVar3 != 0) {
    return iVar3;
  }
  if ((char)local_38 == '\x01') goto LAB_00e5bd00;
  piVar11 = (int *)*local_34;
  iVar3 = piVar11[2];
  if ((uint)(*piVar11 - iVar3) < 2) {
    FUN_00edff4c(piVar11,iVar3,2,1,1);
    iVar3 = piVar11[2];
  }
  uVar4 = param_3[6];
  uVar10 = param_3[7];
  piVar11[2] = iVar3 + 2;
  uVar7 = param_3[8];
  *(undefined2 *)(piVar11[1] + iVar3) = 0x203a;
  iVar3 = FUN_00e953fc(uVar4,uVar10,uVar7,puVar1);
  if (iVar3 != 0) {
    return iVar3;
  }
  *(undefined1 *)(puVar1 + 4) = 1;
  iVar3 = FUN_00e5b230(&local_38,"last_share",10);
  puVar1 = local_34;
  if (iVar3 != 0) {
    return iVar3;
  }
  if ((char)local_38 == '\x01') goto LAB_00e5bd00;
  FUN_00f1f6ac(*local_34,&DAT_00414a7c,2);
  if ((undefined1 *)param_3[0x10] == &DAT_3b9aca00) {
    uVar8 = 4;
    uVar5 = *puVar1;
    pcVar6 = &DAT_00567318;
LAB_00e5ba38:
    FUN_00f1f6ac(uVar5,pcVar6,uVar8);
  }
  else {
    puVar1[3] = puVar1[3] + 1;
    *(undefined1 *)(puVar1 + 4) = 0;
    FUN_00f1f6ac(*puVar1,&DAT_004144eb,1);
    local_30 = CONCAT22(local_30._2_2_,0x100);
    local_2c = puVar1;
    iVar3 = FUN_00e5b230(&local_30,&DAT_00567304,4);
    puVar2 = local_2c;
    if (iVar3 != 0) {
      return iVar3;
    }
    if ((char)local_30 == '\x01') goto LAB_00e5bd00;
    FUN_00f1f6ac(*local_2c,&DAT_00414a7c,2);
    iVar3 = FUN_00e95744(param_3 + 0xe,puVar2);
    if (iVar3 != 0) {
      return iVar3;
    }
    uVar4 = param_3[10];
    uVar7 = param_3[0xb];
    uVar10 = param_3[0xc];
    uVar13 = param_3[0xd];
    *(undefined1 *)(puVar2 + 4) = 1;
    iVar3 = FUN_00e5b230(&local_30,"difficulty",10);
    puVar2 = local_2c;
    if (iVar3 != 0) {
      return iVar3;
    }
    if ((char)local_30 == '\x01') goto LAB_00e5bd00;
    FUN_00f1f6ac(*local_2c,&DAT_00414a7c,2);
    FUN_00e57dec(*puVar2,uVar13,uVar4,uVar7,uVar10,uVar13);
    *(undefined1 *)(puVar2 + 4) = 1;
    if (((local_30 & 0xff00) != 0) && ((local_30 & 1) == 0)) {
      uVar5 = *puVar2;
      iVar3 = puVar2[3] + -1;
      puVar2[3] = iVar3;
      FUN_00f1f6ac(uVar5,&DAT_0041950e,1);
      if (iVar3 != 0) {
        uVar8 = puVar2[1];
        uVar15 = puVar2[2];
        do {
          FUN_00f1f6ac(uVar5,uVar8,uVar15);
          iVar3 = iVar3 + -1;
        } while (iVar3 != 0);
      }
      uVar8 = 1;
      pcVar6 = "}";
      goto LAB_00e5ba38;
    }
  }
  uVar4 = param_3[2];
  uVar10 = param_3[3];
  uVar14 = param_3[4];
  *(undefined1 *)(puVar1 + 4) = 1;
  uVar13 = param_3[5];
  uVar7 = *param_3;
  iVar3 = FUN_00e5b230(&local_38,"best_share",10);
  puVar1 = local_34;
  if (iVar3 == 0) {
    if ((char)local_38 == '\x01') {
LAB_00e5bd00:
                    /* WARNING: Subroutine does not return */
      FUN_00faa464(&DAT_00419463,0x28,&DAT_018a9504);
    }
    FUN_00f1f6ac(*local_34,&DAT_00414a7c,2);
    uVar5 = *puVar1;
    if ((uVar7 & 1) == 0) {
      FUN_00f1f6ac(uVar5,&DAT_00567318,4);
    }
    else {
      FUN_00e57dec(uVar5,extraout_r1,uVar4,uVar10,uVar14,uVar13);
    }
    *(undefined1 *)(puVar1 + 4) = 1;
    iVar3 = FUN_00e5c044(&local_38,"valid_network_diff",0x12,param_3 + 0x12);
    if ((((iVar3 == 0) &&
         (iVar3 = FUN_00e5c044(&local_38,"valid_job_diff",0xe,param_3 + 0x1c), iVar3 == 0)) &&
        (iVar3 = FUN_00e5c044(&local_38,"valid_backend_diff",0x12,param_3 + 0x26), iVar3 == 0)) &&
       (iVar3 = FUN_00e5c044(&local_38,"error_backend_diff",0x12,param_3 + 0x30), iVar3 == 0)) {
      local_30 = local_38;
      local_2c = local_34;
      FUN_00e5c7e0(&local_30);
      *(undefined1 *)(puVar12 + 4) = 1;
      return 0;
    }
  }
  return iVar3;
}


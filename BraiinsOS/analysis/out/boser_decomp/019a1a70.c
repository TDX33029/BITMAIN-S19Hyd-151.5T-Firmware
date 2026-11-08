// FUN_019a1a70 @ 019a1a70 size=664 calls_out=6 calls_in=0
// strings: 

void FUN_019a1a70(undefined4 *param_1,int *param_2)

{
  char cVar1;
  undefined1 uVar2;
  int iVar3;
  char *pcVar4;
  int iVar5;
  int extraout_r2;
  int iVar6;
  int extraout_r3;
  int iVar7;
  int *piVar8;
  uint uVar9;
  int local_5c [2];
  int *local_54;
  code *local_50;
  undefined **local_4c;
  undefined4 *local_48;
  uint local_44;
  int local_40;
  undefined4 local_34;
  undefined4 local_30;
  undefined *local_2c;
  uint local_28;
  int local_24;
  
  pcVar4 = (char *)param_1[1];
  *(undefined1 *)*param_1 = 1;
  if ((*pcVar4 == '\0') && (FUN_019a1d34(&local_54,param_2), local_54 != (int *)&DAT_00000003)) {
    if (local_54 == (int *)0x2) {
      FUN_012fbd94(&local_2c,local_34,local_30);
      if (local_2c != (undefined *)0x0) goto LAB_019a1a9c;
      uVar9 = local_28;
      iVar3 = local_24;
    }
    else {
      if (local_44 == 0) goto LAB_019a1a9c;
      uVar9 = local_44;
      iVar3 = local_40;
    }
    iVar6 = FUN_019a1e88(&DAT_00526801,0x1a,uVar9,iVar3);
    pcVar4 = (char *)param_1[2];
    if (iVar6 != 0) {
      cVar1 = '\x01';
LAB_019a1c54:
      *pcVar4 = cVar1;
      return;
    }
    if (*pcVar4 != '\0') {
      iVar3 = FUN_019a1e88(&DAT_0052681b,0x1c,uVar9,iVar3);
      if (iVar3 != 0) {
        cVar1 = '\0';
        goto LAB_019a1c54;
      }
      if (*pcVar4 != '\0') goto LAB_019a1a9c;
    }
    *(int *)param_1[3] = *(int *)param_1[3] + 1;
  }
LAB_019a1a9c:
  if (*(char *)param_1[2] != '\0') {
    piVar8 = (int *)param_1[3];
    iVar3 = *piVar8;
    if (iVar3 != 0) {
      pcVar4 = (char *)param_1[4];
      if (*pcVar4 == '\0') {
        local_2c = &DAT_005319f2;
        local_28 = (uint)(iVar3 != 1);
        if (iVar3 == 1) {
          local_2c = (undefined *)0x1;
        }
        local_4c = &local_2c;
        local_48 = &DAT_0197a814;
        local_50 = FUN_012fd02c;
        local_54 = piVar8;
        FUN_012fa178(**(undefined4 **)param_1[5],(*(undefined4 **)param_1[5])[1],&DAT_005a871b,
                     &local_54);
      }
      *pcVar4 = '\0';
      *piVar8 = 0;
    }
    local_5c[0] = param_1[5];
    uVar9 = ((int *)param_1[7])[1];
    local_5c[1] = 0;
    if (*(int *)param_1[7] == 0) {
      local_54 = (int *)0x0;
      FUN_01be0690(uVar9,0,0xf,0,&local_54);
      uVar9 = (uint)local_54 & 0xfffffffe;
    }
    FUN_019a1d34(&local_54,param_2);
    iVar3 = *param_2;
    if (iVar3 == 3 || iVar3 == 2) {
      iVar5 = 0;
      local_2c = (undefined *)0x2;
      iVar3 = 0;
      iVar6 = extraout_r2;
      iVar7 = extraout_r3;
    }
    else {
      if (param_2[4] == 0) {
        local_2c = (undefined *)0x2;
      }
      else {
        local_2c = (undefined *)0x0;
        local_24 = param_2[5];
        local_28 = param_2[4];
      }
      iVar7 = param_2[1];
      iVar5 = param_2[2];
      iVar6 = param_2[3];
    }
    uVar2 = FUN_0197f9fc(local_5c,uVar9,&local_54,&local_2c,iVar3,iVar7,iVar5,iVar6);
    *(undefined1 *)param_1[6] = uVar2;
    *(int *)(local_5c[0] + 0xc) = *(int *)(local_5c[0] + 0xc) + 1;
  }
  return;
}


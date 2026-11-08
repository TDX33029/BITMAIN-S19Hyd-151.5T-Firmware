// FUN_015e7b98 @ 015e7b98 size=672 calls_out=6 calls_in=0
// strings: 

void FUN_015e7b98(undefined4 *param_1,int *param_2)

{
  undefined1 uVar1;
  int iVar2;
  char *pcVar3;
  int iVar4;
  int extraout_r2;
  int iVar5;
  int extraout_r3;
  int iVar6;
  int *piVar7;
  uint uVar8;
  int local_5c [2];
  int *local_54;
  undefined1 *local_50;
  undefined **local_4c;
  undefined4 *local_48;
  uint local_44;
  int local_40;
  undefined4 local_34;
  undefined4 local_30;
  undefined *local_2c;
  uint local_28;
  int local_24;
  
  pcVar3 = (char *)param_1[1];
  *(undefined1 *)*param_1 = 1;
  if ((*pcVar3 == '\0') && (FUN_015e7e64(&local_54,param_2), local_54 != (int *)0x3)) {
    if (local_54 == (int *)&SUB_00000002) {
      FUN_00fab1e0(&local_2c,local_34,local_30);
      if (local_2c != (undefined *)0x0) goto LAB_015e7bc4;
      uVar8 = local_28;
      iVar2 = local_24;
    }
    else {
      if (local_44 == 0) goto LAB_015e7bc4;
      uVar8 = local_44;
      iVar2 = local_40;
    }
    iVar5 = FUN_015e7fb8(&DAT_004107d0,0x1a,uVar8,iVar2);
    pcVar3 = (char *)param_1[2];
    if (iVar5 != 0) {
      *pcVar3 = '\x01';
      return;
    }
    if (*pcVar3 != '\0') {
      iVar2 = FUN_015e7fb8(&DAT_004107ea,0x1c,uVar8,iVar2);
      if (iVar2 != 0) {
        *pcVar3 = '\0';
        return;
      }
      if (*pcVar3 != '\0') goto LAB_015e7bc4;
    }
    *(int *)param_1[3] = *(int *)param_1[3] + 1;
  }
LAB_015e7bc4:
  if (*(char *)param_1[2] != '\0') {
    piVar7 = (int *)param_1[3];
    iVar2 = *piVar7;
    if (iVar2 != 0) {
      pcVar3 = (char *)param_1[4];
      if (*pcVar3 == '\0') {
        local_2c = &DAT_0041547c;
        local_28 = (uint)(iVar2 != 1);
        if (iVar2 == 1) {
          local_2c = (undefined *)0x1;
        }
        local_4c = &local_2c;
        local_48 = &DAT_015bee04;
        local_50 = &LAB_00fac484;
        local_54 = piVar7;
        FUN_00fa948c(**(undefined4 **)param_1[5],(*(undefined4 **)param_1[5])[1],&DAT_0057ed20,
                     &local_54);
      }
      *pcVar3 = '\0';
      *piVar7 = 0;
    }
    local_5c[0] = param_1[5];
    uVar8 = ((int *)param_1[7])[1];
    local_5c[1] = 0;
    if (*(int *)param_1[7] == 0) {
      local_54 = (int *)0x0;
      FUN_018430e4(uVar8,0,0xf,0,&local_54);
      uVar8 = (uint)local_54 & 0xfffffffe;
    }
    FUN_015e7e64(&local_54,param_2);
    iVar2 = *param_2;
    if (iVar2 == 3 || iVar2 == 2) {
      iVar4 = 0;
      local_2c = (undefined *)0x2;
      iVar2 = 0;
      iVar5 = extraout_r2;
      iVar6 = extraout_r3;
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
      iVar6 = param_2[1];
      iVar4 = param_2[2];
      iVar5 = param_2[3];
    }
    uVar1 = FUN_015c428c(local_5c,uVar8,&local_54,&local_2c,iVar2,iVar6,iVar4,iVar5);
    *(undefined1 *)param_1[6] = uVar1;
    *(int *)(local_5c[0] + 0xc) = *(int *)(local_5c[0] + 0xc) + 1;
  }
  return;
}


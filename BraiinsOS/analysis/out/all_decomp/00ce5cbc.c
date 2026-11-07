// FUN_00ce5cbc @ 00ce5cbc size=592 calls_out=3 calls_in=0
// strings: a Display implementation returned an error unexpectedly

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_00ce5cbc(undefined4 *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 *local_2c;
  undefined *local_28;
  undefined1 *local_24;
  undefined4 local_20;
  undefined1 uStack_19;
  
  uVar3 = param_2[1];
  iVar1 = param_2[2] + 1;
  iVar2 = 5;
  if (uVar3 + iVar1 < 6) {
    iVar8 = *param_2;
    uVar5 = uVar3 + 1;
    param_2[1] = uVar5;
    if (4 < uVar3) {
LAB_00ce5de4:
      *param_1 = 0x80000000;
      return;
    }
    uVar7 = *(uint *)(iVar8 + 8);
    uVar4 = uVar3;
    if (uVar7 <= uVar3) {
LAB_00ce5eec:
                    /* WARNING: Subroutine does not return */
      FUN_00faa4a4(uVar4,uVar7,&DAT_0187e4f0);
    }
    uVar7 = uVar3;
    if (*(char *)(*(int *)(iVar8 + 4) + uVar3) != '\0') {
LAB_00ce5d24:
      local_34 = 1;
      local_24 = &DAT_60000020;
      local_2c = &local_38;
      local_30 = 0;
      local_38 = 0;
      local_20 = 0;
      local_28 = &DAT_01876f04;
      iVar1 = FUN_00faace8(&local_2c,*(undefined4 *)(&DAT_018b0f14 + (uVar7 & 0xff) * 4),
                           *(undefined4 *)(&DAT_0041f080 + (uVar7 & 0xff) * 4));
      if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00fb74f8("a Display implementation returned an error unexpectedly",0x37,&uStack_19,
                     &DAT_01876f1c);
      }
      *param_1 = local_38;
      param_1[1] = local_34;
      param_1[2] = local_30;
      return;
    }
    if (uVar5 + iVar1 < 6) {
      uVar6 = uVar3 + 2;
      param_2[1] = uVar6;
      if (uVar3 == 4) goto LAB_00ce5de4;
      uVar7 = *(uint *)(iVar8 + 8);
      uVar4 = uVar5 & 0xff;
      if (uVar7 <= uVar4) goto LAB_00ce5eec;
      uVar7 = uVar5;
      if (*(char *)(*(int *)(iVar8 + 4) + uVar4) != '\0') goto LAB_00ce5d24;
      if (uVar6 + iVar1 < 6) {
        uVar5 = uVar3 + 3;
        param_2[1] = uVar5;
        if (2 < uVar3) goto LAB_00ce5de4;
        uVar7 = *(uint *)(iVar8 + 8);
        uVar4 = uVar6 & 0xff;
        if (uVar7 <= uVar4) goto LAB_00ce5eec;
        uVar7 = uVar6;
        if (*(char *)(*(int *)(iVar8 + 4) + uVar4) != '\0') goto LAB_00ce5d24;
        if (uVar5 + iVar1 < 6) {
          param_2[1] = uVar3 | 4;
          if (uVar3 == 2) goto LAB_00ce5de4;
          uVar7 = *(uint *)(iVar8 + 8);
          uVar4 = uVar5 & 0xff;
          if (uVar7 <= uVar4) goto LAB_00ce5eec;
          uVar7 = uVar5;
          if (*(char *)(*(int *)(iVar8 + 4) + uVar4) != '\0') goto LAB_00ce5d24;
          if ((uVar3 | 4) + iVar1 < 6) {
            param_2[1] = uVar3 + 5;
            if (uVar3 != 0) goto LAB_00ce5de4;
            uVar7 = *(uint *)(iVar8 + 8);
            if (uVar7 < 5) {
              uVar4 = 4;
              goto LAB_00ce5eec;
            }
            uVar7 = 4;
            if (*(char *)(*(int *)(iVar8 + 4) + 4) != '\0') goto LAB_00ce5d24;
            iVar2 = 6;
            if (5 < param_2[2] + 6U) {
              iVar2 = 5;
            }
          }
        }
      }
    }
  }
  param_2[1] = iVar2;
  *param_1 = 0x80000000;
  return;
}


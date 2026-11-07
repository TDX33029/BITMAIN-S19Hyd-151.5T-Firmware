// FUN_00f2ad7c @ 00f2ad7c size=640 calls_out=3 calls_in=1
// strings: a Display implementation returned an error unexpectedly

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_00f2ad7c(undefined4 *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  byte *pbVar8;
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
  if (5 < uVar3 + iVar1) goto LAB_00f2ad9c;
  iVar4 = *param_2;
  uVar5 = uVar3 + 1;
  pbVar8 = (byte *)param_2[3];
  param_2[1] = uVar5;
  if (4 < uVar3) {
LAB_00f2ae10:
    *param_1 = 0x80000000;
    return;
  }
  uVar7 = *(uint *)(iVar4 + 8);
  uVar6 = uVar3;
  if (uVar3 < uVar7) {
    if ((*(char *)(*(int *)(iVar4 + 4) + uVar3) == '\x01') && (uVar7 = uVar3, *pbVar8 != uVar3)) {
LAB_00f2af38:
      local_34 = 1;
      local_24 = &DAT_60000020;
      local_2c = &local_38;
      local_30 = 0;
      local_38 = 0;
      local_20 = 0;
      local_28 = &DAT_0187d0c8;
      iVar1 = FUN_00faace8(&local_2c,*(undefined4 *)(&DAT_018b0fd8 + uVar7 * 4),
                           *(undefined4 *)(&DAT_0041f174 + uVar7 * 4));
      if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00fb74f8("a Display implementation returned an error unexpectedly",0x37,&uStack_19,
                     &DAT_0187d0e0);
      }
      *param_1 = local_38;
      param_1[1] = local_34;
      param_1[2] = local_30;
      return;
    }
    if (5 < uVar5 + iVar1) goto LAB_00f2ad9c;
    uVar6 = uVar3 + 2;
    param_2[1] = uVar6;
    if (uVar3 == 4) goto LAB_00f2ae10;
    uVar7 = *(uint *)(iVar4 + 8);
    if (uVar5 < uVar7) {
      if ((*(char *)(*(int *)(iVar4 + 4) + uVar5) == '\x01') && (uVar7 = uVar5, uVar5 != *pbVar8))
      goto LAB_00f2af38;
      if (5 < uVar6 + iVar1) goto LAB_00f2ad9c;
      uVar5 = uVar3 + 3;
      param_2[1] = uVar5;
      if (2 < uVar3) goto LAB_00f2ae10;
      uVar7 = *(uint *)(iVar4 + 8);
      if (uVar7 <= uVar6) goto LAB_00f2afdc;
      if ((*(char *)(*(int *)(iVar4 + 4) + uVar6) == '\x01') && (uVar7 = uVar6, uVar6 != *pbVar8))
      goto LAB_00f2af38;
      if (5 < uVar5 + iVar1) {
LAB_00f2ad9c:
        param_2[1] = iVar2;
        *param_1 = 0x80000000;
        return;
      }
      param_2[1] = uVar3 | 4;
      if (uVar3 == 2) goto LAB_00f2ae10;
      uVar7 = *(uint *)(iVar4 + 8);
      if (uVar5 < uVar7) {
        if ((*(char *)(*(int *)(iVar4 + 4) + uVar5) == '\x01') && (uVar7 = uVar5, uVar5 != *pbVar8))
        goto LAB_00f2af38;
        if ((uVar3 | 4) + iVar1 < 6) {
          param_2[1] = uVar3 + 5;
          if (uVar3 != 0) goto LAB_00f2ae10;
          uVar7 = *(uint *)(iVar4 + 8);
          if (uVar7 < 5) {
            uVar6 = 4;
            goto LAB_00f2afdc;
          }
          if ((*(char *)(*(int *)(iVar4 + 4) + 4) == '\x01') && (uVar7 = 4, *pbVar8 != 4))
          goto LAB_00f2af38;
          iVar2 = 6;
          if (5 < param_2[2] + 6U) {
            iVar2 = 5;
          }
        }
        goto LAB_00f2ad9c;
      }
    }
    uVar6 = uVar5;
  }
LAB_00f2afdc:
                    /* WARNING: Subroutine does not return */
  FUN_00faa4a4(uVar6,uVar7,&DAT_0187e4f0);
}


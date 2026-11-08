// FUN_015e0f04 @ 015e0f04 size=492 calls_out=9 calls_in=1
// strings: DNS Incoming: not enough data to read a string

void FUN_015e0f04(undefined4 *param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  undefined4 uVar7;
  int local_54;
  undefined4 local_50;
  int local_4c;
  undefined4 local_48;
  int local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 *local_34;
  undefined *local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined1 uStack_21;
  
  uVar4 = *(uint *)(param_2 + 8);
  uVar1 = *(uint *)(param_2 + 0x4c);
  if (uVar4 <= uVar1) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb12c(uVar1,uVar4,&DAT_01cfd388);
  }
  iVar3 = uVar1 + 1;
  *(int *)(param_2 + 0x4c) = iVar3;
  uVar5 = (uint)*(byte *)(*(int *)(param_2 + 4) + uVar1);
  uVar6 = iVar3 + uVar5;
  if (uVar4 < uVar6) {
    iVar3 = thunk_FUN_01be5118(0x2e);
    if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00664620(1,0x2e);
    }
    FUN_01bed4e2(iVar3,"DNS Incoming: not enough data to read a string",0x2e);
    param_1[2] = iVar3;
    *param_1 = 2;
    param_1[1] = 0x2e;
    param_1[3] = 0x2e;
  }
  else {
    if (uVar6 <= uVar1) {
                    /* WARNING: Subroutine does not return */
      FUN_012faff4(iVar3,uVar6,uVar4,&DAT_01cfd318);
    }
    FUN_012fbd94(&local_54,*(int *)(param_2 + 4) + iVar3,uVar5);
    if (local_54 == 1) {
      local_48 = local_50;
      local_38 = 0;
      local_40 = 0;
      local_28 = 0;
      local_44 = local_4c;
      local_2c = 0x60000020;
      local_34 = &local_40;
      local_30 = &DAT_01cfd188;
      local_3c = 1;
      iVar3 = FUN_01309a64(&local_48,&local_34);
      if (iVar3 != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_013073dc(&DAT_00533383,0x37,&uStack_21,&DAT_01cfd1a0,&DAT_01d30334);
      }
      *param_1 = 2;
      param_1[1] = local_40;
      param_1[2] = local_3c;
      param_1[3] = local_38;
    }
    else {
      *(uint *)(param_2 + 0x4c) = uVar6;
      uVar7 = 0;
      if (local_4c < 0) {
LAB_015e1030:
                    /* WARNING: Subroutine does not return */
        FUN_00664620(uVar7,local_4c);
      }
      if (local_4c == 0) {
        iVar2 = 1;
        iVar3 = 0;
      }
      else {
        uVar7 = 1;
        iVar2 = FUN_01298504(local_4c,1);
        iVar3 = local_4c;
        if (iVar2 == 0) goto LAB_015e1030;
      }
      FUN_01bed4e2(iVar2,local_50,local_4c);
      param_1[2] = iVar2;
      *param_1 = 4;
      param_1[1] = iVar3;
      param_1[3] = local_4c;
    }
  }
  return;
}


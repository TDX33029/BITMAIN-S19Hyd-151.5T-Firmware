// FUN_0130ddec @ 0130ddec size=656 calls_out=7 calls_in=9
// strings: 

void FUN_0130ddec(int *param_1,int *param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined4 local_38;
  uint uStack_34;
  int local_30;
  int local_2c;
  int local_28;
  undefined1 local_1d;
  undefined4 local_1c;
  
  if ((char)param_2[5] == '\x01') {
    iVar4 = param_2[3];
    iVar3 = param_2[4];
    uVar2 = *(uint *)(param_3 + 0x18);
    uVar1 = *(uint *)(param_3 + 0x1c);
    if (uVar2 - uVar1 < 5) {
      local_38 = 10;
      uStack_34 = uStack_34 & 0xffffff00;
      FUN_01328914(&local_30,param_3,&local_38,1);
      if (local_30 != 4) goto LAB_0130e048;
    }
    else {
      if (uVar2 < uVar1) goto LAB_0130e05c;
      *(undefined1 *)(*(int *)(param_3 + 0x14) + uVar1) = 10;
      *(uint *)(param_3 + 0x1c) = uVar1 + 1;
    }
    FUN_01328ef8(&local_30,param_3,iVar3);
    if ((local_30 != 4) || (FUN_01328914(&local_30,param_3,iVar4,iVar3), local_30 != 4))
    goto LAB_0130e048;
  }
  if (*param_2 != 0) {
    iVar3 = param_2[1];
    uVar2 = *(uint *)(param_3 + 0x18);
    uVar1 = *(uint *)(param_3 + 0x1c);
    if (uVar2 - uVar1 < 5) {
      local_1d = 0x10;
      local_1c = 0;
      FUN_01328914(&local_30,param_3,&local_1d,1);
      if (local_30 != 4) goto LAB_0130e048;
    }
    else {
      if (uVar2 < uVar1) goto LAB_0130e05c;
      *(undefined1 *)(*(int *)(param_3 + 0x14) + uVar1) = 0x10;
      *(uint *)(param_3 + 0x1c) = uVar1 + 1;
    }
    FUN_0132901c(&local_30,param_3,iVar3,iVar3 >> 0x1f);
    if (local_30 != 4) goto LAB_0130e048;
  }
  if ((char)param_2[7] != '\0') {
    iVar3 = param_2[6];
    if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa444(&DAT_01890768);
    }
    uVar2 = *(uint *)(param_3 + 0x18);
    uVar1 = *(uint *)(param_3 + 0x1c);
    if (uVar2 - uVar1 < 5) {
      local_38 = 0x1a;
      uStack_34 = uStack_34 & 0xffffff00;
      FUN_01328914(&local_30,param_3,&local_38,1);
      if (local_30 != 4) goto LAB_0130e048;
    }
    else {
      if (uVar2 < uVar1) {
LAB_0130e05c:
                    /* WARNING: Subroutine does not return */
        FUN_00faa36c(uVar1,uVar2,uVar2,&DAT_0188fa90);
      }
      *(undefined1 *)(*(int *)(param_3 + 0x14) + uVar1) = 0x1a;
      *(uint *)(param_3 + 0x1c) = uVar1 + 1;
    }
    FUN_01328ef8(&local_30,param_3,*(undefined4 *)(iVar3 + 0x14));
    if ((local_30 != 4) || (FUN_0130e084(&local_30,iVar3,param_3), local_30 != 4))
    goto LAB_0130e048;
  }
  FUN_01328b10(&local_30,param_3,param_2[8]);
  if (local_30 == 4) {
    *param_1 = 4;
    return;
  }
LAB_0130e048:
  param_1[1] = local_2c;
  *param_1 = local_30;
  param_1[2] = local_28;
  return;
}


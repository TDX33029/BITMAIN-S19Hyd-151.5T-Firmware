// FUN_01310a4c @ 01310a4c size=708 calls_out=7 calls_in=9
// strings: 

void FUN_01310a4c(int *param_1,int param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  int local_38;
  int local_34;
  int local_30;
  undefined1 local_29;
  undefined4 local_28;
  
  if (*(char *)(param_2 + 0xc) == '\x01') {
    uVar3 = *(undefined4 *)(param_2 + 4);
    uVar5 = *(undefined4 *)(param_2 + 8);
    uVar2 = *(uint *)(param_3 + 0x18);
    uVar1 = *(uint *)(param_3 + 0x1c);
    if (uVar2 - uVar1 < 5) {
      local_29 = 10;
      local_28 = 0;
      FUN_01328914(&local_38,param_3,&local_29,1);
      if (local_38 != 4) goto LAB_01310cc4;
    }
    else {
      if (uVar2 < uVar1) goto LAB_01310ce0;
      *(undefined1 *)(*(int *)(param_3 + 0x14) + uVar1) = 10;
      *(uint *)(param_3 + 0x1c) = uVar1 + 1;
    }
    FUN_01328ef8(&local_38,param_3,uVar5);
    if ((local_38 != 4) || (FUN_01328914(&local_38,param_3,uVar3,uVar5), local_38 != 4))
    goto LAB_01310cc4;
  }
  uVar1 = *(uint *)(param_2 + 0x1c);
  if (*(uint *)(param_2 + 0x18) < uVar1) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa36c(0,uVar1,*(uint *)(param_2 + 0x18),&DAT_01890988);
  }
  if (uVar1 != 0) {
    iVar6 = *(int *)(param_2 + 0x14);
    iVar4 = uVar1 * 0x44;
    do {
      uVar2 = *(uint *)(param_3 + 0x18);
      uVar1 = *(uint *)(param_3 + 0x1c);
      if (uVar2 - uVar1 < 5) {
        local_28 = 0;
        local_29 = 0x12;
        FUN_01328914(&local_38,param_3,&local_29,1);
        if (local_38 != 4) goto LAB_01310cc4;
      }
      else {
        if (uVar2 < uVar1) goto LAB_01310ce0;
        *(undefined1 *)(*(int *)(param_3 + 0x14) + uVar1) = 0x12;
        *(uint *)(param_3 + 0x1c) = uVar1 + 1;
      }
      FUN_01328ef8(&local_38,param_3,*(undefined4 *)(iVar6 + 0x3c));
      if ((local_38 != 4) || (FUN_01310d1c(&local_38,iVar6,param_3), local_38 != 4))
      goto LAB_01310cc4;
      iVar6 = iVar6 + 0x44;
      iVar4 = iVar4 + -0x44;
    } while (iVar4 != 0);
  }
  if (*(char *)(param_2 + 0x24) != '\0') {
    iVar4 = *(int *)(param_2 + 0x20);
    if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa444(&DAT_01890768);
    }
    uVar2 = *(uint *)(param_3 + 0x18);
    uVar1 = *(uint *)(param_3 + 0x1c);
    if (uVar2 - uVar1 < 5) {
      local_29 = 0x1a;
      local_28 = 0;
      FUN_01328914(&local_38,param_3,&local_29,1);
      if (local_38 != 4) goto LAB_01310cc4;
    }
    else {
      if (uVar2 < uVar1) {
LAB_01310ce0:
                    /* WARNING: Subroutine does not return */
        FUN_00faa36c(uVar1,uVar2,uVar2,&DAT_0188fa90);
      }
      *(undefined1 *)(*(int *)(param_3 + 0x14) + uVar1) = 0x1a;
      *(uint *)(param_3 + 0x1c) = uVar1 + 1;
    }
    FUN_01328ef8(&local_38,param_3,*(undefined4 *)(iVar4 + 0x14));
    if ((local_38 != 4) || (FUN_0130509c(&local_38,iVar4,param_3), local_38 != 4))
    goto LAB_01310cc4;
  }
  FUN_01328b10(&local_38,param_3,*(undefined4 *)(param_2 + 0x28));
  if (local_38 == 4) {
    *param_1 = 4;
    return;
  }
LAB_01310cc4:
  param_1[1] = local_34;
  *param_1 = local_38;
  param_1[2] = local_30;
  return;
}


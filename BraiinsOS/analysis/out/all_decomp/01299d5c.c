// FUN_01299d5c @ 01299d5c size=1116 calls_out=5 calls_in=9
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_01299d5c(int *param_1,uint *param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  undefined8 uVar7;
  undefined4 local_50;
  uint local_4c;
  int local_48;
  int local_44;
  int local_40;
  undefined8 local_38;
  
  if ((*param_2 & 1) != 0) {
    uVar2 = *(uint *)(param_3 + 0x18);
    uVar1 = *(uint *)(param_3 + 0x1c);
    uVar3 = param_2[2];
    uVar5 = param_2[3];
    if (uVar2 - uVar1 < 5) {
      local_50 = 8;
      local_4c = local_4c & 0xffffff00;
      FUN_01328914(&local_48,param_3,&local_50,1);
      if (local_48 != 4) goto LAB_0129a12c;
    }
    else {
      if (uVar2 < uVar1) goto LAB_0129a194;
      *(undefined1 *)(*(int *)(param_3 + 0x14) + uVar1) = 8;
      *(uint *)(param_3 + 0x1c) = uVar1 + 1;
    }
    FUN_0132901c(&local_48,param_3,uVar3,uVar5);
    if (local_48 != 4) goto LAB_0129a12c;
  }
  if ((param_2[4] & 1) != 0) {
    uVar2 = *(uint *)(param_3 + 0x18);
    uVar1 = *(uint *)(param_3 + 0x1c);
    uVar7 = *(undefined8 *)(param_2 + 6);
    if (uVar2 - uVar1 < 5) {
      local_38 = CONCAT35(local_38._5_3_,0x11);
      FUN_01328914(&local_48,param_3,&local_38,1);
      if (local_48 != 4) goto LAB_0129a12c;
    }
    else {
      if (uVar2 < uVar1) {
LAB_0129a194:
                    /* WARNING: Subroutine does not return */
        FUN_00faa36c(uVar1,uVar2,uVar2,&DAT_0188fa90);
      }
      *(undefined1 *)(*(int *)(param_3 + 0x14) + uVar1) = 0x11;
      *(uint *)(param_3 + 0x1c) = uVar1 + 1;
    }
    local_38 = uVar7;
    FUN_01328914(&local_48,param_3,&local_38,8);
    if (local_48 != 4) {
LAB_0129a12c:
      param_1[1] = local_44;
      *param_1 = local_48;
      param_1[2] = local_40;
      return;
    }
  }
  uVar3 = param_2[0xb];
  if (param_2[10] < uVar3) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa36c(0,uVar3,param_2[10],&DAT_01890988);
  }
  if (uVar3 != 0) {
    uVar5 = param_2[9];
    iVar6 = 0;
    do {
      uVar2 = *(uint *)(param_3 + 0x18);
      uVar1 = *(uint *)(param_3 + 0x1c);
      if (uVar2 - uVar1 < 5) {
        local_38 = CONCAT35(local_38._5_3_,0x1a);
        FUN_01328914(&local_48,param_3,&local_38,1);
        if (local_48 != 4) goto LAB_0129a148;
      }
      else {
        if (uVar2 < uVar1) goto LAB_0129a194;
        *(undefined1 *)(*(int *)(param_3 + 0x14) + uVar1) = 0x1a;
        *(uint *)(param_3 + 0x1c) = uVar1 + 1;
      }
      iVar4 = uVar5 + iVar6;
      FUN_01328ef8(&local_48,param_3,*(undefined4 *)(iVar4 + 0x24));
      if (local_48 != 4) goto LAB_0129a148;
      if ((*(uint *)(uVar5 + iVar6) & 1) != 0) {
        uVar2 = *(uint *)(param_3 + 0x18);
        uVar1 = *(uint *)(param_3 + 0x1c);
        uVar7 = *(undefined8 *)(iVar4 + 8);
        if (uVar2 - uVar1 < 5) {
          local_38 = CONCAT35(local_38._5_3_,9);
          FUN_01328914(&local_48,param_3,&local_38,1);
          if (local_48 != 4) goto LAB_0129a17c;
        }
        else {
          if (uVar2 < uVar1) goto LAB_0129a194;
          *(undefined1 *)(*(int *)(param_3 + 0x14) + uVar1) = 9;
          *(uint *)(param_3 + 0x1c) = uVar1 + 1;
        }
        local_38 = uVar7;
        FUN_01328914(&local_48,param_3,&local_38,8);
        if (local_48 != 4) goto LAB_0129a17c;
      }
      if ((*(uint *)(iVar4 + 0x10) & 1) != 0) {
        uVar2 = *(uint *)(param_3 + 0x18);
        uVar1 = *(uint *)(param_3 + 0x1c);
        uVar7 = *(undefined8 *)(iVar4 + 0x18);
        if (uVar2 - uVar1 < 5) {
          local_38 = CONCAT35(local_38._5_3_,0x11);
          FUN_01328914(&local_48,param_3,&local_38,1);
          if (local_48 != 4) goto LAB_0129a17c;
        }
        else {
          if (uVar2 < uVar1) goto LAB_0129a194;
          *(undefined1 *)(*(int *)(param_3 + 0x14) + uVar1) = 0x11;
          *(uint *)(param_3 + 0x1c) = uVar1 + 1;
        }
        local_38 = uVar7;
        FUN_01328914(&local_48,param_3,&local_38,8);
        if (local_48 != 4) goto LAB_0129a17c;
      }
      FUN_01328b10(&local_48,param_3,*(undefined4 *)(iVar4 + 0x20));
      if (local_48 != 4) {
LAB_0129a17c:
        *param_1 = local_48;
        param_1[1] = local_44;
        param_1[2] = local_40;
        return;
      }
      iVar6 = iVar6 + 0x28;
    } while (uVar3 * 0x28 != iVar6);
  }
  FUN_01328b10(&local_48,param_3,param_2[0xc]);
  if (local_48 == 4) {
    *param_1 = 4;
    return;
  }
LAB_0129a148:
  *param_1 = local_48;
  param_1[1] = local_44;
  param_1[2] = local_40;
  return;
}


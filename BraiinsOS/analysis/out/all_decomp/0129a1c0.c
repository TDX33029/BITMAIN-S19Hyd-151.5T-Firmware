// FUN_0129a1c0 @ 0129a1c0 size=1152 calls_out=5 calls_in=9
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_0129a1c0(int *param_1,uint *param_2,int param_3)

{
  ulonglong uVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  undefined8 uVar10;
  undefined4 local_50;
  uint local_4c;
  int local_48;
  int local_44;
  int local_40;
  undefined8 local_38;
  
  if ((*param_2 & 1) != 0) {
    uVar6 = param_2[2];
    uVar8 = param_2[3];
    uVar3 = *(uint *)(param_3 + 0x18);
    uVar2 = *(uint *)(param_3 + 0x1c);
    if (uVar3 - uVar2 < 5) {
      local_50 = 8;
      local_4c = local_4c & 0xffffff00;
      FUN_01328914(&local_48,param_3,&local_50,1);
      if (local_48 != 4) goto LAB_0129a5b4;
    }
    else {
      if (uVar3 < uVar2) goto LAB_0129a61c;
      *(undefined1 *)(*(int *)(param_3 + 0x14) + uVar2) = 8;
      *(uint *)(param_3 + 0x1c) = uVar2 + 1;
    }
    FUN_0132901c(&local_48,param_3,uVar6,uVar8);
    if (local_48 != 4) goto LAB_0129a5b4;
  }
  if ((param_2[4] & 1) != 0) {
    uVar3 = *(uint *)(param_3 + 0x18);
    uVar2 = *(uint *)(param_3 + 0x1c);
    uVar10 = *(undefined8 *)(param_2 + 6);
    if (uVar3 - uVar2 < 5) {
      local_38 = CONCAT35(local_38._5_3_,0x11);
      FUN_01328914(&local_48,param_3,&local_38,1);
      if (local_48 != 4) goto LAB_0129a5b4;
    }
    else {
      if (uVar3 < uVar2) {
LAB_0129a61c:
                    /* WARNING: Subroutine does not return */
        FUN_00faa36c(uVar2,uVar3,uVar3,&DAT_0188fa90);
      }
      *(undefined1 *)(*(int *)(param_3 + 0x14) + uVar2) = 0x11;
      *(uint *)(param_3 + 0x1c) = uVar2 + 1;
    }
    local_38 = uVar10;
    FUN_01328914(&local_48,param_3,&local_38,8);
    if (local_48 != 4) {
LAB_0129a5b4:
      param_1[1] = local_44;
      *param_1 = local_48;
      param_1[2] = local_40;
      return;
    }
  }
  uVar6 = param_2[0xb];
  if (param_2[10] < uVar6) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa36c(0,uVar6,param_2[10],&DAT_01890988);
  }
  if (uVar6 != 0) {
    iVar9 = 0;
    uVar8 = param_2[9];
    do {
      uVar3 = *(uint *)(param_3 + 0x18);
      uVar2 = *(uint *)(param_3 + 0x1c);
      if (uVar3 - uVar2 < 5) {
        uVar1 = (ulonglong)local_38 >> 8;
        local_38 = CONCAT71((uint7)uVar1 & 0xffffff00000000,0x1a);
        FUN_01328914(&local_48,param_3,&local_38,1);
        if (local_48 != 4) goto LAB_0129a5d0;
      }
      else {
        if (uVar3 < uVar2) goto LAB_0129a61c;
        *(undefined1 *)(*(int *)(param_3 + 0x14) + uVar2) = 0x1a;
        *(uint *)(param_3 + 0x1c) = uVar2 + 1;
      }
      iVar7 = uVar8 + iVar9;
      FUN_01328ef8(&local_48,param_3,*(undefined4 *)(iVar7 + 0x24));
      if (local_48 != 4) goto LAB_0129a5d0;
      if ((*(uint *)(uVar8 + iVar9) & 1) != 0) {
        uVar5 = *(undefined4 *)(iVar7 + 8);
        uVar4 = *(undefined4 *)(iVar7 + 0xc);
        uVar3 = *(uint *)(param_3 + 0x18);
        uVar2 = *(uint *)(param_3 + 0x1c);
        if (uVar3 - uVar2 < 5) {
          local_38 = CONCAT35(local_38._5_3_,8);
          FUN_01328914(&local_48,param_3,&local_38,1);
          if (local_48 != 4) goto LAB_0129a604;
        }
        else {
          if (uVar3 < uVar2) goto LAB_0129a61c;
          *(undefined1 *)(*(int *)(param_3 + 0x14) + uVar2) = 8;
          *(uint *)(param_3 + 0x1c) = uVar2 + 1;
        }
        FUN_0132901c(&local_48,param_3,uVar5,uVar4);
        if (local_48 != 4) goto LAB_0129a604;
      }
      if ((*(uint *)(iVar7 + 0x10) & 1) != 0) {
        uVar3 = *(uint *)(param_3 + 0x18);
        uVar2 = *(uint *)(param_3 + 0x1c);
        uVar10 = *(undefined8 *)(iVar7 + 0x18);
        if (uVar3 - uVar2 < 5) {
          local_38 = CONCAT35(local_38._5_3_,0x11);
          FUN_01328914(&local_48,param_3,&local_38,1);
          if (local_48 != 4) goto LAB_0129a604;
        }
        else {
          if (uVar3 < uVar2) goto LAB_0129a61c;
          *(undefined1 *)(*(int *)(param_3 + 0x14) + uVar2) = 0x11;
          *(uint *)(param_3 + 0x1c) = uVar2 + 1;
        }
        local_38 = uVar10;
        FUN_01328914(&local_48,param_3,&local_38,8);
        if (local_48 != 4) goto LAB_0129a604;
      }
      FUN_01328b10(&local_48,param_3,*(undefined4 *)(iVar7 + 0x20));
      if (local_48 != 4) {
LAB_0129a604:
        *param_1 = local_48;
        param_1[1] = local_44;
        param_1[2] = local_40;
        return;
      }
      iVar9 = iVar9 + 0x28;
    } while (uVar6 * 0x28 != iVar9);
  }
  FUN_01328b10(&local_48,param_3,param_2[0xc]);
  if (local_48 == 4) {
    *param_1 = 4;
    return;
  }
LAB_0129a5d0:
  *param_1 = local_48;
  param_1[1] = local_44;
  param_1[2] = local_40;
  return;
}


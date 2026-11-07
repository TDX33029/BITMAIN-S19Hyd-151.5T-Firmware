// FUN_01309af8 @ 01309af8 size=2140 calls_out=14 calls_in=10
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_01309af8(int *param_1,int param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  undefined8 uVar7;
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
      if (local_38 != 4) goto LAB_0130a2e0;
    }
    else {
      if (uVar2 < uVar1) {
LAB_0130a2f4:
                    /* WARNING: Subroutine does not return */
        FUN_00faa36c(uVar1,uVar2,uVar2,&DAT_0188fa90);
      }
      *(undefined1 *)(*(int *)(param_3 + 0x14) + uVar1) = 10;
      *(uint *)(param_3 + 0x1c) = uVar1 + 1;
    }
    FUN_01328ef8(&local_38,param_3,uVar5);
    if (local_38 != 4) {
LAB_0130a2e0:
      *param_1 = local_38;
      param_1[1] = local_34;
      param_1[2] = local_30;
      return;
    }
    FUN_01328914(&local_38,param_3,uVar3,uVar5);
    if (local_38 != 4) goto LAB_0130a2e0;
  }
  uVar2 = *(uint *)(param_2 + 0x18);
  uVar1 = *(uint *)(param_2 + 0x1c);
  if (uVar2 < uVar1) {
LAB_0130a320:
                    /* WARNING: Subroutine does not return */
    FUN_00faa36c(0,uVar1,uVar2,&DAT_01890988);
  }
  if (uVar1 != 0) {
    iVar6 = *(int *)(param_2 + 0x14);
    iVar4 = uVar1 * 0x74;
    do {
      uVar2 = *(uint *)(param_3 + 0x18);
      uVar1 = *(uint *)(param_3 + 0x1c);
      if (uVar2 - uVar1 < 5) {
        local_29 = 0x12;
        local_28 = 0;
        FUN_01328914(&local_38,param_3,&local_29,1);
        if (local_38 != 4) goto LAB_0130a2c8;
      }
      else {
        if (uVar2 < uVar1) goto LAB_0130a2f4;
        *(undefined1 *)(*(int *)(param_3 + 0x14) + uVar1) = 0x12;
        *(uint *)(param_3 + 0x1c) = uVar1 + 1;
      }
      FUN_01328ef8(&local_38,param_3,*(undefined4 *)(iVar6 + 0x6c));
      if ((local_38 != 4) || (FUN_0130cbfc(&local_38,iVar6,param_3), local_38 != 4))
      goto LAB_0130a2c8;
      iVar6 = iVar6 + 0x74;
      iVar4 = iVar4 + -0x74;
    } while (iVar4 != 0);
  }
  uVar2 = *(uint *)(param_2 + 0x28);
  uVar1 = *(uint *)(param_2 + 0x2c);
  if (uVar2 < uVar1) goto LAB_0130a320;
  if (uVar1 != 0) {
    iVar6 = *(int *)(param_2 + 0x24);
    iVar4 = uVar1 * 0x74;
    do {
      uVar2 = *(uint *)(param_3 + 0x18);
      uVar1 = *(uint *)(param_3 + 0x1c);
      if (uVar2 - uVar1 < 5) {
        local_29 = 0x32;
        local_28 = 0;
        FUN_01328914(&local_38,param_3,&local_29,1);
        if (local_38 != 4) goto LAB_0130a2c8;
      }
      else {
        if (uVar2 < uVar1) goto LAB_0130a2f4;
        *(undefined1 *)(*(int *)(param_3 + 0x14) + uVar1) = 0x32;
        *(uint *)(param_3 + 0x1c) = uVar1 + 1;
      }
      FUN_01328ef8(&local_38,param_3,*(undefined4 *)(iVar6 + 0x6c));
      if ((local_38 != 4) || (FUN_0130cbfc(&local_38,iVar6,param_3), local_38 != 4))
      goto LAB_0130a2c8;
      iVar6 = iVar6 + 0x74;
      iVar4 = iVar4 + -0x74;
    } while (iVar4 != 0);
  }
  uVar2 = *(uint *)(param_2 + 0x38);
  uVar1 = *(uint *)(param_2 + 0x3c);
  if (uVar2 < uVar1) goto LAB_0130a320;
  if (uVar1 != 0) {
    iVar6 = *(int *)(param_2 + 0x34);
    iVar4 = uVar1 * 0xa0;
    do {
      uVar2 = *(uint *)(param_3 + 0x18);
      uVar1 = *(uint *)(param_3 + 0x1c);
      if (uVar2 - uVar1 < 5) {
        local_29 = 0x1a;
        local_28 = 0;
        FUN_01328914(&local_38,param_3,&local_29,1);
        if (local_38 != 4) goto LAB_0130a2c8;
      }
      else {
        if (uVar2 < uVar1) goto LAB_0130a2f4;
        *(undefined1 *)(*(int *)(param_3 + 0x14) + uVar1) = 0x1a;
        *(uint *)(param_3 + 0x1c) = uVar1 + 1;
      }
      FUN_01328ef8(&local_38,param_3,*(undefined4 *)(iVar6 + 0x9c));
      if ((local_38 != 4) || (FUN_01309af8(&local_38,iVar6,param_3), local_38 != 4))
      goto LAB_0130a2c8;
      iVar6 = iVar6 + 0xa0;
      iVar4 = iVar4 + -0xa0;
    } while (iVar4 != 0);
  }
  uVar2 = *(uint *)(param_2 + 0x48);
  uVar1 = *(uint *)(param_2 + 0x4c);
  if (uVar2 < uVar1) goto LAB_0130a320;
  if (uVar1 != 0) {
    iVar6 = *(int *)(param_2 + 0x44);
    iVar4 = uVar1 * 0x50;
    do {
      uVar2 = *(uint *)(param_3 + 0x18);
      uVar1 = *(uint *)(param_3 + 0x1c);
      if (uVar2 - uVar1 < 5) {
        local_29 = 0x22;
        local_28 = 0;
        FUN_01328914(&local_38,param_3,&local_29,1);
        if (local_38 != 4) goto LAB_0130a2c8;
      }
      else {
        if (uVar2 < uVar1) goto LAB_0130a2f4;
        *(undefined1 *)(*(int *)(param_3 + 0x14) + uVar1) = 0x22;
        *(uint *)(param_3 + 0x1c) = uVar1 + 1;
      }
      FUN_01328ef8(&local_38,param_3,*(undefined4 *)(iVar6 + 0x4c));
      if ((local_38 != 4) || (FUN_0130d344(&local_38,iVar6,param_3), local_38 != 4))
      goto LAB_0130a2c8;
      iVar6 = iVar6 + 0x50;
      iVar4 = iVar4 + -0x50;
    } while (iVar4 != 0);
  }
  uVar2 = *(uint *)(param_2 + 0x58);
  uVar1 = *(uint *)(param_2 + 0x5c);
  if (uVar2 < uVar1) goto LAB_0130a320;
  if (uVar1 != 0) {
    iVar6 = *(int *)(param_2 + 0x54);
    iVar4 = uVar1 << 5;
    do {
      uVar2 = *(uint *)(param_3 + 0x18);
      uVar1 = *(uint *)(param_3 + 0x1c);
      if (uVar2 - uVar1 < 5) {
        local_29 = 0x2a;
        local_28 = 0;
        FUN_01328914(&local_38,param_3,&local_29,1);
        if (local_38 != 4) goto LAB_0130a2c8;
      }
      else {
        if (uVar2 < uVar1) goto LAB_0130a2f4;
        *(undefined1 *)(*(int *)(param_3 + 0x14) + uVar1) = 0x2a;
        *(uint *)(param_3 + 0x1c) = uVar1 + 1;
      }
      FUN_01328ef8(&local_38,param_3,*(undefined4 *)(iVar6 + 0x1c));
      if ((local_38 != 4) || (FUN_0130d988(&local_38,iVar6,param_3), local_38 != 4))
      goto LAB_0130a2c8;
      iVar6 = iVar6 + 0x20;
      iVar4 = iVar4 + -0x20;
    } while (iVar4 != 0);
  }
  uVar2 = *(uint *)(param_2 + 0x68);
  uVar1 = *(uint *)(param_2 + 0x6c);
  if (uVar2 < uVar1) goto LAB_0130a320;
  if (uVar1 != 0) {
    iVar6 = *(int *)(param_2 + 100);
    iVar4 = uVar1 << 5;
    do {
      uVar2 = *(uint *)(param_3 + 0x18);
      uVar1 = *(uint *)(param_3 + 0x1c);
      if (uVar2 - uVar1 < 5) {
        local_29 = 0x42;
        local_28 = 0;
        FUN_01328914(&local_38,param_3,&local_29,1);
        if (local_38 != 4) goto LAB_0130a2c8;
      }
      else {
        if (uVar2 < uVar1) goto LAB_0130a2f4;
        *(undefined1 *)(*(int *)(param_3 + 0x14) + uVar1) = 0x42;
        *(uint *)(param_3 + 0x1c) = uVar1 + 1;
      }
      FUN_01328ef8(&local_38,param_3,*(undefined4 *)(iVar6 + 0x1c));
      if ((local_38 != 4) || (FUN_0130dbfc(&local_38,iVar6,param_3), local_38 != 4))
      goto LAB_0130a2c8;
      iVar6 = iVar6 + 0x20;
      iVar4 = iVar4 + -0x20;
    } while (iVar4 != 0);
  }
  if (*(char *)(param_2 + 0x94) != '\0') {
    iVar4 = *(int *)(param_2 + 0x90);
    if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa444(&DAT_01890768);
    }
    FUN_01328ef8(&local_38,param_3,0x3a);
    if (((local_38 != 4) ||
        (FUN_01328ef8(&local_38,param_3,*(undefined4 *)(iVar4 + 0x14)), local_38 != 4)) ||
       (FUN_01303894(&local_38,iVar4,param_3), local_38 != 4)) goto LAB_0130a2c8;
  }
  uVar7 = FUN_0132bba8(param_2 + 0x70);
  iVar6 = (int)((ulonglong)uVar7 >> 0x20);
  iVar4 = (int)uVar7;
  if (iVar4 != iVar6) {
    do {
      uVar2 = *(uint *)(param_3 + 0x18);
      uVar1 = *(uint *)(param_3 + 0x1c);
      if (uVar2 - uVar1 < 5) {
        local_29 = 0x4a;
        local_28 = 0;
        FUN_01328914(&local_38,param_3,&local_29,1);
        if (local_38 != 4) goto LAB_0130a2c8;
      }
      else {
        if (uVar2 < uVar1) goto LAB_0130a2f4;
        *(undefined1 *)(*(int *)(param_3 + 0x14) + uVar1) = 0x4a;
        *(uint *)(param_3 + 0x1c) = uVar1 + 1;
      }
      FUN_01328ef8(&local_38,param_3,*(undefined4 *)(iVar4 + 0x14));
      if ((local_38 != 4) || (FUN_012f80e4(&local_38,iVar4,param_3), local_38 != 4))
      goto LAB_0130a2c8;
      iVar4 = iVar4 + 0x18;
    } while (iVar4 != iVar6);
  }
  uVar7 = FUN_0132bb40(param_2 + 0x80);
  iVar6 = (int)((ulonglong)uVar7 >> 0x20);
  iVar4 = (int)uVar7;
  if (iVar4 != iVar6) {
    do {
      uVar3 = *(undefined4 *)(iVar4 + 4);
      uVar5 = *(undefined4 *)(iVar4 + 8);
      uVar2 = *(uint *)(param_3 + 0x18);
      uVar1 = *(uint *)(param_3 + 0x1c);
      if (uVar2 - uVar1 < 5) {
        local_28 = 0;
        local_29 = 0x52;
        FUN_01328914(&local_38,param_3,&local_29,1);
        if (local_38 != 4) {
          *param_1 = local_38;
          param_1[1] = local_34;
          param_1[2] = local_30;
          return;
        }
      }
      else {
        if (uVar2 < uVar1) goto LAB_0130a2f4;
        *(undefined1 *)(*(int *)(param_3 + 0x14) + uVar1) = 0x52;
        *(uint *)(param_3 + 0x1c) = uVar1 + 1;
      }
      FUN_01328ef8(&local_38,param_3,uVar5);
      if (local_38 != 4) {
LAB_0130a308:
        *param_1 = local_38;
        param_1[1] = local_34;
        param_1[2] = local_30;
        return;
      }
      FUN_01328914(&local_38,param_3,uVar3,uVar5);
      if (local_38 != 4) goto LAB_0130a308;
      iVar4 = iVar4 + 0xc;
    } while (iVar4 != iVar6);
  }
  FUN_01328b10(&local_38,param_3,*(undefined4 *)(param_2 + 0x98));
  if (local_38 == 4) {
    *param_1 = 4;
    return;
  }
LAB_0130a2c8:
  *param_1 = local_38;
  param_1[1] = local_34;
  param_1[2] = local_30;
  return;
}


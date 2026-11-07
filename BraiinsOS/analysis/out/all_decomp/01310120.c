// FUN_01310120 @ 01310120 size=2336 calls_out=13 calls_in=8
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_01310120(int *param_1,int param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  int iVar5;
  int *piVar6;
  undefined4 uVar7;
  int iVar8;
  undefined4 local_40;
  uint uStack_3c;
  int local_38;
  int local_34;
  int local_30;
  undefined1 local_29;
  undefined4 local_28;
  
  if (*(char *)(param_2 + 0xc) == '\x01') {
    uVar4 = *(undefined4 *)(param_2 + 4);
    uVar7 = *(undefined4 *)(param_2 + 8);
    uVar2 = *(uint *)(param_3 + 0x18);
    uVar1 = *(uint *)(param_3 + 0x1c);
    if (uVar2 - uVar1 < 5) {
      local_40 = 10;
      uStack_3c = uStack_3c & 0xffffff00;
      FUN_01328914(&local_38,param_3,&local_40,1);
      if (local_38 != 4) goto LAB_01310974;
    }
    else {
      if (uVar2 < uVar1) goto LAB_01310a10;
      *(undefined1 *)(*(int *)(param_3 + 0x14) + uVar1) = 10;
      *(uint *)(param_3 + 0x1c) = uVar1 + 1;
    }
    FUN_01328ef8(&local_38,param_3,uVar7);
    if ((local_38 != 4) || (FUN_01328914(&local_38,param_3,uVar4,uVar7), local_38 != 4))
    goto LAB_01310974;
  }
  if (*(char *)(param_2 + 0x1c) != '\0') {
    uVar4 = *(undefined4 *)(param_2 + 0x14);
    uVar7 = *(undefined4 *)(param_2 + 0x18);
    uVar2 = *(uint *)(param_3 + 0x18);
    uVar1 = *(uint *)(param_3 + 0x1c);
    if (uVar2 - uVar1 < 5) {
      local_40 = 0x12;
      uStack_3c = uStack_3c & 0xffffff00;
      FUN_01328914(&local_38,param_3,&local_40,1);
      if (local_38 != 4) goto LAB_01310974;
    }
    else {
      if (uVar2 < uVar1) {
LAB_01310a10:
                    /* WARNING: Subroutine does not return */
        FUN_00faa36c(uVar1,uVar2,uVar2,&DAT_0188fa90);
      }
      *(undefined1 *)(*(int *)(param_3 + 0x14) + uVar1) = 0x12;
      *(uint *)(param_3 + 0x1c) = uVar1 + 1;
    }
    FUN_01328ef8(&local_38,param_3,uVar7);
    if ((local_38 != 4) || (FUN_01328914(&local_38,param_3,uVar4,uVar7), local_38 != 4)) {
LAB_01310974:
      param_1[1] = local_34;
      *param_1 = local_38;
      param_1[2] = local_30;
      return;
    }
  }
  uVar2 = *(uint *)(param_2 + 0x28);
  uVar1 = *(uint *)(param_2 + 0x2c);
  if (uVar2 < uVar1) {
LAB_01310a24:
                    /* WARNING: Subroutine does not return */
    FUN_00faa36c(0,uVar1,uVar2,&DAT_01890988);
  }
  if (uVar1 != 0) {
    iVar5 = uVar1 * 0xc;
    puVar3 = (undefined4 *)(*(int *)(param_2 + 0x24) + 4);
    do {
      uVar7 = *puVar3;
      uVar4 = puVar3[1];
      uVar2 = *(uint *)(param_3 + 0x18);
      uVar1 = *(uint *)(param_3 + 0x1c);
      if (uVar2 - uVar1 < 5) {
        uStack_3c = uStack_3c & 0xffffff00;
        local_40 = 0x1a;
        FUN_01328914(&local_38,param_3,&local_40,1);
        if (local_38 != 4) {
          *param_1 = local_38;
          param_1[1] = local_34;
          param_1[2] = local_30;
          return;
        }
      }
      else {
        if (uVar2 < uVar1) goto LAB_01310a10;
        *(undefined1 *)(*(int *)(param_3 + 0x14) + uVar1) = 0x1a;
        *(uint *)(param_3 + 0x1c) = uVar1 + 1;
      }
      FUN_01328ef8(&local_38,param_3,uVar4);
      if ((local_38 != 4) || (FUN_01328914(&local_38,param_3,uVar7,uVar4), local_38 != 4)) {
        *param_1 = local_38;
        param_1[1] = local_34;
        param_1[2] = local_30;
        return;
      }
      puVar3 = puVar3 + 3;
      iVar5 = iVar5 + -0xc;
    } while (iVar5 != 0);
  }
  if (*(int *)(param_2 + 0x38) != 0) {
    piVar6 = *(int **)(param_2 + 0x34);
    iVar5 = *(int *)(param_2 + 0x38) << 2;
    do {
      iVar8 = *piVar6;
      uVar2 = *(uint *)(param_3 + 0x18);
      uVar1 = *(uint *)(param_3 + 0x1c);
      if (uVar2 - uVar1 < 5) {
        local_28 = 0;
        local_29 = 0x50;
        FUN_01328914(&local_38,param_3,&local_29,1);
        if (local_38 != 4) goto LAB_013109cc;
      }
      else {
        if (uVar2 < uVar1) goto LAB_01310a10;
        *(undefined1 *)(*(int *)(param_3 + 0x14) + uVar1) = 0x50;
        *(uint *)(param_3 + 0x1c) = uVar1 + 1;
      }
      FUN_0132901c(&local_38,param_3,iVar8,iVar8 >> 0x1f);
      if (local_38 != 4) goto LAB_013109cc;
      piVar6 = piVar6 + 1;
      iVar5 = iVar5 + -4;
    } while (iVar5 != 0);
  }
  if (*(int *)(param_2 + 0x44) != 0) {
    piVar6 = *(int **)(param_2 + 0x40);
    iVar5 = *(int *)(param_2 + 0x44) << 2;
    do {
      iVar8 = *piVar6;
      uVar2 = *(uint *)(param_3 + 0x18);
      uVar1 = *(uint *)(param_3 + 0x1c);
      if (uVar2 - uVar1 < 5) {
        local_28 = 0;
        local_29 = 0x58;
        FUN_01328914(&local_38,param_3,&local_29,1);
        if (local_38 != 4) goto LAB_013109cc;
      }
      else {
        if (uVar2 < uVar1) goto LAB_01310a10;
        *(undefined1 *)(*(int *)(param_3 + 0x14) + uVar1) = 0x58;
        *(uint *)(param_3 + 0x1c) = uVar1 + 1;
      }
      FUN_0132901c(&local_38,param_3,iVar8,iVar8 >> 0x1f);
      if (local_38 != 4) goto LAB_013109cc;
      piVar6 = piVar6 + 1;
      iVar5 = iVar5 + -4;
    } while (iVar5 != 0);
  }
  uVar2 = *(uint *)(param_2 + 0x50);
  uVar1 = *(uint *)(param_2 + 0x54);
  if (uVar2 < uVar1) goto LAB_01310a24;
  if (uVar1 != 0) {
    iVar8 = *(int *)(param_2 + 0x4c);
    iVar5 = uVar1 * 0xa0;
    do {
      uVar2 = *(uint *)(param_3 + 0x18);
      uVar1 = *(uint *)(param_3 + 0x1c);
      if (uVar2 - uVar1 < 5) {
        local_40 = 0x22;
        uStack_3c = uStack_3c & 0xffffff00;
        FUN_01328914(&local_38,param_3,&local_40,1);
        if (local_38 != 4) goto LAB_013109cc;
      }
      else {
        if (uVar2 < uVar1) goto LAB_01310a10;
        *(undefined1 *)(*(int *)(param_3 + 0x14) + uVar1) = 0x22;
        *(uint *)(param_3 + 0x1c) = uVar1 + 1;
      }
      FUN_01328ef8(&local_38,param_3,*(undefined4 *)(iVar8 + 0x9c));
      if ((local_38 != 4) || (FUN_01309af8(&local_38,iVar8,param_3), local_38 != 4))
      goto LAB_013109cc;
      iVar8 = iVar8 + 0xa0;
      iVar5 = iVar5 + -0xa0;
    } while (iVar5 != 0);
  }
  uVar2 = *(uint *)(param_2 + 0x60);
  uVar1 = *(uint *)(param_2 + 100);
  if (uVar2 < uVar1) goto LAB_01310a24;
  if (uVar1 != 0) {
    iVar8 = *(int *)(param_2 + 0x5c);
    iVar5 = uVar1 * 0x50;
    do {
      uVar2 = *(uint *)(param_3 + 0x18);
      uVar1 = *(uint *)(param_3 + 0x1c);
      if (uVar2 - uVar1 < 5) {
        local_40 = 0x2a;
        uStack_3c = uStack_3c & 0xffffff00;
        FUN_01328914(&local_38,param_3,&local_40,1);
        if (local_38 != 4) goto LAB_013109cc;
      }
      else {
        if (uVar2 < uVar1) goto LAB_01310a10;
        *(undefined1 *)(*(int *)(param_3 + 0x14) + uVar1) = 0x2a;
        *(uint *)(param_3 + 0x1c) = uVar1 + 1;
      }
      FUN_01328ef8(&local_38,param_3,*(undefined4 *)(iVar8 + 0x4c));
      if ((local_38 != 4) || (FUN_0130d344(&local_38,iVar8,param_3), local_38 != 4))
      goto LAB_013109cc;
      iVar8 = iVar8 + 0x50;
      iVar5 = iVar5 + -0x50;
    } while (iVar5 != 0);
  }
  uVar2 = *(uint *)(param_2 + 0x70);
  uVar1 = *(uint *)(param_2 + 0x74);
  if (uVar2 < uVar1) goto LAB_01310a24;
  if (uVar1 != 0) {
    iVar8 = *(int *)(param_2 + 0x6c);
    iVar5 = uVar1 * 0x30;
    do {
      uVar2 = *(uint *)(param_3 + 0x18);
      uVar1 = *(uint *)(param_3 + 0x1c);
      if (uVar2 - uVar1 < 5) {
        local_40 = 0x32;
        uStack_3c = uStack_3c & 0xffffff00;
        FUN_01328914(&local_38,param_3,&local_40,1);
        if (local_38 != 4) goto LAB_013109cc;
      }
      else {
        if (uVar2 < uVar1) goto LAB_01310a10;
        *(undefined1 *)(*(int *)(param_3 + 0x14) + uVar1) = 0x32;
        *(uint *)(param_3 + 0x1c) = uVar1 + 1;
      }
      FUN_01328ef8(&local_38,param_3,*(undefined4 *)(iVar8 + 0x2c));
      if ((local_38 != 4) || (FUN_01310a4c(&local_38,iVar8,param_3), local_38 != 4))
      goto LAB_013109cc;
      iVar8 = iVar8 + 0x30;
      iVar5 = iVar5 + -0x30;
    } while (iVar5 != 0);
  }
  uVar2 = *(uint *)(param_2 + 0x80);
  uVar1 = *(uint *)(param_2 + 0x84);
  if (uVar2 < uVar1) goto LAB_01310a24;
  if (uVar1 != 0) {
    iVar8 = *(int *)(param_2 + 0x7c);
    iVar5 = uVar1 * 0x74;
    do {
      uVar2 = *(uint *)(param_3 + 0x18);
      uVar1 = *(uint *)(param_3 + 0x1c);
      if (uVar2 - uVar1 < 5) {
        local_40 = 0x3a;
        uStack_3c = uStack_3c & 0xffffff00;
        FUN_01328914(&local_38,param_3,&local_40,1);
        if (local_38 != 4) {
LAB_013109cc:
          param_1[1] = local_34;
          *param_1 = local_38;
          param_1[2] = local_30;
          return;
        }
      }
      else {
        if (uVar2 < uVar1) goto LAB_01310a10;
        *(undefined1 *)(*(int *)(param_3 + 0x14) + uVar1) = 0x3a;
        *(uint *)(param_3 + 0x1c) = uVar1 + 1;
      }
      FUN_01328ef8(&local_38,param_3,*(undefined4 *)(iVar8 + 0x6c));
      if ((local_38 != 4) || (FUN_0130cbfc(&local_38,iVar8,param_3), local_38 != 4))
      goto LAB_013109cc;
      iVar8 = iVar8 + 0x74;
      iVar5 = iVar5 + -0x74;
    } while (iVar5 != 0);
  }
  if (*(char *)(param_2 + 0x9c) == '\x01') {
    iVar5 = *(int *)(param_2 + 0x98);
    if (iVar5 == 0) goto LAB_01310a34;
    FUN_01328ef8(&local_38,param_3,0x42);
    if (((local_38 != 4) ||
        (FUN_01328ef8(&local_38,param_3,*(undefined4 *)(iVar5 + 0xb4)), local_38 != 4)) ||
       (FUN_012fbf3c(&local_38,iVar5,param_3), local_38 != 4)) goto LAB_013109fc;
  }
  if (*(char *)(param_2 + 0xa4) == '\x01') {
    iVar5 = *(int *)(param_2 + 0xa0);
    if (iVar5 == 0) {
LAB_01310a34:
                    /* WARNING: Subroutine does not return */
      FUN_00faa444(&DAT_01890768);
    }
    FUN_01328ef8(&local_38,param_3,0x4a);
    if (((local_38 != 4) ||
        (FUN_01328ef8(&local_38,param_3,*(undefined4 *)(iVar5 + 0x14)), local_38 != 4)) ||
       (FUN_01306b44(&local_38,iVar5,param_3), local_38 != 4)) goto LAB_013109fc;
  }
  if (((*(char *)(param_2 + 0x94) == '\0') ||
      (FUN_013292d8(&local_38,param_3,0xc,*(undefined4 *)(param_2 + 0x8c),
                    *(undefined4 *)(param_2 + 0x90)), local_38 == 4)) &&
     (FUN_01328b10(&local_38,param_3,*(undefined4 *)(param_2 + 0xa8)), local_38 == 4)) {
    *param_1 = 4;
    return;
  }
LAB_013109fc:
  *param_1 = local_38;
  param_1[1] = local_34;
  param_1[2] = local_30;
  return;
}


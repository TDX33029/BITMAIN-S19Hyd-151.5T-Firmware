// FUN_0132c264 @ 0132c264 size=2004 calls_out=6 calls_in=1
// strings: 

void FUN_0132c264(int *param_1,uint param_2,uint param_3,byte *param_4,undefined4 param_5,
                 uint param_6,undefined1 *param_7)

{
  undefined1 uVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined8 local_38;
  undefined8 *local_30;
  code *local_2c;
  undefined1 uStack_25;
  
  piVar2 = param_1;
  if (param_2 == 0) {
    piVar2 = (int *)(uint)*param_4;
  }
  if (param_2 == 0 && ((uint)piVar2 & 1) == 0) {
    iVar3 = param_1[2];
    if (*param_1 == iVar3) {
      FUN_0132f8cc(param_1,iVar3,1,1,1);
      iVar3 = param_1[2];
    }
    *(undefined1 *)(param_1[1] + iVar3) = 0x20;
    param_1[2] = param_1[2] + 1;
  }
  uVar6 = param_2 & param_3 != 0;
  if (uVar6 == 0) {
    iVar3 = param_1[2];
  }
  else {
    iVar3 = param_1[2];
    uVar5 = param_3;
    do {
      if ((uint)(*param_1 - iVar3) < 2) {
        FUN_0132f8cc(param_1,iVar3,2,1,1);
        iVar3 = param_1[2];
      }
      uVar5 = uVar5 - 1;
      *(undefined2 *)(param_1[1] + iVar3) = 0x2020;
      iVar3 = param_1[2] + 2;
      param_1[2] = iVar3;
    } while (uVar5 != 0);
  }
  iVar4 = *param_1;
  *param_4 = 0;
  if ((uint)(iVar4 - iVar3) < param_6) {
    FUN_0132f8cc(param_1,iVar3,param_6,1,1);
    iVar3 = param_1[2];
  }
  FUN_016dd1aa(param_1[1] + iVar3,param_5,param_6);
  uVar1 = *param_7;
  iVar3 = param_1[2] + param_6;
  param_1[2] = iVar3;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(uVar1) {
  case 0:
    local_38 = CONCAT44(local_38._4_4_,*(undefined4 *)(param_7 + 4));
    local_30 = &local_38;
    local_2c = (code *)&LAB_00fac484;
    iVar3 = FUN_00fa948c(param_1,&DAT_018904d0,&DAT_0057523e,&local_30);
    if (iVar3 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00fb74f8(&DAT_00418ec6,0x2b,&uStack_25,&DAT_018904b0,&DAT_018904e8);
    }
    break;
  case 1:
    local_38 = *(undefined8 *)(param_7 + 8);
    local_30 = &local_38;
    local_2c = FUN_00fac4cc;
    iVar3 = FUN_00fa948c(param_1,&DAT_018904d0,&DAT_0057523e,&local_30);
    if (iVar3 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00fb74f8(&DAT_00418ec6,0x2b,&uStack_25,&DAT_018904b0,&DAT_018904f8);
    }
    break;
  case 2:
    local_38 = CONCAT44(local_38._4_4_,*(undefined4 *)(param_7 + 4));
    local_30 = &local_38;
    local_2c = FUN_00fac2b8;
    iVar3 = FUN_00fa948c(param_1,&DAT_018904d0,&DAT_0057523e,&local_30);
    if (iVar3 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00fb74f8(&DAT_00418ec6,0x2b,&uStack_25,&DAT_018904b0,&DAT_01890508);
    }
    break;
  case 3:
    local_38 = *(undefined8 *)(param_7 + 8);
    local_30 = &local_38;
    local_2c = FUN_00fac310;
    iVar3 = FUN_00fa948c(param_1,&DAT_018904d0,&DAT_0057523e,&local_30);
    if (iVar3 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00fb74f8(&DAT_00418ec6,0x2b,&uStack_25,&DAT_018904b0,&DAT_01890518);
    }
    break;
  case 4:
    local_38 = CONCAT44(local_38._4_4_,*(undefined4 *)(param_7 + 4));
    local_30 = &local_38;
    local_2c = (code *)&LAB_00fb1efc;
    iVar3 = FUN_00fa948c(param_1,&DAT_018904d0,&DAT_0057523e,&local_30);
    if (iVar3 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00fb74f8(&DAT_00418ec6,0x2b,&uStack_25,&DAT_018904b0,&DAT_01890528);
    }
    break;
  case 5:
    local_38 = *(undefined8 *)(param_7 + 8);
    local_2c = (code *)&LAB_00fb1f30;
    local_30 = &local_38;
    iVar3 = FUN_00fa948c(param_1,&DAT_018904d0,&DAT_0057523e,&local_30);
    if (iVar3 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00fb74f8(&DAT_00418ec6,0x2b,&uStack_25,&DAT_018904b0,&DAT_01890538);
    }
    break;
  case 6:
    local_38 = CONCAT71(local_38._1_7_,param_7[1]);
    local_30 = &local_38;
    local_2c = (code *)&LAB_00faaef4;
    iVar3 = FUN_00fa948c(param_1,&DAT_018904d0,&DAT_0057523e,&local_30);
    if (iVar3 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00fb74f8(&DAT_00418ec6,0x2b,&uStack_25,&DAT_018904b0,&DAT_01890548);
    }
    break;
  default:
    uVar7 = *(undefined4 *)(param_7 + 4);
    uVar8 = *(undefined4 *)(param_7 + 8);
    if ((uint)(*param_1 - iVar3) < 2) {
      FUN_0132f8cc(param_1,iVar3,2,1,1);
      iVar3 = param_1[2];
    }
    *(undefined2 *)(param_1[1] + iVar3) = 0x203a;
    iVar4 = param_1[2];
    iVar3 = iVar4 + 2;
    param_1[2] = iVar3;
    if (*param_1 == iVar3) {
      FUN_0132f8cc(param_1,iVar3,1,1,1);
      iVar3 = param_1[2];
    }
    *(undefined1 *)(param_1[1] + iVar3) = 0x22;
    param_1[2] = iVar4 + 3;
    FUN_01333f8c(uVar7,uVar8,param_1);
    iVar3 = param_1[2];
    iVar4 = iVar3;
    if (*param_1 == iVar3) {
      FUN_0132f8cc(param_1,iVar3,1,1,1);
      iVar4 = param_1[2];
    }
    *(undefined1 *)(param_1[1] + iVar4) = 0x22;
    iVar3 = iVar3 + 1;
    goto LAB_0132c8dc;
  case 9:
    piVar2 = *(int **)(param_7 + 4);
    if ((uint)(*param_1 - iVar3) < 2) {
      FUN_0132f8cc(param_1,iVar3,2,1,1);
      iVar3 = param_1[2];
    }
    *(undefined2 *)(param_1[1] + iVar3) = 0x203a;
    iVar4 = param_1[2] + 2;
    param_1[2] = iVar4;
    iVar3 = *piVar2;
    if (*(char *)(iVar3 + 0x14) == '\0') {
      uVar6 = 0;
      uVar7 = 1;
    }
    else {
      uVar7 = *(undefined4 *)(iVar3 + 0xc);
      uVar6 = *(uint *)(iVar3 + 0x10);
      if ((uint)(*param_1 - iVar4) < uVar6) {
        FUN_0132f8cc(param_1,iVar4,uVar6,1,1);
        iVar4 = param_1[2];
      }
    }
    FUN_016dd1aa(param_1[1] + iVar4,uVar7,uVar6);
    iVar3 = param_1[2] + uVar6;
    goto LAB_0132c8dc;
  case 10:
    uVar7 = *(undefined4 *)(param_7 + 4);
    uVar8 = *(undefined4 *)(param_7 + 8);
    if ((uint)(*param_1 - iVar3) < 2) {
      FUN_0132f8cc(param_1,iVar3,2,1,1);
      iVar3 = param_1[2];
    }
    *(undefined2 *)(param_1[1] + iVar3) = 0x7b20;
    iVar3 = param_1[2] + 2;
    param_1[2] = iVar3;
    if (param_2 == 0) {
      FUN_0132bc10(uVar7,uVar8,param_1,0,param_3 + 1);
      iVar3 = param_1[2];
    }
    else {
      if (*param_1 == iVar3) {
        FUN_0132f8cc(param_1,iVar3,1,1,1);
        iVar3 = param_1[2];
      }
      *(undefined1 *)(param_1[1] + iVar3) = 10;
      param_1[2] = param_1[2] + 1;
      FUN_0132bc10(uVar7,uVar8,param_1,1,param_3 + 1);
      iVar3 = param_1[2];
      while (uVar6 != 0) {
        if ((uint)(*param_1 - iVar3) < 2) {
          FUN_0132f8cc(param_1,iVar3,2,1,1);
          iVar3 = param_1[2];
        }
        *(undefined2 *)(param_1[1] + iVar3) = 0x2020;
        iVar3 = param_1[2] + 2;
        param_1[2] = iVar3;
        param_3 = param_3 - 1;
        uVar6 = param_3;
      }
    }
    if (*param_1 == iVar3) {
      FUN_0132f8cc(param_1,iVar3,1,1,1);
      iVar3 = param_1[2];
    }
    *(undefined1 *)(param_1[1] + iVar3) = 0x7d;
    iVar3 = param_1[2] + 1;
LAB_0132c8dc:
    param_1[2] = iVar3;
  }
  if (param_2 != 0) {
    iVar3 = param_1[2];
    if (*param_1 == iVar3) {
      FUN_0132f8cc(param_1,iVar3,1,1,1);
      iVar3 = param_1[2];
    }
    *(undefined1 *)(param_1[1] + iVar3) = 10;
    param_1[2] = param_1[2] + 1;
  }
  return;
}


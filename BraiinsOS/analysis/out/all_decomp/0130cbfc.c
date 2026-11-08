// FUN_0130cbfc @ 0130cbfc size=1856 calls_out=8 calls_in=10
// strings: 

void FUN_0130cbfc(int *param_1,int *param_2,int param_3)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  undefined4 local_38;
  uint uStack_34;
  int local_30;
  int local_2c;
  int local_28;
  undefined1 local_1d;
  undefined4 local_1c;
  
  if ((char)param_2[7] == '\x01') {
    iVar5 = param_2[5];
    iVar4 = param_2[6];
    uVar3 = *(uint *)(param_3 + 0x18);
    uVar2 = *(uint *)(param_3 + 0x1c);
    if (uVar3 - uVar2 < 5) {
      local_38 = 10;
      uStack_34 = uStack_34 & 0xffffff00;
      FUN_01328914(&local_30,param_3,&local_38,1);
      if (local_30 != 4) goto LAB_0130d308;
    }
    else {
      if (uVar3 < uVar2) goto LAB_0130d31c;
      *(undefined1 *)(*(int *)(param_3 + 0x14) + uVar2) = 10;
      *(uint *)(param_3 + 0x1c) = uVar2 + 1;
    }
    FUN_01328ef8(&local_30,param_3,iVar4);
    if ((local_30 != 4) || (FUN_01328914(&local_30,param_3,iVar5,iVar4), local_30 != 4))
    goto LAB_0130d308;
  }
  if (*param_2 != 0) {
    iVar4 = param_2[1];
    uVar3 = *(uint *)(param_3 + 0x18);
    uVar2 = *(uint *)(param_3 + 0x1c);
    if (uVar3 - uVar2 < 5) {
      local_1d = 0x18;
      local_1c = 0;
      FUN_01328914(&local_30,param_3,&local_1d,1);
      if (local_30 != 4) goto LAB_0130d308;
    }
    else {
      if (uVar3 < uVar2) goto LAB_0130d31c;
      *(undefined1 *)(*(int *)(param_3 + 0x14) + uVar2) = 0x18;
      *(uint *)(param_3 + 0x1c) = uVar2 + 1;
    }
    FUN_0132901c(&local_30,param_3,iVar4,iVar4 >> 0x1f);
    if (local_30 != 4) goto LAB_0130d308;
  }
  cVar1 = *(char *)((int)param_2 + 0x71);
  if (cVar1 != '\0') {
    uVar3 = *(uint *)(param_3 + 0x18);
    uVar2 = *(uint *)(param_3 + 0x1c);
    if (uVar3 - uVar2 < 5) {
      local_1d = 0x20;
      local_1c = 0;
      FUN_01328914(&local_30,param_3,&local_1d,1);
      if (local_30 != 4) goto LAB_0130d308;
    }
    else {
      if (uVar3 < uVar2) goto LAB_0130d31c;
      *(undefined1 *)(*(int *)(param_3 + 0x14) + uVar2) = 0x20;
      *(uint *)(param_3 + 0x1c) = uVar2 + 1;
    }
    FUN_0132901c(&local_30,param_3,cVar1,0);
    if (local_30 != 4) goto LAB_0130d308;
  }
  cVar1 = *(char *)((int)param_2 + 0x72);
  if (cVar1 != '\0') {
    uVar3 = *(uint *)(param_3 + 0x18);
    uVar2 = *(uint *)(param_3 + 0x1c);
    if (uVar3 - uVar2 < 5) {
      local_1d = 0x28;
      local_1c = 0;
      FUN_01328914(&local_30,param_3,&local_1d,1);
      if (local_30 != 4) goto LAB_0130d308;
    }
    else {
      if (uVar3 < uVar2) goto LAB_0130d31c;
      *(undefined1 *)(*(int *)(param_3 + 0x14) + uVar2) = 0x28;
      *(uint *)(param_3 + 0x1c) = uVar2 + 1;
    }
    FUN_0132901c(&local_30,param_3,cVar1,0);
    if (local_30 != 4) goto LAB_0130d308;
  }
  if ((char)param_2[0xb] != '\0') {
    iVar5 = param_2[9];
    iVar4 = param_2[10];
    uVar3 = *(uint *)(param_3 + 0x18);
    uVar2 = *(uint *)(param_3 + 0x1c);
    if (uVar3 - uVar2 < 5) {
      local_38 = 0x32;
      uStack_34 = uStack_34 & 0xffffff00;
      FUN_01328914(&local_30,param_3,&local_38,1);
      if (local_30 != 4) goto LAB_0130d308;
    }
    else {
      if (uVar3 < uVar2) goto LAB_0130d31c;
      *(undefined1 *)(*(int *)(param_3 + 0x14) + uVar2) = 0x32;
      *(uint *)(param_3 + 0x1c) = uVar2 + 1;
    }
    FUN_01328ef8(&local_30,param_3,iVar4);
    if ((local_30 != 4) || (FUN_01328914(&local_30,param_3,iVar5,iVar4), local_30 != 4))
    goto LAB_0130d308;
  }
  if ((char)param_2[0xf] != '\0') {
    iVar5 = param_2[0xd];
    iVar4 = param_2[0xe];
    uVar3 = *(uint *)(param_3 + 0x18);
    uVar2 = *(uint *)(param_3 + 0x1c);
    if (uVar3 - uVar2 < 5) {
      local_38 = 0x12;
      uStack_34 = uStack_34 & 0xffffff00;
      FUN_01328914(&local_30,param_3,&local_38,1);
      if (local_30 != 4) goto LAB_0130d308;
    }
    else {
      if (uVar3 < uVar2) goto LAB_0130d31c;
      *(undefined1 *)(*(int *)(param_3 + 0x14) + uVar2) = 0x12;
      *(uint *)(param_3 + 0x1c) = uVar2 + 1;
    }
    FUN_01328ef8(&local_30,param_3,iVar4);
    if ((local_30 != 4) || (FUN_01328914(&local_30,param_3,iVar5,iVar4), local_30 != 4))
    goto LAB_0130d308;
  }
  if ((char)param_2[0x13] != '\0') {
    iVar5 = param_2[0x11];
    iVar4 = param_2[0x12];
    uVar3 = *(uint *)(param_3 + 0x18);
    uVar2 = *(uint *)(param_3 + 0x1c);
    if (uVar3 - uVar2 < 5) {
      local_38 = 0x3a;
      uStack_34 = uStack_34 & 0xffffff00;
      FUN_01328914(&local_30,param_3,&local_38,1);
      if (local_30 != 4) goto LAB_0130d308;
    }
    else {
      if (uVar3 < uVar2) goto LAB_0130d31c;
      *(undefined1 *)(*(int *)(param_3 + 0x14) + uVar2) = 0x3a;
      *(uint *)(param_3 + 0x1c) = uVar2 + 1;
    }
    FUN_01328ef8(&local_30,param_3,iVar4);
    if ((local_30 != 4) || (FUN_01328914(&local_30,param_3,iVar5,iVar4), local_30 != 4))
    goto LAB_0130d308;
  }
  if (param_2[2] != 0) {
    iVar4 = param_2[3];
    uVar3 = *(uint *)(param_3 + 0x18);
    uVar2 = *(uint *)(param_3 + 0x1c);
    if (uVar3 - uVar2 < 5) {
      local_1d = 0x48;
      local_1c = 0;
      FUN_01328914(&local_30,param_3,&local_1d,1);
      if (local_30 != 4) goto LAB_0130d308;
    }
    else {
      if (uVar3 < uVar2) goto LAB_0130d31c;
      *(undefined1 *)(*(int *)(param_3 + 0x14) + uVar2) = 0x48;
      *(uint *)(param_3 + 0x1c) = uVar2 + 1;
    }
    FUN_0132901c(&local_30,param_3,iVar4,iVar4 >> 0x1f);
    if (local_30 != 4) goto LAB_0130d308;
  }
  if ((char)param_2[0x17] != '\0') {
    iVar5 = param_2[0x15];
    iVar4 = param_2[0x16];
    uVar3 = *(uint *)(param_3 + 0x18);
    uVar2 = *(uint *)(param_3 + 0x1c);
    if (uVar3 - uVar2 < 5) {
      local_38 = 0x52;
      uStack_34 = uStack_34 & 0xffffff00;
      FUN_01328914(&local_30,param_3,&local_38,1);
      if (local_30 != 4) goto LAB_0130d308;
    }
    else {
      if (uVar3 < uVar2) goto LAB_0130d31c;
      *(undefined1 *)(*(int *)(param_3 + 0x14) + uVar2) = 0x52;
      *(uint *)(param_3 + 0x1c) = uVar2 + 1;
    }
    FUN_01328ef8(&local_30,param_3,iVar4);
    if ((local_30 != 4) || (FUN_01328914(&local_30,param_3,iVar5,iVar4), local_30 != 4))
    goto LAB_0130d308;
  }
  if ((char)param_2[0x19] != '\0') {
    iVar4 = param_2[0x18];
    if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa444(&DAT_01890768);
    }
    uVar3 = *(uint *)(param_3 + 0x18);
    uVar2 = *(uint *)(param_3 + 0x1c);
    if (uVar3 - uVar2 < 5) {
      local_38 = 0x42;
      uStack_34 = uStack_34 & 0xffffff00;
      FUN_01328914(&local_30,param_3,&local_38,1);
      if (local_30 != 4) goto LAB_0130d308;
    }
    else {
      if (uVar3 < uVar2) {
LAB_0130d31c:
                    /* WARNING: Subroutine does not return */
        FUN_00faa36c(uVar2,uVar3,uVar3,&DAT_0188fa90);
      }
      *(undefined1 *)(*(int *)(param_3 + 0x14) + uVar2) = 0x42;
      *(uint *)(param_3 + 0x1c) = uVar2 + 1;
    }
    FUN_01328ef8(&local_30,param_3,*(undefined4 *)(iVar4 + 0x14));
    if ((local_30 != 4) || (FUN_012ff258(&local_30,iVar4,param_3), local_30 != 4))
    goto LAB_0130d308;
  }
  if (((*(byte *)(param_2 + 0x1c) == 2) ||
      (FUN_01329168(&local_30,param_3,0x11,*(byte *)(param_2 + 0x1c) & 1), local_30 == 4)) &&
     (FUN_01328b10(&local_30,param_3,param_2[0x1a]), local_30 == 4)) {
    *param_1 = 4;
    return;
  }
LAB_0130d308:
  param_1[1] = local_2c;
  *param_1 = local_30;
  param_1[2] = local_28;
  return;
}


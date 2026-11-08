// FUN_01649edc @ 01649edc size=444 calls_out=6 calls_in=1
// strings: 

void FUN_01649edc(undefined4 *param_1,undefined4 *param_2,int param_3)

{
  char cVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 local_2c;
  undefined1 auStack_24 [12];
  
  cVar1 = *(char *)(param_3 + 0xc);
  if (cVar1 == '\x01') {
    uVar3 = param_2[1];
    uVar5 = param_2[2];
    uVar6 = param_2[3];
    *param_1 = *param_2;
    param_1[1] = uVar3;
    param_1[2] = uVar5;
    param_1[3] = uVar6;
    return;
  }
  uVar9 = (uint)*(byte *)(param_2 + 3);
  if (uVar9 == 0) {
    if (cVar1 != '\0') {
LAB_01649f4c:
      local_38 = *param_2;
      uStack_34 = param_2[1];
      uStack_30 = param_2[2];
      FUN_01646814(auStack_24,&local_38,*(undefined4 *)(param_3 + 4),*(undefined4 *)(param_3 + 8));
      goto LAB_0164a088;
    }
  }
  else {
    if (uVar9 == 1) {
      FUN_0164a9cc(&local_38,*(undefined4 *)(param_3 + 4),*(undefined4 *)(param_3 + 8));
      local_2c = CONCAT31(local_2c._1_3_,'\x02' - cVar1);
      *param_1 = local_38;
      param_1[1] = uStack_34;
      param_1[2] = uStack_30;
      param_1[3] = local_2c;
      goto LAB_0164a044;
    }
    if (cVar1 == '\0') goto LAB_01649f4c;
  }
  uVar10 = *(uint *)(param_3 + 8);
  uVar2 = param_2[2];
  if (uVar2 != uVar10) {
    cVar1 = (uVar2 >= uVar10 && uVar2 != uVar10) - (uVar2 < uVar10);
  }
  else {
    iVar4 = uVar2 << 2;
    do {
      iVar7 = *(int *)(param_3 + 4) + iVar4;
      if (iVar4 == 0) {
        cVar1 = '\0';
        if (*(int *)(param_3 + 4) != iVar7) {
          cVar1 = -1;
        }
        goto LAB_01649ff0;
      }
      uVar2 = *(uint *)(param_2[1] + -4 + iVar4);
      iVar4 = iVar4 + -4;
      uVar8 = *(uint *)(iVar7 + -4);
    } while (uVar2 == uVar8);
    cVar1 = (uVar2 >= uVar8) - (uVar2 < uVar8);
  }
LAB_01649ff0:
  if (cVar1 == '\0') {
    *param_1 = 0;
    param_1[1] = 4;
    param_1[2] = 0;
    param_1[3] = 1;
LAB_0164a044:
    FUN_0134aee0(*param_2,param_2[1],4,4);
    return;
  }
  if (cVar1 == -1) {
    local_38 = *param_2;
    uStack_34 = param_2[1];
    uStack_30 = param_2[2];
    FUN_016465bc(auStack_24,*(undefined4 *)(param_3 + 4),uVar10);
    uVar9 = 2 - uVar9;
  }
  else {
    local_38 = *param_2;
    uStack_34 = param_2[1];
    uStack_30 = param_2[2];
    FUN_016464c8(auStack_24,&local_38,*(undefined4 *)(param_3 + 4),uVar10);
  }
LAB_0164a088:
  FUN_016498e0(param_1,uVar9,auStack_24);
  return;
}


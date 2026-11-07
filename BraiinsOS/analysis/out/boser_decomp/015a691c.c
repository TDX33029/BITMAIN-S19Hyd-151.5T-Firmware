// FUN_015a691c @ 015a691c size=480 calls_out=5 calls_in=2
// strings: 

void FUN_015a691c(int *param_1)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  int iVar10;
  int local_24;
  undefined1 *local_20;
  int local_1c;
  
  if (*param_1 != param_1[1]) {
    *param_1 = param_1[1];
  }
  *param_1 = 1;
  param_1[1] = 1;
  if (param_1[4] == 0) {
    FUN_015a5fc0(param_1[2],param_1 + 5);
    return;
  }
  iVar6 = param_1[2];
  iVar10 = *(int *)(iVar6 + 8);
  if (param_1[3] == iVar10) {
    puVar1 = (undefined1 *)param_1[6];
    puVar3 = (undefined1 *)param_1[8];
  }
  else {
    iVar8 = param_1[3] - iVar10;
    puVar3 = (undefined1 *)param_1[8];
    puVar4 = (undefined1 *)param_1[6];
    puVar2 = (undefined1 *)(*(int *)(iVar6 + 4) + iVar10);
    do {
      if (puVar4 == puVar3) {
        return;
      }
      puVar1 = puVar4 + 1;
      iVar8 = iVar8 + -1;
      *puVar2 = *puVar4;
      iVar10 = *(int *)(iVar6 + 8);
      param_1[6] = (int)puVar1;
      *(int *)(iVar6 + 8) = iVar10 + 1;
      puVar4 = puVar1;
      puVar2 = puVar2 + 1;
    } while (iVar8 != 0);
  }
  if (puVar3 == puVar1) {
    puVar4 = puVar1;
  }
  else {
    FUN_015a6e40(param_1,(int)puVar3 - (int)puVar1);
    iVar6 = param_1[2];
    puVar1 = (undefined1 *)param_1[6];
    puVar4 = (undefined1 *)param_1[8];
    iVar10 = *(int *)(iVar6 + 8);
    if (param_1[3] != iVar10) {
      iVar8 = param_1[3] - iVar10;
      puVar2 = puVar1;
      puVar3 = (undefined1 *)(*(int *)(iVar6 + 4) + iVar10);
      do {
        if (puVar2 == puVar4) {
          return;
        }
        puVar1 = puVar2 + 1;
        iVar8 = iVar8 + -1;
        *puVar3 = *puVar2;
        iVar10 = *(int *)(iVar6 + 8);
        param_1[6] = (int)puVar1;
        *(int *)(iVar6 + 8) = iVar10 + 1;
        puVar2 = puVar1;
        puVar3 = puVar3 + 1;
      } while (iVar8 != 0);
    }
  }
  iVar6 = (int)puVar4 - (int)puVar1;
  uVar9 = 0;
  if (iVar6 < 0) {
LAB_015a6a30:
                    /* WARNING: Subroutine does not return */
    FUN_00664620(uVar9,iVar6);
  }
  if (iVar6 == 0) {
    local_20 = &DAT_00000001;
    iVar6 = 0;
  }
  else {
    uVar9 = 1;
    local_20 = (undefined1 *)FUN_01298504(iVar6,1);
    if (local_20 == (undefined1 *)0x0) goto LAB_015a6a30;
  }
  local_1c = 0;
  local_24 = iVar6;
  FUN_015a5fc0(&local_24,param_1 + 5);
  iVar10 = local_1c;
  puVar4 = local_20;
  iVar6 = local_24;
  if (local_1c != 0) {
    FUN_015a6e40(param_1,local_1c);
    iVar8 = param_1[2];
    iVar7 = *(int *)(iVar8 + 8);
    if (param_1[3] != iVar7) {
      iVar5 = param_1[3] - iVar7;
      puVar2 = (undefined1 *)(*(int *)(iVar8 + 4) + iVar7);
      puVar3 = puVar4;
      do {
        if (iVar10 == 0) break;
        iVar10 = iVar10 + -1;
        *puVar2 = *puVar3;
        iVar5 = iVar5 + -1;
        *(int *)(iVar8 + 8) = *(int *)(iVar8 + 8) + 1;
        puVar2 = puVar2 + 1;
        puVar3 = puVar3 + 1;
      } while (iVar5 != 0);
    }
  }
  FUN_0134bd64(iVar6,puVar4);
  return;
}


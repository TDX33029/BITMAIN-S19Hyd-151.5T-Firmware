// FUN_016495e8 @ 016495e8 size=540 calls_out=4 calls_in=1
// strings: 

void FUN_016495e8(undefined4 *param_1,int param_2,int param_3)

{
  undefined1 uVar1;
  bool bVar3;
  char cVar2;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  undefined4 uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  bool bVar12;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 local_34;
  undefined1 auStack_30 [12];
  
  cVar2 = *(char *)(param_3 + 0xc);
  if (cVar2 == '\x01') {
    uVar1 = *(undefined1 *)(param_2 + 0xc);
    FUN_0164a9cc(param_1,*(undefined4 *)(param_2 + 4),*(undefined4 *)(param_2 + 8));
    *(undefined1 *)(param_1 + 3) = uVar1;
    return;
  }
  uVar11 = (uint)*(byte *)(param_2 + 0xc);
  if (uVar11 == 0) {
    if (cVar2 != '\0') goto LAB_01649670;
  }
  else {
    if (uVar11 == 1) {
      FUN_0164a9cc(&local_40,*(undefined4 *)(param_3 + 4),*(undefined4 *)(param_3 + 8));
      local_34 = CONCAT31(local_34._1_3_,'\x02' - cVar2);
      *param_1 = local_40;
      param_1[1] = uStack_3c;
      param_1[2] = uStack_38;
      param_1[3] = local_34;
      return;
    }
    if (cVar2 == '\0') {
LAB_01649670:
      uVar9 = *(uint *)(param_3 + 8);
      uVar10 = *(uint *)(param_2 + 8);
      if (uVar10 < uVar9) {
        FUN_0164a9cc(&local_40,*(undefined4 *)(param_3 + 4),uVar9);
        uVar8 = *(undefined4 *)(param_2 + 4);
        uVar9 = uVar10;
      }
      else {
        FUN_0164a9cc(&local_40,*(undefined4 *)(param_2 + 4),uVar10);
        uVar8 = *(undefined4 *)(param_3 + 4);
      }
      FUN_01646814(auStack_30,&local_40,uVar8,uVar9);
      goto LAB_016497f8;
    }
  }
  uVar10 = *(uint *)(param_3 + 8);
  uVar9 = *(uint *)(param_2 + 8);
  bVar12 = uVar9 < uVar10;
  bVar3 = !bVar12 && uVar9 != uVar10;
  if (uVar9 == uVar10) {
    iVar4 = uVar9 << 2;
    do {
      iVar5 = *(int *)(param_3 + 4) + iVar4;
      if (iVar4 == 0) {
        cVar2 = '\0';
        if (*(int *)(param_3 + 4) != iVar5) {
          cVar2 = -1;
        }
        goto LAB_01649758;
      }
      uVar7 = *(uint *)(*(int *)(param_2 + 4) + -4 + iVar4);
      iVar4 = iVar4 + -4;
      uVar6 = *(uint *)(iVar5 + -4);
      bVar12 = uVar7 < uVar6;
    } while (uVar7 == uVar6);
    bVar3 = false;
    if (!bVar12) {
      bVar3 = true;
    }
  }
  cVar2 = bVar3 - bVar12;
LAB_01649758:
  if (cVar2 == '\0') {
    *param_1 = 0;
    param_1[1] = 4;
    param_1[2] = 0;
    param_1[3] = 1;
    return;
  }
  if (cVar2 == -1) {
    FUN_0164a9cc(&local_40,*(undefined4 *)(param_3 + 4),uVar10);
    FUN_016464c8(auStack_30,&local_40,*(undefined4 *)(param_2 + 4),uVar9);
    uVar11 = 2 - uVar11;
  }
  else {
    uVar8 = *(undefined4 *)(param_3 + 4);
    FUN_0164a9cc(&local_40,*(undefined4 *)(param_2 + 4),uVar9);
    FUN_016464c8(auStack_30,&local_40,uVar8,uVar10);
  }
LAB_016497f8:
  FUN_016498e0(param_1,uVar11,auStack_30);
  return;
}


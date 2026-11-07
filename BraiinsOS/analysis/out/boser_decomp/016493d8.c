// FUN_016493d8 @ 016493d8 size=524 calls_out=4 calls_in=1
// strings: 

void FUN_016493d8(undefined4 *param_1,int param_2,int param_3)

{
  char cVar1;
  undefined1 uVar2;
  bool bVar4;
  char cVar3;
  char cVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  bool bVar13;
  undefined1 auStack_3c [12];
  undefined1 auStack_30 [12];
  
  cVar1 = *(char *)(param_3 + 0xc);
  if (cVar1 == '\x01') {
    uVar2 = *(undefined1 *)(param_2 + 0xc);
    FUN_0164a9cc(param_1,*(undefined4 *)(param_2 + 4),*(undefined4 *)(param_2 + 8));
    *(undefined1 *)(param_1 + 3) = uVar2;
    return;
  }
  cVar5 = *(char *)(param_2 + 0xc);
  if (cVar5 == '\0') {
    if (cVar1 != '\0') goto LAB_01649450;
  }
  else {
    if (cVar5 == '\x01') {
      FUN_0164a9cc(param_1,*(undefined4 *)(param_3 + 4),*(undefined4 *)(param_3 + 8));
      *(char *)(param_1 + 3) = cVar1;
      return;
    }
    if (cVar1 == '\0') {
LAB_01649450:
      uVar11 = *(uint *)(param_3 + 8);
      uVar12 = *(uint *)(param_2 + 8);
      bVar13 = uVar12 < uVar11;
      bVar4 = !bVar13 && uVar12 != uVar11;
      if (uVar12 == uVar11) {
        iVar6 = uVar12 << 2;
        do {
          iVar8 = *(int *)(param_3 + 4) + iVar6;
          if (iVar6 == 0) {
            cVar3 = '\0';
            if (*(int *)(param_3 + 4) != iVar8) {
              cVar3 = -1;
            }
            goto LAB_01649538;
          }
          uVar10 = *(uint *)(*(int *)(param_2 + 4) + -4 + iVar6);
          iVar6 = iVar6 + -4;
          uVar9 = *(uint *)(iVar8 + -4);
          bVar13 = uVar10 < uVar9;
        } while (uVar10 == uVar9);
        bVar4 = false;
        if (!bVar13) {
          bVar4 = true;
        }
      }
      cVar3 = bVar4 - bVar13;
LAB_01649538:
      if (cVar3 == '\0') {
        *param_1 = 0;
        param_1[1] = 4;
        param_1[2] = 0;
        param_1[3] = 1;
        return;
      }
      if (cVar3 == -1) {
        FUN_0164a9cc(auStack_30,*(undefined4 *)(param_3 + 4),uVar11);
        FUN_016464c8(auStack_3c,auStack_30,*(undefined4 *)(param_2 + 4),uVar12);
        cVar5 = cVar1;
      }
      else {
        uVar7 = *(undefined4 *)(param_3 + 4);
        FUN_0164a9cc(auStack_30,*(undefined4 *)(param_2 + 4),uVar12);
        FUN_016464c8(auStack_3c,auStack_30,uVar7,uVar11);
      }
      goto LAB_016495d8;
    }
  }
  uVar12 = *(uint *)(param_3 + 8);
  uVar11 = *(uint *)(param_2 + 8);
  if (uVar11 < uVar12) {
    FUN_0164a9cc(auStack_30,*(undefined4 *)(param_3 + 4),uVar12);
    uVar7 = *(undefined4 *)(param_2 + 4);
    uVar12 = uVar11;
  }
  else {
    FUN_0164a9cc(auStack_30,*(undefined4 *)(param_2 + 4),uVar11);
    uVar7 = *(undefined4 *)(param_3 + 4);
  }
  FUN_01646814(auStack_3c,auStack_30,uVar7,uVar12);
LAB_016495d8:
  FUN_016498e0(param_1,cVar5,auStack_3c);
  return;
}


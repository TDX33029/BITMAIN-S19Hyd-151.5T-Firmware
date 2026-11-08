// FUN_006a4e28 @ 006a4e28 size=460 calls_out=3 calls_in=2
// strings: 

uint FUN_006a4e28(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  bool bVar9;
  
  if (param_1 == param_2) {
LAB_006a4fa8:
    uVar5 = 1;
  }
  else {
    uVar6 = *(uint *)(param_2 + 0x10);
    uVar5 = *(uint *)(param_1 + 0x10);
    bVar9 = (uVar6 & 0xfffffffe) != 0x80000002;
    if ((uVar5 < 0x80000000) || ((uVar5 & 0xfffffffe) == 0x80000002)) {
      if (uVar6 < 0x80000000 || !bVar9) {
        uVar6 = 2;
        if ((int)uVar5 < 0) {
          uVar6 = uVar5 ^ 0x80000000;
        }
        if (uVar6 == 2) {
          iVar2 = 0x30;
        }
        else {
          if (uVar6 != 3) {
            return 0;
          }
          iVar2 = 0x20;
        }
        iVar8 = *(int *)(param_1 + iVar2 + 0x14);
        iVar2 = *(int *)(param_1 + iVar2 + 0x18) << 4;
        do {
          if (iVar2 == 0) {
            return 0;
          }
          iVar3 = FUN_006bf678(param_2,*(undefined4 *)(iVar8 + 4),*(undefined4 *)(iVar8 + 8));
          iVar2 = iVar2 + -0x10;
          iVar8 = iVar8 + 0x10;
        } while (iVar3 == 0);
        goto LAB_006a4fa8;
      }
      uVar7 = 2;
      if ((int)uVar5 < 0) {
        uVar7 = uVar5 ^ 0x80000000;
      }
      uVar4 = *(undefined4 *)(param_2 + *(int *)(uVar6 * 4 + 0x534c08));
      if (uVar7 == 3) {
        param_2 = param_1 + 0x20;
        goto LAB_006a4fe8;
      }
      if (uVar7 == 2) {
        param_2 = param_1 + 0x30;
        goto LAB_006a4fe8;
      }
      bVar9 = uVar7 != 1;
      if (!bVar9) {
        uVar7 = *(uint *)(param_1 + 0x60);
      }
      if (bVar9 || uVar7 != *(uint *)(param_2 + *(int *)(uVar6 * 4 + 0x534c20))) {
        return 0;
      }
      uVar4 = *(undefined4 *)(param_1 + 0x5c);
    }
    else {
      if (0x7fffffff < uVar6 && bVar9) {
        return 0;
      }
      uVar7 = 2;
      if ((int)uVar6 < 0) {
        uVar7 = uVar6 ^ 0x80000000;
      }
      uVar4 = *(undefined4 *)(param_1 + *(int *)(uVar5 * 4 + 0x534bd8));
      piVar1 = (int *)(param_1 + *(int *)(uVar5 * 4 + 0x534bf0));
      if (uVar7 == 3) {
        param_2 = param_2 + 0x20;
LAB_006a4fe8:
        uVar5 = FUN_006e4fc4(param_2,uVar4);
        return uVar5;
      }
      if (uVar7 == 2) {
        param_2 = param_2 + 0x30;
        goto LAB_006a4fe8;
      }
      if (uVar7 == 1) {
        param_1 = *(int *)(param_2 + 0x60);
      }
      if (uVar7 != 1 || param_1 != *piVar1) {
        return 0;
      }
      uVar4 = *(undefined4 *)(param_2 + 0x5c);
    }
    iVar2 = thunk_FUN_01bed842(uVar4);
    uVar5 = (uint)(iVar2 == 0);
  }
  return uVar5;
}


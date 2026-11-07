// FUN_012a8ae0 @ 012a8ae0 size=316 calls_out=3 calls_in=1
// strings: 

void FUN_012a8ae0(int param_1,int param_2,int *param_3)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 *puVar8;
  int iVar9;
  int iVar10;
  int local_30;
  int local_2c;
  int local_28;
  
  local_30 = param_2;
  do {
    iVar3 = *(int *)(param_1 + 0x48);
    puVar8 = (undefined4 *)(iVar3 + 0x118);
    for (iVar10 = *(int *)(param_1 + 0x4c) * 0x134; iVar10 != 0; iVar10 = iVar10 + -0x134) {
      if ((*(byte *)(iVar3 + 0x11c) & 2) != 0) {
        iVar5 = param_3[2];
        uVar7 = puVar8[-1];
        uVar4 = *puVar8;
        if (iVar5 == *param_3) {
          FUN_006520b4(param_3,iVar5,1,4,8);
        }
        param_3[2] = iVar5 + 1;
        puVar1 = (undefined4 *)(param_3[1] + iVar5 * 8);
        *puVar1 = uVar7;
        puVar1[1] = uVar4;
      }
      iVar3 = iVar3 + 0x134;
      puVar8 = puVar8 + 0x4d;
    }
    local_30 = *(int *)(local_30 + 0x18);
    if (local_30 == 0) {
      return;
    }
    iVar3 = *(int *)(param_1 + 0x60);
    iVar10 = *(int *)(param_1 + 100);
    uVar4 = *(undefined4 *)(local_30 + 4);
    iVar9 = *(int *)(local_30 + 8);
    iVar5 = 0;
    local_30 = local_30 + 0xc;
    do {
      if (iVar10 * 0x16c == iVar5) {
        return;
      }
      iVar6 = iVar3 + iVar5;
      if (iVar9 == *(int *)(iVar6 + 0x120)) {
        param_1 = iVar3 + iVar5;
        iVar2 = thunk_FUN_01bed842(uVar4,*(undefined4 *)(param_1 + 0x11c),iVar9);
        if (iVar2 == 0) break;
      }
      local_2c = *(int *)(iVar6 + 0x24);
      local_28 = local_2c + *(int *)(iVar6 + 0x28) * 0xc;
      iVar2 = FUN_012b10f8(&local_2c,uVar4,iVar9);
      iVar5 = iVar5 + 0x16c;
      param_1 = iVar6;
    } while (iVar2 == 0);
  } while( true );
}


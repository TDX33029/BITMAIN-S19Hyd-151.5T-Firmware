// FUN_010977d4 @ 010977d4 size=500 calls_out=1 calls_in=3
// strings: 

void FUN_010977d4(int *param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  code *pcVar3;
  uint uVar4;
  uint uVar5;
  undefined4 *puVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  int local_88;
  int iStack_84;
  int iStack_80;
  int local_78;
  int iStack_74;
  int iStack_70;
  int iStack_6c;
  int local_68;
  int iStack_64;
  int iStack_60;
  int iStack_5c;
  int local_58;
  int iStack_54;
  int iStack_50;
  int iStack_4c;
  
  if ((char)param_2[7] != '\0') {
    *param_1 = -0x80000000;
    return;
  }
  uVar10 = param_2[5];
  iVar7 = param_2[4];
  uVar4 = param_2[6];
  iVar2 = param_2[3];
LAB_01097828:
  uVar5 = uVar10;
  if (uVar10 < uVar4) {
    uVar5 = uVar4;
  }
  do {
    iVar11 = *param_2;
    if (iVar11 == -0x80000000) {
      if (uVar4 == uVar5) goto LAB_01097968;
      (**(code **)(iVar7 + 0x10))(&local_58,iVar2,uVar4);
    }
    else {
      if (param_2[2] != 0) break;
      if (uVar4 == uVar5) {
LAB_01097968:
        *param_1 = -0x80000000;
        *(undefined1 *)(param_2 + 7) = 1;
        return;
      }
      (**(code **)(iVar7 + 0x10))(&local_58,iVar2,uVar4);
      iVar8 = param_2[1];
      puVar6 = (undefined4 *)(iVar8 + 4);
      for (iVar9 = param_2[2]; iVar9 != 0; iVar9 = iVar9 + -1) {
        if (puVar6[-1] != 0) {
          thunk_FUN_016d3fb4(*puVar6);
        }
        puVar6 = puVar6 + 3;
      }
      if (iVar11 != 0) {
        thunk_FUN_016d3fb4(iVar8);
      }
    }
    uVar4 = uVar4 + 1;
    param_2[6] = uVar4;
    *param_2 = local_58;
    param_2[1] = iStack_54;
    param_2[2] = iStack_50;
  } while( true );
  iVar11 = param_2[2] + -1;
  param_2[2] = iVar11;
  piVar1 = (int *)(param_2[1] + iVar11 * 0xc);
  iVar11 = *piVar1;
  if (iVar11 != -0x80000000) {
    iVar9 = piVar1[1];
    iVar8 = piVar1[2];
    pcVar3 = *(code **)(iVar7 + 0xc);
    *(int *)((uint)&local_88 | 4) = iVar9;
    ((int *)((uint)&local_88 | 4))[1] = iVar8;
    local_88 = iVar11;
    (*pcVar3)(&local_78,iVar2,&local_88);
    if (local_68 != -0x80000000) {
      *param_1 = local_88;
      param_1[1] = iStack_84;
      param_1[2] = iStack_80;
      param_1[3] = iStack_4c;
      param_1[4] = local_78;
      param_1[5] = iStack_74;
      param_1[6] = iStack_70;
      param_1[7] = iStack_6c;
      param_1[8] = local_68;
      param_1[9] = iStack_64;
      param_1[10] = iStack_60;
      param_1[0xb] = iStack_5c;
      return;
    }
    if (iVar11 != 0) {
      thunk_FUN_016d3fb4(iVar9);
    }
  }
  goto LAB_01097828;
}


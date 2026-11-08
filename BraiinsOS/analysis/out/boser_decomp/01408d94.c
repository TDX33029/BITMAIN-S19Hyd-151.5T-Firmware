// FUN_01408d94 @ 01408d94 size=496 calls_out=2 calls_in=2
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_01408d94(int *param_1,int *param_2)

{
  int *piVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined4 *puVar10;
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
  iVar6 = param_2[4];
  uVar2 = param_2[5];
  iVar9 = param_2[3];
  uVar3 = param_2[6];
LAB_01408de8:
  uVar5 = uVar2;
  if (uVar2 < uVar3) {
    uVar5 = uVar3;
  }
  do {
    iVar4 = *param_2;
    if (iVar4 == -0x80000000) {
      if (uVar3 == uVar5) {
LAB_01408f28:
        *param_1 = -0x80000000;
        *(undefined1 *)(param_2 + 7) = 1;
        return;
      }
      (**(code **)(iVar6 + 0x10))(&local_58,iVar9,uVar3);
    }
    else {
      if (param_2[2] != 0) break;
      if (uVar3 == uVar5) goto LAB_01408f28;
      (**(code **)(iVar6 + 0x10))(&local_58,iVar9,uVar3);
      iVar7 = param_2[1];
      puVar10 = (undefined4 *)(iVar7 + 4);
      for (iVar8 = param_2[2]; iVar8 != 0; iVar8 = iVar8 + -1) {
        FUN_019bb7e0(puVar10[-1],*puVar10);
        puVar10 = puVar10 + 3;
      }
      FUN_0134c054(iVar4,iVar7,4,0xc);
    }
    uVar3 = uVar3 + 1;
    *param_2 = local_58;
    param_2[1] = iStack_54;
    param_2[2] = iStack_50;
    param_2[6] = uVar3;
  } while( true );
  iVar4 = param_2[2] + -1;
  param_2[2] = iVar4;
  piVar1 = (int *)(param_2[1] + iVar4 * 0xc);
  iVar4 = *piVar1;
  if (iVar4 != -0x80000000) {
    iVar7 = piVar1[1];
    iVar8 = piVar1[2];
    *(int *)((uint)&local_88 | 4) = iVar7;
    ((int *)((uint)&local_88 | 4))[1] = iVar8;
    local_88 = iVar4;
    (**(code **)(iVar6 + 0xc))(&local_78,iVar9,&local_88);
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
    FUN_019bb7e0(iVar4,iVar7);
  }
  goto LAB_01408de8;
}


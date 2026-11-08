// FUN_012b345c @ 012b345c size=848 calls_out=6 calls_in=4
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_012b345c(uint *param_1,uint param_2,int param_3,undefined4 *param_4,uint param_5)

{
  uint *puVar1;
  undefined2 uVar2;
  longlong lVar3;
  uint uVar4;
  uint extraout_r2;
  uint extraout_r2_00;
  uint uVar5;
  uint uVar6;
  undefined4 uVar7;
  uint uVar8;
  undefined4 *puVar9;
  int iVar10;
  uint uVar11;
  bool bVar12;
  uint local_30;
  uint local_2c;
  int local_28;
  
  if (param_3 == 0) {
    *param_1 = 0;
    param_1[1] = 1;
    param_1[2] = 0;
    return;
  }
  param_3 = param_3 * 0xc;
  uVar11 = param_3 - 0xc;
  lVar3 = (ulonglong)((uVar11 >> 2) * -0x55555555) * (ulonglong)param_5;
  uVar6 = (uint)lVar3;
  if ((int)((ulonglong)lVar3 >> 0x20) == 0) {
    iVar10 = param_2 + 0xc;
    uVar4 = param_2;
    do {
      if (param_3 == 0) {
        uVar7 = 0;
        if ((int)uVar6 < 0) {
LAB_012b34ec:
                    /* WARNING: Subroutine does not return */
          FUN_00664620(uVar7,uVar6);
        }
        uVar4 = 0;
        if (uVar6 == 0) {
          local_2c = 1;
          local_30 = 0;
        }
        else {
          uVar7 = 1;
          local_2c = FUN_01298504(uVar6,1);
          local_30 = uVar6;
          if (local_2c == 0) goto LAB_012b34ec;
        }
        uVar5 = *(uint *)(param_2 + 4);
        local_28 = 0;
        FUN_01ac6d2c(&local_30,uVar5,uVar5 + *(int *)(param_2 + 8));
        uVar8 = uVar6 - local_28;
        puVar9 = (undefined4 *)(local_2c + local_28);
        switch(param_5) {
        case 0:
          goto switchD_012b358c_caseD_0;
        case 1:
          goto switchD_012b358c_caseD_1;
        case 2:
          goto switchD_012b358c_caseD_2;
        case 3:
          goto switchD_012b358c_caseD_3;
        case 4:
          goto switchD_012b358c_caseD_4;
        }
        goto switchD_012b358c_default;
      }
      puVar1 = (uint *)(uVar4 + 8);
      param_3 = param_3 + -0xc;
      uVar4 = uVar4 + 0xc;
      bVar12 = CARRY4(*puVar1,uVar6);
      uVar6 = *puVar1 + uVar6;
    } while (!bVar12);
  }
                    /* WARNING: Subroutine does not return */
  FUN_0130739c(&DAT_005324b9,0x35,&DAT_01d2f704);
switchD_012b358c_default:
  if (uVar11 == 0) goto LAB_012b368c;
  if (uVar8 < param_5) goto LAB_012b37a8;
  uVar7 = *(undefined4 *)(iVar10 + 4);
  uVar4 = *(uint *)(iVar10 + 8);
  FUN_01bed4e2(puVar9,param_4);
  if (uVar8 - param_5 < uVar4) goto LAB_012b37a8;
  iVar10 = iVar10 + 0xc;
  FUN_01bed4e2((undefined1 *)((int)puVar9 + param_5),uVar7,uVar4);
  uVar8 = (uVar8 - param_5) - uVar4;
  puVar9 = (undefined4 *)((undefined1 *)((int)puVar9 + param_5) + uVar4);
  uVar11 = uVar11 - 0xc;
  goto switchD_012b358c_default;
switchD_012b358c_caseD_4:
  if (uVar11 == 0) goto LAB_012b368c;
  if (uVar8 >= 4) {
    uVar4 = uVar8 - 4;
    param_5 = *(uint *)(iVar10 + 4);
    param_2 = *(uint *)(iVar10 + 8);
    *puVar9 = *param_4;
  }
  if (uVar8 < 4 || uVar4 < param_2) goto LAB_012b37a8;
  iVar10 = iVar10 + 0xc;
  FUN_01bed4e2(puVar9 + 1,param_5,param_2);
  uVar8 = uVar4 - param_2;
  puVar9 = (undefined4 *)((int)(puVar9 + 1) + param_2);
  uVar11 = uVar11 - 0xc;
  param_5 = extraout_r2;
  goto switchD_012b358c_caseD_4;
switchD_012b358c_caseD_3:
  if (uVar11 == 0) goto LAB_012b368c;
  if (2 < uVar8) {
    uVar5 = uVar8 - 3;
    uVar4 = *(uint *)(iVar10 + 4);
    param_2 = *(uint *)(iVar10 + 8);
    uVar2 = *(undefined2 *)param_4;
    *(undefined1 *)((int)puVar9 + 2) = *(undefined1 *)((int)param_4 + 2);
    *(undefined2 *)puVar9 = uVar2;
  }
  if (2 >= uVar8 || uVar5 < param_2) goto LAB_012b37a8;
  iVar10 = iVar10 + 0xc;
  FUN_01bed4e2((undefined1 *)((int)puVar9 + 3),uVar4,param_2);
  uVar8 = uVar5 - param_2;
  puVar9 = (undefined4 *)((undefined1 *)((int)puVar9 + 3) + param_2);
  uVar11 = uVar11 - 0xc;
  goto switchD_012b358c_caseD_3;
switchD_012b358c_caseD_2:
  if (uVar11 == 0) goto LAB_012b368c;
  if (uVar8 >= 2) {
    uVar4 = uVar8 - 2;
    param_5 = *(uint *)(iVar10 + 4);
    param_2 = *(uint *)(iVar10 + 8);
    *(undefined2 *)puVar9 = *(undefined2 *)param_4;
  }
  if (uVar8 < 2 || uVar4 < param_2) goto LAB_012b37a8;
  iVar10 = iVar10 + 0xc;
  FUN_01bed4e2((undefined2 *)((int)puVar9 + 2),param_5,param_2);
  uVar8 = uVar4 - param_2;
  puVar9 = (undefined4 *)((int)puVar9 + 2 + param_2);
  uVar11 = uVar11 - 0xc;
  param_5 = extraout_r2_00;
  goto switchD_012b358c_caseD_2;
switchD_012b358c_caseD_1:
  if (uVar11 == 0) goto LAB_012b368c;
  if (uVar8 == 0) goto LAB_012b37a8;
  uVar4 = *(uint *)(iVar10 + 8);
  uVar7 = *(undefined4 *)(iVar10 + 4);
  *(undefined1 *)puVar9 = *(undefined1 *)param_4;
  if (uVar8 - 1 < uVar4) goto LAB_012b37a8;
  iVar10 = iVar10 + 0xc;
  FUN_01bed4e2((undefined1 *)((int)puVar9 + 1),uVar7,uVar4);
  uVar8 = (uVar8 - 1) - uVar4;
  puVar9 = (undefined4 *)((undefined1 *)((int)puVar9 + 1) + uVar4);
  uVar11 = uVar11 - 0xc;
  goto switchD_012b358c_caseD_1;
switchD_012b358c_caseD_0:
  if (uVar11 == 0) {
LAB_012b368c:
    *param_1 = local_30;
    param_1[1] = local_2c;
    param_1[2] = uVar6 - uVar8;
    return;
  }
  uVar4 = *(uint *)(iVar10 + 8);
  if (uVar8 < uVar4) {
LAB_012b37a8:
                    /* WARNING: Subroutine does not return */
    FUN_012fb100(&DAT_0053349c,0x13,&DAT_01d2f6f4);
  }
  FUN_01bed4e2(puVar9,*(undefined4 *)(iVar10 + 4),uVar4);
  uVar8 = uVar8 - uVar4;
  puVar9 = (undefined4 *)((int)puVar9 + uVar4);
  uVar11 = uVar11 - 0xc;
  iVar10 = iVar10 + 0xc;
  goto switchD_012b358c_caseD_0;
}


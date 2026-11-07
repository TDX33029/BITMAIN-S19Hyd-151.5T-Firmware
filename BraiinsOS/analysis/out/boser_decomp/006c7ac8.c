// FUN_006c7ac8 @ 006c7ac8 size=528 calls_out=10 calls_in=2
// strings: 

void FUN_006c7ac8(int param_1,int param_2,undefined4 *param_3)

{
  int *piVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  code *pcVar6;
  int *piVar7;
  int unaff_r9;
  int iVar8;
  bool bVar9;
  undefined8 uVar10;
  int local_88;
  int local_84;
  undefined4 local_74;
  int local_70;
  undefined4 local_4c;
  undefined4 *local_48;
  undefined4 local_44;
  undefined4 local_40;
  int iStack_3c;
  int iStack_38;
  undefined4 local_30;
  int local_2c;
  int local_28;
  
  if (*(int *)(param_1 + 8) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb0cc(&DAT_01c05e74);
  }
  iVar4 = *(int *)(param_1 + 8) + -1;
  piVar1 = *(int **)(param_2 + 0x10);
  uVar2 = *(uint *)(param_2 + 0x14);
  piVar7 = (int *)(*(int *)(param_1 + 4) + iVar4 * 4);
  iVar8 = *piVar7;
  *(int *)(param_1 + 8) = iVar4;
  if (1 < uVar2) {
    piVar1 = piVar1 + (uVar2 - 2);
    if (piVar1 != (int *)0x0) {
      unaff_r9 = *piVar1;
    }
    if ((piVar1 != (int *)0x0 && unaff_r9 != 0) &&
       (piVar1 = *(int **)(unaff_r9 + 0x10), piVar1 == (int *)&DAT_80000001)) {
      uVar10 = CONCAT44(param_3[0x10],param_3[0xf] + 8);
      do {
        do {
          pcVar6 = (code *)((ulonglong)uVar10 >> 0x20);
          uVar3 = (undefined4)uVar10;
          uVar10 = FUN_00700b3c(uVar3,pcVar6,0x21);
        } while ((int)uVar10 != 0);
        uVar10 = FUN_006a4c58(uVar3,pcVar6);
      } while ((int)uVar10 != 0);
      piVar1 = (int *)FUN_006e05dc(unaff_r9 + 0x18,uVar3,pcVar6);
      if (piVar1 != (int *)0x0) {
        pcVar6 = (code *)piVar1[0xf];
      }
      if (piVar1 != (int *)0x0 && pcVar6 != (code *)0x0) {
        uVar3 = *(undefined4 *)(param_1 + 0x14);
        iVar5 = *(int *)(param_1 + 0x10);
        if (iVar5 == 0) {
          iVar5 = 8;
          uVar3 = 0;
        }
        (*pcVar6)(&local_88,param_2,iVar5,uVar3,param_3 + 2,iVar8);
        if (local_88 != 2) {
          local_48 = (undefined4 *)thunk_FUN_01be5118(8);
          if (local_48 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_0066439c(4,8);
          }
          uVar3 = param_3[1];
          *local_48 = *param_3;
          local_48[1] = uVar3;
          local_44 = 1;
          local_4c = 1;
          local_28 = 0;
          local_2c = 1;
          local_30 = 0;
          if (local_70 != 0) {
            FUN_0132b898(&local_30,0,local_70,1,1);
          }
          iVar4 = local_28;
          FUN_01bed4e2(local_2c + local_28,local_74,local_70);
          iStack_38 = iVar4 + local_70;
          local_40 = local_30;
          iStack_3c = local_2c;
          local_28 = iStack_38;
          FUN_006d6c3c(param_2,&local_4c);
          FUN_006c7d20(&local_88);
          return;
        }
        bVar9 = iVar4 == 0;
        piVar1 = (int *)0x2;
        if (!bVar9) {
          piVar1 = piVar7 + -1;
          bVar9 = piVar1 == (int *)0x0;
        }
        if (bVar9) {
                    /* WARNING: Subroutine does not return */
          FUN_012fb0cc(&DAT_01c05e84);
        }
        local_84 = *piVar1 + local_84;
        goto LAB_006c7b38;
      }
    }
  }
  bVar9 = iVar4 == 0;
  if (!bVar9) {
    piVar1 = piVar7 + -1;
    bVar9 = piVar1 == (int *)0x0;
  }
  if (bVar9) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb0cc(&DAT_01c05e94);
  }
  local_84 = iVar8 + *piVar1 + 1;
LAB_006c7b38:
  *piVar1 = local_84;
  return;
}


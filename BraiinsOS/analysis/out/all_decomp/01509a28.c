// FUN_01509a28 @ 01509a28 size=472 calls_out=5 calls_in=1
// strings: 

void FUN_01509a28(undefined4 *param_1,int *param_2)

{
  int iVar1;
  uint *puVar2;
  uint uVar3;
  undefined4 *puVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  int local_4c;
  uint local_48;
  uint local_44;
  int local_40;
  int local_3c;
  int local_38;
  undefined4 local_34;
  uint local_30;
  uint local_2c;
  uint local_28;
  
  FUN_0152d84c(&local_34,&DAT_018a7730,param_2);
  if ((char)local_34 != '\x18') {
    *(char *)(param_1 + 1) = (char)local_34;
    *(undefined1 *)((int)param_1 + 7) = local_34._3_1_;
    *(undefined2 *)((int)param_1 + 5) = local_34._1_2_;
    param_1[2] = local_30;
    param_1[3] = local_2c;
    *param_1 = 1;
    return;
  }
  uVar5 = param_2[1];
  uVar7 = param_2[2];
  if (uVar5 - uVar7 < local_30) {
    param_1[3] = 0;
    *param_1 = 1;
    param_1[1] = 0xb;
    return;
  }
  uVar3 = uVar7 + local_30;
  param_2[2] = uVar3;
  if ((CARRY4(uVar7,local_30)) || (uVar5 < uVar3)) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa36c(uVar7,uVar3,uVar5,&DAT_018a78f8);
  }
  iVar6 = 0;
  iVar9 = 4;
  local_4c = *param_2 + uVar7;
  local_44 = 0;
  local_48 = local_30;
  local_38 = 0;
  local_3c = 4;
  local_40 = 0;
  if (local_30 != 0) {
    do {
      iVar8 = local_38;
      FUN_015406c4(&local_34,&local_4c);
      uVar3 = local_28;
      uVar7 = local_2c;
      uVar5 = local_30;
      iVar1 = local_3c;
      if (local_34 != 0) {
        param_1[2] = local_2c;
        puVar4 = (undefined4 *)(local_3c + 4);
        *param_1 = 1;
        param_1[1] = local_30;
        param_1[3] = local_28;
        for (; iVar8 != 0; iVar8 = iVar8 + -1) {
          if (puVar4[-1] != 0) {
            thunk_FUN_016d3fb4(*puVar4);
          }
          puVar4 = puVar4 + 3;
        }
        if (local_40 == 0) {
          return;
        }
        thunk_FUN_016d3fb4(iVar1);
        return;
      }
      if (iVar8 == local_40) {
        FUN_0154e248(&local_40);
        iVar9 = local_3c;
      }
      local_38 = iVar8 + 1;
      puVar2 = (uint *)(iVar9 + iVar6);
      *puVar2 = uVar5;
      iVar6 = iVar6 + 0xc;
      puVar2[1] = uVar7;
      puVar2[2] = uVar3;
    } while (local_44 < local_48);
  }
  *param_1 = 0;
  param_1[1] = local_40;
  param_1[2] = local_3c;
  param_1[3] = local_38;
  return;
}


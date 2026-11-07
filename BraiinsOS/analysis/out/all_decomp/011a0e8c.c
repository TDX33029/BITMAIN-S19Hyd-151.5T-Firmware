// FUN_011a0e8c @ 011a0e8c size=440 calls_out=6 calls_in=1
// strings: 

void FUN_011a0e8c(int *param_1,int param_2,int param_3)

{
  int iVar1;
  undefined1 uVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  int local_50;
  int local_4c;
  undefined4 local_40;
  int local_3c;
  int local_38;
  int local_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  if (param_3 == 0) {
    local_4c = 8;
    local_50 = 0;
  }
  else {
    iVar1 = param_3 * 0x18;
    local_4c = thunk_FUN_016d4a50(iVar1);
    if (local_4c == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(8,iVar1);
    }
    iVar7 = 0;
    do {
      local_50 = param_3;
      if (iVar1 == iVar7) break;
      puVar3 = (undefined4 *)(param_2 + iVar7);
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
      switch(*(undefined1 *)puVar3) {
      case 0:
        uVar2 = 0;
        break;
      default:
        local_40 = *puVar3;
        local_3c = puVar3[1];
        local_38 = puVar3[2];
        local_34 = puVar3[3];
        uStack_30 = puVar3[4];
        uStack_2c = puVar3[5];
        goto LAB_011a0ef4;
      case 3:
        iVar5 = puVar3[3];
        uVar6 = puVar3[2];
        if (iVar5 == 0) {
          iVar4 = 1;
        }
        else {
          iVar4 = thunk_FUN_016d4a50(iVar5);
          if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00600af4(1,iVar5);
          }
        }
        FUN_016dd1aa(iVar4,uVar6,iVar5);
        uVar2 = 3;
        local_3c = iVar5;
        local_38 = iVar4;
        local_34 = iVar5;
        goto LAB_011a0fe0;
      case 4:
        FUN_0115c22c((uint)&local_40 | 4,puVar3 + 1);
        uVar2 = 4;
LAB_011a0fe0:
        local_40 = CONCAT31(local_40._1_3_,uVar2);
        goto LAB_011a0ef4;
      case 5:
        if (puVar3[3] == 0) {
          local_34 = 0;
          local_3c = 0;
        }
        else {
          if (puVar3[1] == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00faa444(&DAT_018ac52c);
          }
          FUN_011f809c((uint)&local_40 | 4,puVar3[1],puVar3[2]);
        }
        uVar2 = 5;
      }
      local_40 = CONCAT31(local_40._1_3_,uVar2);
LAB_011a0ef4:
      puVar3 = (undefined4 *)(local_4c + iVar7);
      iVar7 = iVar7 + 0x18;
      *puVar3 = local_40;
      puVar3[1] = local_3c;
      puVar3[2] = local_38;
      puVar3[3] = local_34;
      puVar3[4] = uStack_30;
      puVar3[5] = uStack_2c;
    } while (iVar1 != iVar7);
  }
  *param_1 = local_50;
  param_1[1] = local_4c;
  param_1[2] = param_3;
  return;
}


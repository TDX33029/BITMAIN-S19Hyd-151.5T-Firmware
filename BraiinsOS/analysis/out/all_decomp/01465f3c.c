// FUN_01465f3c @ 01465f3c size=292 calls_out=3 calls_in=1
// strings: 

void FUN_01465f3c(int param_1,int param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  undefined4 local_28;
  
  iVar7 = *(int *)(param_2 + 0x4c);
  uVar1 = *param_3;
  uVar4 = param_3[1];
  uVar5 = param_3[2];
  puVar2 = (undefined4 *)thunk_FUN_016d4a50(0x14);
  if (puVar2 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(4,0x14);
  }
  *puVar2 = 1;
  puVar2[1] = 1;
  puVar2[2] = uVar1;
  puVar2[3] = uVar4;
  puVar2[4] = uVar5;
  uVar1 = *(undefined4 *)(iVar7 + 0x20);
  uVar4 = *(undefined4 *)(iVar7 + 0x24);
  uVar5 = *(undefined4 *)(iVar7 + 0x28);
  uVar6 = *(undefined4 *)(iVar7 + 0x2c);
  local_28 = CONCAT13(local_28._3_1_,0x10000);
  local_28 = CONCAT22(local_28._2_2_,1);
  puVar3 = (undefined4 *)thunk_FUN_016d4a50(0x2c);
  if (puVar3 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(4,0x2c);
  }
  *puVar3 = 1;
  puVar3[1] = 1;
  puVar3[2] = 0;
  puVar3[3] = 8;
  puVar3[4] = 0;
  puVar3[5] = puVar2;
  puVar3[6] = uVar1;
  puVar3[7] = uVar4;
  puVar3[8] = uVar5;
  puVar3[9] = uVar6;
  puVar3[10] = local_28;
  uVar5 = *(undefined4 *)(param_2 + 0x44);
  uVar6 = *(undefined4 *)(param_2 + 0x48);
  FUN_016dd1aa(param_1,param_2,0x44);
  uVar1 = *(undefined4 *)(param_2 + 0x50);
  uVar4 = *(undefined4 *)(param_2 + 0x54);
  *(undefined4 **)(param_1 + 0x44) = puVar3;
  *(undefined **)(param_1 + 0x48) = &DAT_018a4598;
  *(undefined4 *)(param_1 + 0x4c) = uVar5;
  *(undefined4 *)(param_1 + 0x50) = uVar6;
  *(int *)(param_1 + 0x54) = iVar7;
  *(undefined4 *)(param_1 + 0x58) = uVar1;
  *(undefined4 *)(param_1 + 0x5c) = uVar4;
  return;
}


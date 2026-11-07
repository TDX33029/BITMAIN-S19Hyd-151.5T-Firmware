// FUN_00f6ff9c @ 00f6ff9c size=320 calls_out=4 calls_in=1
// strings: 

void FUN_00f6ff9c(int *param_1,undefined4 *param_2)

{
  int *piVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int *piVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  int iVar8;
  int local_40;
  int *local_3c;
  int local_38;
  int local_30;
  int local_2c;
  int iStack_28;
  
  puVar6 = (undefined4 *)*param_2;
  puVar5 = (undefined4 *)param_2[1];
  uVar7 = param_2[2];
  do {
    if (puVar6 == puVar5) {
      *param_1 = 0;
      param_1[1] = 4;
      param_1[2] = 0;
      return;
    }
    uVar2 = *puVar6;
    uVar3 = puVar6[1];
    puVar6 = puVar6 + 2;
    *param_2 = puVar6;
    FUN_00f804e8(&local_30,uVar7,uVar2,uVar3);
  } while (local_30 == -0x80000000);
  piVar1 = (int *)thunk_FUN_016d4a50(0x30);
  if (piVar1 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(4,0x30);
  }
  local_38 = 1;
  *piVar1 = local_30;
  piVar1[1] = local_2c;
  piVar1[2] = iStack_28;
  local_40 = 4;
  iVar8 = 1;
  local_3c = piVar1;
  while (puVar6 != puVar5) {
    FUN_00f804e8(&local_30,uVar7,*puVar6,puVar6[1]);
    puVar6 = puVar6 + 2;
    if (local_30 != -0x80000000) {
      if (iVar8 == local_40) {
        FUN_00f991dc(&local_40,iVar8,1,4,0xc);
        piVar1 = local_3c;
      }
      local_38 = iVar8 + 1;
      piVar4 = piVar1 + iVar8 * 3;
      *piVar4 = local_30;
      piVar4[1] = local_2c;
      piVar4[2] = iStack_28;
      iVar8 = local_38;
    }
  }
  *param_1 = local_40;
  param_1[1] = (int)local_3c;
  param_1[2] = local_38;
  return;
}


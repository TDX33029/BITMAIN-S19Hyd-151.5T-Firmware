// FUN_013c167c @ 013c167c size=404 calls_out=3 calls_in=1
// strings: assertion failed: m.is_empty()

void FUN_013c167c(undefined4 *param_1,int param_2,uint param_3,uint param_4,int param_5,int *param_6
                 )

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  uint local_2c;
  uint local_28;
  uint local_24;
  uint *local_20;
  code *local_1c;
  uint *local_18;
  undefined1 *local_14;
  
  if (param_3 < param_4) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa464("assertion failed: m.is_empty()",0x1e,&DAT_01893ec0);
  }
  uVar1 = *(uint *)(param_2 + 0x18);
  local_2c = uVar1 + 1;
  if (0xfffffffe < uVar1) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa444(&DAT_01893ed0);
  }
  local_28 = *(uint *)(param_2 + 0x1c);
  local_24 = *(uint *)(param_2 + 0x14);
  if ((local_28 + 1 <= uVar1) || (local_24 < local_28)) {
    local_1c = FUN_005ffff4;
    local_20 = &local_2c;
    local_18 = &local_24;
    local_14 = &LAB_00fac484;
                    /* WARNING: Subroutine does not return */
    FUN_00faa478(&DAT_0057a181,&local_20,&DAT_01893ee0);
  }
  *(uint *)(param_2 + 0x18) = local_2c;
  iVar2 = *param_6;
  if (iVar2 != 1) {
    param_6 = (int *)param_6[1];
  }
  piVar3 = *(int **)(*(int *)(param_5 + 0x10) + 0x58);
  if (iVar2 == 1) {
    param_6 = (int *)param_6[2];
  }
  if (((*(byte *)(piVar3 + 7) & 1) == 0) &&
     ((local_24 <= local_28 || ((*(byte *)(piVar3 + 8) & 2) == 0)))) {
    if (*piVar3 == 1) {
      uVar1 = local_28 - local_2c;
      if (local_28 < local_2c) {
        uVar1 = 0;
      }
      if ((uVar1 < (uint)piVar3[1]) ||
         ((((*(int *)(param_2 + 8) - 1U < 2 && ((*(byte *)(piVar3 + 8) & 2) != 0)) &&
           (piVar3[2] == 1)) && ((uint)piVar3[3] < uVar1)))) goto LAB_013c1724;
    }
    (**(code **)(*(int *)(param_5 + 0xc) + 0x24))
              (&local_20,
               *(int *)(param_5 + 8) + (*(int *)(*(int *)(param_5 + 0xc) + 8) - 1U & 0xfffffff8) + 8
               ,param_6);
  }
  else {
LAB_013c1724:
    local_20 = (uint *)0x0;
  }
  *param_1 = local_20;
  param_1[1] = local_1c;
  param_1[2] = local_18;
  param_1[3] = local_14;
  return;
}


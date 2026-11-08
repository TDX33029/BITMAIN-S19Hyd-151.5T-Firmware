// FUN_00e7b1d4 @ 00e7b1d4 size=108 calls_out=1 calls_in=0
// strings: 

void FUN_00e7b1d4(undefined4 *param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  piVar1 = (int *)*param_1;
  iVar2 = *piVar1;
  puVar3 = (undefined4 *)piVar1[1];
  *piVar1 = 0;
  if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa444(&DAT_018ac9c8);
  }
  (**(code **)(*(int *)(iVar2 + 0x2c) + 0x4c))
            (&local_30,
             *(int *)(iVar2 + 0x28) + (*(int *)(*(int *)(iVar2 + 0x2c) + 8) - 1U & 0xfffffff8) + 8);
  *puVar3 = local_30;
  puVar3[1] = uStack_2c;
  puVar3[2] = uStack_28;
  puVar3[3] = uStack_24;
  puVar3[4] = local_20;
  puVar3[5] = uStack_1c;
  puVar3[6] = uStack_18;
  puVar3[7] = uStack_14;
  return;
}


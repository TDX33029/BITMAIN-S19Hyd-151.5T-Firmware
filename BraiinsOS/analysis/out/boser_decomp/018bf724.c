// FUN_018bf724 @ 018bf724 size=188 calls_out=2 calls_in=2
// strings: 

void FUN_018bf724(int *param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  undefined4 *puVar3;
  int local_40;
  int iStack_3c;
  int iStack_38;
  int iStack_34;
  int iStack_30;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  uVar1 = *(uint *)(param_2 + 0x18);
  iVar2 = *(int *)(param_2 + 0x1c);
  if (iVar2 == -1 && (uint)(uVar1 < 0xfffffffe) <= -iVar2 - 1U) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb0ec(&DAT_0051de13,0x2b,&DAT_01d22910);
  }
  *(uint *)(param_2 + 0x18) = uVar1 + 1;
  *(uint *)(param_2 + 0x1c) = iVar2 + (uint)(0xfffffffe < uVar1);
  (**(code **)(*(int *)(param_2 + 0xc) + 0xc))(&local_40,*(undefined4 *)(param_2 + 8));
  if (local_40 == -0x80000000) {
    puVar3 = (undefined4 *)((uint)&local_40 | 4);
    uStack_28 = *puVar3;
    uStack_24 = puVar3[1];
    uStack_20 = puVar3[2];
    uStack_1c = puVar3[3];
                    /* WARNING: Subroutine does not return */
    FUN_013073dc(&DAT_00533467,0x2b,&uStack_28,&DAT_01d228e0);
  }
  *param_1 = local_40;
  param_1[1] = iStack_3c;
  param_1[2] = iStack_38;
  param_1[3] = iStack_34;
  param_1[4] = iStack_30;
  return;
}


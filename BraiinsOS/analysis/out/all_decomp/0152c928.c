// FUN_0152c928 @ 0152c928 size=220 calls_out=2 calls_in=3
// strings: 

void FUN_0152c928(undefined4 *param_1,int param_2)

{
  uint uVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  int iStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  uVar1 = *(uint *)(param_2 + 0x20);
  iVar4 = *(int *)(param_2 + 0x24);
  if ((iVar4 + 1U < (uint)(0xfffffffd < uVar1)) &&
     (uVar1 != *(uint *)(param_2 + 0x18) || iVar4 != *(int *)(param_2 + 0x1c))) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa464(&DAT_0040bf12,0x4c,&DAT_018a78c8);
  }
  *(uint *)(param_2 + 0x20) = uVar1 + 1;
  *(uint *)(param_2 + 0x24) = iVar4 + (uint)(0xfffffffe < uVar1);
  (**(code **)(*(int *)(param_2 + 0xc) + 0xc))(&local_58,*(undefined4 *)(param_2 + 8));
  if (local_58 != -0x7fffffd7) {
    iStack_38 = local_58;
    uStack_34 = uStack_54;
    uStack_30 = uStack_50;
    uStack_2c = uStack_4c;
    uStack_28 = local_48;
    uStack_24 = uStack_44;
    uStack_20 = uStack_40;
    uStack_1c = uStack_3c;
                    /* WARNING: Subroutine does not return */
    FUN_00fb74f8(&DAT_00418ec6,0x2b,&iStack_38,&DAT_018a78b8);
  }
  puVar2 = (undefined4 *)((uint)&local_58 | 4);
  uVar3 = puVar2[1];
  uVar5 = puVar2[2];
  uVar6 = puVar2[3];
  uVar7 = puVar2[4];
  *param_1 = *puVar2;
  param_1[1] = uVar3;
  param_1[2] = uVar5;
  param_1[3] = uVar6;
  param_1[4] = uVar7;
  return;
}


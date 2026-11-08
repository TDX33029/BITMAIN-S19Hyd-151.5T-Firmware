// FUN_00644720 @ 00644720 size=220 calls_out=3 calls_in=15
// strings: internal error: entered unreachable code: datetimes should only be serialized as structs; not maps

void FUN_00644720(undefined4 *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int local_70 [4];
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 local_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  if (*(int *)(param_2 + 0x10) == -0x80000000) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb100("internal error: entered unreachable code: datetimes should only be serialized as structs, not maps"
                 ,0xc5,&DAT_01d2bddc);
  }
  FUN_01a60d04(local_70,param_3,param_4);
  puVar1 = (undefined4 *)((uint)local_70 | 4);
  uVar2 = *puVar1;
  uVar3 = puVar1[1];
  uVar4 = puVar1[2];
  if (local_70[0] == -0x80000000) {
    *param_1 = uVar2;
    param_1[1] = uVar3;
    param_1[2] = uVar4;
  }
  else {
    FUN_00a4241c(param_2 + 0x30);
    *(int *)(param_2 + 0x30) = local_70[0];
    *(undefined4 *)(param_2 + 0x34) = uVar2;
    *(undefined4 *)(param_2 + 0x38) = uVar3;
    *(undefined4 *)(param_2 + 0x3c) = uVar4;
    *(undefined4 *)(param_2 + 0x40) = local_60;
    *(undefined4 *)(param_2 + 0x44) = uStack_5c;
    *(undefined4 *)(param_2 + 0x48) = uStack_58;
    *(undefined4 *)(param_2 + 0x4c) = uStack_54;
    *(undefined4 *)(param_2 + 0x50) = local_50;
    *(undefined4 *)(param_2 + 0x54) = uStack_4c;
    *(undefined4 *)(param_2 + 0x58) = uStack_48;
    *(undefined4 *)(param_2 + 0x5c) = uStack_44;
    *(undefined4 *)(param_2 + 0x60) = uStack_40;
    *(undefined4 *)(param_2 + 100) = local_3c;
    *(undefined4 *)(param_2 + 0x68) = uStack_38;
    *(undefined4 *)(param_2 + 0x6c) = uStack_34;
    *(undefined4 *)(param_2 + 0x70) = uStack_30;
    *(undefined4 *)(param_2 + 0x74) = uStack_2c;
    *param_1 = &DAT_80000005;
  }
  return;
}


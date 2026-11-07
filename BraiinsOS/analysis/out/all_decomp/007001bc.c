// FUN_007001bc @ 007001bc size=340 calls_out=2 calls_in=2
// strings: 

void FUN_007001bc(int param_1,int param_2)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  undefined4 uVar6;
  uint local_34;
  uint *local_30;
  undefined1 *local_2c;
  uint *local_28;
  undefined1 *local_24;
  
  uVar1 = (**(code **)(*(int *)(param_2 + 0x44) + 0x14))
                    (*(int *)(param_2 + 0x40) +
                     (*(int *)(*(int *)(param_2 + 0x44) + 8) - 1U & 0xfffffff8) + 8);
  local_28 = (uint *)(param_2 + 0x30);
  local_34 = uVar1;
  if (*local_28 <= uVar1) {
    local_30 = &local_34;
    local_24 = &LAB_00fac484;
    local_2c = &LAB_00fac484;
                    /* WARNING: Subroutine does not return */
    FUN_00faa478(&DAT_00573a36,&local_30,&DAT_01859dd4);
  }
  iVar4 = *(int *)(param_2 + 0x34);
  uVar5 = *(uint *)(param_2 + 0x38);
  uVar2 = (**(code **)(*(int *)(param_2 + 0x2c) + 0x38))
                    (*(int *)(param_2 + 0x28) +
                     (*(int *)(*(int *)(param_2 + 0x2c) + 8) - 1U & 0xfffffff8) + 8);
  FUN_016dd1aa(param_1,uVar2,0x20);
  uVar2 = (**(code **)(*(int *)(param_2 + 0x2c) + 0x3c))
                    (*(int *)(param_2 + 0x28) +
                     (*(int *)(*(int *)(param_2 + 0x2c) + 8) - 1U & 0xfffffff8) + 8);
  FUN_016dd1aa(param_1 + 0x20,uVar2,0x20);
  uVar6 = *(undefined4 *)(param_2 + 0x3c);
  uVar2 = (**(code **)(*(int *)(param_2 + 0x2c) + 0x48))
                    (*(int *)(param_2 + 0x28) +
                     (*(int *)(*(int *)(param_2 + 0x2c) + 8) - 1U & 0xfffffff8) + 8);
  uVar3 = (**(code **)(*(int *)(param_2 + 0x44) + 0x10))
                    (*(int *)(param_2 + 0x40) +
                     (*(int *)(*(int *)(param_2 + 0x44) + 8) - 1U & 0xfffffff8) + 8);
  *(undefined4 *)(param_1 + 0x44) = uVar6;
  *(undefined4 *)(param_1 + 0x48) = uVar2;
  *(uint *)(param_1 + 0x40) = (iVar4 + uVar1) * 0x2000 & 0x1fffe000 | uVar5;
  *(undefined4 *)(param_1 + 0x4c) = uVar3;
  return;
}


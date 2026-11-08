// FUN_009b00f0 @ 009b00f0 size=300 calls_out=4 calls_in=1
// strings: 

void FUN_009b00f0(undefined4 param_1,undefined4 param_2,uint param_3,undefined4 param_4,
                 undefined4 param_5)

{
  bool bVar1;
  int *piVar2;
  uint *puVar3;
  int iVar4;
  uint uVar5;
  int local_58;
  undefined4 local_54;
  undefined4 local_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  
  FUN_009b0238(&local_58,param_1,param_2);
  local_34 = *(undefined4 *)(local_58 + 0x30);
  uStack_30 = *(undefined4 *)(local_58 + 0x34);
  local_3c = *(undefined4 *)(local_58 + 0x24);
  local_38 = *(undefined4 *)(local_58 + 0x28);
  local_4c = *(undefined4 *)(local_58 + 0xc);
  uStack_48 = *(undefined4 *)(local_58 + 0x10);
  uStack_44 = *(undefined4 *)(local_58 + 0x18);
  local_40 = *(undefined4 *)(local_58 + 0x1c);
  local_28 = param_5;
  uStack_2c = param_4;
  piVar2 = (int *)FUN_009b4588(DAT_018d7fd4,&local_4c,5);
  puVar3 = (uint *)(piVar2 + 2);
  do {
    uVar5 = *puVar3;
    bVar1 = (bool)hasExclusiveAccess(puVar3);
  } while (!bVar1);
  *puVar3 = uVar5 + param_3;
  piVar2[3] = piVar2[3] + (uint)CARRY4(uVar5,param_3);
  DataMemoryBarrier(0xb);
  do {
    iVar4 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar4 + -1;
  if (iVar4 == 1) {
    DataMemoryBarrier(0xb);
    FUN_012c0df4();
  }
  local_4c = *(undefined4 *)(local_58 + 0xc);
  uStack_48 = *(undefined4 *)(local_58 + 0x10);
  local_40 = param_5;
  uStack_44 = param_4;
  piVar2 = (int *)FUN_009b4588(DAT_018d7fe0,&local_4c,2);
  puVar3 = (uint *)(piVar2 + 2);
  do {
    uVar5 = *puVar3;
    bVar1 = (bool)hasExclusiveAccess(puVar3);
  } while (!bVar1);
  *puVar3 = uVar5 + param_3;
  piVar2[3] = piVar2[3] + (uint)CARRY4(uVar5,param_3);
  DataMemoryBarrier(0xb);
  do {
    iVar4 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar4 + -1;
  if (iVar4 == 1) {
    DataMemoryBarrier(0xb);
    FUN_012c0df4();
  }
  FUN_009ccc20(local_54);
  return;
}


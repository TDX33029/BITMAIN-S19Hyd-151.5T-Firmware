// FUN_0178f2a8 @ 0178f2a8 size=540 calls_out=4 calls_in=1
// strings: 

undefined8 FUN_0178f2a8(int param_1,undefined4 param_2,int param_3,int param_4)

{
  longlong lVar1;
  uint uVar2;
  char *pcVar3;
  uint uVar4;
  int iVar5;
  bool bVar6;
  undefined4 local_58;
  undefined4 uStack_54;
  uint local_50;
  uint uStack_4c;
  longlong local_48;
  undefined4 local_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  int local_2c;
  
  local_2c = DAT_018ddaf8;
  local_50 = 0;
  uStack_4c = 0;
  local_58 = 0;
  uStack_54 = 0;
  local_3c = 0x8e93eec0;
  uStack_38 = 0xce65608a;
  uStack_34 = 0xa8d46b46;
  uStack_30 = 0xe83cef69;
  local_48 = FUN_0178ee18(param_1,7,0);
  if ((param_1 != 0) && (*(int *)(param_1 + 0x18) != 0)) {
    uVar2 = *(uint *)(param_1 + 0x1c);
    local_50 = 0;
    for (uStack_4c = 0; uStack_4c == 0 && (0xf < local_50) <= uStack_4c;
        uStack_4c = uStack_4c + bVar6) {
      FUN_0178edd8(param_1,&local_58);
      *(byte *)((int)&local_3c + local_50) = (byte)local_58 ^ *(byte *)((int)&local_3c + local_50);
      bVar6 = 0xfffffffe < local_50;
      local_50 = local_50 + 1;
    }
    if (param_3 != 0 || param_4 != 0) {
      local_48 = CONCAT44(param_4,param_3);
    }
    local_50 = 0;
    for (uStack_4c = 0; lVar1 = local_48 + (ulonglong)*(uint *)(param_1 + 0x20),
        uVar4 = (uint)((ulonglong)lVar1 >> 0x20),
        uStack_4c <= uVar4 && (uint)((uint)lVar1 <= local_50) <= uStack_4c - uVar4;
        uStack_4c = uStack_4c + bVar6) {
      iVar5 = *(int *)(param_1 + 0x18);
      uVar4 = FUN_0178f144(&local_3c);
      pcVar3 = (char *)(iVar5 + (uVar2 & uVar4));
      *pcVar3 = *pcVar3 + '\x01';
      bVar6 = 0xfffffffe < local_50;
      local_50 = local_50 + 1;
    }
  }
  if (local_2c != DAT_018ddaf8) {
                    /* WARNING: Subroutine does not return */
    FUN_016d2b78();
  }
  return 0;
}


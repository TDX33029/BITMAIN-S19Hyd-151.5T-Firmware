// FUN_01181660 @ 01181660 size=504 calls_out=4 calls_in=0
// strings: 

int FUN_01181660(int param_1,char *param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5)

{
  int iVar1;
  uint *puVar2;
  undefined8 uVar3;
  uint local_6c [3];
  undefined4 local_60;
  uint local_5c;
  undefined4 local_58;
  int local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  
  iVar1 = 0;
  if (*param_2 == '\x05') {
    local_6c[2] = *(uint *)(param_2 + 4);
    local_60 = *(undefined4 *)(param_2 + 8);
    local_4c = *(undefined4 *)(param_2 + 0xc);
    puVar2 = *(uint **)(param_1 + 4);
    if (local_6c[2] == 0) {
      local_4c = 0;
    }
    local_6c[0] = (uint)(local_6c[2] != 0);
    local_58 = 0;
    local_6c[1] = 0;
    local_5c = local_6c[0];
    local_54 = local_6c[2];
    local_50 = local_60;
    if (*(int *)(param_1 + 8) != 0) {
      iVar1 = FUN_00f45584(local_6c);
      if (iVar1 == 0) {
        return 0;
      }
      local_44 = *(undefined4 *)(iVar1 + 4);
      uStack_40 = *(undefined4 *)(iVar1 + 8);
      local_48 = 0x80000000;
      iVar1 = 4;
      if (2 < *puVar2) {
        iVar1 = *puVar2 - 3;
      }
                    /* WARNING: Could not recover jumptable at 0x01181788. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uStack_3c = param_3;
      iVar1 = (*(code *)(&DAT_0118178c + *(int *)(&DAT_0118178c + iVar1 * 4)))();
      return iVar1;
    }
    do {
      uVar3 = FUN_00f45584(local_6c);
      iVar1 = (int)uVar3;
      if (iVar1 == 0) {
        return 0;
      }
      uStack_40 = *(undefined4 *)(iVar1 + 8);
      local_44 = *(undefined4 *)(iVar1 + 4);
      local_48 = 0x80000000;
      uStack_3c = param_3;
      iVar1 = FUN_011d018c(param_1 + 0xc,(int)((ulonglong)uVar3 >> 0x20),&local_48,param_4,param_5);
    } while (iVar1 == 0);
  }
  return iVar1;
}


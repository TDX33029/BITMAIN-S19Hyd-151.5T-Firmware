// FUN_01181924 @ 01181924 size=316 calls_out=2 calls_in=0
// strings: 

int FUN_01181924(int param_1,char *param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5)

{
  int iVar1;
  int *piVar2;
  undefined8 uVar3;
  uint local_64 [3];
  undefined4 local_58;
  uint local_54;
  undefined4 local_50;
  int local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  
  iVar1 = 0;
  if (*param_2 == '\x05') {
    local_64[2] = *(uint *)(param_2 + 4);
    local_58 = *(undefined4 *)(param_2 + 8);
    local_44 = *(undefined4 *)(param_2 + 0xc);
    piVar2 = *(int **)(param_1 + 4);
    if (local_64[2] == 0) {
      local_44 = 0;
    }
    local_64[0] = (uint)(local_64[2] != 0);
    local_50 = 0;
    local_64[1] = 0;
    local_54 = local_64[0];
    local_4c = local_64[2];
    local_48 = local_58;
    if (*(int *)(param_1 + 8) != 0) {
      iVar1 = FUN_00f45584(local_64);
      if (iVar1 == 0) {
        return 0;
      }
      local_3c = *(undefined4 *)(iVar1 + 4);
      uStack_38 = *(undefined4 *)(iVar1 + 8);
      local_40 = 0x80000000;
                    /* WARNING: Could not recover jumptable at 0x01181a1c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uStack_34 = param_3;
      iVar1 = (*(code *)(&DAT_01181a20 + *(int *)(&DAT_01181a20 + *piVar2 * 4)))();
      return iVar1;
    }
    do {
      uVar3 = FUN_00f45584(local_64);
      iVar1 = (int)uVar3;
      if (iVar1 == 0) {
        return 0;
      }
      uStack_38 = *(undefined4 *)(iVar1 + 8);
      local_3c = *(undefined4 *)(iVar1 + 4);
      local_40 = 0x80000000;
      uStack_34 = param_3;
      iVar1 = FUN_011d018c(param_1 + 0xc,(int)((ulonglong)uVar3 >> 0x20),&local_40,param_4,param_5);
    } while (iVar1 == 0);
  }
  return iVar1;
}


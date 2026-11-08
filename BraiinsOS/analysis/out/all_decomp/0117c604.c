// FUN_0117c604 @ 0117c604 size=196 calls_out=2 calls_in=0
// strings: 

int FUN_0117c604(undefined4 param_1,char *param_2,undefined4 param_3,undefined4 param_4,
                undefined4 param_5)

{
  int iVar1;
  undefined8 uVar2;
  uint local_54 [3];
  undefined4 local_48;
  uint local_44;
  undefined4 local_40;
  int local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  iVar1 = 0;
  if (*param_2 == '\x05') {
    local_54[2] = *(uint *)(param_2 + 4);
    local_48 = *(undefined4 *)(param_2 + 8);
    local_34 = *(undefined4 *)(param_2 + 0xc);
    if (local_54[2] == 0) {
      local_34 = 0;
    }
    local_54[0] = (uint)(local_54[2] != 0);
    local_40 = 0;
    local_54[1] = 0;
    local_44 = local_54[0];
    local_3c = local_54[2];
    local_38 = local_48;
    do {
      uVar2 = FUN_00f45584(local_54);
      iVar1 = (int)uVar2;
      if (iVar1 == 0) {
        return 0;
      }
      uStack_28 = *(undefined4 *)(iVar1 + 8);
      local_2c = *(undefined4 *)(iVar1 + 4);
      local_30 = 0x80000000;
      uStack_24 = param_3;
      iVar1 = FUN_011d018c(param_1,(int)((ulonglong)uVar2 >> 0x20),&local_30,param_4,param_5);
    } while (iVar1 == 0);
  }
  return iVar1;
}


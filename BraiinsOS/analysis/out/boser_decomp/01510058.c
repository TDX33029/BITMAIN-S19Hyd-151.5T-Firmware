// FUN_01510058 @ 01510058 size=296 calls_out=3 calls_in=0
// strings: 

int FUN_01510058(int param_1,char *param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined8 uVar9;
  uint local_58 [3];
  undefined4 local_4c;
  uint local_48;
  undefined4 local_44;
  int local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  iVar1 = 0;
  if (*param_2 == '\x05') {
    local_58[2] = *(uint *)(param_2 + 4);
    local_4c = *(undefined4 *)(param_2 + 8);
    iVar8 = *(int *)(param_1 + 8);
    local_38 = *(undefined4 *)(param_2 + 0xc);
    if (local_58[2] == 0) {
      local_38 = 0;
    }
    local_58[0] = (uint)(local_58[2] != 0);
    iVar6 = *(int *)(param_1 + 4);
    local_44 = 0;
    local_58[1] = 0;
    local_48 = local_58[0];
    local_40 = local_58[2];
    local_3c = local_4c;
    do {
      uVar9 = FUN_01a41998(local_58);
      iVar1 = (int)uVar9;
      if (iVar1 == 0) {
        return 0;
      }
      local_30 = *(undefined4 *)(iVar1 + 4);
      uStack_2c = *(undefined4 *)(iVar1 + 8);
      uVar3 = *(undefined4 *)(iVar1 + 4);
      iVar4 = *(int *)(iVar1 + 8);
      local_34 = 0x80000000;
      uStack_28 = param_3;
      iVar1 = param_1;
      if (iVar8 != 0) {
        iVar5 = iVar8 << 5;
        iVar7 = iVar6;
        do {
          if ((*(int *)(iVar7 + 8) == iVar4) &&
             (iVar2 = thunk_FUN_01bed842(*(undefined4 *)(iVar7 + 4),uVar3,iVar4), iVar1 = iVar7,
             iVar2 == 0)) break;
          iVar7 = iVar7 + 0x20;
          iVar5 = iVar5 + -0x20;
          iVar1 = param_1;
        } while (iVar5 != 0);
      }
      iVar1 = FUN_015776f4(iVar1 + 0xc,(int)((ulonglong)uVar9 >> 0x20),&local_34,param_4,param_5);
    } while (iVar1 == 0);
  }
  return iVar1;
}


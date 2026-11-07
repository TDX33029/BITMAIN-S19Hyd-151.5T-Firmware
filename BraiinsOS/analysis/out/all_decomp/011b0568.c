// FUN_011b0568 @ 011b0568 size=356 calls_out=4 calls_in=0
// strings: 

int FUN_011b0568(int param_1,char *param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined8 uVar7;
  uint local_58 [3];
  undefined4 uStack_4c;
  uint local_48;
  undefined4 local_44;
  int local_40;
  undefined4 local_3c;
  undefined4 local_38;
  int local_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  if (*param_2 != '\x05') {
    return 0;
  }
  local_58[2] = *(uint *)(param_2 + 4);
  uStack_4c = *(undefined4 *)(param_2 + 8);
  local_38 = *(undefined4 *)(param_2 + 0xc);
  iVar1 = *(int *)(param_1 + 4);
  iVar4 = *(int *)(param_1 + 8);
  if (local_58[2] == 0) {
    local_38 = 0;
  }
  local_58[1] = 0;
  local_58[0] = (uint)(local_58[2] != 0);
  local_44 = 0;
  local_48 = local_58[0];
  local_40 = local_58[2];
  local_3c = uStack_4c;
  if (iVar4 == 0) {
    do {
      iVar1 = FUN_00f45584(local_58);
    } while (iVar1 != 0);
  }
  else {
    while( true ) {
      uVar7 = FUN_00f45584(local_58);
      iVar2 = (int)uVar7;
      if (iVar2 == 0) break;
      iVar5 = iVar1 + 4;
      iVar6 = iVar4 * 0x18;
      do {
        FUN_01265b90(&local_34,*(undefined4 *)(*(int *)(iVar5 + -4) + 8),
                     *(undefined4 *)(*(int *)(iVar5 + -4) + 0xc),*(undefined4 *)(iVar2 + 4),
                     *(undefined4 *)(iVar2 + 8));
        if (local_34 != -0x80000000 && local_34 != 0) {
          if (local_34 == -0x7fffffff) {
            if ((char)local_30 != '\0') {
              local_30 = *(undefined4 *)(iVar2 + 4);
              uStack_2c = *(undefined4 *)(iVar2 + 8);
              local_34 = -0x80000000;
              uStack_28 = param_3;
              iVar3 = FUN_011d018c(iVar5,(int)((ulonglong)uVar7 >> 0x20),&local_34,param_4,param_5);
              if (iVar3 != 0) {
                return iVar3;
              }
            }
          }
          else {
            thunk_FUN_016d3fb4(local_30);
          }
        }
        iVar5 = iVar5 + 0x18;
        iVar6 = iVar6 + -0x18;
      } while (iVar6 != 0);
    }
  }
  return 0;
}


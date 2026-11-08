// FUN_0156209c @ 0156209c size=348 calls_out=4 calls_in=0
// strings: 

int FUN_0156209c(int param_1,char *param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined8 uVar7;
  uint local_58 [3];
  undefined4 local_4c;
  uint local_48;
  undefined4 local_44;
  int local_40;
  undefined4 local_3c;
  undefined4 local_38;
  int local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  
  if (*param_2 == '\x05') {
    local_58[2] = *(uint *)(param_2 + 4);
    local_4c = *(undefined4 *)(param_2 + 8);
    iVar5 = *(int *)(param_1 + 8);
    local_38 = *(undefined4 *)(param_2 + 0xc);
    iVar3 = *(int *)(param_1 + 4);
    if (local_58[2] == 0) {
      local_38 = 0;
    }
    local_58[0] = (uint)(local_58[2] != 0);
    local_44 = 0;
    local_58[1] = 0;
    local_48 = local_58[0];
    local_40 = local_58[2];
    local_3c = local_4c;
    while( true ) {
      uVar7 = FUN_01a41998(local_58);
      iVar1 = (int)uVar7;
      if (iVar1 == 0) break;
      if (iVar5 != 0) {
        iVar4 = iVar3 + 4;
        iVar6 = iVar5 * 0x18;
        do {
          FUN_01552754(&local_34,*(undefined4 *)(*(int *)(iVar4 + -4) + 8),
                       *(undefined4 *)(*(int *)(iVar4 + -4) + 0xc),*(undefined4 *)(iVar1 + 4),
                       *(undefined4 *)(iVar1 + 8));
          if (local_34 != -0x80000000) {
            if (local_34 == -0x7fffffff) {
              if ((char)local_30 != '\0') {
                local_30 = *(undefined4 *)(iVar1 + 4);
                local_2c = *(undefined4 *)(iVar1 + 8);
                local_34 = -0x80000000;
                local_28 = param_3;
                iVar2 = FUN_015776f4(iVar4,(int)((ulonglong)uVar7 >> 0x20),&local_34,param_4,param_5
                                    );
                if (iVar2 != 0) {
                  return iVar2;
                }
              }
            }
            else {
              FUN_019bb7e0(local_34,local_30);
            }
          }
          iVar4 = iVar4 + 0x18;
          iVar6 = iVar6 + -0x18;
        } while (iVar6 != 0);
      }
    }
  }
  return 0;
}


// FUN_015610c4 @ 015610c4 size=316 calls_out=4 calls_in=0
// strings: 

int FUN_015610c4(int param_1,char *param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined8 uVar7;
  uint local_5c [3];
  undefined4 local_50;
  uint local_4c;
  undefined4 local_48;
  int local_44;
  undefined4 local_40;
  undefined4 local_3c;
  int local_38;
  undefined4 local_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  if (*param_2 == '\x05') {
    local_5c[2] = *(uint *)(param_2 + 4);
    local_50 = *(undefined4 *)(param_2 + 8);
    iVar5 = *(int *)(param_1 + 8);
    local_3c = *(undefined4 *)(param_2 + 0xc);
    iVar3 = *(int *)(param_1 + 4);
    if (local_5c[2] == 0) {
      local_3c = 0;
    }
    local_5c[0] = (uint)(local_5c[2] != 0);
    local_48 = 0;
    local_5c[1] = 0;
    local_4c = local_5c[0];
    local_44 = local_5c[2];
    local_40 = local_50;
    while( true ) {
      uVar7 = FUN_01a41998(local_5c);
      iVar1 = (int)uVar7;
      if (iVar1 == 0) break;
      if (iVar5 != 0) {
        iVar4 = iVar3 + 4;
        iVar6 = iVar5 * 0x18;
        do {
          FUN_01338048(&local_38,*(int *)(iVar4 + -4) + 8,*(undefined4 *)(iVar1 + 4),
                       *(undefined4 *)(iVar1 + 8));
          if (local_38 == 0x12) {
            if ((char)local_34 != '\0') {
              local_34 = *(undefined4 *)(iVar1 + 4);
              uStack_30 = *(undefined4 *)(iVar1 + 8);
              local_38 = -0x80000000;
              uStack_2c = param_3;
              iVar2 = FUN_015776f4(iVar4,(int)((ulonglong)uVar7 >> 0x20),&local_38,param_4,param_5);
              if (iVar2 != 0) {
                return iVar2;
              }
            }
          }
          else {
            FUN_0150174c(&local_38);
          }
          iVar4 = iVar4 + 0x18;
          iVar6 = iVar6 + -0x18;
        } while (iVar6 != 0);
      }
    }
  }
  return 0;
}


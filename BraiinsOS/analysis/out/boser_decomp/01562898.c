// FUN_01562898 @ 01562898 size=288 calls_out=4 calls_in=0
// strings: 

int FUN_01562898(int *param_1,char *param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
                )

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
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
  
  iVar1 = 0;
  if (*param_2 == '\x05') {
    local_58[2] = *(uint *)(param_2 + 4);
    local_4c = *(undefined4 *)(param_2 + 8);
    iVar2 = *param_1;
    local_38 = *(undefined4 *)(param_2 + 0xc);
    if (local_58[2] == 0) {
      local_38 = 0;
    }
    local_58[0] = (uint)(local_58[2] != 0);
    local_44 = 0;
    local_58[1] = 0;
    local_48 = local_58[0];
    local_40 = local_58[2];
    local_3c = local_4c;
    do {
      do {
        while( true ) {
          do {
            uVar3 = FUN_01a41998(local_58);
            iVar1 = (int)uVar3;
            if (iVar1 == 0) {
              return 0;
            }
            FUN_01552754(&local_34,*(undefined4 *)(iVar2 + 8),*(undefined4 *)(iVar2 + 0xc),
                         *(undefined4 *)(iVar1 + 4),*(undefined4 *)(iVar1 + 8));
          } while (local_34 == -0x80000000);
          if (local_34 == -0x7fffffff) break;
          FUN_019bb7e0(local_34,local_30);
        }
      } while ((char)local_30 == '\0');
      local_30 = *(undefined4 *)(iVar1 + 4);
      local_2c = *(undefined4 *)(iVar1 + 8);
      local_34 = -0x80000000;
      local_28 = param_3;
      iVar1 = FUN_015776f4(param_1 + 1,(int)((ulonglong)uVar3 >> 0x20),&local_34,param_4,param_5);
    } while (iVar1 == 0);
  }
  return iVar1;
}


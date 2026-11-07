// FUN_011b102c @ 011b102c size=292 calls_out=4 calls_in=0
// strings: 

int FUN_011b102c(int *param_1,char *param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
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
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
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
            uVar3 = FUN_00f45584(local_58);
            iVar1 = (int)uVar3;
            if (iVar1 == 0) {
              return 0;
            }
            FUN_01265b90(&local_34,*(undefined4 *)(iVar2 + 8),*(undefined4 *)(iVar2 + 0xc),
                         *(undefined4 *)(iVar1 + 4),*(undefined4 *)(iVar1 + 8));
          } while (local_34 == -0x80000000 || local_34 == 0);
          if (local_34 == -0x7fffffff) break;
          thunk_FUN_016d3fb4(local_30);
        }
      } while ((char)local_30 == '\0');
      local_30 = *(undefined4 *)(iVar1 + 4);
      uStack_2c = *(undefined4 *)(iVar1 + 8);
      local_34 = -0x80000000;
      uStack_28 = param_3;
      iVar1 = FUN_011d018c(param_1 + 1,(int)((ulonglong)uVar3 >> 0x20),&local_34,param_4,param_5);
    } while (iVar1 == 0);
  }
  return iVar1;
}


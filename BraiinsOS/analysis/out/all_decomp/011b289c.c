// FUN_011b289c @ 011b289c size=264 calls_out=4 calls_in=0
// strings: 

int FUN_011b289c(int *param_1,char *param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
                )

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
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
  
  iVar1 = 0;
  if (*param_2 == '\x05') {
    local_5c[2] = *(uint *)(param_2 + 4);
    local_50 = *(undefined4 *)(param_2 + 8);
    iVar2 = *param_1;
    local_3c = *(undefined4 *)(param_2 + 0xc);
    if (local_5c[2] == 0) {
      local_3c = 0;
    }
    local_5c[0] = (uint)(local_5c[2] != 0);
    local_48 = 0;
    local_5c[1] = 0;
    local_4c = local_5c[0];
    local_44 = local_5c[2];
    local_40 = local_50;
    do {
      do {
        while( true ) {
          uVar3 = FUN_00f45584(local_5c);
          iVar1 = (int)uVar3;
          if (iVar1 == 0) {
            return 0;
          }
          FUN_00ff71dc(&local_38,iVar2 + 8,*(undefined4 *)(iVar1 + 4),*(undefined4 *)(iVar1 + 8));
          if (local_38 == 0x12) break;
          FUN_011648d0(&local_38);
        }
      } while ((char)local_34 == '\0');
      local_34 = *(undefined4 *)(iVar1 + 4);
      uStack_30 = *(undefined4 *)(iVar1 + 8);
      local_38 = -0x80000000;
      uStack_2c = param_3;
      iVar1 = FUN_011d018c(param_1 + 1,(int)((ulonglong)uVar3 >> 0x20),&local_38,param_4,param_5);
    } while (iVar1 == 0);
  }
  return iVar1;
}


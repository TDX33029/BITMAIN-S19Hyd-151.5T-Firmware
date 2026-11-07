// FUN_0156279c @ 0156279c size=252 calls_out=4 calls_in=0
// strings: 

bool FUN_0156279c(int *param_1,char *param_2,undefined4 param_3)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  uint local_54 [3];
  undefined4 local_48;
  uint local_44;
  undefined4 local_40;
  int local_3c;
  undefined4 local_38;
  undefined4 local_34;
  int local_30;
  undefined4 local_2c;
  
  bVar1 = true;
  if (*param_2 == '\x05') {
    local_54[2] = *(uint *)(param_2 + 4);
    local_48 = *(undefined4 *)(param_2 + 8);
    iVar4 = *param_1;
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
      while( true ) {
        do {
          uVar5 = FUN_01a41998(local_54);
          iVar2 = (int)uVar5;
          if (iVar2 == 0) goto LAB_01562888;
          FUN_01552754(&local_30,*(undefined4 *)(iVar4 + 8),*(undefined4 *)(iVar4 + 0xc),
                       *(undefined4 *)(iVar2 + 4),*(undefined4 *)(iVar2 + 8));
        } while (local_30 == -0x80000000);
        if (local_30 == -0x7fffffff) break;
        FUN_019bb7e0(local_30,local_2c);
      }
    } while (((char)local_2c == '\0') ||
            (iVar3 = FUN_01577618(param_1 + 1,(int)((ulonglong)uVar5 >> 0x20),param_3), iVar3 != 0))
    ;
LAB_01562888:
    bVar1 = iVar2 == 0;
  }
  return bVar1;
}


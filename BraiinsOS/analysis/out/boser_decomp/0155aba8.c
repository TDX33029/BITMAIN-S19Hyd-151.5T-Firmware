// FUN_0155aba8 @ 0155aba8 size=204 calls_out=4 calls_in=0
// strings: 

bool FUN_0155aba8(undefined4 param_1,char *param_2,undefined4 param_3)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  uint local_64 [3];
  undefined4 local_58;
  uint local_54;
  undefined4 local_50;
  int local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined1 local_40 [28];
  
  bVar1 = true;
  if (*param_2 == '\x05') {
    local_64[2] = *(uint *)(param_2 + 4);
    local_58 = *(undefined4 *)(param_2 + 8);
    local_44 = *(undefined4 *)(param_2 + 0xc);
    if (local_64[2] == 0) {
      local_44 = 0;
    }
    local_64[0] = (uint)(local_64[2] != 0);
    local_50 = 0;
    local_64[1] = 0;
    local_54 = local_64[0];
    local_4c = local_64[2];
    local_48 = local_58;
    do {
      iVar2 = FUN_01a41998(local_64);
      if (iVar2 == 0) break;
      FUN_006666fc((uint)local_40 | 4,*(undefined4 *)(iVar2 + 4),*(undefined4 *)(iVar2 + 8));
      local_40[0] = 3;
      iVar3 = FUN_01577618(param_1,local_40,param_3);
      FUN_00e0febc(local_40);
    } while (iVar3 != 0);
    bVar1 = iVar2 == 0;
  }
  return bVar1;
}


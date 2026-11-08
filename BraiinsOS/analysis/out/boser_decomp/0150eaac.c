// FUN_0150eaac @ 0150eaac size=160 calls_out=2 calls_in=0
// strings: 

undefined1 FUN_0150eaac(undefined4 param_1,char *param_2,undefined4 param_3)

{
  int iVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  uint local_3c [3];
  undefined4 local_30;
  uint local_2c;
  undefined4 local_28;
  int local_24;
  undefined4 local_20;
  undefined4 local_1c;
  
  uVar2 = 1;
  if (*param_2 == '\x05') {
    local_3c[2] = *(uint *)(param_2 + 4);
    local_30 = *(undefined4 *)(param_2 + 8);
    local_1c = *(undefined4 *)(param_2 + 0xc);
    if (local_3c[2] == 0) {
      local_1c = 0;
    }
    local_3c[0] = (uint)(local_3c[2] != 0);
    local_28 = 0;
    local_3c[1] = 0;
    local_2c = local_3c[0];
    local_24 = local_3c[2];
    local_20 = local_30;
    do {
      uVar3 = FUN_01a41998(local_3c);
      iVar1 = (int)((ulonglong)uVar3 >> 0x20);
      if ((int)uVar3 == 0 || iVar1 == 0) {
        return 1;
      }
      iVar1 = FUN_01577618(param_1,iVar1,param_3);
      uVar2 = 0;
    } while (iVar1 != 0);
  }
  return uVar2;
}


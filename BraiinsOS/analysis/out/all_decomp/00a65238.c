// FUN_00a65238 @ 00a65238 size=268 calls_out=5 calls_in=1
// strings: 

void FUN_00a65238(int *param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  undefined4 local_24;
  
  uVar2 = *(uint *)(param_2 + 0x14);
  if (uVar2 < *(uint *)(param_2 + 0x10)) {
    do {
      uVar4 = (uint)*(byte *)(*(int *)(param_2 + 0xc) + uVar2);
      uVar3 = uVar4 - 9;
      if ((0x17 < uVar3) || ((1 << (uVar3 & 0xff) & 0x800013U) == 0)) {
        if (uVar4 == 0x22) {
          *(uint *)(param_2 + 0x14) = uVar2 + 1;
          *(undefined4 *)(param_2 + 8) = 0;
          FUN_0157e384(&local_2c,(int *)(param_2 + 0xc),param_2);
          if (local_2c == 2) {
            *param_1 = 0;
            param_1[1] = local_28;
            return;
          }
          FUN_0112691c(&local_34,local_28,local_24);
          if (local_34 != 0) {
            *param_1 = local_34;
            param_1[1] = local_30;
            return;
          }
        }
        else {
          local_30 = FUN_00a6d64c(param_2,&local_2c);
        }
        iVar1 = FUN_00a6da54(local_30,param_2);
        goto LAB_00a652a4;
      }
      uVar2 = uVar2 + 1;
      *(uint *)(param_2 + 0x14) = uVar2;
    } while (*(uint *)(param_2 + 0x10) != uVar2);
  }
  local_2c = 5;
  iVar1 = FUN_008f9984(param_2,&local_2c);
LAB_00a652a4:
  *param_1 = 0;
  param_1[1] = iVar1;
  return;
}


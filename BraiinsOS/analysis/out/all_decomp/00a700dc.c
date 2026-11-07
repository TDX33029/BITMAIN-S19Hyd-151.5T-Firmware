// FUN_00a700dc @ 00a700dc size=296 calls_out=6 calls_in=1
// strings: 

void FUN_00a700dc(int *param_1,int param_2)

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
  
  iVar1 = FUN_0114576c(param_2);
  if (iVar1 == 0) {
    uVar2 = *(uint *)(param_2 + 0x14);
    if (uVar2 < *(uint *)(param_2 + 0x10)) {
      do {
        uVar4 = (uint)*(byte *)(*(int *)(param_2 + 0xc) + uVar2);
        uVar3 = uVar4 - 9;
        if ((0x17 < uVar3) || ((1 << (uVar3 & 0xff) & 0x800013U) == 0)) {
          if (uVar4 == 0x22) {
            *(uint *)(param_2 + 0x14) = uVar2 + 1;
            *(undefined4 *)(param_2 + 8) = 0;
            FUN_0157e5fc(&local_2c,(int *)(param_2 + 0xc),param_2);
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
            local_30 = FUN_00a6c930(param_2,&local_2c,&DAT_0186d724);
          }
          iVar1 = FUN_00a6cecc(local_30,param_2);
          goto LAB_00a700fc;
        }
        uVar2 = uVar2 + 1;
        *(uint *)(param_2 + 0x14) = uVar2;
      } while (*(uint *)(param_2 + 0x10) != uVar2);
    }
    local_2c = 5;
    iVar1 = FUN_01143ab8(param_2,&local_2c);
  }
LAB_00a700fc:
  *param_1 = 0;
  param_1[1] = iVar1;
  return;
}


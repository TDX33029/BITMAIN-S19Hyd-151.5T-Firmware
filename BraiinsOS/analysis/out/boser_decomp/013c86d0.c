// FUN_013c86d0 @ 013c86d0 size=244 calls_out=4 calls_in=3
// strings: 

void FUN_013c86d0(undefined2 *param_1,undefined4 param_2,ushort *param_3)

{
  ushort uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined4 uVar5;
  ushort local_40;
  ushort local_3e;
  undefined4 local_3c;
  uint local_38;
  uint local_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  uVar1 = *param_3;
  uVar5 = *(undefined4 *)(param_3 + 2);
  if (uVar1 == 2) {
    *(undefined4 *)(param_1 + 2) = uVar5;
    *param_1 = 2;
  }
  else {
    local_3e = param_3[1];
    uVar4 = (uint)local_3e;
    local_38 = *(uint *)(param_3 + 4);
    local_34 = *(uint *)(param_3 + 6);
    uStack_30 = *(undefined4 *)(param_3 + 8);
    uStack_2c = *(undefined4 *)(param_3 + 10);
    uStack_28 = *(undefined4 *)(param_3 + 0xc);
    local_40 = uVar1;
    local_3c = uVar5;
    if ((uVar1 & 1) == 0) {
      if (0x18 < uVar4) {
                    /* WARNING: Subroutine does not return */
        FUN_012faff4(0,uVar4,0x18,&DAT_01cf2da0);
      }
      uVar3 = (uint)&local_40 | 4;
    }
    else {
      uVar3 = local_38;
      uVar4 = local_34;
    }
    iVar2 = FUN_013c7f34(param_2,uVar3,uVar4);
    if (iVar2 == 0) {
      if (uVar1 != 0) {
        FUN_019bb7e0(uVar5,local_38);
      }
      FUN_01bed4e2(param_1,param_2,0x44);
      return;
    }
    *param_1 = 2;
    uVar4 = 2;
    if (uVar1 != 0) {
      uVar4 = local_38;
    }
    *(int *)(param_1 + 2) = iVar2;
    if (uVar1 != 0) {
      FUN_019bb7e0(uVar5,uVar4);
    }
  }
  FUN_0079217c(param_2);
  return;
}


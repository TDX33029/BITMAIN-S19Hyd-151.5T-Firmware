// FUN_00f171e4 @ 00f171e4 size=336 calls_out=7 calls_in=1
// strings: 

void FUN_00f171e4(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  int local_2c;
  int iStack_28;
  int local_24;
  
  uVar4 = *(uint *)(param_2 + 0x14);
  if (uVar4 < *(uint *)(param_2 + 0x10)) {
    do {
      uVar5 = *(byte *)(*(int *)(param_2 + 0xc) + uVar4) - 9;
      if (0x19 < uVar5) {
LAB_00f17314:
        uVar3 = FUN_005b8238(param_2,&local_2c,&DAT_0187be98);
        iVar1 = FUN_00e959bc(uVar3,param_2);
        goto LAB_00f17250;
      }
      if ((1 << (uVar5 & 0xff) & 0x800013U) == 0) {
        if (uVar5 == 0x19) {
          *(uint *)(param_2 + 0x14) = uVar4 + 1;
          *(undefined4 *)(param_2 + 8) = 0;
          FUN_0157e384(&local_2c,(int *)(param_2 + 0xc),param_2);
          if (local_2c == 2) {
            *param_1 = -0x80000000;
            param_1[1] = iStack_28;
            return;
          }
          if (local_24 < 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00600af4(0,local_24);
          }
          if (local_24 == 0) {
            iVar2 = 1;
            iVar1 = 0;
          }
          else {
            iVar2 = thunk_FUN_016d4a50(local_24);
            iVar1 = local_24;
            if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_00600af4(1,local_24);
            }
          }
          FUN_016dd1aa(iVar2,iStack_28,local_24);
          *param_1 = iVar1;
          param_1[1] = iVar2;
          param_1[2] = local_24;
          return;
        }
        goto LAB_00f17314;
      }
      uVar4 = uVar4 + 1;
      *(uint *)(param_2 + 0x14) = uVar4;
    } while (*(uint *)(param_2 + 0x10) != uVar4);
  }
  local_2c = 5;
  iVar1 = FUN_008f9984(param_2,&local_2c);
LAB_00f17250:
  *param_1 = -0x80000000;
  param_1[1] = iVar1;
  return;
}


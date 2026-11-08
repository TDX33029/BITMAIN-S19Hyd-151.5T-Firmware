// FUN_00a7f220 @ 00a7f220 size=336 calls_out=7 calls_in=1
// strings: 

void FUN_00a7f220(int *param_1,int param_2)

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
LAB_00a7f350:
        uVar3 = FUN_00a6c930(param_2,&local_2c,&DAT_0186d734);
        iVar1 = FUN_00a6cecc(uVar3,param_2);
        goto LAB_00a7f28c;
      }
      if ((1 << (uVar5 & 0xff) & 0x800013U) == 0) {
        if (uVar5 == 0x19) {
          *(uint *)(param_2 + 0x14) = uVar4 + 1;
          *(undefined4 *)(param_2 + 8) = 0;
          FUN_0157e5fc(&local_2c,(int *)(param_2 + 0xc),param_2);
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
        goto LAB_00a7f350;
      }
      uVar4 = uVar4 + 1;
      *(uint *)(param_2 + 0x14) = uVar4;
    } while (*(uint *)(param_2 + 0x10) != uVar4);
  }
  local_2c = 5;
  iVar1 = FUN_01143ab8(param_2,&local_2c);
LAB_00a7f28c:
  *param_1 = -0x80000000;
  param_1[1] = iVar1;
  return;
}


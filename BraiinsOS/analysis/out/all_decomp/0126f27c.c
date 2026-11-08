// FUN_0126f27c @ 0126f27c size=320 calls_out=8 calls_in=2
// strings: 

void FUN_0126f27c(uint *param_1,int param_2)

{
  undefined4 uVar1;
  uint uVar2;
  uint uVar3;
  int local_24;
  uint uStack_20;
  uint local_1c;
  
  uVar2 = *(uint *)(param_2 + 0x14);
  if (uVar2 < *(uint *)(param_2 + 0x10)) {
    do {
      uVar3 = *(byte *)(*(int *)(param_2 + 0xc) + uVar2) - 9;
      if (0x19 < uVar3) {
LAB_0126f390:
        uVar1 = FUN_0126ecc0(param_2,&local_24,&DAT_0188b510);
        uVar2 = FUN_00e959bc(uVar1,param_2);
        goto LAB_0126f2e8;
      }
      if ((1 << (uVar3 & 0xff) & 0x800013U) == 0) {
        if (uVar3 == 0x19) {
          *(undefined4 *)(param_2 + 8) = 0;
          *(uint *)(param_2 + 0x14) = uVar2 + 1;
          FUN_0157e384(&local_24,(int *)(param_2 + 0xc),param_2);
          if (local_24 == 2) {
            *param_1 = 0x80000000;
            param_1[1] = uStack_20;
            return;
          }
          if (0x7fffffff < local_1c) {
                    /* WARNING: Subroutine does not return */
            FUN_00600c10();
          }
          if (local_1c == 0) {
            uVar2 = 1;
          }
          else {
            uVar2 = thunk_FUN_016d4a50(local_1c);
            if (uVar2 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_00600af4(1,local_1c);
            }
          }
          FUN_016dd1aa(uVar2,uStack_20,local_1c);
          *param_1 = local_1c;
          param_1[1] = uVar2;
          param_1[2] = local_1c;
          return;
        }
        goto LAB_0126f390;
      }
      uVar2 = uVar2 + 1;
      *(uint *)(param_2 + 0x14) = uVar2;
    } while (*(uint *)(param_2 + 0x10) != uVar2);
  }
  local_24 = 5;
  uVar2 = FUN_008f9984(param_2,&local_24);
LAB_0126f2e8:
  *param_1 = 0x80000000;
  param_1[1] = uVar2;
  return;
}


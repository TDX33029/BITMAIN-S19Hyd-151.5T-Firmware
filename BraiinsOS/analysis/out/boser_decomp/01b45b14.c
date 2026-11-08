// FUN_01b45b14 @ 01b45b14 size=312 calls_out=7 calls_in=0
// strings: /aws-lc/crypto/fipsmodule/evp/p_ec.c

void FUN_01b45b14(int param_1,int param_2,uint *param_3)

{
  undefined4 uVar1;
  undefined4 extraout_r1;
  undefined4 extraout_r1_00;
  uint uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  uint local_64;
  undefined1 auStack_60 [68];
  uint local_1c;
  
  local_1c = DAT_01d53560;
  local_64 = 0x42;
  if ((*(int *)(param_1 + 8) == 0) || (*(int *)(param_1 + 0xc) == 0)) {
    FUN_01b053d4(6,0,0x75,"/aws-lc/crypto/fipsmodule/evp/p_ec.c",0x61);
    uVar3 = extraout_r1;
LAB_01b45b8c:
    uVar1 = 0;
  }
  else {
    uVar3 = *(undefined4 *)(*(int *)(param_1 + 8) + 8);
    if (param_2 == 0) {
      FUN_01b3d638(uVar3);
      uVar4 = FUN_01b3d290();
      uVar3 = (undefined4)((ulonglong)uVar4 >> 0x20);
      *param_3 = (int)uVar4 + 7U >> 3;
    }
    else {
      uVar1 = FUN_01b3d658(*(undefined4 *)(*(int *)(param_1 + 0xc) + 8));
      uVar4 = FUN_01b45918(auStack_60,&local_64,uVar1,uVar3);
      uVar3 = (undefined4)((ulonglong)uVar4 >> 0x20);
      if ((int)uVar4 == 0) goto LAB_01b45b8c;
      uVar2 = *param_3;
      if (local_64 < *param_3) {
        *param_3 = local_64;
        uVar2 = local_64;
      }
      FUN_01b26974(param_2,auStack_60,uVar2);
      uVar3 = extraout_r1_00;
    }
    uVar1 = 1;
  }
  if ((local_1c ^ DAT_01d53560) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01be31f4(uVar1,uVar3,local_1c ^ DAT_01d53560,0);
  }
  return;
}


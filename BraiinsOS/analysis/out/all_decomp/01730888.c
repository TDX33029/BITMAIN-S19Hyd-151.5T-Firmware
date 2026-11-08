// FUN_01730888 @ 01730888 size=312 calls_out=5 calls_in=1
// strings: /aws-lc/crypto/fipsmodule/ec/oct.c

void FUN_01730888(int param_1,undefined4 param_2,char *param_3,int param_4)

{
  int iVar1;
  undefined4 extraout_r1;
  undefined4 uVar2;
  bool bVar3;
  undefined8 uVar4;
  undefined1 auStack_a4 [68];
  undefined1 auStack_60 [68];
  uint local_1c;
  
  local_1c = DAT_018ddaf8;
  iVar1 = FUN_01714f1c(param_1 + 0x118,param_2,&PTR_018bc3f4,0);
  if ((iVar1 * 2 + 1 == param_4) && (*param_3 == '\x04')) {
    uVar4 = FUN_0172ead0(param_1,auStack_a4,param_3 + 1,iVar1);
    uVar2 = (undefined4)((ulonglong)uVar4 >> 0x20);
    if ((int)uVar4 != 0) {
      uVar4 = FUN_0172ead0(param_1,auStack_60,param_3 + iVar1 + 1);
      uVar2 = (undefined4)((ulonglong)uVar4 >> 0x20);
      if ((int)uVar4 != 0) {
        uVar4 = FUN_017303f8(param_1,param_2,auStack_a4,auStack_60);
        uVar2 = (undefined4)((ulonglong)uVar4 >> 0x20);
        bVar3 = (int)uVar4 != 0;
        goto LAB_01730914;
      }
    }
  }
  else {
    FUN_016e9cd0(0xf,0,0x6d,"/aws-lc/crypto/fipsmodule/ec/oct.c",0x51);
    uVar2 = extraout_r1;
  }
  bVar3 = false;
LAB_01730914:
  if ((local_1c ^ DAT_018ddaf8) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_016d2b78(bVar3,uVar2,local_1c ^ DAT_018ddaf8,0);
  }
  return;
}


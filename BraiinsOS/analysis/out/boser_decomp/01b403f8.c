// FUN_01b403f8 @ 01b403f8 size=304 calls_out=5 calls_in=1
// strings: /aws-lc/crypto/fipsmodule/ec/oct.c

void FUN_01b403f8(int param_1,undefined4 param_2,char *param_3,int param_4)

{
  int iVar1;
  undefined4 extraout_r1;
  undefined4 uVar2;
  bool bVar3;
  undefined8 uVar4;
  undefined1 auStack_ac [68];
  undefined1 auStack_68 [68];
  uint local_24;
  
  local_24 = DAT_01d53560;
  iVar1 = FUN_01b2b938(param_1 + 0x118,param_2,&PTR_01d3b2b0,0);
  if ((iVar1 * 2 + 1 == param_4) && (*param_3 == '\x04')) {
    uVar4 = FUN_01b3eb54(param_1,auStack_ac,param_3 + 1,iVar1);
    uVar2 = (undefined4)((ulonglong)uVar4 >> 0x20);
    if ((int)uVar4 != 0) {
      uVar4 = FUN_01b3eb54(param_1,auStack_68,param_3 + iVar1 + 1,iVar1);
      uVar2 = (undefined4)((ulonglong)uVar4 >> 0x20);
      if ((int)uVar4 != 0) {
        uVar4 = FUN_01b3fffc(param_1,param_2,auStack_ac,auStack_68);
        uVar2 = (undefined4)((ulonglong)uVar4 >> 0x20);
        bVar3 = (int)uVar4 != 0;
        goto LAB_01b40484;
      }
    }
  }
  else {
    FUN_01b053d4(0xf,0,0x6d,"/aws-lc/crypto/fipsmodule/ec/oct.c",0x51);
    uVar2 = extraout_r1;
  }
  bVar3 = false;
LAB_01b40484:
  if ((local_24 ^ DAT_01d53560) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01be31f4(bVar3,uVar2,local_24 ^ DAT_01d53560,0);
  }
  return;
}


// FUN_017821f4 @ 017821f4 size=420 calls_out=6 calls_in=0
// strings: /aws-lc/crypto/ube/fork_ube_detect.c

undefined8 FUN_017821f4(void)

{
  int iVar1;
  undefined1 *puVar2;
  int iVar3;
  undefined8 uVar4;
  
  FUN_01781f34(&DAT_018dff18);
  if ((DAT_018dff14 == 1) && (DAT_018dff10 == 1)) {
    uVar4 = FUN_01781f94(&DAT_018dff18);
    return uVar4;
  }
  FUN_01781f94(&DAT_018dff18);
  iVar1 = FUN_016d2558(0x1e);
  if ((iVar1 < 1) ||
     (puVar2 = (undefined1 *)FUN_016d69b4(0,iVar1,3,0x22,0xffffffff),
     puVar2 == (undefined1 *)0xffffffff)) {
    return 0;
  }
  FUN_01781f34(&DAT_018dff18);
  if (DAT_018dff14 != 1) {
    if (puVar2 == (undefined1 *)0x0) {
      FUN_016e9cd0(0xe,0,0x43,"/aws-lc/crypto/ube/fork_ube_detect.c",0x52);
    }
    else {
      iVar3 = FUN_016d69a6(puVar2,iVar1,0xffffffff);
      if ((iVar3 != 0) && (iVar3 = FUN_016d69a6(puVar2,iVar1,0x12), iVar3 == 0)) {
        FUN_01781f94(&DAT_018dff18);
        *puVar2 = 1;
        DAT_018dfee0 = 1;
        DAT_018dfee4 = 0;
        DAT_018dfee8 = puVar2;
        return 0;
      }
    }
  }
  FUN_01781f94(&DAT_018dff18);
  FUN_016dfc54();
  software_interrupt(0);
  uVar4 = FUN_016d3496(puVar2,iVar1);
  return uVar4;
}


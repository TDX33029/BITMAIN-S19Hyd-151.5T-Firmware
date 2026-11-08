// FUN_01b70a00 @ 01b70a00 size=420 calls_out=6 calls_in=0
// strings: /aws-lc/crypto/ube/fork_ube_detect.c

undefined4 FUN_01b70a00(void)

{
  bool bVar1;
  undefined4 uVar2;
  int iVar3;
  undefined1 *puVar4;
  int iVar5;
  
  FUN_01b7076c(&DAT_01d533c0);
  if ((DAT_01d533bc == 1) && (DAT_01d533b8 == 1)) {
    uVar2 = FUN_01b707cc(&DAT_01d533c0);
    return uVar2;
  }
  FUN_01b707cc(&DAT_01d533c0);
  iVar3 = FUN_01be2b70(0x1e);
  if (iVar3 < 1) {
    return 0;
  }
  puVar4 = (undefined1 *)FUN_01be6c88(0,iVar3,3,0x22,0xffffffff);
  if (puVar4 == &DAT_ffffffff) {
    return 0;
  }
  FUN_01b7076c(&DAT_01d533c0);
  if (DAT_01d533bc != 1) {
    if (puVar4 == (undefined1 *)0x0) {
      FUN_01b053d4(0xe,0,0x43,"/aws-lc/crypto/ube/fork_ube_detect.c",0x52);
    }
    else {
      iVar5 = FUN_01be6c7a(puVar4,iVar3,0xffffffff);
      if (iVar5 != 0) {
        iVar5 = FUN_01be6c7a(puVar4,iVar3,0x12);
        bVar1 = iVar5 == 0;
        goto LAB_01b70afc;
      }
    }
  }
  bVar1 = false;
LAB_01b70afc:
  FUN_01b707cc(&DAT_01d533c0);
  if (bVar1) {
    *puVar4 = 1;
    DAT_01d53390 = puVar4;
    DAT_01d5338c = 0;
    DAT_01d53388 = 1;
    return 0;
  }
  FUN_01befe78();
  software_interrupt(0);
  uVar2 = FUN_01be3b5a(puVar4,iVar3);
  return uVar2;
}


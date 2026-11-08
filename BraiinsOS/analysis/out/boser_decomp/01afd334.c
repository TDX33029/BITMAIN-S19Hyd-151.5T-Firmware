// FUN_01afd334 @ 01afd334 size=312 calls_out=5 calls_in=1
// strings: 

void FUN_01afd334(undefined4 param_1,undefined4 param_2,uint param_3,uint param_4,undefined4 param_5
                 )

{
  int iVar1;
  bool bVar2;
  uint extraout_r1;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  bool bVar6;
  longlong lVar7;
  undefined1 auStack_3c [24];
  uint local_24;
  
  local_24 = DAT_01d53560;
  iVar1 = FUN_01afd27c(param_1,auStack_3c,param_5,0);
  if (iVar1 != 0) {
    bVar2 = false;
    uVar4 = 0x38;
    do {
      uVar3 = param_3 >> (uVar4 & 0xff) | param_4 << (0x20 - uVar4 & 0xff) |
              param_4 >> (uVar4 - 0x20 & 0xff);
      uVar5 = uVar3 & 0xff;
      if (bVar2) {
LAB_01afd3b0:
        iVar1 = FUN_01afd168(auStack_3c,uVar5);
        if (iVar1 == 0) goto LAB_01afd42c;
        bVar2 = true;
      }
      else if (uVar5 != 0) {
        if (((uVar3 & 0x80) == 0) || (iVar1 = FUN_01afd168(auStack_3c), iVar1 != 0))
        goto LAB_01afd3b0;
        goto LAB_01afd42c;
      }
      bVar6 = uVar4 != 0;
      uVar4 = uVar4 - 8;
    } while (bVar6);
    if ((bVar2) || (iVar1 = FUN_01afd168(auStack_3c), iVar1 != 0)) {
      lVar7 = FUN_01afca7c(param_1);
      goto LAB_01afd3e4;
    }
  }
LAB_01afd42c:
  FUN_01afc5c8(param_1);
  lVar7 = (ulonglong)extraout_r1 << 0x20;
LAB_01afd3e4:
  if ((local_24 ^ DAT_01d53560) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01be31f4((int)lVar7,(int)((ulonglong)lVar7 >> 0x20),local_24 ^ DAT_01d53560,0);
  }
  return;
}


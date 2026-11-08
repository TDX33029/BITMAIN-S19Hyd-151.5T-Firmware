// FUN_0173a508 @ 0173a508 size=440 calls_out=6 calls_in=0
// strings: /aws-lc/crypto/fipsmodule/evp/p_rsa.c

void FUN_0173a508(int param_1,int param_2,uint *param_3,undefined4 param_4,undefined4 param_5)

{
  uint uVar1;
  uint uVar2;
  uint extraout_r1;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  undefined8 uVar6;
  longlong lVar7;
  undefined4 local_28;
  uint local_24;
  
  iVar5 = *(int *)(param_1 + 0x14);
  local_24 = DAT_018ddaf8;
  uVar4 = *(undefined4 *)(*(int *)(param_1 + 8) + 8);
  uVar6 = FUN_0173a338();
  uVar1 = (uint)uVar6;
  if (param_2 == 0) {
    lVar7 = CONCAT44((int)((ulonglong)uVar6 >> 0x20),1);
    *param_3 = uVar1;
    goto LAB_0173a5a8;
  }
  if (*param_3 < uVar1) {
    FUN_016e9cd0(6,0,100,"/aws-lc/crypto/fipsmodule/evp/p_rsa.c",0x18d);
    lVar7 = (ulonglong)extraout_r1 << 0x20;
    goto LAB_0173a5a8;
  }
  if (*(int *)(iVar5 + 8) != 4) {
    lVar7 = FUN_01781404(uVar4,param_3,param_2,uVar1,param_4,param_5,*(int *)(iVar5 + 8));
    goto LAB_0173a5a8;
  }
  iVar3 = *(int *)(iVar5 + 0x1c);
  if (iVar3 == 0) {
    FUN_0173a338(*(undefined4 *)(param_1 + 8));
    uVar6 = FUN_0177a6c0();
    uVar2 = (uint)((ulonglong)uVar6 >> 0x20);
    iVar3 = (int)uVar6;
    *(int *)(iVar5 + 0x1c) = iVar3;
    if (iVar3 != 0) goto LAB_0173a5f0;
  }
  else {
LAB_0173a5f0:
    uVar6 = FUN_01781404(uVar4,&local_28,iVar3,uVar1,param_4,param_5,3);
    uVar2 = (uint)((ulonglong)uVar6 >> 0x20);
    if ((int)uVar6 != 0) {
      uVar6 = FUN_01780968(param_2,param_3,uVar1,*(undefined4 *)(iVar5 + 0x1c),local_28,
                           *(undefined4 *)(iVar5 + 0x20),*(undefined4 *)(iVar5 + 0x24),
                           *(undefined4 *)(iVar5 + 0xc),*(undefined4 *)(iVar5 + 0x10));
      lVar7 = CONCAT44((int)((ulonglong)uVar6 >> 0x20),(uint)((int)uVar6 != 0));
      goto LAB_0173a5a8;
    }
  }
  lVar7 = (ulonglong)uVar2 << 0x20;
LAB_0173a5a8:
  if ((local_24 ^ DAT_018ddaf8) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_016d2b78((int)lVar7,(int)((ulonglong)lVar7 >> 0x20),local_24 ^ DAT_018ddaf8,0);
  }
  return;
}


// FUN_01b47424 @ 01b47424 size=412 calls_out=6 calls_in=0
// strings: /aws-lc/crypto/fipsmodule/evp/p_rsa.c

void FUN_01b47424(int param_1,int param_2,uint *param_3,undefined4 param_4,undefined4 param_5)

{
  uint uVar1;
  uint extraout_r1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined4 local_30;
  uint local_2c;
  
  iVar3 = *(int *)(param_1 + 0x14);
  uVar4 = *(undefined4 *)(*(int *)(param_1 + 8) + 8);
  local_2c = DAT_01d53560;
  uVar5 = FUN_01b47374();
  uVar1 = (uint)uVar5;
  if (param_2 == 0) {
    *param_3 = uVar1;
    lVar6 = CONCAT44((int)((ulonglong)uVar5 >> 0x20),1);
  }
  else {
    if (*param_3 < uVar1) {
      FUN_01b053d4(6,0,100,"/aws-lc/crypto/fipsmodule/evp/p_rsa.c",0x18d);
      uVar2 = extraout_r1;
    }
    else {
      if (*(int *)(iVar3 + 8) != 4) {
        lVar6 = FUN_01b6fe00(uVar4,param_3,param_2,uVar1,param_4,param_5,*(int *)(iVar3 + 8));
        goto LAB_01b474bc;
      }
      uVar5 = FUN_01b473c0(iVar3,param_1);
      uVar2 = (uint)((ulonglong)uVar5 >> 0x20);
      if ((int)uVar5 != 0) {
        uVar5 = FUN_01b6fe00(uVar4,&local_30,*(undefined4 *)(iVar3 + 0x1c),uVar1,param_4,param_5,3);
        uVar2 = (uint)((ulonglong)uVar5 >> 0x20);
        if ((int)uVar5 != 0) {
          uVar5 = FUN_01b6f740(param_2,param_3,uVar1,*(undefined4 *)(iVar3 + 0x1c),local_30,
                               *(undefined4 *)(iVar3 + 0x20),*(undefined4 *)(iVar3 + 0x24),
                               *(undefined4 *)(iVar3 + 0xc),*(undefined4 *)(iVar3 + 0x10));
          lVar6 = CONCAT44((int)((ulonglong)uVar5 >> 0x20),(uint)((int)uVar5 != 0));
          goto LAB_01b474bc;
        }
      }
    }
    lVar6 = (ulonglong)uVar2 << 0x20;
  }
LAB_01b474bc:
  if ((local_2c ^ DAT_01d53560) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01be31f4((int)lVar6,(int)((ulonglong)lVar6 >> 0x20),local_2c ^ DAT_01d53560,0);
  }
  return;
}


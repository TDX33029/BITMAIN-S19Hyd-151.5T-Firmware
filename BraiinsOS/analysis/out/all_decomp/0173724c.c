// FUN_0173724c @ 0173724c size=412 calls_out=7 calls_in=1
// strings: /aws-lc/crypto/fipsmodule/ec/oct.c | /aws-lc/crypto/fipsmodule/ec/oct.c

void FUN_0173724c(undefined4 param_1,undefined4 *param_2,undefined4 param_3,undefined1 *param_4,
                 int param_5)

{
  int iVar1;
  uint uVar2;
  uint extraout_r1;
  uint extraout_r1_00;
  uint uVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined1 auStack_ac [136];
  uint local_24;
  
  local_24 = DAT_018ddaf8;
  iVar1 = FUN_01736960(param_1,*param_2,0,0);
  if (iVar1 == 0) {
    uVar4 = FUN_017345b8(param_1,param_2 + 1);
    uVar2 = (uint)((ulonglong)uVar4 >> 0x20);
    if ((int)uVar4 == 0) {
      if (param_4 == (undefined1 *)0x0) {
        uVar3 = local_24 ^ DAT_018ddaf8;
        lVar5 = (ulonglong)uVar2 << 0x20;
        if (uVar3 == 0) {
          FUN_0173058c(param_1,param_3,0,0);
          return;
        }
        goto LAB_017373e4;
      }
      uVar4 = FUN_0172c7cc(param_1,auStack_ac,param_2 + 1);
      uVar2 = (uint)((ulonglong)uVar4 >> 0x20);
      if ((int)uVar4 == 0) goto LAB_01737304;
      lVar5 = FUN_01730668(param_1,auStack_ac,param_3,param_4,param_5);
    }
    else {
      if (param_4 != (undefined1 *)0x0) {
        if (param_5 == 0) {
          FUN_016e9cd0(0xf,0,100,"/aws-lc/crypto/fipsmodule/ec/oct.c",0xe1);
          uVar2 = extraout_r1_00;
          goto LAB_01737304;
        }
        *param_4 = 0;
      }
      lVar5 = CONCAT44(uVar2,1);
    }
  }
  else {
    FUN_016e9cd0(0xf,0,0x6a,"/aws-lc/crypto/fipsmodule/ec/oct.c",0xd9);
    uVar2 = extraout_r1;
LAB_01737304:
    lVar5 = (ulonglong)uVar2 << 0x20;
  }
  uVar3 = local_24 ^ DAT_018ddaf8;
  if (uVar3 == 0) {
    return;
  }
LAB_017373e4:
                    /* WARNING: Subroutine does not return */
  FUN_016d2b78((int)lVar5,(int)((ulonglong)lVar5 >> 0x20),uVar3,0);
}


// FUN_0173f598 @ 0173f598 size=320 calls_out=6 calls_in=2
// strings: /aws-lc/crypto/fipsmodule/hkdf/hkdf.c

bool FUN_0173f598(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                 undefined4 param_9)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  bool bVar4;
  uint local_68;
  undefined1 auStack_64 [64];
  uint local_24;
  
  local_24 = DAT_018ddaf8;
  uVar1 = FUN_0172a880(param_3,param_2,&PTR_018bc3f4,0);
  if ((uVar1 & 4) == 0) {
    local_68 = uVar1 & 4;
    iVar2 = FUN_0173f420(auStack_64,&local_68,param_3,param_4,param_5,param_6,param_7);
    bVar4 = false;
    if (iVar2 != 0) {
      iVar2 = FUN_0173efa4(param_1,param_2,param_3,auStack_64,local_68,param_8,param_9);
      bVar4 = iVar2 != 0;
    }
    uVar3 = FUN_0177aaa0(auStack_64,0x40);
  }
  else {
    uVar3 = FUN_016e9cd0(0x1f,0,0x65,"/aws-lc/crypto/fipsmodule/hkdf/hkdf.c",0x18);
    bVar4 = false;
  }
  if ((local_24 ^ DAT_018ddaf8) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_016d2b78(uVar3,local_24 ^ DAT_018ddaf8,0);
  }
  return bVar4;
}


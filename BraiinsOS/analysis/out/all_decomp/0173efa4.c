// FUN_0173efa4 @ 0173efa4 size=804 calls_out=12 calls_in=3
// strings: /aws-lc/crypto/fipsmodule/hkdf/hkdf.c | /aws-lc/crypto/fipsmodule/hkdf/hkdf.c | /aws-lc/crypto/fipsmodule/hkdf/hkdf.c

/* WARNING: Removing unreachable block (ram,0x0173f17c) */
/* WARNING: Removing unreachable block (ram,0x0173f18c) */
/* WARNING: Removing unreachable block (ram,0x0173f19c) */
/* WARNING: Removing unreachable block (ram,0x0173f1a8) */
/* WARNING: Removing unreachable block (ram,0x0173f1b0) */
/* WARNING: Removing unreachable block (ram,0x0173f2c4) */
/* WARNING: Removing unreachable block (ram,0x0173f1bc) */
/* WARNING: Removing unreachable block (ram,0x0173f1c4) */

void FUN_0173efa4(undefined4 param_1,uint param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 extraout_r1;
  undefined4 uVar5;
  undefined4 extraout_r1_00;
  undefined4 extraout_r1_01;
  undefined4 extraout_r1_02;
  uint uVar6;
  undefined1 local_535;
  undefined1 local_534 [4];
  undefined1 auStack_530 [1220];
  undefined1 auStack_6c [64];
  uint local_2c;
  
  local_2c = DAT_018ddaf8;
  uVar1 = FUN_0172a880(param_3,param_2,&PTR_018bc3f4,0);
  if ((uVar1 & 4) == 0) {
    uVar1 = FUN_0172a898(param_3);
    uVar6 = (uVar1 + param_2) - 1;
    uVar2 = FUN_018462e8(uVar6,uVar1);
    if (uVar2 < 0x100 && !CARRY4(uVar1,param_2)) {
      FUN_0173dbd0(auStack_530);
      iVar4 = FUN_0173dcc4(auStack_530,param_4,param_5,param_3,0);
      if (iVar4 == 0) {
        FUN_0177aaa0(auStack_6c,0x40);
        FUN_0173dc48(auStack_530);
      }
      else {
        if (uVar6 < uVar1) {
LAB_0173f2a4:
          FUN_0177aaa0(auStack_6c,0x40);
          FUN_0173dc48(auStack_530);
          uVar3 = 1;
          uVar5 = extraout_r1_02;
          goto LAB_0173f068;
        }
        uVar6 = 0;
        while ((((iVar4 = FUN_0173e95c(auStack_530,param_6,param_7), iVar4 != 0 &&
                 (iVar4 = FUN_0173e95c(auStack_530,&local_535,1), iVar4 != 0)) &&
                (iVar4 = FUN_0173e9d4(auStack_530,auStack_6c,local_534), iVar4 != 0)) &&
               (uVar1 == 0))) {
          uVar6 = uVar6 + 1;
          if (uVar2 <= uVar6) goto LAB_0173f2a4;
          iVar4 = FUN_0173dcc4(auStack_530,0,0,0,0);
          if ((iVar4 == 0) || (iVar4 = FUN_0173e95c(auStack_530,auStack_6c,0), iVar4 == 0)) break;
        }
        FUN_0177aaa0(auStack_6c,0x40);
        FUN_0173dc48(auStack_530);
      }
      FUN_016e9cd0(0x1f,0,0x1c,"/aws-lc/crypto/fipsmodule/hkdf/hkdf.c",0x9e);
      FUN_0177aaa0(param_1,param_2);
      uVar5 = extraout_r1_01;
    }
    else {
      FUN_016e9cd0(0x1f,0,100,"/aws-lc/crypto/fipsmodule/hkdf/hkdf.c",0x70);
      uVar5 = extraout_r1;
    }
  }
  else {
    FUN_016e9cd0(0x1f,0,0x65,"/aws-lc/crypto/fipsmodule/hkdf/hkdf.c",0x62);
    uVar5 = extraout_r1_00;
  }
  uVar3 = 0;
LAB_0173f068:
  if ((local_2c ^ DAT_018ddaf8) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_016d2b78(uVar3,uVar5,local_2c ^ DAT_018ddaf8,0);
  }
  return;
}


// FUN_0173f2e0 @ 0173f2e0 size=308 calls_out=8 calls_in=1
// strings: 

void FUN_0173f2e0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,int param_6,undefined4 param_7)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 extraout_r1;
  undefined4 extraout_r1_00;
  undefined1 auStack_4f0 [1220];
  uint local_2c;
  
  local_2c = DAT_018ddaf8;
  if (param_6 != 0) {
    FUN_016dd606(auStack_4f0,0,0x4c0,0);
    iVar1 = FUN_0173dcc4(auStack_4f0,param_2,param_3,param_1,0);
    if (((iVar1 != 0) && (iVar1 = FUN_0173e95c(auStack_4f0,param_4,param_5), iVar1 != 0)) &&
       (iVar1 = FUN_0173e9d4(auStack_4f0,param_6,param_7), iVar1 != 0)) {
      FUN_0173dc48(auStack_4f0);
      param_2 = extraout_r1_00;
      goto LAB_0173f394;
    }
    FUN_0173dc48(auStack_4f0);
    uVar2 = FUN_0172a898(param_1);
    FUN_0177aaa0(param_6,uVar2);
    param_2 = extraout_r1;
  }
  param_6 = 0;
LAB_0173f394:
  if ((local_2c ^ DAT_018ddaf8) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_016d2b78(param_6,param_2,local_2c ^ DAT_018ddaf8,0);
  }
  return;
}


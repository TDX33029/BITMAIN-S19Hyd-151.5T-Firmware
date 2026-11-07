// FUN_01740d74 @ 01740d74 size=396 calls_out=7 calls_in=0
// strings: /aws-lc/crypto/fipsmodule/evp/p_kem.c | /aws-lc/crypto/fipsmodule/evp/p_kem.c | /aws-lc/crypto/fipsmodule/evp/p_kem.c

void FUN_01740d74(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 extraout_r1;
  undefined4 uVar4;
  undefined4 extraout_r1_00;
  undefined4 extraout_r1_01;
  undefined4 extraout_r1_02;
  int iVar5;
  undefined8 uVar6;
  undefined4 local_24;
  undefined4 uStack_20;
  uint local_1c;
  
  local_1c = DAT_018ddaf8;
  if (param_1 == 0) {
    FUN_016e9cd0(0xe,0,0x43,"/aws-lc/crypto/fipsmodule/evp/p_kem.c",0x55);
    uVar4 = extraout_r1_00;
  }
  else if (*(int **)(param_1 + 0x14) == (int *)0x0) {
    FUN_016e9cd0(0xe,0,0x43,"/aws-lc/crypto/fipsmodule/evp/p_kem.c",0x57);
    uVar4 = extraout_r1_01;
  }
  else {
    iVar5 = **(int **)(param_1 + 0x14);
    if (iVar5 == 0) {
      iVar5 = *(int *)(param_1 + 8);
      if (iVar5 == 0) {
        FUN_016e9cd0(6,0,0x7c,"/aws-lc/crypto/fipsmodule/evp/p_kem.c",0x5b);
        uVar4 = extraout_r1_02;
        goto LAB_01740e18;
      }
      iVar5 = FUN_01740434(*(undefined4 *)(iVar5 + 8),iVar5,&PTR_018bc3f4,0);
    }
    iVar1 = FUN_017401e8();
    local_24 = *(undefined4 *)(iVar5 + 0x10);
    uStack_20 = *(undefined4 *)(iVar5 + 0x14);
    if ((((iVar1 != 0) && (iVar2 = FUN_017402d0(iVar1,iVar5), iVar2 != 0)) &&
        (iVar5 = (**(code **)(*(int *)(iVar5 + 0x28) + 4))
                           (*(undefined4 *)(iVar1 + 4),&local_24,*(undefined4 *)(iVar1 + 8),
                            &uStack_20), iVar5 != 0)) &&
       (uVar6 = FUN_0173ad40(param_2,0x3ca), uVar4 = (undefined4)((ulonglong)uVar6 >> 0x20),
       (int)uVar6 != 0)) {
      uVar3 = 1;
      *(int *)(param_2 + 8) = iVar1;
      goto LAB_01740e1c;
    }
    FUN_017403d8(iVar1);
    uVar4 = extraout_r1;
  }
LAB_01740e18:
  uVar3 = 0;
LAB_01740e1c:
  if ((local_1c ^ DAT_018ddaf8) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_016d2b78(uVar3,uVar4,local_1c ^ DAT_018ddaf8,0);
  }
  return;
}


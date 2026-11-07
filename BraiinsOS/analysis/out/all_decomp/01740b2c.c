// FUN_01740b2c @ 01740b2c size=552 calls_out=7 calls_in=0
// strings: /aws-lc/crypto/fipsmodule/evp/p_kem.c | /aws-lc/crypto/fipsmodule/evp/p_kem.c | /aws-lc/crypto/fipsmodule/evp/p_kem.c | /aws-lc/crypto/fipsmodule/evp/p_kem.c | /aws-lc/crypto/fipsmodule/evp/p_kem.c

void FUN_01740b2c(int param_1,undefined4 param_2,int param_3,int *param_4)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int extraout_r1;
  int extraout_r1_00;
  int extraout_r1_01;
  int extraout_r1_02;
  int extraout_r1_03;
  int extraout_r1_04;
  undefined8 uVar5;
  undefined4 local_1c;
  undefined4 local_18;
  uint local_14;
  
  local_14 = DAT_018ddaf8;
  if (param_1 == 0) {
    FUN_016e9cd0(0xe,0,0x43,"/aws-lc/crypto/fipsmodule/evp/p_kem.c",0x28);
    iVar4 = extraout_r1_01;
  }
  else if (*(int **)(param_1 + 0x14) == (int *)0x0) {
    FUN_016e9cd0(0xe,0,0x43,"/aws-lc/crypto/fipsmodule/evp/p_kem.c",0x2a);
    iVar4 = extraout_r1_02;
  }
  else {
    iVar4 = **(int **)(param_1 + 0x14);
    if (iVar4 == 0) {
      iVar4 = *(int *)(param_1 + 8);
      if (iVar4 == 0) {
        FUN_016e9cd0(6,0,0x7c,"/aws-lc/crypto/fipsmodule/evp/p_kem.c",0x2e);
        iVar4 = extraout_r1_04;
        goto LAB_01740bcc;
      }
      iVar4 = FUN_01740434(*(undefined4 *)(iVar4 + 8),iVar4,param_3,0);
    }
    if (param_4 == (int *)0x0) {
      FUN_016e9cd0(6,0,0x43,"/aws-lc/crypto/fipsmodule/evp/p_kem.c",0x36);
      iVar4 = extraout_r1_03;
    }
    else {
      if (param_3 == 0) {
        *param_4 = *(int *)(iVar4 + 0x20);
LAB_01740c90:
        uVar1 = 1;
        goto LAB_01740bd0;
      }
      if (*(int *)(iVar4 + 0x20) == *param_4) {
        iVar2 = FUN_017401e8();
        local_1c = *(undefined4 *)(iVar4 + 0x10);
        local_18 = *(undefined4 *)(iVar4 + 0x14);
        if ((((iVar2 != 0) && (iVar3 = FUN_017402d0(), iVar3 != 0)) &&
            (iVar4 = (*(code *)**(undefined4 **)(iVar4 + 0x28))
                               (*(undefined4 *)(iVar2 + 4),&local_1c,*(undefined4 *)(iVar2 + 8),
                                &local_18,param_3), iVar4 != 0)) &&
           (uVar5 = FUN_0173aef0(param_2,0x3ca,iVar2), iVar4 = (int)((ulonglong)uVar5 >> 0x20),
           (int)uVar5 != 0)) goto LAB_01740c90;
        FUN_017403d8(iVar2);
        iVar4 = extraout_r1_00;
      }
      else {
        FUN_016e9cd0(6,0,0x85,"/aws-lc/crypto/fipsmodule/evp/p_kem.c",0x42);
        iVar4 = extraout_r1;
      }
    }
  }
LAB_01740bcc:
  uVar1 = 0;
LAB_01740bd0:
  if ((local_14 ^ DAT_018ddaf8) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_016d2b78(uVar1,iVar4,local_14 ^ DAT_018ddaf8,0);
  }
  return;
}


// FUN_01547d2c @ 01547d2c size=264 calls_out=3 calls_in=1
// strings: TLS 1.3; client CertificateVerify

void FUN_01547d2c(int *param_1,int param_2,undefined4 param_3,code *param_4,code *param_5)

{
  undefined2 uVar1;
  undefined2 extraout_r1;
  uint local_150;
  undefined1 auStack_14c [164];
  int local_a8;
  int iStack_a4;
  int iStack_a0;
  int local_98;
  int local_94;
  int iStack_90;
  int iStack_8c;
  undefined4 local_88;
  int iStack_84;
  int iStack_80;
  int iStack_7c;
  
  (**(code **)(*(int *)(*(int *)(param_2 + 0xc) + 0x18) + 0xc))
            (&local_98,*(undefined4 *)(*(int *)(param_2 + 0xc) + 0x14));
  FUN_01527d18(&local_150,&local_98,"TLS 1.3, client CertificateVerify");
  uVar1 = (*param_5)(param_3);
  if (0xa2 < local_150) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa36c(0,local_150,0xa2,&DAT_018a7884);
  }
  (*param_4)(&local_98,param_3,auStack_14c);
  if (local_98 == -0x7fffffd7) {
    local_a8 = local_94;
    iStack_a4 = iStack_90;
    iStack_a0 = iStack_8c;
    local_88 = CONCAT22(extraout_r1,uVar1);
    local_98 = -0x7ffffff6;
    FUN_01527ba4(param_2,&local_98);
    *param_1 = -0x7fffffd7;
    return;
  }
  param_1[1] = local_94;
  param_1[2] = iStack_90;
  param_1[3] = iStack_8c;
  param_1[4] = local_88;
  param_1[5] = iStack_84;
  param_1[6] = iStack_80;
  param_1[7] = iStack_7c;
  *param_1 = local_98;
  return;
}


// FUN_016cf170 @ 016cf170 size=156 calls_out=3 calls_in=2
// strings: must call 'finish_pattern' firstTLS_ECDHE_ECDSA_WITH_RC4_128_SHA

void FUN_016cf170(undefined4 *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  if (*(int *)(param_2 + 0x20) == 0) {
    *(undefined4 *)(param_2 + 0x20) = 0xffffffff;
    if (*(int *)(param_2 + 0x24) == 0) {
      iVar2 = *(int *)(param_2 + 0x48);
      *(undefined4 *)(param_2 + 0x24) = 1;
      *(int *)(param_2 + 0x28) = iVar2;
      if (iVar2 == *(int *)(param_2 + 0x40)) {
        FUN_01a54b48();
      }
      iVar1 = *(int *)(param_2 + 0x44);
      *param_1 = 0x2a;
      param_1[1] = iVar2;
      *(undefined4 *)(iVar1 + iVar2 * 4) = 0;
      *(int *)(param_2 + 0x48) = iVar2 + 1;
      *(int *)(param_2 + 0x20) = *(int *)(param_2 + 0x20) + 1;
      return;
    }
  }
  else {
    FUN_01306fc8(&DAT_01d09b58);
  }
                    /* WARNING: Subroutine does not return */
  FUN_012fb100("must call \'finish_pattern\' firstTLS_ECDHE_ECDSA_WITH_RC4_128_SHA",0x41,
               &DAT_01d07a0c);
}


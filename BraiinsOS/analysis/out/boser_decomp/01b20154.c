// FUN_01b20154 @ 01b20154 size=412 calls_out=5 calls_in=0
// strings: /aws-lc/crypto/fipsmodule/cipher/e_aes.c | /aws-lc/crypto/fipsmodule/cipher/e_aes.c

void FUN_01b20154(int param_1,undefined4 param_2)

{
  int iVar1;
  int extraout_r1;
  undefined4 uVar2;
  int local_44;
  int local_40;
  int local_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined1 auStack_24 [8];
  uint local_1c;
  
  local_1c = DAT_01d53560;
  iVar1 = FUN_01afddc0(param_2,auStack_24,0x20000010,0);
  if (iVar1 == 0) {
    uVar2 = 0x633;
  }
  else {
    iVar1 = FUN_01afe3d0(auStack_24,&local_40);
    if ((iVar1 == 0) || (local_40 != 1 || local_3c != 0)) {
      uVar2 = 0x63a;
    }
    else {
      iVar1 = FUN_01afe3d0(auStack_24,&local_38);
      if (iVar1 == 0) {
        uVar2 = 0x640;
      }
      else {
        *(undefined4 *)(param_1 + 0x218) = local_38;
        *(undefined4 *)(param_1 + 0x21c) = uStack_34;
        iVar1 = FUN_01afe3d0(auStack_24,&local_30);
        if (iVar1 == 0) {
          uVar2 = 0x647;
        }
        else {
          *(undefined4 *)(param_1 + 0x220) = local_30;
          *(undefined4 *)(param_1 + 0x224) = uStack_2c;
          iVar1 = FUN_01afdf70(auStack_24,&local_44);
          if (iVar1 != 0) {
            uVar2 = 1;
            *(bool *)(param_1 + 0x228) = local_44 != 0;
            goto LAB_01b20208;
          }
          uVar2 = 0x64e;
        }
      }
    }
  }
  FUN_01b053d4(0x1e,0,0x8d,"/aws-lc/crypto/fipsmodule/cipher/e_aes.c",uVar2);
  uVar2 = 0;
  iVar1 = extraout_r1;
LAB_01b20208:
  if ((local_1c ^ DAT_01d53560) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01be31f4(uVar2,iVar1,local_1c ^ DAT_01d53560,0);
  }
  return;
}


// FUN_016eb8ec @ 016eb8ec size=492 calls_out=8 calls_in=0
// strings: /aws-lc/crypto/evp_extra/p_dsa.c | /aws-lc/crypto/evp_extra/p_dsa.c | /aws-lc/crypto/evp_extra/p_dsa.c | /aws-lc/crypto/evp_extra/p_dsa.c | /aws-lc/crypto/evp_extra/p_dsa.c

bool FUN_016eb8ec(int param_1,undefined4 param_2,undefined4 param_3,int param_4,int param_5)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  bool bVar4;
  int iVar5;
  undefined1 auStack_24 [8];
  uint local_1c;
  
  local_1c = DAT_018ddaf8;
  if (*(int *)(param_1 + 8) == 0) {
    uVar3 = FUN_016e9cd0(0xe,0,0x43,"/aws-lc/crypto/evp_extra/p_dsa.c",0xb3);
  }
  else {
    iVar5 = *(int *)(*(int *)(param_1 + 8) + 8);
    if (iVar5 == 0) {
      uVar3 = FUN_016e9cd0(0xe,0,0x43,"/aws-lc/crypto/evp_extra/p_dsa.c",0xb4);
    }
    else if (*(int *)(param_1 + 0x14) == 0) {
      uVar3 = FUN_016e9cd0(0xe,0,0x43,"/aws-lc/crypto/evp_extra/p_dsa.c",0xb5);
    }
    else {
      if (param_4 != 0) {
        if (*(int *)(*(int *)(param_1 + 0x14) + 0xc) != 0) {
          iVar1 = FUN_0172a898();
          if (iVar1 != param_5) {
            uVar3 = FUN_016e9cd0(6,0,0x85,"/aws-lc/crypto/evp_extra/p_dsa.c",0xbc);
            goto LAB_016eba3c;
          }
        }
        FUN_016e1d94(auStack_24,param_2,param_3);
        iVar1 = FUN_016e7d3c(auStack_24);
        if (iVar1 == 0) {
LAB_016eb9ac:
          bVar4 = false;
        }
        else {
          iVar2 = FUN_016e1e1c(auStack_24);
          if (iVar2 != 0) goto LAB_016eb9ac;
          iVar5 = FUN_016e78f4(param_4,param_5,iVar1,iVar5);
          bVar4 = iVar5 == 1;
        }
        uVar3 = FUN_016e70c4(iVar1);
        goto LAB_016eb9b8;
      }
      uVar3 = FUN_016e9cd0(0xe,0,0x43,"/aws-lc/crypto/evp_extra/p_dsa.c",0xb6);
    }
  }
LAB_016eba3c:
  bVar4 = false;
LAB_016eb9b8:
  if ((local_1c ^ DAT_018ddaf8) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_016d2b78(uVar3,local_1c ^ DAT_018ddaf8,0);
  }
  return bVar4;
}


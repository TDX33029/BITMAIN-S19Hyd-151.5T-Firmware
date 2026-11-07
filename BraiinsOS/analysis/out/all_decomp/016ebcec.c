// FUN_016ebcec @ 016ebcec size=640 calls_out=11 calls_in=0
// strings: /aws-lc/crypto/evp_extra/p_dsa.c | /aws-lc/crypto/evp_extra/p_dsa.c | /aws-lc/crypto/evp_extra/p_dsa.c | /aws-lc/crypto/evp_extra/p_dsa.c | /aws-lc/crypto/evp_extra/p_dsa.c

undefined4 FUN_016ebcec(int param_1,uint param_2,int *param_3,undefined4 param_4,int param_5)

{
  code *pcVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  uint local_38;
  undefined1 auStack_34 [24];
  uint local_1c;
  
  local_1c = DAT_018ddaf8;
  if (*(int *)(param_1 + 8) == 0) {
    iVar4 = FUN_016e9cd0(0xe,0,0x43,"/aws-lc/crypto/evp_extra/p_dsa.c",0x85);
  }
  else {
    iVar4 = *(int *)(*(int *)(param_1 + 8) + 8);
    if (iVar4 == 0) {
      iVar4 = FUN_016e9cd0(0xe,0,0x43,"/aws-lc/crypto/evp_extra/p_dsa.c",0x86);
    }
    else {
      iVar2 = *(int *)(param_1 + 0x14);
      if (iVar2 == 0) {
        iVar4 = FUN_016e9cd0(0xe,0,0x43,"/aws-lc/crypto/evp_extra/p_dsa.c",0x87);
      }
      else {
        if (param_3 != (int *)0x0) {
          if (param_2 == 0) {
            uVar5 = 1;
            iVar4 = FUN_016e7998(iVar4,iVar2,0);
            *param_3 = iVar4;
          }
          else {
            local_38 = 0;
            if ((*(int *)(iVar2 + 0xc) == 0) || (iVar2 = FUN_0172a898(), iVar2 == param_5)) {
              iVar4 = FUN_016e7108(param_4,param_5,iVar4);
              if (iVar4 == 0) {
                uVar5 = 0;
                uVar3 = local_38;
              }
              else {
                iVar2 = FUN_016e0ec4(auStack_34,param_5);
                if (iVar2 == 1) {
                  FUN_016e7e98(auStack_34,iVar4);
                  iVar2 = FUN_016e1360(auStack_34,&local_38,param_3);
                  uVar3 = local_38;
                  if (iVar2 == 1) {
                    iVar2 = *param_3;
                    uVar5 = 1;
                    if (iVar2 != 0) {
                      if (param_2 < local_38) {
                        if (local_38 < param_2 + iVar2) {
LAB_016ebf64:
                    /* WARNING: Does not return */
                          pcVar1 = (code *)software_udf(0,0x16ebf64);
                          (*pcVar1)();
                        }
                      }
                      else if ((param_2 != local_38) && (param_2 < local_38 + iVar2))
                      goto LAB_016ebf64;
                      FUN_016dd1aa(param_2,local_38);
                    }
                  }
                  else {
                    uVar5 = 0;
                  }
                }
                else {
                  uVar5 = 0;
                  uVar3 = local_38;
                }
              }
            }
            else {
              uVar5 = 0;
              iVar4 = 0;
              FUN_016e9cd0(6,0,0x85,"/aws-lc/crypto/evp_extra/p_dsa.c",0x98);
              uVar3 = local_38;
            }
            FUN_0177aafc(uVar3);
            iVar4 = FUN_016e70c4(iVar4);
          }
          goto LAB_016ebddc;
        }
        iVar4 = FUN_016e9cd0(0xe,0,0x43,"/aws-lc/crypto/evp_extra/p_dsa.c",0x88);
      }
    }
  }
  uVar5 = 0;
LAB_016ebddc:
  if ((local_1c ^ DAT_018ddaf8) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_016d2b78(iVar4,local_1c ^ DAT_018ddaf8,0);
  }
  return uVar5;
}


// FUN_01b07218 @ 01b07218 size=572 calls_out=11 calls_in=0
// strings: /aws-lc/crypto/evp_extra/p_dsa.c | /aws-lc/crypto/evp_extra/p_dsa.c | /aws-lc/crypto/evp_extra/p_dsa.c | /aws-lc/crypto/evp_extra/p_dsa.c

undefined4 FUN_01b07218(int param_1,uint param_2,int *param_3,undefined4 param_4,int param_5)

{
  code *pcVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  bool bVar5;
  undefined4 uVar6;
  uint local_40;
  undefined1 auStack_3c [24];
  int local_24;
  
  local_24 = DAT_01d53560;
  if (*(int *)(param_1 + 8) == 0) {
    uVar6 = 0x85;
  }
  else {
    iVar4 = *(int *)(*(int *)(param_1 + 8) + 8);
    if (iVar4 == 0) {
      uVar6 = 0x86;
    }
    else if (*(int *)(param_1 + 0x14) == 0) {
      uVar6 = 0x87;
    }
    else {
      if (param_3 != (int *)0x0) {
        if (param_2 == 0) {
          uVar3 = 1;
          iVar4 = FUN_01b030e0(iVar4);
          *param_3 = iVar4;
          goto LAB_01b072b0;
        }
        local_40 = 0;
        if ((*(int *)(*(int *)(param_1 + 0x14) + 0xc) == 0) ||
           (iVar2 = FUN_01b3b6b4(), iVar2 == param_5)) {
          iVar4 = FUN_01b02918(param_4,param_5,iVar4);
          if (iVar4 == 0) goto LAB_01b07378;
          iVar2 = FUN_01afc914(auStack_3c,param_5);
          if (iVar2 == 1) {
            FUN_01b0362c(auStack_3c,iVar4);
            iVar2 = FUN_01afcd14(auStack_3c,&local_40,param_3);
            if (iVar2 != 1) goto LAB_01b0742c;
            iVar2 = *param_3;
            uVar3 = 1;
            if (iVar2 != 0) {
              if (param_2 < local_40) {
                bVar5 = param_2 + iVar2 <= local_40;
LAB_01b07408:
                if (!bVar5) {
                    /* WARNING: Does not return */
                  pcVar1 = (code *)software_udf(0,0x1b0740c);
                  (*pcVar1)();
                }
              }
              else if (param_2 != local_40) {
                bVar5 = local_40 + iVar2 <= param_2;
                goto LAB_01b07408;
              }
              FUN_01bed4e2(param_2);
            }
          }
          else {
LAB_01b0742c:
            uVar3 = 0;
          }
        }
        else {
          FUN_01b053d4(6,0,0x85,"/aws-lc/crypto/evp_extra/p_dsa.c",0x98);
LAB_01b07378:
          uVar3 = 0;
          iVar4 = 0;
        }
        FUN_01b6b1c4(local_40);
        FUN_01b028d4(iVar4);
        goto LAB_01b072b0;
      }
      uVar6 = 0x88;
    }
  }
  uVar3 = 0;
  FUN_01b053d4(0xe,0,0x43,"/aws-lc/crypto/evp_extra/p_dsa.c",uVar6);
LAB_01b072b0:
  if (local_24 != DAT_01d53560) {
                    /* WARNING: Subroutine does not return */
    FUN_01be31f4();
  }
  return uVar3;
}


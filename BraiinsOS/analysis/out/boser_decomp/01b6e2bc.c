// FUN_01b6e2bc @ 01b6e2bc size=1224 calls_out=13 calls_in=0
// strings: /aws-lc/crypto/rsa_extra/rsassa_pss_asn1.c | /aws-lc/crypto/rsa_extra/rsassa_pss_asn1.c | /aws-lc/crypto/rsa_extra/rsassa_pss_asn1.c | /aws-lc/crypto/rsa_extra/rsassa_pss_asn1.c | /aws-lc/crypto/rsa_extra/rsassa_pss_asn1.c | /aws-lc/crypto/rsa_extra/rsassa_pss_asn1.c

void FUN_01b6e2bc(undefined4 param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  undefined4 extraout_r1;
  undefined4 uVar6;
  undefined4 *puVar7;
  int *piVar8;
  undefined4 *puVar9;
  undefined8 uVar10;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined1 local_60 [8];
  undefined1 auStack_58 [8];
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  int local_40;
  int local_3c;
  undefined1 auStack_34 [8];
  uint local_2c;
  
  local_2c = DAT_01d53560;
  uVar10 = FUN_01afd684();
  uVar6 = (undefined4)((ulonglong)uVar10 >> 0x20);
  if ((int)uVar10 == 0) {
LAB_01b6e720:
    uVar4 = 1;
    goto LAB_01b6e724;
  }
  local_6c = 0;
  iVar2 = FUN_01afddc0(param_1,local_60,0x20000010);
  if ((iVar2 == 0) || (iVar2 = FUN_01afd684(param_1), iVar2 != 0)) {
LAB_01b6e390:
    puVar7 = (undefined4 *)0x0;
    piVar8 = (int *)0x0;
    puVar9 = (undefined4 *)0x0;
  }
  else {
    iVar2 = FUN_01afddc0(local_60,auStack_48,0xa0000000);
    if ((iVar2 != 0) &&
       ((((iVar2 = FUN_01afddc0(auStack_48,&local_40,0x20000010), iVar2 == 0 ||
          (iVar2 = FUN_01afd684(auStack_48), iVar2 != 0)) ||
         (iVar2 = FUN_01afddc0(&local_40,auStack_34,6), iVar2 == 0)) ||
        ((iVar2 = FUN_01b6deb4(&local_40), iVar2 == 0 ||
         (iVar2 = FUN_01b6e094(auStack_34,&DAT_01d3b0fc,5,&local_6c), iVar2 == 0)))))) {
      FUN_01b053d4(4,0,0x66,"/aws-lc/crypto/rsa_extra/rsassa_pss_asn1.c",0x77);
      goto LAB_01b6e390;
    }
    iVar2 = FUN_01afddc0(local_60,auStack_58,0xa0000001);
    if (iVar2 == 0) {
      puVar9 = (undefined4 *)0x0;
    }
    else {
      local_68 = 0;
      local_64 = 0;
      iVar2 = FUN_01afddc0(auStack_58,auStack_50,0x20000010);
      if (((((iVar2 == 0) || (iVar2 = FUN_01afd684(auStack_58), iVar2 != 0)) ||
           ((iVar2 = FUN_01afddc0(auStack_50,auStack_48,6), iVar2 == 0 ||
            (((iVar2 = FUN_01b6e094(auStack_48,&DAT_01d3b0f8,1,&local_68), uVar6 = local_68,
              iVar2 == 0 || (iVar2 = FUN_01afddc0(auStack_50,&local_40,0x20000010), iVar2 == 0)) ||
             (iVar2 = FUN_01afd684(auStack_50), iVar2 != 0)))))) ||
          ((iVar2 = FUN_01afddc0(&local_40,auStack_34,6), iVar2 == 0 ||
           (iVar2 = FUN_01b6deb4(&local_40), iVar2 == 0)))) ||
         ((iVar2 = FUN_01b6e094(auStack_34,&DAT_01d3b0fc,5,&local_64), uVar4 = local_64, iVar2 == 0
          || (puVar9 = (undefined4 *)FUN_01b6e224(), puVar9 == (undefined4 *)0x0)))) {
        FUN_01b053d4(4,0,0x66,"/aws-lc/crypto/rsa_extra/rsassa_pss_asn1.c",0x93);
        FUN_01b6e264(local_68);
        FUN_01b6e264(local_64);
        goto LAB_01b6e390;
      }
      *puVar9 = uVar6;
      puVar9[1] = uVar4;
    }
    iVar2 = FUN_01afddc0(local_60,auStack_34,0xa0000002);
    if (iVar2 == 0) {
      piVar8 = (int *)0x0;
LAB_01b6e624:
      iVar2 = FUN_01afddc0(local_60,auStack_34,0xa0000003);
      if (iVar2 == 0) {
        puVar7 = (undefined4 *)0x0;
LAB_01b6e6ec:
        iVar2 = FUN_01afd684(local_60);
        uVar4 = local_6c;
        if (iVar2 == 0) {
          uVar10 = FUN_01b6e238();
          uVar6 = (undefined4)((ulonglong)uVar10 >> 0x20);
          puVar5 = (undefined4 *)uVar10;
          *param_2 = (int)puVar5;
          if (puVar5 != (undefined4 *)0x0) {
            *puVar5 = uVar4;
            puVar5[1] = puVar9;
            puVar5[2] = piVar8;
            puVar5[3] = puVar7;
            goto LAB_01b6e720;
          }
        }
      }
      else {
        local_40 = 0;
        local_3c = 0;
        iVar2 = FUN_01afe1d0(auStack_34,&local_40);
        if ((iVar2 == 0) || (iVar2 = FUN_01afd684(auStack_34), iVar2 != 0)) {
          uVar4 = 0xd5;
          uVar6 = 0x66;
LAB_01b6e6a8:
          FUN_01b053d4(4,0,uVar6,"/aws-lc/crypto/rsa_extra/rsassa_pss_asn1.c",uVar4);
        }
        else {
          if (local_40 != 1 || local_3c != 0) {
            uVar4 = 0xcf;
            uVar6 = 0x1f6;
            goto LAB_01b6e6a8;
          }
          puVar7 = (undefined4 *)FUN_01b6e064();
          if (puVar7 != (undefined4 *)0x0) {
            *puVar7 = 1;
            puVar7[1] = 0;
            goto LAB_01b6e6ec;
          }
        }
        puVar7 = (undefined4 *)0x0;
      }
    }
    else {
      local_40 = 0;
      local_3c = 0;
      iVar2 = FUN_01afe1d0(auStack_34,&local_40);
      if ((iVar2 == 0) ||
         (iVar3 = FUN_01afd684(auStack_34), iVar1 = local_3c, iVar2 = local_40, iVar3 != 0)) {
        uVar4 = 0xe4;
        uVar6 = 0x66;
LAB_01b6e5d8:
        FUN_01b053d4(4,0,uVar6,"/aws-lc/crypto/rsa_extra/rsassa_pss_asn1.c",uVar4);
      }
      else {
        if (local_3c < 0) {
          uVar4 = 0xde;
          uVar6 = 0x1f5;
          goto LAB_01b6e5d8;
        }
        piVar8 = (int *)FUN_01b6e064();
        if (piVar8 != (int *)0x0) {
          *piVar8 = iVar2;
          piVar8[1] = iVar1;
          goto LAB_01b6e624;
        }
      }
      puVar7 = (undefined4 *)0x0;
      piVar8 = (int *)0x0;
    }
  }
  FUN_01b6e264(local_6c);
  FUN_01b6e278(puVar9);
  FUN_01b6e250(piVar8);
  FUN_01b6e250(puVar7);
  uVar4 = 0;
  uVar6 = extraout_r1;
LAB_01b6e724:
  if ((local_2c ^ DAT_01d53560) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01be31f4(uVar4,uVar6,local_2c ^ DAT_01d53560,0);
  }
  return;
}


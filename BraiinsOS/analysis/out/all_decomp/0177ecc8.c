// FUN_0177ecc8 @ 0177ecc8 size=1536 calls_out=12 calls_in=0
// strings: /aws-lc/crypto/rsa_extra/rsassa_pss_asn1.c | /aws-lc/crypto/rsa_extra/rsassa_pss_asn1.c | /aws-lc/crypto/rsa_extra/rsassa_pss_asn1.c | /aws-lc/crypto/rsa_extra/rsassa_pss_asn1.c | /aws-lc/crypto/rsa_extra/rsassa_pss_asn1.c | /aws-lc/crypto/rsa_extra/rsassa_pss_asn1.c

void FUN_0177ecc8(undefined4 param_1,int *param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 extraout_r1;
  undefined4 *puVar6;
  undefined4 uVar7;
  undefined4 *puVar8;
  int *piVar9;
  undefined4 uVar10;
  undefined8 uVar11;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined1 local_68 [8];
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  int local_40;
  int local_3c;
  undefined1 auStack_34 [8];
  uint local_2c;
  
  local_2c = DAT_018ddaf8;
  uVar11 = FUN_016e1e1c();
  uVar10 = (undefined4)((ulonglong)uVar11 >> 0x20);
  if ((int)uVar11 == 0) {
LAB_0177ed10:
    uVar2 = 1;
    goto LAB_0177ed14;
  }
  local_74 = 0;
  iVar3 = FUN_016e24e4(param_1,local_68,0x20000010);
  if ((iVar3 == 0) || (iVar3 = FUN_016e1e1c(param_1), iVar3 != 0)) {
    uVar2 = 0;
    puVar6 = (undefined4 *)0x0;
    piVar9 = (int *)0x0;
    puVar8 = (undefined4 *)0x0;
  }
  else {
    iVar3 = FUN_016e24e4(local_68,auStack_50,0xa0000000);
    if (iVar3 == 0) {
      uVar2 = 0;
LAB_0177edf4:
      iVar3 = FUN_016e24e4(local_68,auStack_60,0xa0000001);
      if (iVar3 == 0) {
        puVar8 = (undefined4 *)0x0;
LAB_0177ef68:
        iVar3 = FUN_016e24e4(local_68,auStack_34,0xa0000002);
        if (iVar3 == 0) {
          piVar9 = (int *)0x0;
LAB_0177eff8:
          iVar3 = FUN_016e24e4(local_68,auStack_34,0xa0000003);
          if (iVar3 == 0) {
            puVar6 = (undefined4 *)0x0;
LAB_0177f10c:
            iVar3 = FUN_016e1e1c(local_68);
            if (iVar3 == 0) {
              uVar11 = FUN_0177ec44();
              uVar10 = (undefined4)((ulonglong)uVar11 >> 0x20);
              puVar5 = (undefined4 *)uVar11;
              *param_2 = (int)puVar5;
              if (puVar5 != (undefined4 *)0x0) {
                *puVar5 = uVar2;
                puVar5[1] = puVar8;
                puVar5[2] = piVar9;
                puVar5[3] = puVar6;
                goto LAB_0177ed10;
              }
            }
          }
          else {
            local_40 = 0;
            local_3c = 0;
            iVar3 = FUN_016e2990(auStack_34,&local_40);
            if ((iVar3 == 0) || (iVar3 = FUN_016e1e1c(auStack_34), iVar3 != 0)) {
              puVar6 = (undefined4 *)0x0;
              FUN_016e9cd0(4,0,0x66,"/aws-lc/crypto/rsa_extra/rsassa_pss_asn1.c",0xd5);
            }
            else {
              if (local_40 == 1 && local_3c == 0) {
                puVar6 = (undefined4 *)FUN_0177eb08();
                if (puVar6 != (undefined4 *)0x0) {
                  *puVar6 = 1;
                  puVar6[1] = 0;
                  goto LAB_0177f10c;
                }
              }
              else {
                FUN_016e9cd0(4,0,0x1f6,"/aws-lc/crypto/rsa_extra/rsassa_pss_asn1.c",0xcf);
              }
              puVar6 = (undefined4 *)0x0;
            }
          }
        }
        else {
          local_40 = 0;
          local_3c = 0;
          iVar3 = FUN_016e2990(auStack_34,&local_40);
          if ((iVar3 == 0) ||
             (iVar4 = FUN_016e1e1c(auStack_34), iVar1 = local_3c, iVar3 = local_40, iVar4 != 0)) {
            FUN_016e9cd0(4,0,0x66,"/aws-lc/crypto/rsa_extra/rsassa_pss_asn1.c",0xe4);
          }
          else if (local_3c < 0) {
            FUN_016e9cd0(4,0,0x1f5,"/aws-lc/crypto/rsa_extra/rsassa_pss_asn1.c",0xde);
          }
          else {
            piVar9 = (int *)FUN_0177eb08();
            if (piVar9 != (int *)0x0) {
              *piVar9 = iVar3;
              piVar9[1] = iVar1;
              goto LAB_0177eff8;
            }
          }
          puVar6 = (undefined4 *)0x0;
          piVar9 = (int *)0x0;
        }
      }
      else {
        local_70 = 0;
        local_6c = 0;
        iVar3 = FUN_016e24e4(auStack_60,auStack_58,0x20000010);
        if (((iVar3 == 0) || (iVar3 = FUN_016e1e1c(auStack_60), iVar3 != 0)) ||
           (iVar3 = FUN_016e24e4(auStack_58,auStack_50,6), iVar3 == 0)) {
          uVar7 = 0;
          uVar10 = 0;
        }
        else {
          iVar3 = FUN_0177eb38(auStack_50,&DAT_018bc0e0,1,&local_70);
          uVar10 = local_70;
          if (((iVar3 != 0) && (iVar3 = FUN_016e24e4(auStack_58,auStack_48,0x20000010), iVar3 != 0))
             && (iVar3 = FUN_016e1e1c(auStack_58), iVar3 == 0)) {
            iVar3 = FUN_016e24e4(auStack_48,&local_40,6);
            if ((iVar3 != 0) &&
               ((iVar3 = FUN_016e1e1c(auStack_48), iVar3 == 0 ||
                (((iVar3 = FUN_016e24e4(auStack_48,auStack_34,5), iVar3 != 0 &&
                  (iVar3 = FUN_016e1e1c(auStack_34), iVar3 == 0)) &&
                 (iVar3 = FUN_016e1e1c(auStack_48), iVar3 == 0)))))) {
              iVar3 = FUN_0177eb38(&local_40,&PTR_DAT_018bc0e4,5,&local_6c);
              uVar7 = local_6c;
              if ((iVar3 != 0) &&
                 (puVar8 = (undefined4 *)FUN_0177ec2c(), puVar8 != (undefined4 *)0x0)) {
                *puVar8 = uVar10;
                puVar8[1] = uVar7;
                goto LAB_0177ef68;
              }
              goto LAB_0177ee54;
            }
          }
          uVar7 = 0;
        }
LAB_0177ee54:
        piVar9 = (int *)0x0;
        FUN_016e9cd0(4,0,0x66,"/aws-lc/crypto/rsa_extra/rsassa_pss_asn1.c",0x93);
        FUN_0177ec70(uVar10);
        puVar8 = (undefined4 *)0x0;
        puVar6 = (undefined4 *)0x0;
        FUN_0177ec70(uVar7);
      }
    }
    else {
      iVar3 = FUN_016e24e4(auStack_50,auStack_48,0x20000010);
      if ((iVar3 == 0) || (iVar3 = FUN_016e1e1c(auStack_50), iVar3 != 0)) {
LAB_0177eeb0:
        uVar2 = 0;
      }
      else {
        iVar3 = FUN_016e24e4(auStack_48,&local_40,6);
        if ((iVar3 == 0) ||
           ((iVar3 = FUN_016e1e1c(auStack_48), iVar3 != 0 &&
            (((iVar3 = FUN_016e24e4(auStack_48,auStack_34,5), iVar3 == 0 ||
              (iVar3 = FUN_016e1e1c(auStack_34), iVar3 != 0)) ||
             (iVar3 = FUN_016e1e1c(auStack_48), iVar3 != 0)))))) goto LAB_0177eeb0;
        iVar3 = FUN_0177eb38(&local_40,&PTR_DAT_018bc0e4,5,&local_74);
        uVar2 = local_74;
        if (iVar3 != 0) goto LAB_0177edf4;
      }
      puVar6 = (undefined4 *)0x0;
      piVar9 = (int *)0x0;
      puVar8 = (undefined4 *)0x0;
      FUN_016e9cd0(4,0,0x66,"/aws-lc/crypto/rsa_extra/rsassa_pss_asn1.c",0x77);
    }
  }
  FUN_0177ec70(uVar2);
  FUN_0177ec84(puVar8);
  FUN_0177ec5c(piVar9);
  FUN_0177ec5c(puVar6);
  uVar2 = 0;
  uVar10 = extraout_r1;
LAB_0177ed14:
  if ((local_2c ^ DAT_018ddaf8) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_016d2b78(uVar2,uVar10,local_2c ^ DAT_018ddaf8,0);
  }
  return;
}


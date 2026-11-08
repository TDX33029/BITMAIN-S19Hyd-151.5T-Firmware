// FUN_0177f34c @ 0177f34c size=736 calls_out=8 calls_in=1
// strings: /aws-lc/crypto/rsa_extra/rsassa_pss_asn1.c | /aws-lc/crypto/rsa_extra/rsassa_pss_asn1.c

undefined8 FUN_0177f34c(int param_1,int param_2,int param_3,undefined4 *param_4)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  
  if (param_1 == 0 && param_2 == 0) {
    if (param_3 == -2) {
      return 1;
    }
    piVar1 = (int *)FUN_0177ec44();
    if (piVar1 == (int *)0x0) {
      return 0;
    }
    *piVar1 = 0;
LAB_0177f3a0:
    piVar1[1] = 0;
  }
  else {
    piVar1 = (int *)FUN_0177ec44();
    if (piVar1 == (int *)0x0) {
      return 0;
    }
    if (param_1 == 0) {
      *piVar1 = 0;
    }
    else {
      iVar3 = FUN_0172a6f0(param_1);
      if (iVar3 != 0x40) {
        if (iVar3 == 0x2a3) {
          puVar5 = (undefined4 *)FUN_0177eb20();
          *piVar1 = (int)puVar5;
          if (puVar5 != (undefined4 *)0x0) {
            puVar6 = &DAT_0044ff78;
LAB_0177f598:
            *puVar5 = *puVar6;
            goto LAB_0177f4a0;
          }
        }
        else if (iVar3 == 0x2a0) {
          puVar5 = (undefined4 *)FUN_0177eb20();
          *piVar1 = (int)puVar5;
          if (puVar5 != (undefined4 *)0x0) {
            puVar6 = &DAT_0044ff68;
            goto LAB_0177f598;
          }
        }
        else if (iVar3 == 0x2a1) {
          puVar5 = (undefined4 *)FUN_0177eb20();
          *piVar1 = (int)puVar5;
          if (puVar5 != (undefined4 *)0x0) {
            puVar6 = &DAT_0044ff58;
            goto LAB_0177f598;
          }
        }
        else if (iVar3 == 0x2a2) {
          puVar5 = (undefined4 *)FUN_0177eb20();
          *piVar1 = (int)puVar5;
          if (puVar5 != (undefined4 *)0x0) {
            puVar6 = &DAT_0044ff48;
            goto LAB_0177f598;
          }
        }
        FUN_016e9cd0(4,0,0x80,"/aws-lc/crypto/rsa_extra/rsassa_pss_asn1.c",0x134);
        goto LAB_0177f470;
      }
      *piVar1 = 0;
LAB_0177f4a0:
      if (param_2 == 0) goto LAB_0177f3a0;
    }
    iVar3 = FUN_0172a6f0(param_2);
    if (iVar3 == 0x40) goto LAB_0177f3a0;
    iVar3 = FUN_0177ec2c();
    if (iVar3 == 0) goto LAB_0177f470;
    iVar4 = FUN_0172a6f0(param_2);
    if (iVar4 != 0x40) {
      if (iVar4 == 0x2a3) {
        puVar5 = (undefined4 *)FUN_0177eb20();
        *(undefined4 **)(iVar3 + 4) = puVar5;
        if (puVar5 != (undefined4 *)0x0) {
          puVar6 = &DAT_0044ff78;
LAB_0177f5bc:
          *puVar5 = *puVar6;
          goto LAB_0177f5c4;
        }
      }
      else if (iVar4 == 0x2a0) {
        puVar5 = (undefined4 *)FUN_0177eb20();
        *(undefined4 **)(iVar3 + 4) = puVar5;
        if (puVar5 != (undefined4 *)0x0) {
          puVar6 = &DAT_0044ff68;
          goto LAB_0177f5bc;
        }
      }
      else if (iVar4 == 0x2a1) {
        puVar5 = (undefined4 *)FUN_0177eb20();
        *(undefined4 **)(iVar3 + 4) = puVar5;
        if (puVar5 != (undefined4 *)0x0) {
          puVar6 = &DAT_0044ff58;
          goto LAB_0177f5bc;
        }
      }
      else if (iVar4 == 0x2a2) {
        puVar5 = (undefined4 *)FUN_0177eb20();
        *(undefined4 **)(iVar3 + 4) = puVar5;
        if (puVar5 != (undefined4 *)0x0) {
          puVar6 = &DAT_0044ff48;
          goto LAB_0177f5bc;
        }
      }
      FUN_016e9cd0(4,0,0x80,"/aws-lc/crypto/rsa_extra/rsassa_pss_asn1.c",0x134);
      FUN_0177ec84(iVar3);
      goto LAB_0177f470;
    }
    *(undefined4 *)(iVar3 + 4) = 0;
LAB_0177f5c4:
    piVar1[1] = iVar3;
  }
  if (param_3 < 0) {
LAB_0177f470:
    FUN_0177f2f8(piVar1);
    return 0;
  }
  if (param_3 != 0x14) {
    piVar2 = (int *)FUN_0177eb08();
    piVar1[2] = (int)piVar2;
    if (piVar2 == (int *)0x0) goto LAB_0177f470;
    *piVar2 = param_3;
    piVar2[1] = param_3 >> 0x1f;
  }
  *param_4 = piVar1;
  return 1;
}


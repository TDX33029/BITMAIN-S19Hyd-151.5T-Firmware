// FUN_01780f18 @ 01780f18 size=1228 calls_out=20 calls_in=1
// strings: /aws-lc/crypto/rsa_extra/rsa_crypt.c | /aws-lc/crypto/rsa_extra/rsa_crypt.c | /aws-lc/crypto/rsa_extra/rsa_crypt.c | /aws-lc/crypto/rsa_extra/rsa_crypt.c | /aws-lc/crypto/rsa_extra/rsa_crypt.c | /aws-lc/crypto/rsa_extra/rsa_crypt.c

undefined4
FUN_01780f18(int *param_1,uint *param_2,undefined4 param_3,uint param_4,uint param_5,uint param_6,
            int param_7)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined2 *puVar5;
  int iVar6;
  uint uVar7;
  code *pcVar8;
  int iVar9;
  char *pcVar10;
  undefined4 uVar11;
  
  if ((*param_1 != 0) && (pcVar8 = *(code **)(*param_1 + 0x20), pcVar8 != (code *)0x0)) {
    if ((int)param_4 < 0) {
      FUN_016e9cd0(4,0,0x45,"/aws-lc/crypto/rsa_extra/rsa_crypt.c",0x156);
      *param_2 = 0;
    }
    else {
      uVar1 = (*pcVar8)(param_4,param_5,param_3,param_1,param_7);
      if (-1 < (int)uVar1) {
        *param_2 = uVar1;
        return 1;
      }
      *param_2 = 0;
    }
    return 0;
  }
  if ((param_1[1] == 0) || (param_1[2] == 0)) {
    FUN_016e9cd0(4,0,0x90,"/aws-lc/crypto/rsa_extra/rsa_crypt.c",0x164);
    return 0;
  }
  iVar2 = FUN_0174f108(param_1);
  if (iVar2 == 0) {
    return 0;
  }
  uVar1 = FUN_0175009c(param_1);
  if (param_4 < uVar1) {
    FUN_016e9cd0(4,0,0x87,"/aws-lc/crypto/rsa_extra/rsa_crypt.c",0x173);
    return 0;
  }
  iVar2 = FUN_017184a8();
  if (iVar2 == 0) {
    uVar11 = 0;
    puVar5 = (undefined2 *)0x0;
    goto LAB_01781240;
  }
  FUN_017185b4();
  iVar3 = FUN_017186b0(iVar2);
  iVar4 = FUN_017186b0(iVar2);
  puVar5 = (undefined2 *)FUN_0177a6c0(uVar1);
  if (puVar5 == (undefined2 *)0x0 || (iVar4 == 0 || iVar3 == 0)) goto LAB_0178122c;
  if (param_7 == 3) {
    iVar6 = FUN_0174e9c0(puVar5,uVar1,param_5,param_6);
LAB_01781338:
    if (iVar6 < 1) goto LAB_0178122c;
LAB_01781178:
    iVar6 = FUN_017150f4(puVar5,uVar1,iVar3);
    if (iVar6 == 0) goto LAB_0178122c;
    iVar6 = FUN_01715744(iVar3,param_1[1]);
    if (-1 < iVar6) {
      FUN_016e9cd0(4,0,0x73,"/aws-lc/crypto/rsa_extra/rsa_crypt.c",0x19f);
      goto LAB_0178122c;
    }
    iVar6 = FUN_017205f4(param_1 + 0x15,param_1 + 0xd,param_1[1],iVar2);
    if ((iVar6 == 0) ||
       (iVar3 = FUN_01721398(iVar4,iVar3,param_1[2],param_1[0x15] + 0x14,iVar2,param_1[0x15]),
       iVar3 == 0)) goto LAB_0178122c;
    iVar3 = FUN_01715614(param_3,uVar1,iVar4);
    if (iVar3 == 0) {
      FUN_016e9cd0(4,0,0x44,"/aws-lc/crypto/rsa_extra/rsa_crypt.c",0x1ab);
      goto LAB_0178122c;
    }
    uVar11 = 1;
    *param_2 = uVar1;
  }
  else {
    if (param_7 == 4) {
      iVar6 = FUN_017803dc(puVar5,uVar1,param_5,param_6,0,0,0,0);
      goto LAB_01781338;
    }
    if (param_7 == 1) {
      if (uVar1 < 0xb) {
        FUN_016e9cd0(4,0,0x7e,"/aws-lc/crypto/rsa_extra/rsa_crypt.c",0xd7);
        goto LAB_0178122c;
      }
      if (uVar1 - 0xb < param_6) {
        FUN_016e9cd0(4,0,0x72,"/aws-lc/crypto/rsa_extra/rsa_crypt.c",0xdc);
        goto LAB_0178122c;
      }
      iVar9 = uVar1 - param_6;
      pcVar10 = (char *)(puVar5 + 1);
      *puVar5 = 0x200;
      iVar6 = FUN_0174bccc(pcVar10);
      if (iVar6 != 1) {
LAB_017813e0:
                    /* WARNING: Subroutine does not return */
        FUN_016d2c24();
      }
      if (iVar9 == 3) {
        uVar7 = (int)puVar5 + 3;
        *(undefined1 *)(puVar5 + 1) = 0;
LAB_01781154:
        if (uVar7 < param_5) {
          if (param_5 < (int)puVar5 + uVar1) {
LAB_017813d0:
                    /* WARNING: Does not return */
            pcVar8 = (code *)software_udf(0,0x17813d0);
            (*pcVar8)();
          }
        }
        else if ((param_5 < uVar7) && (uVar7 < param_5 + param_6)) goto LAB_017813d0;
        FUN_016dd1aa(uVar7,param_5,param_6);
      }
      else {
        do {
          while (*pcVar10 == '\0') {
            iVar6 = FUN_0174bccc(pcVar10,1);
            if (iVar6 != 1) goto LAB_017813e0;
          }
          pcVar10 = pcVar10 + 1;
        } while ((char *)((int)puVar5 + iVar9 + -1) != pcVar10);
        *(undefined1 *)((int)puVar5 + iVar9 + -1) = 0;
        if (param_6 != 0) {
          uVar7 = (int)puVar5 + iVar9;
          goto LAB_01781154;
        }
      }
      goto LAB_01781178;
    }
    FUN_016e9cd0(4,0,0x8f,"/aws-lc/crypto/rsa_extra/rsa_crypt.c",0x191);
LAB_0178122c:
    uVar11 = 0;
  }
  FUN_01718904(iVar2);
  FUN_017184e8(iVar2);
LAB_01781240:
  FUN_0177aafc(puVar5);
  return uVar11;
}


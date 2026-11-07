// FUN_01b53fb8 @ 01b53fb8 size=964 calls_out=18 calls_in=3
// strings: /aws-lc/crypto/fipsmodule/ec/oct.c | /aws-lc/crypto/fipsmodule/ec/oct.c | /aws-lc/crypto/fipsmodule/ec/oct.c | /aws-lc/crypto/fipsmodule/ec/oct.c | /aws-lc/crypto/fipsmodule/ec/oct.c

bool FUN_01b53fb8(int param_1,undefined4 *param_2,byte *param_3,int param_4,int param_5)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  byte bVar5;
  undefined4 uVar6;
  bool bVar7;
  undefined4 uVar8;
  int local_144;
  undefined1 auStack_13c [68];
  undefined1 auStack_f8 [68];
  undefined1 auStack_b4 [112];
  int local_44;
  int local_2c;
  undefined4 local_28;
  
  local_44 = param_1;
  iVar4 = FUN_01b44b4c(param_1,*param_2,0);
  if (iVar4 != 0) {
    local_28 = 0xcf;
    FUN_01b053d4(0xf,0,0x6a,"/aws-lc/crypto/fipsmodule/ec/oct.c");
    return false;
  }
  local_2c = DAT_01d53560;
  if (param_4 == 0) {
    uVar8 = 0x78;
    uVar6 = 100;
LAB_01b53d04:
    FUN_01b053d4(0xf,0,uVar6,"/aws-lc/crypto/fipsmodule/ec/oct.c",uVar8);
  }
  else {
    bVar1 = *param_3;
    if (bVar1 == 0) {
      if (param_4 == 1) {
        FUN_01b425e0(param_1,param_2 + 1);
        goto LAB_01b53d1c;
      }
      uVar8 = 0x81;
      uVar6 = 0x6d;
      goto LAB_01b53d04;
    }
    bVar5 = bVar1 & 0xfe;
    if (bVar5 == 4) {
      iVar4 = FUN_01b403f8(param_1,auStack_b4);
      if (iVar4 == 0) {
        FUN_01b425f8(param_1);
        bVar7 = false;
        goto LAB_01b53d50;
      }
      FUN_01b3e7c4(param_1,param_2 + 1,auStack_b4);
LAB_01b53d1c:
      bVar7 = true;
      goto LAB_01b53d50;
    }
    iVar4 = param_1 + 0x118;
    if (bVar5 != 6) {
      iVar2 = FUN_01b2b938(iVar4);
      if ((bVar5 != 2) || (iVar2 + 1 != param_4)) {
        uVar8 = 0xa4;
        uVar6 = 0x6d;
        goto LAB_01b53d04;
      }
      if (param_5 == 0) {
        param_5 = FUN_01b2e788();
        if (param_5 == 0) goto LAB_01b53d0c;
        local_144 = param_5;
      }
      else {
        local_144 = 0;
      }
      FUN_01b2e894(param_5);
      iVar3 = FUN_01b2e970(param_5);
      if ((iVar3 == 0) || (iVar2 = FUN_01b2ba40(param_3 + 1,iVar2,iVar3), iVar2 == 0)) {
LAB_01b53f3c:
        bVar7 = false;
      }
      else {
        iVar4 = FUN_01b2be1c(iVar3,iVar4);
        if (-1 < iVar4) {
          FUN_01b053d4(0xf,0,0x6d,"/aws-lc/crypto/fipsmodule/ec/oct.c",0xbc);
          goto LAB_01b53f3c;
        }
        iVar4 = FUN_01b538d4(param_1,param_2,iVar3,bVar1 & 1,param_5);
        bVar7 = iVar4 != 0;
      }
      FUN_01b2ebbc(param_5);
      FUN_01b2e7c8(local_144);
      goto LAB_01b53d50;
    }
    iVar4 = FUN_01b2b938(iVar4);
    if (((param_4 == iVar4 * 2 + 1) && ((*param_3 & 0xfe) == 6)) &&
       (bVar7 = (bool)(~(*param_3 ^ param_3[iVar4 * 2]) & 1), bVar7 != false)) {
      iVar2 = FUN_01b3eb54(param_1,auStack_13c,param_3 + 1,iVar4);
      if (iVar2 != 0) {
        iVar4 = FUN_01b3eb54(param_1,auStack_f8,param_3 + iVar4 + 1,iVar4);
        if ((iVar4 != 0) &&
           (iVar4 = FUN_01b3fffc(param_1,auStack_b4,auStack_13c,auStack_f8), iVar4 != 0)) {
          FUN_01b3e7c4(param_1,param_2 + 1,auStack_b4);
          goto LAB_01b53d50;
        }
      }
    }
    else {
      FUN_01b053d4(0xf,0,0x6d,"/aws-lc/crypto/fipsmodule/ec/oct.c",0x66);
    }
    FUN_01b425f8(param_1,param_2 + 1);
  }
LAB_01b53d0c:
  bVar7 = false;
LAB_01b53d50:
  if (local_2c != DAT_01d53560) {
                    /* WARNING: Subroutine does not return */
    FUN_01be31f4();
  }
  return bVar7;
}


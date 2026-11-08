// FUN_0174d02c @ 0174d02c size=984 calls_out=18 calls_in=3
// strings: /aws-lc/crypto/fipsmodule/ec/oct.c | /aws-lc/crypto/fipsmodule/ec/oct.c | /aws-lc/crypto/fipsmodule/ec/oct.c | /aws-lc/crypto/fipsmodule/ec/oct.c | /aws-lc/crypto/fipsmodule/ec/oct.c | /aws-lc/crypto/fipsmodule/ec/oct.c

byte FUN_0174d02c(int param_1,undefined4 *param_2,byte *param_3,int param_4,int param_5)

{
  int iVar1;
  int iVar2;
  byte bVar3;
  byte bVar4;
  undefined4 uVar5;
  int local_144;
  undefined1 auStack_13c [68];
  undefined1 auStack_f8 [68];
  undefined1 auStack_b4 [112];
  int local_44;
  int local_2c;
  undefined4 local_28;
  
  local_44 = param_1;
  iVar2 = FUN_01736960(param_1,*param_2,0);
  if (iVar2 != 0) {
    local_28 = 0xcf;
    FUN_016e9cd0(0xf,0,0x6a,"/aws-lc/crypto/fipsmodule/ec/oct.c");
    return 0;
  }
  local_2c = DAT_018ddaf8;
  if (param_4 == 0) {
    FUN_016e9cd0(0xf,0,100,"/aws-lc/crypto/fipsmodule/ec/oct.c",0x78);
  }
  else {
    bVar4 = *param_3;
    if (bVar4 != 0) {
      bVar3 = bVar4 & 0xfe;
      if (bVar3 == 4) {
        iVar2 = FUN_01730888(param_1,auStack_b4);
        if (iVar2 == 0) {
          FUN_01733e30(param_1,param_2 + 1);
          bVar4 = 0;
        }
        else {
          bVar4 = 1;
          FUN_0172e734(param_1,param_2 + 1,auStack_b4);
        }
        goto LAB_0174cd54;
      }
      if (bVar3 == 6) {
        iVar2 = FUN_01714f1c(param_1 + 0x118);
        if (((param_4 == iVar2 * 2 + 1) && ((*param_3 & 0xfe) == 6)) &&
           (bVar4 = ~(*param_3 ^ param_3[iVar2 * 2]) & 1, bVar4 != 0)) {
          iVar1 = FUN_0172ead0(param_1,auStack_13c,param_3 + 1,iVar2);
          if (iVar1 != 0) {
            iVar2 = FUN_0172ead0(param_1,auStack_f8,param_3 + iVar2 + 1);
            if ((iVar2 != 0) &&
               (iVar2 = FUN_017303f8(param_1,auStack_b4,auStack_13c,auStack_f8), iVar2 != 0)) {
              FUN_0172e734(param_1,param_2 + 1,auStack_b4);
              goto LAB_0174cd54;
            }
          }
        }
        else {
          FUN_016e9cd0(0xf,0,0x6d,"/aws-lc/crypto/fipsmodule/ec/oct.c",0x66);
        }
        FUN_01733e30(param_1,param_2 + 1);
        goto LAB_0174cd50;
      }
      iVar2 = FUN_01714f1c(param_1 + 0x118);
      if ((bVar3 != 2) || (iVar2 + 1 != param_4)) {
        uVar5 = 0xa4;
        goto LAB_0174cd3c;
      }
      if (param_5 == 0) {
        param_5 = FUN_017184a8();
        if (param_5 == 0) goto LAB_0174cd50;
        local_144 = param_5;
      }
      else {
        local_144 = 0;
      }
      FUN_017185b4(param_5);
      iVar1 = FUN_017186b0(param_5);
      if ((iVar1 == 0) || (iVar2 = FUN_017150f4(param_3 + 1,iVar2,iVar1), iVar2 == 0)) {
LAB_0174d000:
        bVar4 = 0;
      }
      else {
        iVar2 = FUN_01715744(iVar1,param_1 + 0x118);
        if (-1 < iVar2) {
          FUN_016e9cd0(0xf,0,0x6d,"/aws-lc/crypto/fipsmodule/ec/oct.c",0xbc);
          goto LAB_0174d000;
        }
        iVar2 = FUN_0174c8a4(param_1,param_2,iVar1,bVar4 & 1,param_5);
        bVar4 = 0;
        if (iVar2 != 0) {
          bVar4 = 1;
        }
      }
      FUN_01718904(param_5);
      FUN_017184e8(local_144);
      goto LAB_0174cd54;
    }
    if (param_4 == 1) {
      FUN_01733e18(param_1,param_2 + 1);
      bVar4 = 1;
      goto LAB_0174cd54;
    }
    uVar5 = 0x81;
LAB_0174cd3c:
    FUN_016e9cd0(0xf,0,0x6d,"/aws-lc/crypto/fipsmodule/ec/oct.c",uVar5);
  }
LAB_0174cd50:
  bVar4 = 0;
LAB_0174cd54:
  if (local_2c != DAT_018ddaf8) {
                    /* WARNING: Subroutine does not return */
    FUN_016d2b78();
  }
  return bVar4;
}


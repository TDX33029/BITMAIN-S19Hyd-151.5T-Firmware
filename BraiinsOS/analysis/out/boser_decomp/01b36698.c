// FUN_01b36698 @ 01b36698 size=1392 calls_out=22 calls_in=8
// strings: /aws-lc/crypto/fipsmodule/bn/exponentiation.c | /aws-lc/crypto/fipsmodule/bn/exponentiation.c | aws_lc_0_39_0_BN_mod_exp_mont_consttime | /aws-lc/crypto/fipsmodule/bn/exponentiation.c | (size_t)top <= BN_MONTGOMERY_MAX_WORDS | align_pointer

ulonglong FUN_01b36698(undefined4 param_1,int param_2,int param_3,int param_4,undefined4 param_5,
                      int param_6)

{
  int iVar1;
  char *pcVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  char *pcVar6;
  uint extraout_r1;
  undefined4 uVar7;
  char *pcVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  undefined8 uVar12;
  ulonglong uVar13;
  undefined4 uVar14;
  int local_6c;
  uint local_68;
  int local_64;
  int local_60;
  int local_54;
  uint local_50;
  uint local_4c;
  uint local_48;
  undefined4 local_44;
  int local_40;
  uint uStack_3c;
  uint local_38;
  uint local_34;
  undefined4 local_30;
  int local_2c;
  
  local_2c = DAT_01d53560;
  iVar1 = FUN_01b2e5fc(param_4,param_2,&PTR_01d3b2b0,0);
  if (iVar1 == 0) {
    uVar14 = 0x343;
    uVar7 = 0x68;
LAB_01b3670c:
    FUN_01b053d4(3,0,uVar7,"/aws-lc/crypto/fipsmodule/bn/exponentiation.c",uVar14);
    local_68 = 0;
  }
  else {
    if (*(int *)(param_4 + 0xc) != 0) {
      uVar14 = 0x347;
      uVar7 = 0x6d;
      goto LAB_01b3670c;
    }
    if ((*(int *)(param_2 + 0xc) != 0) || (iVar1 = FUN_01b2be1c(param_2,param_4), -1 < iVar1)) {
      uVar14 = 0x34d;
      uVar7 = 0x6b;
      goto LAB_01b3670c;
    }
    iVar1 = *(int *)(param_3 + 4) * 0x20;
    if (iVar1 == 0) {
      uVar12 = FUN_01b2e1dc(param_4,1);
      if ((int)uVar12 == 0) {
        if (local_2c == DAT_01d53560) {
          uVar13 = FUN_01b2b544(param_1,(int)((ulonglong)uVar12 >> 0x20),0,0);
          return uVar13;
        }
        goto LAB_01b36830;
      }
      FUN_01b2af70(param_1);
      local_68 = 1;
    }
    else {
      local_68 = 0;
      if (param_6 == 0) {
        param_6 = FUN_01b358dc(param_4,param_5);
        local_6c = param_6;
        if (param_6 != 0) goto LAB_01b36878;
        local_60 = 0;
        uVar10 = 0;
        local_64 = 0;
      }
      else {
        local_6c = 0;
LAB_01b36878:
        uVar11 = *(uint *)(param_6 + 0x18);
        if (0x800 < uVar11) {
          uVar7 = 0x389;
          pcVar8 = "aws_lc_0_39_0_BN_mod_exp_mont_consttime";
          pcVar6 = "/aws-lc/crypto/fipsmodule/bn/exponentiation.c";
          pcVar2 = "(size_t)top <= BN_MONTGOMERY_MAX_WORDS";
          goto LAB_01b368a0;
        }
        local_60 = uVar11 * 0x88;
        local_64 = FUN_01b6b0a8(local_60 + 0x40);
        if (local_64 == 0) {
          uVar10 = 0;
        }
        else {
          uVar10 = local_64 + (-local_64 & 0x3fU);
          uVar9 = uVar10 & 0x3f;
          if (uVar9 != 0) {
            uVar7 = 0xa6;
            pcVar8 = "align_pointer";
            pcVar6 = "/aws-lc/crypto/fipsmodule/../internal.h";
            pcVar2 = "((uintptr_t)ptr & (alignment - 1)) == 0";
            goto LAB_01b368a0;
          }
          local_54 = uVar10 + uVar11 * 0x80;
          local_40 = local_54 + uVar11 * 4;
          local_30 = 2;
          local_44 = 2;
          local_50 = uVar9;
          local_4c = uVar11;
          local_48 = uVar9;
          uStack_3c = uVar9;
          local_38 = uVar11;
          local_34 = uVar9;
          iVar3 = FUN_01b32524(&local_54,param_6,param_5);
          if ((iVar3 != 0) && (iVar3 = FUN_01b2b700(&local_54,uVar11), iVar3 != 0)) {
            if (*(int *)(param_2 + 0xc) != 0) {
              uVar7 = 0x3ba;
              pcVar8 = "aws_lc_0_39_0_BN_mod_exp_mont_consttime";
              pcVar6 = "/aws-lc/crypto/fipsmodule/bn/exponentiation.c";
              pcVar2 = "!a->neg";
LAB_01b368a0:
                    /* WARNING: Subroutine does not return */
              FUN_01be3310(pcVar2,pcVar6,uVar7,pcVar8);
            }
            iVar3 = FUN_01b2be1c(param_2,param_4);
            if (-1 < iVar3) {
              uVar7 = 0x3bb;
              pcVar8 = "aws_lc_0_39_0_BN_mod_exp_mont_consttime";
              pcVar6 = "/aws-lc/crypto/fipsmodule/bn/exponentiation.c";
              pcVar2 = "constant_time_declassify_int(aws_lc_0_39_0_BN_ucmp(a, m) < 0)";
              goto LAB_01b368a0;
            }
            iVar3 = FUN_01b331cc(&local_40,param_2,param_6,param_5);
            if ((iVar3 != 0) && (iVar3 = FUN_01b2b700(&local_40,uVar11), iVar3 != 0)) {
              FUN_01b2b1bc(&local_54,uVar11,uVar10,0);
              FUN_01b2b1bc(&local_40,uVar11,uVar10,1);
              iVar3 = FUN_01b33010(&local_54,&local_40,&local_40,param_6,param_5);
              if (iVar3 != 0) {
                FUN_01b2b1bc(&local_54,uVar11,uVar10,2);
                iVar3 = 3;
                do {
                  iVar4 = FUN_01b33010(&local_54,&local_40,&local_54,param_6,param_5);
                  if (iVar4 == 0) goto LAB_01b36bc4;
                  iVar4 = iVar3 + 1;
                  FUN_01b2b1bc(&local_54,uVar11,uVar10,iVar3);
                  iVar3 = iVar4;
                } while (iVar4 != 0x20);
                iVar3 = 0;
                iVar1 = iVar1 + -1;
                FUN_01bf0f98(iVar1,5);
                for (uVar9 = extraout_r1; -1 < (int)uVar9; uVar9 = uVar9 - 1) {
                  iVar4 = FUN_01b35f4c(param_3);
                  iVar3 = iVar4 + iVar3 * 2;
                }
                iVar3 = FUN_01b2b5d8(&local_54,uVar11,uVar10,iVar3);
                if (iVar3 != 0) {
                  if ((int)extraout_r1 < -1) {
                    uVar9 = 0;
                  }
                  else {
                    uVar9 = ~extraout_r1;
                  }
                  iVar1 = uVar9 + iVar1;
                  while (-1 < iVar1) {
                    iVar4 = 0;
                    iVar3 = iVar1 + -5;
                    do {
                      iVar5 = FUN_01b33010(&local_54,&local_54,&local_54,param_6,param_5);
                      if (iVar5 == 0) goto LAB_01b36bc4;
                      iVar5 = FUN_01b35f4c(param_3,iVar1);
                      iVar1 = iVar1 + -1;
                      iVar4 = iVar5 + iVar4 * 2;
                    } while (iVar1 != iVar3);
                    iVar3 = FUN_01b2b5d8(&local_40,uVar11,uVar10,iVar4);
                    if ((iVar3 == 0) ||
                       (iVar3 = FUN_01b33010(&local_54,&local_54,&local_40,param_6,param_5),
                       iVar3 == 0)) goto LAB_01b36bc4;
                  }
                  iVar1 = FUN_01b32498(param_1,&local_54,param_6,param_5);
                  local_68 = (uint)(iVar1 != 0);
                }
              }
            }
          }
        }
      }
LAB_01b36bc4:
      FUN_01b323f0(local_6c);
      if (local_64 == 0 && uVar10 != 0) {
        FUN_01b6b174(uVar10,local_60);
      }
      FUN_01b6b1c4(local_64);
    }
  }
  if (local_2c == DAT_01d53560) {
    return (ulonglong)local_68;
  }
LAB_01b36830:
                    /* WARNING: Subroutine does not return */
  FUN_01be31f4();
}


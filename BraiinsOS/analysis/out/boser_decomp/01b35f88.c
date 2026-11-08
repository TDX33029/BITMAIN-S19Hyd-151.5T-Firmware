// FUN_01b35f88 @ 01b35f88 size=1188 calls_out=20 calls_in=10
// strings: /aws-lc/crypto/fipsmodule/bn/exponentiation.c | /aws-lc/crypto/fipsmodule/bn/exponentiation.c | aws_lc_0_39_0_BN_mod_exp_mont | /aws-lc/crypto/fipsmodule/bn/exponentiation.c | wvalue < (1 << window) | aws_lc_0_39_0_BN_mod_exp_mont

ulonglong FUN_01b35f88(undefined4 param_1,int param_2,undefined4 param_3,int param_4,
                      undefined4 param_5,int param_6)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  char *pcVar7;
  undefined4 uVar8;
  int *piVar9;
  bool bVar10;
  undefined8 uVar11;
  ulonglong uVar12;
  undefined4 uVar13;
  int local_c0;
  uint local_b8;
  uint local_b4;
  int local_ac [32];
  int local_2c;
  
  local_2c = DAT_01d53560;
  iVar1 = FUN_01b2e5fc(param_4,param_2,&PTR_01d3b2b0,0);
  if (iVar1 == 0) {
    uVar13 = 0x213;
    uVar8 = 0x68;
LAB_01b35ff4:
    FUN_01b053d4(3,0,uVar8,"/aws-lc/crypto/fipsmodule/bn/exponentiation.c",uVar13);
    local_b4 = 0;
  }
  else {
    if (*(int *)(param_4 + 0xc) != 0) {
      uVar13 = 0x217;
      uVar8 = 0x6d;
      goto LAB_01b35ff4;
    }
    if ((*(int *)(param_2 + 0xc) != 0) || (iVar1 = FUN_01b2be1c(param_2,param_4), -1 < iVar1)) {
      uVar13 = 0x21c;
      uVar8 = 0x6b;
      goto LAB_01b35ff4;
    }
    iVar1 = FUN_01b2b8d0(param_3);
    if (iVar1 == 0) {
      uVar11 = FUN_01b2e1dc(param_4,1);
      if ((int)uVar11 == 0) {
        if (local_2c == DAT_01d53560) {
          uVar12 = FUN_01b2b544(param_1,(int)((ulonglong)uVar11 >> 0x20),0,0);
          return uVar12;
        }
        goto LAB_01b36104;
      }
      FUN_01b2af70(param_1);
      local_b4 = 1;
    }
    else {
      FUN_01b2e894(param_5);
      iVar2 = FUN_01b2e970(param_5);
      iVar3 = FUN_01b2e970(param_5);
      local_b4 = 0;
      local_ac[0] = iVar3;
      if (iVar3 == 0 || iVar2 == 0) {
LAB_01b36148:
        local_c0 = 0;
      }
      else {
        if (param_6 == 0) {
          param_6 = FUN_01b358dc(param_4,param_5);
          if (param_6 == 0) goto LAB_01b36148;
          local_c0 = param_6;
        }
        else {
          local_c0 = 0;
        }
        iVar4 = FUN_01b331cc(iVar3,param_2,param_6,param_5);
        if (iVar4 != 0) {
          uVar5 = FUN_01b2089c(iVar1);
          if (uVar5 != 1) {
            iVar4 = FUN_01b2e970(param_5);
            if ((iVar4 == 0) ||
               (iVar3 = FUN_01b33010(iVar4,iVar3,iVar3,param_6,param_5), iVar3 == 0))
            goto LAB_01b36150;
            iVar3 = 1;
            piVar9 = local_ac;
            do {
              iVar6 = FUN_01b2e970(param_5);
              piVar9[1] = iVar6;
              if ((iVar6 == 0) ||
                 (iVar6 = FUN_01b33010(iVar6,*piVar9,iVar4,param_6,param_5), iVar6 == 0))
              goto LAB_01b36150;
              iVar3 = iVar3 + 1;
              piVar9 = piVar9 + 1;
            } while (iVar3 != 1 << (uVar5 - 1 & 0xff));
          }
          iVar1 = iVar1 + -1;
          bVar10 = true;
          while( true ) {
            while (iVar3 = FUN_01b35f4c(param_3,iVar1), iVar3 != 0) {
              iVar3 = 0;
              local_b8 = 1;
              for (iVar4 = 1; iVar4 <= iVar1 && iVar4 < (int)uVar5; iVar4 = iVar4 + 1) {
                iVar6 = FUN_01b35f4c(param_3,iVar1 - iVar4);
                if (iVar6 != 0) {
                  local_b8 = local_b8 << (iVar4 - iVar3 & 0xffU) | 1;
                  iVar3 = iVar4;
                }
              }
              if (!bVar10) {
                for (iVar4 = 0; iVar4 < iVar3 + 1; iVar4 = iVar4 + 1) {
                  iVar6 = FUN_01b33010(iVar2,iVar2,iVar2,param_6,param_5);
                  if (iVar6 == 0) goto LAB_01b36150;
                }
              }
              if (1 << (uVar5 & 0xff) <= (int)local_b8) {
                uVar8 = 0x27a;
                pcVar7 = "wvalue < (1 << window)";
                goto LAB_01b36324;
              }
              if (bVar10) {
                iVar4 = FUN_01b2b33c(iVar2,local_ac[(int)local_b8 >> 1]);
              }
              else {
                iVar4 = FUN_01b33010(iVar2,iVar2,local_ac[(int)local_b8 >> 1],param_6,param_5);
              }
              if (iVar4 == 0) goto LAB_01b36150;
              if (iVar1 == iVar3) goto LAB_01b363b0;
              bVar10 = false;
              iVar1 = (iVar1 + -1) - iVar3;
            }
            if ((!bVar10) && (iVar3 = FUN_01b33010(iVar2,iVar2,iVar2,param_6,param_5), iVar3 == 0))
            goto LAB_01b36150;
            if (iVar1 == 0) break;
            iVar1 = iVar1 + -1;
          }
          if (bVar10) {
            uVar8 = 0x28b;
            pcVar7 = "!r_is_one";
LAB_01b36324:
                    /* WARNING: Subroutine does not return */
            FUN_01be3310(pcVar7,"/aws-lc/crypto/fipsmodule/bn/exponentiation.c",uVar8,
                         "aws_lc_0_39_0_BN_mod_exp_mont");
          }
LAB_01b363b0:
          iVar1 = FUN_01b32498(param_1,iVar2,param_6,param_5);
          local_b4 = (uint)(iVar1 != 0);
        }
      }
LAB_01b36150:
      FUN_01b323f0(local_c0);
      FUN_01b2ebbc(param_5);
    }
  }
  if (local_2c == DAT_01d53560) {
    return (ulonglong)local_b4;
  }
LAB_01b36104:
                    /* WARNING: Subroutine does not return */
  FUN_01be31f4();
}


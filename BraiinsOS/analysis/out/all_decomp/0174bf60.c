// FUN_0174bf60 @ 0174bf60 size=2336 calls_out=32 calls_in=1
// strings: /aws-lc/crypto/fipsmodule/bn/sqrt.c | /aws-lc/crypto/fipsmodule/bn/sqrt.c | /aws-lc/crypto/fipsmodule/bn/sqrt.c | /aws-lc/crypto/fipsmodule/bn/sqrt.c | /aws-lc/crypto/fipsmodule/bn/sqrt.c | /aws-lc/crypto/fipsmodule/bn/sqrt.c

int FUN_0174bf60(int param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  code *pcVar10;
  int iVar11;
  int local_44;
  
  iVar1 = FUN_017181d4(param_3);
  if ((iVar1 == 0) || (iVar1 = FUN_01717ce4(param_3,1), iVar1 != 0)) {
    iVar1 = FUN_01717ce4(param_3,2);
    if (iVar1 == 0) {
      FUN_016e9cd0(3,0,0x72,"/aws-lc/crypto/fipsmodule/bn/sqrt.c",0x27);
      return 0;
    }
    if (param_1 == 0) {
      iVar1 = FUN_017141d0();
      if (iVar1 == 0) {
        return 0;
      }
      uVar2 = FUN_0172135c(param_2,0);
LAB_0174c030:
      iVar3 = FUN_01714a30(iVar1,uVar2);
      if (iVar3 == 0) {
        FUN_017046e0(iVar1);
        return 0;
      }
      return iVar1;
    }
    uVar2 = FUN_0172135c(param_2,0);
LAB_0174bfe0:
    iVar1 = FUN_01714a30(param_1,uVar2);
    if (iVar1 == 0) {
      return 0;
    }
    return param_1;
  }
  iVar1 = FUN_01717e5c(param_2);
  if ((iVar1 != 0) || (iVar1 = FUN_01718124(param_2), iVar1 != 0)) {
    if (param_1 == 0) {
      iVar1 = FUN_017141d0();
      if (iVar1 == 0) {
        return 0;
      }
      uVar2 = FUN_01718124(param_2);
      goto LAB_0174c030;
    }
    uVar2 = FUN_01718124(param_2);
    goto LAB_0174bfe0;
  }
  FUN_017185b4(param_4);
  uVar2 = FUN_017186b0(param_4);
  uVar4 = FUN_017186b0(param_4);
  iVar1 = FUN_017186b0(param_4);
  uVar5 = FUN_017186b0(param_4);
  uVar6 = FUN_017186b0(param_4);
  iVar3 = FUN_017186b0(param_4);
  if (iVar3 != 0) {
    if (param_1 == 0) {
      iVar11 = FUN_017141d0();
      if (iVar11 != 0) {
        iVar7 = FUN_0171ef88(uVar2,param_2,param_3,param_4);
        if (iVar7 != 0) goto LAB_0174c148;
LAB_0174c230:
        FUN_0171423c(iVar11);
      }
    }
    else {
      iVar7 = FUN_0171ef88(uVar2,param_2,param_3,param_4);
      iVar11 = param_1;
      if (iVar7 != 0) {
LAB_0174c148:
        local_44 = 1;
        while (iVar7 = FUN_0172135c(param_3,local_44), iVar7 == 0) {
          local_44 = local_44 + 1;
        }
        if (local_44 == 1) {
          iVar3 = FUN_0171ea08(iVar1,param_3,2);
          if (iVar3 != 0) {
            *(undefined4 *)(iVar1 + 0xc) = 0;
            iVar3 = FUN_0171801c(iVar1,1);
            if (iVar3 != 0) {
              iVar1 = FUN_01721398(iVar11,uVar2,iVar1,param_3,param_4,0);
joined_r0x0174c3a0:
              if ((iVar1 != 0) && (iVar1 = FUN_0171f104(uVar6,iVar11,param_3,param_4), iVar1 != 0))
              {
                iVar1 = FUN_01715760(uVar6,uVar2);
                if (iVar1 == 0) goto LAB_0174c23c;
                uVar2 = 0x168;
LAB_0174c3e0:
                FUN_016e9cd0(3,0,0x6e,"/aws-lc/crypto/fipsmodule/bn/sqrt.c",uVar2);
              }
            }
          }
        }
        else if (local_44 == 2) {
          iVar7 = FUN_0171b06c(uVar5,uVar2,param_3,param_4);
          if ((iVar7 != 0) && (iVar7 = FUN_0171ea08(iVar1,param_3,3), iVar7 != 0)) {
            *(undefined4 *)(iVar1 + 0xc) = 0;
            iVar1 = FUN_01721398(uVar4,uVar5,iVar1,param_3,param_4,0);
            if ((iVar1 != 0) &&
               ((((iVar1 = FUN_0171f104(iVar3,uVar4,param_3,param_4), iVar1 != 0 &&
                  (iVar1 = FUN_0171f040(uVar5,uVar5,iVar3,param_3,param_4), iVar1 != 0)) &&
                 (iVar1 = FUN_01717ee0(uVar5,1), iVar1 != 0)) &&
                ((iVar1 = FUN_0171f040(uVar6,uVar2,uVar4,param_3,param_4), iVar1 != 0 &&
                 (iVar1 = FUN_0171f040(uVar6,uVar6,uVar5,param_3,param_4), iVar1 != 0)))))) {
              iVar1 = FUN_017147ac(iVar11,uVar6);
              goto joined_r0x0174c3a0;
            }
          }
        }
        else {
          iVar7 = FUN_017147ac(iVar1,param_3);
          if (iVar7 != 0) {
            iVar7 = 2;
            *(undefined4 *)(iVar1 + 0xc) = 0;
            do {
              if (iVar7 < 0x16) {
LAB_0174c20c:
                iVar8 = FUN_01714a30(iVar3,iVar7);
                if (iVar8 == 0) goto LAB_0174c228;
              }
              else {
                uVar9 = FUN_01714eb4(param_3);
                iVar8 = FUN_0174bf4c(iVar3,uVar9,0);
                if (iVar8 == 0) goto LAB_0174c228;
                iVar8 = FUN_01715744(iVar3,param_3);
                if (-1 < iVar8) {
                  if (*(int *)(param_3 + 0xc) == 0) {
                    pcVar10 = FUN_0171aa2c;
                  }
                  else {
                    pcVar10 = FUN_0171a934;
                  }
                  iVar8 = (*pcVar10)(iVar3,iVar3,param_3);
                  if (iVar8 == 0) goto LAB_0174c228;
                }
                iVar8 = FUN_01717e5c(iVar3);
                if (iVar8 != 0) goto LAB_0174c20c;
              }
              iVar8 = FUN_01722ca4(iVar3,iVar1,param_4);
              if (iVar8 < -1) goto LAB_0174c228;
              if (iVar8 == 0) {
                uVar2 = 0xd0;
LAB_0174c470:
                FUN_016e9cd0(3,0,0x72,"/aws-lc/crypto/fipsmodule/bn/sqrt.c",uVar2);
                goto LAB_0174c228;
              }
              if (iVar8 != 1) {
                if (iVar8 == -1) {
                  iVar7 = FUN_0171ea08(iVar1,iVar1,local_44);
                  if ((iVar7 == 0) ||
                     (iVar7 = FUN_01721398(iVar3,iVar3,iVar1,param_3,param_4,0), iVar7 == 0))
                  goto LAB_0174c228;
                  iVar7 = FUN_01718124(iVar3);
                  if (iVar7 != 0) {
                    uVar2 = 0xe9;
                    goto LAB_0174c470;
                  }
                  iVar1 = FUN_0172030c(uVar5,iVar1);
                  if (iVar1 == 0) goto LAB_0174c228;
                  iVar1 = FUN_01717e5c(uVar5);
                  if (iVar1 == 0) {
                    iVar1 = FUN_01721398(uVar6,uVar2,uVar5,param_3,param_4,0);
                    if (iVar1 == 0) goto LAB_0174c228;
                    iVar1 = FUN_01717e5c(uVar6);
                    if (iVar1 != 0) goto LAB_0174c868;
                  }
                  else {
                    iVar1 = FUN_0171ef88(uVar5,uVar2,param_3,param_4);
                    if (iVar1 == 0) goto LAB_0174c228;
                    iVar1 = FUN_01717e5c(uVar5);
                    if (iVar1 != 0) {
LAB_0174c868:
                      FUN_01714350(iVar11);
                      goto LAB_0174c23c;
                    }
                    iVar1 = FUN_01714ab0(uVar6);
                    if (iVar1 == 0) goto LAB_0174c228;
                  }
                  iVar1 = FUN_0171f104(uVar4,uVar6,param_3,param_4);
                  if (((iVar1 == 0) ||
                      (iVar1 = FUN_0171f040(uVar4,uVar4,uVar2,param_3,param_4), iVar1 == 0)) ||
                     (iVar1 = FUN_0171f040(uVar6,uVar6,uVar2,param_3,param_4), iVar1 == 0))
                  goto LAB_0174c228;
                  goto LAB_0174c5d4;
                }
                break;
              }
              iVar7 = iVar7 + 1;
            } while (iVar7 != 0x52);
            FUN_016e9cd0(3,0,0x73,"/aws-lc/crypto/fipsmodule/bn/sqrt.c",0xda);
          }
        }
LAB_0174c228:
        if (param_1 != iVar11) goto LAB_0174c230;
      }
    }
  }
  iVar11 = 0;
LAB_0174c23c:
  FUN_01718904(param_4);
  return iVar11;
LAB_0174c5d4:
  iVar1 = FUN_01718124(uVar4);
  if (iVar1 != 0) goto LAB_0174c808;
  iVar1 = 1;
  while( true ) {
    if (local_44 <= iVar1) {
      uVar2 = 0x148;
      goto LAB_0174c3e0;
    }
    if (iVar1 == 1) {
      iVar7 = FUN_0171f104(uVar5,uVar4,param_3,param_4);
    }
    else {
      iVar7 = FUN_0171f040(uVar5,uVar5,uVar5,param_3,param_4);
    }
    if (iVar7 == 0) goto LAB_0174c228;
    iVar7 = FUN_01718124(uVar5);
    if (iVar7 != 0) break;
    iVar1 = iVar1 + 1;
  }
  iVar7 = FUN_017147ac(uVar5,iVar3);
  if (iVar7 == 0) goto LAB_0174c228;
  iVar7 = (local_44 + -1) - iVar1;
  while (0 < iVar7) {
    iVar8 = FUN_0171f104(uVar5,uVar5,param_3,param_4);
    iVar7 = iVar7 + -1;
    if (iVar8 == 0) goto LAB_0174c228;
  }
  iVar7 = FUN_0171f040(iVar3,uVar5,uVar5,param_3,param_4);
  if (((iVar7 == 0) || (iVar7 = FUN_0171f040(uVar6,uVar6,uVar5,param_3,param_4), iVar7 == 0)) ||
     (iVar7 = FUN_0171f040(uVar4,uVar4,iVar3,param_3,param_4), iVar7 == 0)) goto LAB_0174c228;
  local_44 = iVar1;
  goto LAB_0174c5d4;
LAB_0174c808:
  iVar1 = FUN_017147ac(iVar11,uVar6);
  goto joined_r0x0174c3a0;
}


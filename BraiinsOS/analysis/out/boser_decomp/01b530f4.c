// FUN_01b530f4 @ 01b530f4 size=1980 calls_out=32 calls_in=1
// strings: /aws-lc/crypto/fipsmodule/bn/sqrt.c | /aws-lc/crypto/fipsmodule/bn/sqrt.c | /aws-lc/crypto/fipsmodule/bn/sqrt.c

int FUN_01b530f4(int param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  int iVar10;
  undefined8 uVar11;
  int local_3c;
  
  iVar1 = FUN_01b2e5fc(param_3);
  iVar2 = param_1;
  if ((iVar1 == 0) || (iVar1 = FUN_01b2e1dc(param_3,1), iVar1 != 0)) {
    iVar1 = FUN_01b2e1dc(param_3,2);
    if (iVar1 == 0) {
      FUN_01b053d4(3,0,0x72,"/aws-lc/crypto/fipsmodule/bn/sqrt.c",0x27);
      return 0;
    }
    if ((param_1 == 0) && (iVar2 = FUN_01b2adb8(), iVar2 == 0)) {
      return 0;
    }
    uVar3 = FUN_01b35f4c(param_2,0);
LAB_01b53204:
    iVar1 = FUN_01b2b4cc(iVar2,uVar3);
    if (iVar1 != 0) {
      return iVar2;
    }
    if (param_1 != iVar2) {
      FUN_01b1f904(iVar2);
    }
    return 0;
  }
  iVar1 = FUN_01b2e300(param_2);
  if ((iVar1 != 0) || (iVar1 = FUN_01b2e54c(param_2), iVar1 != 0)) {
    if ((param_1 == 0) && (iVar2 = FUN_01b2adb8(), iVar2 == 0)) {
      return 0;
    }
    uVar3 = FUN_01b2e54c(param_2);
    goto LAB_01b53204;
  }
  FUN_01b2e894(param_4);
  uVar3 = FUN_01b2e970(param_4);
  uVar4 = FUN_01b2e970(param_4);
  iVar2 = FUN_01b2e970(param_4);
  uVar5 = FUN_01b2e970(param_4);
  uVar6 = FUN_01b2e970(param_4);
  iVar1 = FUN_01b2e970(param_4);
  if (iVar1 != 0) {
    if (param_1 == 0) {
      iVar10 = FUN_01b2adb8();
      if (iVar10 == 0) goto LAB_01b53294;
    }
    else {
      iVar10 = param_1;
    }
    iVar7 = FUN_01b341a0(uVar3,param_2,param_3,param_4);
    if (iVar7 != 0) {
      iVar7 = 1;
      while (iVar8 = FUN_01b35f4c(param_3,iVar7), iVar8 == 0) {
        iVar7 = iVar7 + 1;
      }
      if (iVar7 == 1) {
        iVar1 = FUN_01b33c8c(iVar2,param_3,2);
        if (iVar1 != 0) {
          *(undefined4 *)(iVar2 + 0xc) = 0;
          iVar1 = FUN_01b2e458(iVar2,1);
          if (iVar1 != 0) {
            iVar2 = FUN_01b35f88(iVar10,uVar3,iVar2,param_3,param_4,0);
LAB_01b53368:
            if ((iVar2 != 0) && (iVar2 = FUN_01b3430c(uVar6,iVar10,param_3,param_4), iVar2 != 0)) {
              iVar2 = FUN_01b2be38(uVar6,uVar3);
              if (iVar2 == 0) goto LAB_01b53298;
              uVar4 = 0x168;
LAB_01b53884:
              uVar3 = 0x6e;
              goto LAB_01b53538;
            }
          }
        }
      }
      else if (iVar7 == 2) {
        iVar7 = FUN_01b30ed4(uVar5,uVar3,param_3,param_4);
        if ((iVar7 != 0) && (iVar7 = FUN_01b33c8c(iVar2,param_3,3), iVar7 != 0)) {
          *(undefined4 *)(iVar2 + 0xc) = 0;
          iVar2 = FUN_01b35f88(uVar4,uVar5,iVar2,param_3,param_4,0);
          if (((iVar2 != 0) &&
              (((iVar2 = FUN_01b3430c(iVar1,uVar4,param_3,param_4), iVar2 != 0 &&
                (iVar2 = FUN_01b34254(uVar5,uVar5,iVar1,param_3,param_4), iVar2 != 0)) &&
               (iVar2 = FUN_01b2e358(uVar5,1), iVar2 != 0)))) &&
             ((iVar2 = FUN_01b34254(uVar6,uVar3,uVar4,param_3,param_4), iVar2 != 0 &&
              (iVar2 = FUN_01b34254(uVar6,uVar6,uVar5,param_3,param_4), iVar2 != 0)))) {
LAB_01b534a8:
            iVar2 = FUN_01b2b33c(iVar10,uVar6);
            goto LAB_01b53368;
          }
        }
      }
      else {
        uVar11 = FUN_01b2b33c(iVar2,param_3);
        uVar9 = (undefined4)((ulonglong)uVar11 >> 0x20);
        if ((int)uVar11 != 0) {
          *(undefined4 *)(iVar2 + 0xc) = 0;
          local_3c = 2;
          do {
            if (local_3c < 0x16) {
LAB_01b534f0:
              iVar8 = FUN_01b2b4cc(iVar1,local_3c);
              if (iVar8 == 0) goto LAB_01b532e0;
            }
            else {
              uVar9 = FUN_01b2b8d0(param_3,uVar9);
              iVar8 = FUN_01b530e0(iVar1,uVar9,0);
              if (iVar8 == 0) goto LAB_01b532e0;
              iVar8 = FUN_01b2be1c(iVar1,param_3);
              if (-1 < iVar8) {
                if (*(int *)(param_3 + 0xc) == 0) {
                  iVar8 = 300;
                }
                else {
                  iVar8 = 0x128;
                }
                iVar8 = (**(code **)((int)&PTR_01d3b2b0 + iVar8))(iVar1,iVar1,param_3);
                if (iVar8 == 0) goto LAB_01b532e0;
              }
              iVar8 = FUN_01b2e300(iVar1);
              if (iVar8 != 0) goto LAB_01b534f0;
            }
            iVar8 = FUN_01b375cc(iVar1,iVar2,param_4);
            if (iVar8 < -1) goto LAB_01b532e0;
            if (iVar8 == 0) {
              uVar4 = 0xd0;
              uVar3 = 0x72;
              goto LAB_01b53538;
            }
            if (iVar8 != 1) {
              if (iVar8 == -1) {
                iVar8 = FUN_01b33c8c(iVar2,iVar2,iVar7);
                if ((iVar8 == 0) ||
                   (iVar8 = FUN_01b35f88(iVar1,iVar1,iVar2,param_3,param_4,0), iVar8 == 0))
                goto LAB_01b532e0;
                iVar8 = FUN_01b2e54c(iVar1);
                if (iVar8 != 0) {
                  uVar4 = 0xe9;
                  uVar3 = 0x72;
                  goto LAB_01b53538;
                }
                iVar2 = FUN_01b35374(uVar5,iVar2);
                if (iVar2 == 0) goto LAB_01b532e0;
                iVar2 = FUN_01b2e300(uVar5);
                if (iVar2 == 0) {
                  iVar2 = FUN_01b35f88(uVar6,uVar3,uVar5,param_3,param_4,0);
                  if (iVar2 == 0) goto LAB_01b532e0;
                  iVar2 = FUN_01b2e300(uVar6);
                  if (iVar2 == 0) goto LAB_01b536e4;
                }
                else {
                  iVar2 = FUN_01b341a0(uVar5,uVar3,param_3,param_4);
                  if (iVar2 == 0) goto LAB_01b532e0;
                  iVar2 = FUN_01b2e300(uVar5);
                  if (iVar2 == 0) {
                    iVar2 = FUN_01b2b544(uVar6);
                    if (iVar2 == 0) goto LAB_01b532e0;
LAB_01b536e4:
                    iVar2 = FUN_01b3430c(uVar4,uVar6,param_3,param_4);
                    if ((iVar2 == 0) ||
                       (iVar2 = FUN_01b34254(uVar4,uVar4,uVar3,param_3,param_4), iVar2 == 0))
                    goto LAB_01b532e0;
                    iVar2 = FUN_01b34254(uVar6,uVar6,uVar3,param_3,param_4);
                    if (iVar2 == 0) goto LAB_01b532e0;
                    goto LAB_01b5373c;
                  }
                }
                FUN_01b2af70(iVar10);
                goto LAB_01b53298;
              }
              break;
            }
            local_3c = local_3c + 1;
            uVar9 = 1;
          } while (local_3c != 0x52);
          uVar4 = 0xda;
          uVar3 = 0x73;
LAB_01b53538:
          FUN_01b053d4(3,0,uVar3,"/aws-lc/crypto/fipsmodule/bn/sqrt.c",uVar4);
        }
      }
    }
LAB_01b532e0:
    if (param_1 != iVar10) {
      FUN_01b2ae64(iVar10);
    }
  }
LAB_01b53294:
  iVar10 = 0;
LAB_01b53298:
  FUN_01b2ebbc(param_4);
  return iVar10;
LAB_01b5373c:
  iVar2 = FUN_01b2e54c(uVar4);
  if (iVar2 != 0) goto LAB_01b534a8;
  iVar2 = 1;
  while( true ) {
    if (iVar7 <= iVar2) {
      uVar4 = 0x148;
      goto LAB_01b53884;
    }
    if (iVar2 == 1) {
      iVar8 = FUN_01b3430c(uVar5,uVar4,param_3,param_4);
    }
    else {
      iVar8 = FUN_01b34254(uVar5,uVar5,uVar5,param_3,param_4);
    }
    if (iVar8 == 0) goto LAB_01b532e0;
    iVar8 = FUN_01b2e54c(uVar5);
    if (iVar8 != 0) break;
    iVar2 = iVar2 + 1;
  }
  iVar8 = FUN_01b2b33c(uVar5,iVar1);
  if (iVar8 == 0) goto LAB_01b532e0;
  for (iVar7 = (iVar7 + -1) - iVar2; 0 < iVar7; iVar7 = iVar7 + -1) {
    iVar8 = FUN_01b3430c(uVar5,uVar5,param_3,param_4);
    if (iVar8 == 0) goto LAB_01b532e0;
  }
  iVar7 = FUN_01b34254(iVar1,uVar5,uVar5,param_3,param_4);
  if (((iVar7 == 0) || (iVar7 = FUN_01b34254(uVar6,uVar6,uVar5,param_3,param_4), iVar7 == 0)) ||
     (iVar7 = FUN_01b34254(uVar4,uVar4,iVar1,param_3,param_4), iVar7 == 0)) goto LAB_01b532e0;
  iVar7 = iVar2;
  goto LAB_01b5373c;
}


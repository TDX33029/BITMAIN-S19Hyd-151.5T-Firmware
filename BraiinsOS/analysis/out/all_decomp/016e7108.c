// FUN_016e7108 @ 016e7108 size=1244 calls_out=27 calls_in=1
// strings: /aws-lc/crypto/dsa/dsa.c | /aws-lc/crypto/dsa/dsa.c | /aws-lc/crypto/dsa/dsa.c | /aws-lc/crypto/dsa/dsa.c | /aws-lc/crypto/dsa/dsa.c

int * FUN_016e7108(undefined4 param_1,uint param_2,undefined4 *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int *piVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  int local_80;
  uint local_70;
  undefined4 local_68 [5];
  undefined4 local_54 [5];
  undefined1 auStack_40 [20];
  int local_2c;
  
  local_2c = DAT_018ddaf8;
  iVar1 = FUN_016e7aac(param_3,param_2,&PTR_018bc3f4,0);
  if (iVar1 != 0) {
    if (param_3[4] != 0) {
      iVar1 = 0;
      FUN_01714208(local_68);
      FUN_01714208(local_54);
      iVar2 = FUN_017141d0();
      if ((iVar2 == 0) || (iVar3 = FUN_017184a8(), iVar3 == 0)) {
        iVar4 = 0;
        iVar3 = 0;
      }
      else {
        local_80 = 0x21;
        iVar7 = iVar1;
        iVar8 = 0;
        local_70 = param_2;
        do {
          FUN_01714208(auStack_40);
          iVar1 = FUN_017141d0();
          iVar4 = FUN_017141d0();
          if ((((iVar4 == 0 || iVar1 == 0) ||
               (iVar5 = FUN_0174b144(auStack_40,1,param_3[1]), iVar5 == 0)) ||
              (iVar5 = FUN_017205f4(param_3 + 0xd,param_3 + 5,*param_3,iVar3), iVar5 == 0)) ||
             ((iVar5 = FUN_017205f4(param_3 + 0xe,param_3 + 5,param_3[1],iVar3), iVar5 == 0 ||
              (iVar5 = FUN_01721bd8(iVar1,param_3[2],auStack_40,*param_3,iVar3,param_3[0xd]),
              iVar5 == 0)))) {
            uVar11 = 0x37e;
LAB_016e7280:
            FUN_016e9cd0(10,0,3,"/aws-lc/crypto/dsa/dsa.c",uVar11);
            FUN_0171423c(auStack_40);
            FUN_0171423c(iVar1);
            FUN_0171423c(iVar4);
            iVar1 = iVar7;
            iVar4 = iVar8;
            goto LAB_016e72b0;
          }
          iVar5 = FUN_0171ead4(0,iVar1,iVar1,param_3[1],iVar3);
          if ((iVar5 == 0) ||
             (iVar5 = FUN_01721b1c(iVar4,auStack_40,param_3[1],iVar3,param_3[0xe]), iVar5 == 0)) {
            uVar11 = 0x38d;
            goto LAB_016e7280;
          }
          FUN_0171423c(iVar8);
          FUN_0171423c(iVar7);
          FUN_0171423c(auStack_40);
          FUN_0171423c(0);
          FUN_0171423c(0);
          uVar6 = FUN_01714f1c(param_3[1]);
          if (uVar6 < local_70) {
            local_70 = FUN_01714f1c(param_3[1]);
          }
          iVar7 = FUN_017150f4(param_1,local_70,local_68);
          if (iVar7 == 0) goto LAB_016e72b0;
          uVar11 = FUN_01714e64(param_3[1]);
          iVar7 = FUN_01714d30(local_68,uVar11);
          if ((iVar7 == 0) || (iVar7 = FUN_01714d30(local_54,uVar11), iVar7 == 0))
          goto LAB_016e72b0;
          FUN_0171ae58(local_68[0],0,*(undefined4 *)param_3[1],local_54[0],uVar11);
          uVar10 = param_3[4];
          uVar11 = param_3[0xe];
          FUN_017185b4(iVar3);
          iVar7 = FUN_017186b0(iVar3);
          if ((iVar7 == 0) ||
             ((iVar8 = FUN_0171decc(iVar7,uVar10,uVar11,iVar3), iVar8 == 0 ||
              (iVar7 = FUN_0171dce4(local_54,iVar7,iVar1,uVar11,iVar3), iVar7 == 0)))) {
LAB_016e7490:
            FUN_01718904(iVar3);
            goto LAB_016e72b0;
          }
          FUN_01718904(iVar3);
          iVar7 = FUN_0171af5c(iVar2,local_54,local_68,param_3[1],iVar3);
          if (iVar7 == 0) goto LAB_016e72b0;
          uVar11 = param_3[0xe];
          FUN_017185b4(iVar3);
          iVar7 = FUN_017186b0(iVar3);
          if (((iVar7 == 0) || (iVar8 = FUN_0171decc(iVar7,iVar2,uVar11,iVar3), iVar8 == 0)) ||
             (iVar7 = FUN_0171dce4(iVar2,iVar7,iVar4,uVar11,iVar3), iVar7 == 0)) goto LAB_016e7490;
          FUN_01718904(iVar3);
          iVar7 = FUN_01717e5c(iVar1);
          if ((iVar7 == 0) && (iVar7 = FUN_01717e5c(iVar2), iVar7 == 0)) {
            piVar9 = (int *)FUN_016e70ac();
            if (piVar9 == (int *)0x0) goto LAB_016e72b0;
            *piVar9 = iVar1;
            piVar9[1] = iVar2;
            goto LAB_016e72e4;
          }
          local_80 = local_80 + -1;
          iVar7 = iVar1;
          iVar8 = iVar4;
        } while (local_80 != 0);
        FUN_016e9cd0(10,0,0x6c,"/aws-lc/crypto/dsa/dsa.c",0x287);
      }
LAB_016e72b0:
      piVar9 = (int *)0x0;
      FUN_016e9cd0(10,0,3,"/aws-lc/crypto/dsa/dsa.c",0x296);
      FUN_017046e0(iVar1);
      FUN_017046e0(iVar2);
LAB_016e72e4:
      FUN_017184e8(iVar3);
      FUN_0171423c(local_68);
      FUN_0171423c(local_54);
      FUN_0171423c(iVar4);
      goto LAB_016e7304;
    }
    FUN_016e9cd0(10,0,0x65,"/aws-lc/crypto/dsa/dsa.c",0x23d);
  }
  piVar9 = (int *)0x0;
LAB_016e7304:
  if (local_2c != DAT_018ddaf8) {
                    /* WARNING: Subroutine does not return */
    FUN_016d2b78();
  }
  return piVar9;
}


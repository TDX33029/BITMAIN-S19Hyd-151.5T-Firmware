// FUN_01b02918 @ 01b02918 size=1068 calls_out=23 calls_in=1
// strings: /aws-lc/crypto/dsa/dsa.c | /aws-lc/crypto/dsa/dsa.c | /aws-lc/crypto/dsa/dsa.c | /aws-lc/crypto/dsa/dsa.c | /aws-lc/crypto/dsa/dsa.c | /aws-lc/crypto/dsa/dsa.c

int * FUN_01b02918(undefined4 param_1,uint param_2,undefined4 *param_3)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int *piVar8;
  int iVar9;
  int iVar10;
  undefined4 uVar11;
  uint local_78;
  int local_74;
  int local_6c;
  undefined4 local_68 [5];
  undefined4 local_54 [5];
  undefined1 auStack_40 [20];
  int local_2c;
  
  local_2c = DAT_01d53560;
  iVar2 = FUN_01b032a8(param_3,param_2,&PTR_01d3b2b0,0);
  if (iVar2 != 0) {
    if (param_3[4] != 0) {
      FUN_01b2ae48(local_68);
      FUN_01b2ae48(local_54);
      iVar2 = FUN_01b2adb8();
      if ((iVar2 == 0) || (iVar3 = FUN_01b2e788(), iVar3 == 0)) {
        iVar9 = 0;
        local_6c = 0;
        iVar3 = 0;
      }
      else {
        local_74 = 0x21;
        iVar9 = 0;
        local_6c = 0;
        local_78 = param_2;
        do {
          FUN_01b2ae48(auStack_40);
          iVar4 = FUN_01b2adb8();
          iVar5 = FUN_01b2adb8();
          if (iVar5 == 0 || iVar4 == 0) {
LAB_01b02a34:
            uVar11 = 0x37e;
LAB_01b02a40:
            bVar1 = false;
            FUN_01b053d4(10,0,3,"/aws-lc/crypto/dsa/dsa.c",uVar11);
            iVar10 = iVar4;
            iVar4 = iVar5;
          }
          else {
            iVar10 = 0;
            iVar7 = FUN_01b524c8(auStack_40,1,param_3[1]);
            if (iVar7 == 0) goto LAB_01b02a34;
            iVar7 = FUN_01b355d8(param_3 + 0xd,param_3 + 5,*param_3,iVar3);
            if (((iVar7 == 0) ||
                (iVar7 = FUN_01b355d8(param_3 + 0xe,param_3 + 5,param_3[1],iVar3), iVar7 == 0)) ||
               (iVar7 = FUN_01b36698(iVar4,param_3[2],auStack_40,*param_3,iVar3,param_3[0xd]),
               iVar7 == 0)) goto LAB_01b02a34;
            iVar7 = FUN_01b33d3c(0,iVar4,iVar4,param_3[1],iVar3);
            if ((iVar7 == 0) ||
               (iVar7 = FUN_01b365dc(iVar5,auStack_40,param_3[1],iVar3,param_3[0xe]), iVar7 == 0)) {
              uVar11 = 0x38d;
              goto LAB_01b02a40;
            }
            FUN_01b2ae64(local_6c);
            FUN_01b2ae64(iVar9);
            bVar1 = true;
            iVar9 = iVar4;
            iVar4 = iVar10;
            local_6c = iVar5;
          }
          FUN_01b2ae64(auStack_40);
          FUN_01b2ae64(iVar10);
          FUN_01b2ae64(iVar4);
          if (!bVar1) goto LAB_01b02b9c;
          uVar6 = FUN_01b2b938(param_3[1]);
          if (uVar6 < local_78) {
            local_78 = FUN_01b2b938(param_3[1]);
          }
          iVar4 = FUN_01b2ba40(param_1,local_78,local_68);
          if (iVar4 == 0) goto LAB_01b02b9c;
          uVar11 = FUN_01b2b88c(param_3[1]);
          iVar4 = FUN_01b2b700(local_68,uVar11);
          if ((iVar4 == 0) || (iVar4 = FUN_01b2b700(local_54,uVar11), iVar4 == 0))
          goto LAB_01b02b9c;
          FUN_01b30cc4(local_68[0],0,*(undefined4 *)param_3[1],local_54[0],uVar11);
          iVar4 = FUN_01b01e28(local_54,param_3[4],iVar9,param_3[0xe],iVar3);
          if ((iVar4 == 0) ||
             ((iVar4 = FUN_01b30dc8(iVar2,local_54,local_68,param_3[1],iVar3), iVar4 == 0 ||
              (iVar4 = FUN_01b01e28(iVar2,iVar2,local_6c,param_3[0xe],iVar3), iVar4 == 0))))
          goto LAB_01b02b9c;
          iVar4 = FUN_01b2e300(iVar9);
          if ((iVar4 == 0) && (iVar4 = FUN_01b2e300(iVar2), iVar4 == 0)) {
            piVar8 = (int *)FUN_01b028bc();
            if (piVar8 == (int *)0x0) goto LAB_01b02b9c;
            *piVar8 = iVar9;
            piVar8[1] = iVar2;
            goto LAB_01b02cf0;
          }
          local_74 = local_74 + -1;
        } while (local_74 != 0);
        FUN_01b053d4(10,0,0x6c,"/aws-lc/crypto/dsa/dsa.c",0x287);
      }
LAB_01b02b9c:
      piVar8 = (int *)0x0;
      FUN_01b053d4(10,0,3,"/aws-lc/crypto/dsa/dsa.c",0x296);
      FUN_01b1f904(iVar9);
      FUN_01b1f904(iVar2);
LAB_01b02cf0:
      FUN_01b2e7c8(iVar3);
      FUN_01b2ae64(local_68);
      FUN_01b2ae64(local_54);
      FUN_01b2ae64(local_6c);
      goto LAB_01b02994;
    }
    FUN_01b053d4(10,0,0x65,"/aws-lc/crypto/dsa/dsa.c",0x23d);
  }
  piVar8 = (int *)0x0;
LAB_01b02994:
  if (local_2c != DAT_01d53560) {
                    /* WARNING: Subroutine does not return */
    FUN_01be31f4();
  }
  return piVar8;
}


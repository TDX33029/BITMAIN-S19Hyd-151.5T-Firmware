// FUN_01b57494 @ 01b57494 size=524 calls_out=11 calls_in=0
// strings: /aws-lc/crypto/fipsmodule/evp/p_rsa.c

void FUN_01b57494(int param_1,int param_2,uint *param_3,undefined4 param_4,undefined4 param_5)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  uint extraout_r1;
  uint extraout_r1_00;
  uint extraout_r1_01;
  uint uVar5;
  undefined4 uVar6;
  int iVar7;
  undefined8 uVar8;
  longlong lVar9;
  undefined4 local_3c;
  int local_38;
  int local_34;
  int local_30;
  uint local_2c;
  
  iVar7 = *(int *)(param_1 + 0x14);
  local_2c = DAT_01d53560;
  uVar6 = *(undefined4 *)(*(int *)(param_1 + 8) + 8);
  uVar8 = FUN_01b47374();
  uVar5 = (uint)((ulonglong)uVar8 >> 0x20);
  uVar2 = (uint)uVar8;
  if (param_2 == 0) {
    *param_3 = uVar2;
LAB_01b5767c:
    lVar9 = CONCAT44(uVar5,1);
  }
  else {
    if (*param_3 < uVar2) {
      FUN_01b053d4(6,0,100,"/aws-lc/crypto/fipsmodule/evp/p_rsa.c",0x12d);
      uVar5 = extraout_r1;
    }
    else {
      if (*(int *)(iVar7 + 0xc) == 0) {
        lVar9 = FUN_01b57480(uVar6,param_3,param_2,*param_3,param_4,param_5,*(int *)(iVar7 + 8));
        goto LAB_01b57564;
      }
      if (*(int *)(iVar7 + 8) == 1) {
        uVar3 = FUN_01b3b6b4();
        uVar8 = FUN_01b473c0(iVar7,param_1);
        uVar5 = (uint)((ulonglong)uVar8 >> 0x20);
        if ((int)uVar8 != 0) {
          uVar4 = FUN_01b3b4c8(*(undefined4 *)(iVar7 + 0xc));
          uVar8 = FUN_01b557ac(&local_3c,&local_38,&local_34,uVar4,&DAT_0053a01b,uVar3);
          uVar5 = (uint)((ulonglong)uVar8 >> 0x20);
          if ((int)uVar8 != 0) {
            uVar8 = FUN_01b57480(uVar6,&local_30,*(undefined4 *)(iVar7 + 0x1c),uVar2,param_4,param_5
                                 ,1);
            uVar5 = (uint)((ulonglong)uVar8 >> 0x20);
            bVar1 = false;
            if ((int)uVar8 != 0) {
              if (local_30 == local_38) {
                uVar8 = FUN_01b6b750(*(undefined4 *)(iVar7 + 0x1c),local_3c,local_30 - uVar3);
                uVar5 = (uint)((ulonglong)uVar8 >> 0x20);
                bVar1 = (int)uVar8 == 0;
              }
              else {
                bVar1 = false;
              }
            }
            if (local_34 != 0) {
              FUN_01b6b1c4(local_3c);
              uVar5 = extraout_r1_00;
            }
            if (bVar1) {
              FUN_01b26974(param_2,*(int *)(iVar7 + 0x1c) + (local_30 - uVar3),uVar3);
              *param_3 = uVar3;
              uVar5 = extraout_r1_01;
              goto LAB_01b5767c;
            }
          }
        }
      }
    }
    lVar9 = (ulonglong)uVar5 << 0x20;
  }
LAB_01b57564:
  if ((local_2c ^ DAT_01d53560) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01be31f4((int)lVar9,(int)((ulonglong)lVar9 >> 0x20),local_2c ^ DAT_01d53560,0);
  }
  return;
}


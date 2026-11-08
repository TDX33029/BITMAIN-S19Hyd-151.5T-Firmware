// FUN_01751368 @ 01751368 size=632 calls_out=11 calls_in=0
// strings: /aws-lc/crypto/fipsmodule/evp/p_rsa.c

void FUN_01751368(int param_1,uint param_2,uint *param_3,undefined4 param_4,undefined4 param_5)

{
  code *pcVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  uint uVar5;
  uint extraout_r1;
  uint extraout_r1_00;
  uint extraout_r1_01;
  uint extraout_r1_02;
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
  local_2c = DAT_018ddaf8;
  uVar6 = *(undefined4 *)(*(int *)(param_1 + 8) + 8);
  uVar8 = FUN_0173a338();
  uVar5 = (uint)((ulonglong)uVar8 >> 0x20);
  uVar2 = (uint)uVar8;
  if (param_2 == 0) {
    *param_3 = uVar2;
LAB_01751530:
    lVar9 = CONCAT44(uVar5,1);
  }
  else {
    if (*param_3 < uVar2) {
      FUN_016e9cd0(6,0,100,"/aws-lc/crypto/fipsmodule/evp/p_rsa.c",0x12d);
      uVar5 = extraout_r1_00;
    }
    else {
      if (*(int *)(iVar7 + 0xc) == 0) {
        lVar9 = FUN_01751354(uVar6,param_3,param_2,*param_3,param_4,param_5,*(int *)(iVar7 + 8));
        goto LAB_017513f8;
      }
      if (*(int *)(iVar7 + 8) == 1) {
        uVar3 = FUN_0172a898();
        if (*(int *)(iVar7 + 0x1c) == 0) {
          FUN_0173a338(*(undefined4 *)(param_1 + 8));
          uVar8 = FUN_0177a6c0();
          uVar5 = (uint)((ulonglong)uVar8 >> 0x20);
          *(int *)(iVar7 + 0x1c) = (int)uVar8;
          if ((int)uVar8 == 0) goto LAB_017513f4;
        }
        uVar4 = FUN_0172a6f0(*(undefined4 *)(iVar7 + 0xc));
        uVar8 = FUN_0174ed30(&local_3c,&local_38,&local_34,uVar4,&DAT_00428394,uVar3);
        uVar5 = (uint)((ulonglong)uVar8 >> 0x20);
        if ((int)uVar8 != 0) {
          uVar8 = FUN_01751354(uVar6,&local_30,*(undefined4 *)(iVar7 + 0x1c),uVar2,param_4,param_5,1
                              );
          uVar5 = (uint)((ulonglong)uVar8 >> 0x20);
          if (((int)uVar8 != 0) && (local_30 == local_38)) {
            uVar8 = FUN_0177b0d8(*(undefined4 *)(iVar7 + 0x1c),local_3c,local_30 - uVar3);
            uVar5 = (uint)((ulonglong)uVar8 >> 0x20);
            if ((int)uVar8 == 0) {
              if (local_34 != 0) {
                FUN_0177aafc(local_3c);
                uVar5 = extraout_r1_02;
              }
              if (uVar3 != 0) {
                uVar5 = *(int *)(iVar7 + 0x1c) + (local_30 - uVar3);
                if (param_2 < uVar5) {
                  if (uVar5 < param_2 + uVar3) {
LAB_017515c0:
                    /* WARNING: Does not return */
                    pcVar1 = (code *)software_udf(0,0x17515c0);
                    (*pcVar1)();
                  }
                }
                else if ((uVar5 < param_2) && (param_2 < (uint)(*(int *)(iVar7 + 0x1c) + local_30)))
                goto LAB_017515c0;
                FUN_016dd1aa(param_2,uVar5,uVar3);
                uVar5 = extraout_r1;
              }
              *param_3 = uVar3;
              goto LAB_01751530;
            }
          }
          if (local_34 != 0) {
            FUN_0177aafc(local_3c);
            uVar5 = extraout_r1_01;
          }
        }
      }
    }
LAB_017513f4:
    lVar9 = (ulonglong)uVar5 << 0x20;
  }
LAB_017513f8:
  if ((local_2c ^ DAT_018ddaf8) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_016d2b78((int)lVar9,(int)((ulonglong)lVar9 >> 0x20),local_2c ^ DAT_018ddaf8,0);
  }
  return;
}


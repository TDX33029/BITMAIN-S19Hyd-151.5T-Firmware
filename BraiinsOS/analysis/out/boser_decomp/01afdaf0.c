// FUN_01afdaf0 @ 01afdaf0 size=608 calls_out=7 calls_in=1
// strings: aws_lc_0_39_0_cbs_get_any_asn1_element | /aws-lc/crypto/bytestring/cbs.c | out_ber_found == NULL | aws_lc_0_39_0_cbs_get_any_asn1_element | /aws-lc/crypto/bytestring/cbs.c | out_indefinite == NULL

void FUN_01afdaf0(undefined4 *param_1,undefined1 *param_2,undefined4 *param_3,int *param_4,
                 undefined4 *param_5,undefined4 *param_6,uint param_7,undefined4 param_8)

{
  uint uVar1;
  char *pcVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  undefined8 uVar9;
  longlong lVar10;
  byte local_4d;
  undefined4 local_4c;
  uint local_48;
  uint local_44;
  undefined4 local_3c;
  undefined4 uStack_38;
  undefined1 auStack_34 [8];
  uint local_2c;
  
  if (param_2 == (undefined1 *)0x0) {
    param_2 = auStack_34;
  }
  local_2c = DAT_01d53560;
  local_3c = *param_1;
  uStack_38 = param_1[1];
  if (param_7 == 0) {
    if (param_5 != (undefined4 *)0x0) {
      uVar4 = 0x141;
      pcVar2 = "out_ber_found == NULL";
LAB_01afdb80:
                    /* WARNING: Subroutine does not return */
      FUN_01be3310(pcVar2,"/aws-lc/crypto/bytestring/cbs.c",uVar4,
                   "aws_lc_0_39_0_cbs_get_any_asn1_element");
    }
    if (param_6 != (undefined4 *)0x0) {
      uVar4 = 0x142;
      pcVar2 = "out_indefinite == NULL";
      goto LAB_01afdb80;
    }
  }
  else {
    *param_5 = 0;
    *param_6 = 0;
  }
  uVar9 = FUN_01afd8d0(&local_3c,&local_4c,param_8);
  uVar7 = (uint)((ulonglong)uVar9 >> 0x20);
  if ((int)uVar9 != 0) {
    if (param_3 != (undefined4 *)0x0) {
      *param_3 = local_4c;
    }
    uVar9 = FUN_01afd780(&local_3c,&local_4d);
    uVar7 = (uint)((ulonglong)uVar9 >> 0x20);
    if ((int)uVar9 != 0) {
      iVar3 = FUN_01afd684(param_1);
      uVar9 = FUN_01afd684(&local_3c);
      iVar3 = iVar3 - (int)uVar9;
      if ((char)local_4d < '\0') {
        uVar6 = local_4d & 0x7f;
        if (param_7 == 0) {
LAB_01afdc90:
          uVar8 = uVar6 - 1;
          uVar7 = (uint)((ulonglong)uVar9 >> 0x20);
          if (uVar8 < 4) {
            uVar9 = FUN_01afd59c(&local_3c,&local_48);
            uVar7 = (uint)((ulonglong)uVar9 >> 0x20);
            if ((int)uVar9 != 0) {
              uVar7 = param_7;
              if (local_44 == 0 && (0x7f < local_48) <= local_44) {
                if (param_7 == 0) goto LAB_01afdbc4;
                *param_5 = 1;
              }
              uVar1 = uVar8 * 8;
              if (((local_48 >> (uVar1 & 0xff) == 0 && local_44 << (uVar8 * -8 + 0x20 & 0xff) == 0)
                  && local_44 >> (uVar1 - 0x20 & 0xff) == 0) && local_44 >> (uVar1 & 0xff) == 0) {
                if (param_7 == 0) goto LAB_01afdbc4;
                *param_5 = 1;
              }
              uVar7 = uVar6 + local_48 + iVar3;
              if (local_48 <= uVar7) {
                iVar3 = iVar3 + uVar6;
                iVar5 = iVar3 + local_48;
                goto LAB_01afdd2c;
              }
            }
          }
          goto LAB_01afdbc4;
        }
        uVar7 = (local_4c._3_1_ & 0x3f) >> 5;
        if ((local_4d & 0x7f) != 0) {
          uVar7 = 0;
        }
        if (uVar7 == 0) goto LAB_01afdc90;
        if (param_4 != (int *)0x0) {
          *param_4 = iVar3;
        }
        *param_5 = 1;
        *param_6 = 1;
        iVar5 = iVar3;
      }
      else {
        iVar5 = (uint)local_4d + iVar3;
LAB_01afdd2c:
        if (param_4 != (int *)0x0) {
          *param_4 = iVar3;
        }
      }
      lVar10 = FUN_01afd9e4(param_1,param_2,iVar5);
      goto LAB_01afdbc8;
    }
  }
LAB_01afdbc4:
  lVar10 = (ulonglong)uVar7 << 0x20;
LAB_01afdbc8:
  if ((local_2c ^ DAT_01d53560) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01be31f4((int)lVar10,(int)((ulonglong)lVar10 >> 0x20),local_2c ^ DAT_01d53560,0);
  }
  return;
}


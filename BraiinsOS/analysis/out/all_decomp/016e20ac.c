// FUN_016e20ac @ 016e20ac size=968 calls_out=5 calls_in=1
// strings: aws_lc_0_39_0_cbs_get_any_asn1_element | /aws-lc/crypto/bytestring/cbs.c | out_indefinite == NULL | aws_lc_0_39_0_cbs_get_any_asn1_element | /aws-lc/crypto/bytestring/cbs.c | out_ber_found == NULL

void FUN_016e20ac(undefined4 *param_1,undefined1 *param_2,uint *param_3,uint *param_4,
                 undefined4 *param_5,undefined4 *param_6,uint param_7,uint param_8)

{
  byte bVar1;
  uint3 uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  byte *pbVar9;
  uint uVar10;
  undefined8 uVar11;
  longlong lVar12;
  undefined1 *local_48;
  byte local_3e;
  byte local_3d;
  byte *local_3c;
  uint local_38;
  undefined1 auStack_34 [8];
  uint local_2c;
  
  local_3c = (byte *)*param_1;
  local_38 = param_1[1];
  local_2c = DAT_018ddaf8;
  local_48 = param_2;
  if (param_2 == (undefined1 *)0x0) {
    local_48 = auStack_34;
  }
  if (param_7 == 0) {
    if (param_5 != (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_016d2c94("out_ber_found == NULL","/aws-lc/crypto/bytestring/cbs.c",0x141,
                   "aws_lc_0_39_0_cbs_get_any_asn1_element");
    }
    if (param_6 != (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_016d2c94("out_indefinite == NULL","/aws-lc/crypto/bytestring/cbs.c",0x142,
                   "aws_lc_0_39_0_cbs_get_any_asn1_element");
    }
  }
  else {
    *param_5 = 0;
    *param_6 = 0;
  }
  uVar11 = FUN_016e1f3c(&local_3c,&local_3e);
  uVar6 = (uint)((ulonglong)uVar11 >> 0x20);
  if ((int)uVar11 != 0) {
    uVar5 = (uint)local_3e;
    uVar10 = uVar5 & 0x1f;
    if (uVar10 == 0x1f) {
      uVar10 = 0;
      uVar8 = 0;
      do {
        uVar11 = FUN_016e1f3c(&local_3c,&local_3d);
        uVar6 = (uint)((ulonglong)uVar11 >> 0x20);
        if ((((int)uVar11 == 0) || (uVar8 >> 0x19 != 0)) ||
           ((uVar10 == 0 && uVar8 == 0 && (local_3d == 0x80)))) goto LAB_016e2184;
        uVar8 = uVar8 << 7 | uVar10 >> 0x19;
        uVar10 = local_3d & 0x7f | uVar10 << 7;
      } while ((local_3d & 0x80) != 0);
      uVar6 = uVar5;
      if ((uVar8 != 0 || uVar8 < (0x1fffffff < uVar10)) || (uVar8 == 0 && (0x1e < uVar10) <= uVar8))
      goto LAB_016e2184;
    }
    uVar10 = (uVar5 & 0xe0) << 0x18 | uVar10;
    uVar6 = param_8;
    if ((uVar10 & 0xdfffffff) != 0 || param_8 != 0) {
      if (param_3 != (uint *)0x0) {
        *param_3 = uVar10;
      }
      uVar11 = FUN_016e1f3c(&local_3c,&local_3d);
      uVar6 = (uint)((ulonglong)uVar11 >> 0x20);
      if ((int)uVar11 != 0) {
        iVar3 = FUN_016e1e1c(param_1);
        iVar4 = FUN_016e1e1c(&local_3c);
        uVar5 = iVar3 - iVar4;
        if ((char)local_3d < '\0') {
          uVar8 = local_3d & 0x7f;
          if ((param_7 != 0) && (((uint)((local_3d & 0x7f) == 0) & uVar10 >> 0x1d) != 0)) {
            if (param_4 != (uint *)0x0) {
              *param_4 = uVar5;
            }
            *param_5 = 1;
            *param_6 = 1;
            lVar12 = FUN_016e1f90(param_1,local_48,uVar5);
            goto LAB_016e2188;
          }
          uVar6 = uVar8 - 1;
          if ((3 < uVar6) || (local_38 < uVar8)) goto LAB_016e2184;
          local_38 = local_38 - uVar8;
          pbVar9 = local_3c + uVar8;
          bVar1 = *local_3c;
          uVar10 = (uint)bVar1;
          if (uVar8 == 1) {
            if (0x7f < uVar10) goto LAB_016e2414;
            local_3c = pbVar9;
            if (param_7 == 0) goto LAB_016e2184;
            *param_5 = 1;
            uVar7 = (uint)bVar1;
            if (uVar7 != 0) goto LAB_016e22f8;
LAB_016e22f0:
            uVar7 = 1;
            *param_5 = 1;
          }
          else {
            uVar10 = (uint)CONCAT11(bVar1,local_3c[1]);
            if (2 < uVar8) {
              uVar2 = CONCAT21(CONCAT11(bVar1,local_3c[1]),local_3c[2]);
              uVar10 = (uint)uVar2;
              if (uVar8 == 4) {
                uVar10 = CONCAT31(uVar2,local_3c[3]);
                if (0x7f < uVar10) goto LAB_016e2414;
                uVar6 = param_7;
                local_3c = pbVar9;
                if (param_7 != 0) goto LAB_016e22f0;
                goto LAB_016e2184;
              }
            }
            if (uVar10 < 0x80) {
LAB_016e2434:
              uVar6 = param_7;
              local_3c = pbVar9;
              if (param_7 == 0) goto LAB_016e2184;
              goto LAB_016e22f0;
            }
LAB_016e2414:
            uVar7 = uVar6 * 8;
            if (((uVar10 >> (uVar7 & 0xff) == 0 && 0 << (uVar6 * -8 + 0x20 & 0xff) == 0) &&
                0U >> (uVar7 - 0x20 & 0xff) == 0) && 0U >> (uVar7 & 0xff) == 0) goto LAB_016e2434;
          }
LAB_016e22f8:
          uVar5 = uVar5 + uVar8;
          iVar3 = uVar10 + uVar5;
          uVar6 = uVar7;
          local_3c = pbVar9;
          if (CARRY4(uVar10,uVar5)) goto LAB_016e2184;
        }
        else {
          iVar3 = local_3d + uVar5;
        }
        if (param_4 != (uint *)0x0) {
          *param_4 = uVar5;
        }
        lVar12 = FUN_016e1f90(param_1,local_48,iVar3);
        goto LAB_016e2188;
      }
    }
  }
LAB_016e2184:
  lVar12 = (ulonglong)uVar6 << 0x20;
LAB_016e2188:
  if ((local_2c ^ DAT_018ddaf8) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_016d2b78((int)lVar12,(int)((ulonglong)lVar12 >> 0x20),local_2c ^ DAT_018ddaf8,0);
  }
  return;
}


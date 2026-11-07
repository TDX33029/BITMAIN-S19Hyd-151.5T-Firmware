// FUN_0132ee88 @ 0132ee88 size=828 calls_out=6 calls_in=1
// strings: 

void FUN_0132ee88(undefined4 *param_1,int param_2,int param_3,undefined4 param_4)

{
  byte bVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  undefined4 uVar6;
  uint uVar7;
  uint uVar8;
  byte bVar9;
  uint uVar10;
  bool bVar11;
  uint local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  uint local_40;
  uint local_3c;
  uint local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  uVar7 = *(uint *)(param_2 + 0x38);
  uVar10 = param_3 + 1;
  bVar9 = 0;
  uVar5 = uVar10;
  uVar8 = uVar7;
  do {
    FUN_0132dba0(&local_40,param_2,uVar5);
    if (local_40 != 0x12) {
      param_1[3] = local_38;
      param_1[4] = uStack_34;
      param_1[5] = uStack_30;
      *param_1 = 1;
      param_1[1] = local_40;
      param_1[2] = local_3c;
      return;
    }
    uVar5 = *(uint *)(param_2 + 0x14);
    if (local_3c == uVar5) {
      param_1[5] = local_3c;
      *param_1 = 1;
      param_1[1] = 1;
      return;
    }
    if (uVar5 <= local_3c) {
                    /* WARNING: Subroutine does not return */
      FUN_012fb12c(local_3c,uVar5,&DAT_01ce615c);
    }
    bVar1 = *(byte *)(*(int *)(param_2 + 0x10) + local_3c);
    if (bVar1 < 0x6d) {
      if (0x54 < bVar1) {
        if (bVar1 == 0x55) {
          if (bVar9 == 0) {
            uVar8 = uVar8 | 8;
            goto LAB_0132efd4;
          }
          uVar8 = uVar8 & 0xfffffff7;
        }
        else {
          if (bVar1 != 0x69) goto LAB_0132f0b0;
          if (bVar9 == 0) {
            uVar8 = uVar8 | 1;
            goto LAB_0132efd4;
          }
          uVar8 = uVar8 & 0xfffffffe;
        }
        goto LAB_0132ef98;
      }
      if (bVar1 != 0x2d) {
        if (bVar1 == 0x29) {
          if ((local_3c != uVar10) && ((bVar9 & local_3c - param_3 == 2) == 0)) {
            *param_1 = 0;
            param_1[1] = local_3c + 1;
            param_1[2] = 0x80000000;
            return;
          }
        }
        else {
          bVar11 = bVar1 == 0x3a;
          if (bVar11) {
            bVar1 = local_3c - param_3 == 2;
          }
          if (bVar11 && (bVar9 & bVar1) == 0) {
            FUN_0132bb68(&local_40,param_2,local_3c + 1,param_4);
            uVar2 = uStack_30;
            uVar3 = uStack_34;
            uVar8 = local_38;
            uVar5 = local_3c;
            if ((local_40 & 1) != 0) {
              param_1[2] = local_38;
              param_1[3] = uStack_34;
              param_1[4] = uStack_30;
              param_1[5] = uStack_2c;
              *param_1 = 1;
              param_1[1] = local_3c;
              return;
            }
            local_58 = local_38;
            uStack_54 = uStack_34;
            uStack_50 = uStack_30;
            uStack_4c = uStack_2c;
            uStack_48 = uStack_28;
            local_40 = local_38;
            local_3c = uStack_34;
            local_38 = uStack_30;
            uStack_34 = uStack_2c;
            uStack_30 = uStack_28;
            uVar6 = 1;
            uVar10 = *(uint *)(param_2 + 0x14);
            if (uVar5 != uVar10) {
              if (uVar10 <= uVar5) {
                    /* WARNING: Subroutine does not return */
                FUN_012fb12c(uVar5,uVar10,&DAT_01ce616c);
              }
              if (*(char *)(*(int *)(param_2 + 0x10) + uVar5) == ')') {
                *(uint *)(param_2 + 0x38) = uVar7;
                param_1[2] = uVar8;
                param_1[3] = uVar3;
                param_1[4] = uVar2;
                param_1[5] = uStack_2c;
                param_1[6] = uStack_28;
                iVar4 = uVar5 + 1;
                uVar3 = 0;
                goto LAB_0132f0d8;
              }
              FUN_0166b924(&local_58,&DAT_004507f8,0x14);
              param_1[2] = local_58;
              param_1[3] = uStack_54;
              param_1[4] = uStack_50;
              uVar6 = 0;
            }
            *param_1 = 1;
            param_1[5] = uVar5;
            param_1[1] = uVar6;
            FUN_0132bfa0(&local_40);
            return;
          }
        }
LAB_0132f0b0:
        FUN_01330a94(param_1 + 1,*(int *)(param_2 + 0x10),uVar5,uVar10,local_3c);
        *param_1 = 1;
        return;
      }
      bVar11 = bVar9 != 0;
      bVar9 = 1;
      if (bVar11) goto LAB_0132f0b0;
    }
    else {
      if (bVar1 < 0x75) {
        if (bVar1 != 0x6d) {
          if (bVar1 != 0x73) goto LAB_0132f0b0;
          if (bVar9 == 0) {
            uVar8 = uVar8 | 4;
            goto LAB_0132efd4;
          }
          uVar8 = uVar8 & 0xfffffffb;
          goto LAB_0132ef98;
        }
        if (bVar9 != 0) {
          uVar8 = uVar8 & 0xfffffffd;
          goto LAB_0132ef98;
        }
        uVar8 = uVar8 | 2;
LAB_0132efd4:
        bVar9 = 0;
      }
      else {
        if (bVar1 == 0x75) {
          bVar11 = bVar9 != 0;
          bVar9 = 0;
          if (bVar11) {
            param_1[5] = local_3c;
            iVar4 = 0xb;
            uVar3 = 1;
LAB_0132f0d8:
            *param_1 = uVar3;
            param_1[1] = iVar4;
            return;
          }
          goto LAB_0132efdc;
        }
        if (bVar1 != 0x78) goto LAB_0132f0b0;
        if (bVar9 == 0) {
          uVar8 = uVar8 | 0x10;
          goto LAB_0132efd4;
        }
        uVar8 = uVar8 & 0xffffffef;
LAB_0132ef98:
        bVar9 = 1;
      }
      *(uint *)(param_2 + 0x38) = uVar8;
    }
LAB_0132efdc:
    uVar5 = local_3c + 1;
  } while( true );
}


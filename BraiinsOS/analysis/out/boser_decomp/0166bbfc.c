// FUN_0166bbfc @ 0166bbfc size=648 calls_out=9 calls_in=1
// strings: $schema

void FUN_0166bbfc(undefined4 *param_1,int *param_2,int param_3,int *param_4)

{
  uint uVar1;
  int *piVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  char *pcVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  int local_c0;
  undefined4 local_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 local_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  if (param_3 != 0) {
    piVar2 = param_2 + param_3;
    iVar10 = *param_4;
    uVar8 = param_4[1];
    iVar9 = param_4[3];
    do {
      if (iVar9 != 0) {
        iVar11 = *param_2;
        uVar3 = FUN_01676068(param_4 + 4,*(undefined4 *)(iVar11 + 0xc),
                             *(undefined4 *)(iVar11 + 0x10));
        uVar1 = uVar3 >> 0x19;
        iVar12 = 0;
        while( true ) {
          uVar3 = uVar8 & uVar3;
          uVar13 = *(uint *)(iVar10 + uVar3);
          uVar4 = uVar13 ^ uVar1 * 0x1010101;
          uVar4 = ~uVar4 & 0x80808080 & uVar4 + 0xfefefeff;
          while (uVar4 != 0) {
            uVar5 = uVar3 + ((uint)LZCOUNT(uVar4 << 0x18 | (uVar4 >> 8 & 0xff) << 0x10 |
                                           (uVar4 >> 0x10 & 0xff) << 8 | uVar4 >> 0x18) >> 3) &
                    uVar8;
            iVar6 = FUN_01670d54(iVar11,*(undefined4 *)(iVar10 + -0xc + uVar5 * -0xc));
            uVar4 = uVar4 - 1 & uVar4;
            if (iVar6 != 0) {
              pcVar7 = *(char **)(iVar10 + -8 + uVar5 * -0xc);
              if (((*pcVar7 == '\x05') &&
                  (pcVar7 = (char *)FUN_0196b3a8(*(undefined4 *)(pcVar7 + 4),
                                                 *(undefined4 *)(pcVar7 + 8),"$schema",7),
                  pcVar7 != (char *)0x0)) && (*pcVar7 == '\x03')) {
                uVar15 = *(undefined4 *)(pcVar7 + 8);
                uVar14 = *(undefined4 *)(pcVar7 + 0xc);
                FUN_0166fa70(&local_c0,uVar15,uVar14);
                if (local_c0 != -0x7ffffff6) {
                  FUN_016707fc(&local_60,uVar15,uVar14);
                  *param_1 = local_60;
                  param_1[1] = uStack_5c;
                  param_1[2] = uStack_58;
                  param_1[3] = uStack_54;
                  param_1[4] = local_50;
                  param_1[5] = uStack_4c;
                  param_1[6] = uStack_48;
                  param_1[7] = uStack_44;
                  param_1[8] = uStack_40;
                  param_1[9] = local_3c;
                  param_1[10] = uStack_38;
                  param_1[0xb] = uStack_34;
                  param_1[0xc] = uStack_30;
                  param_1[0xd] = uStack_2c;
                  FUN_0166bec0(&local_c0);
                  return;
                }
                local_88 = local_bc;
                local_84 = uStack_b8;
                local_80 = uStack_b4;
                FUN_01343738();
                iVar11 = FUN_0166e5d8(param_4,local_84,local_80);
                if (iVar11 == 0) {
                  FUN_016707fc(&local_60,uVar15,uVar14);
                  *param_1 = local_60;
                  param_1[1] = uStack_5c;
                  param_1[2] = uStack_58;
                  param_1[3] = uStack_54;
                  param_1[4] = local_50;
                  param_1[5] = uStack_4c;
                  param_1[6] = uStack_48;
                  param_1[7] = uStack_44;
                  param_1[8] = uStack_40;
                  param_1[9] = local_3c;
                  param_1[10] = uStack_38;
                  param_1[0xb] = uStack_34;
                  param_1[0xc] = uStack_30;
                  param_1[0xd] = uStack_2c;
                  FUN_019bb7e0(local_88,local_84);
                  return;
                }
                FUN_019bb7e0(local_88,local_84);
              }
              goto LAB_0166bde4;
            }
          }
          if ((uVar13 & 0x80808080 & uVar13 << 1) != 0) break;
          iVar12 = iVar12 + 4;
          uVar3 = uVar3 + iVar12;
        }
      }
LAB_0166bde4:
      param_2 = param_2 + 1;
    } while (param_2 != piVar2);
  }
  *param_1 = 0x8000000a;
  return;
}


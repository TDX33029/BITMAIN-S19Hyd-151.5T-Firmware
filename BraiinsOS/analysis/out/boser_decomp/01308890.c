// FUN_01308890 @ 01308890 size=964 calls_out=4 calls_in=0
// strings: 

undefined4 FUN_01308890(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  byte *pbVar1;
  byte *pbVar2;
  undefined1 *puVar3;
  int iVar4;
  byte *pbVar5;
  byte *pbVar6;
  byte *pbVar7;
  int iVar8;
  undefined4 uVar9;
  uint uVar10;
  byte *pbVar11;
  uint uVar12;
  uint uVar13;
  code *pcVar14;
  byte *pbVar15;
  undefined1 *puVar16;
  undefined4 local_60;
  undefined4 local_5c;
  byte *local_58;
  byte *local_54;
  undefined1 *local_50;
  int local_4c;
  undefined1 *local_48;
  code *local_44;
  undefined4 uStack_40;
  uint local_3c;
  undefined1 *local_38;
  code *local_34;
  undefined4 uStack_30;
  uint uStack_2c;
  undefined1 local_25;
  
  pcVar14 = *(code **)(param_4 + 0x10);
  iVar4 = (*pcVar14)(param_3,0x22);
  uVar9 = 1;
  if (iVar4 == 0) {
    local_60 = param_1;
    local_5c = param_2;
    while (FUN_01307c98(&local_58,&local_60), iVar4 = local_4c, puVar16 = local_50,
          pbVar2 = local_54, pbVar1 = local_58, local_58 != (byte *)0x0) {
      if (local_54 == (byte *)0x0) {
LAB_01308b70:
        pbVar7 = (byte *)0x0;
      }
      else {
        pbVar15 = (byte *)0x0;
        pbVar5 = local_58 + (int)local_54;
        pbVar6 = (byte *)0x0;
        pbVar7 = local_58;
        do {
          pbVar11 = pbVar7 + 1;
          uVar10 = (uint)*pbVar7;
          if (0x7fffffff < (uint)(int)(char)*pbVar7) {
            if (uVar10 < 0xe0) {
              uVar10 = pbVar7[1] & 0x3f | (uVar10 & 0x1f) << 6;
              pbVar11 = pbVar7 + 2;
            }
            else {
              uVar12 = pbVar7[2] & 0x3f | (pbVar7[1] & 0x3f) << 6;
              if (uVar10 < 0xf0) {
                uVar10 = uVar12 | (uVar10 & 0x1f) << 0xc;
                pbVar11 = pbVar7 + 3;
              }
              else {
                pbVar11 = pbVar7 + 4;
                uVar10 = pbVar7[3] & 0x3f | uVar12 << 6 | (uVar10 & 7) << 0x12;
              }
            }
          }
          FUN_012fa86c(&local_48,uVar10,0x10001);
          if (((local_3c >> 8 & 0xff) - (local_3c & 0xff) & 0xff) != 1) {
            if (pbVar6 < pbVar15) goto LAB_01308c38;
            if (pbVar15 != (byte *)0x0) {
              if (pbVar15 < pbVar2) {
                if ((char)pbVar1[(int)pbVar15] < -0x40) goto LAB_01308c38;
              }
              else if (pbVar15 != pbVar2) goto LAB_01308c38;
            }
            if (pbVar6 != (byte *)0x0) {
              if (pbVar6 < pbVar2) {
                if ((char)pbVar1[(int)pbVar6] < -0x40) {
LAB_01308c38:
                    /* WARNING: Subroutine does not return */
                  FUN_012fb514(pbVar1,pbVar2,pbVar15,pbVar6,&DAT_01ce4af0);
                }
              }
              else if (pbVar6 != pbVar2) goto LAB_01308c38;
            }
            iVar8 = (**(code **)(param_4 + 0xc))
                              (param_3,pbVar1 + (int)pbVar15,(int)pbVar6 - (int)pbVar15);
            puVar3 = local_48;
            if (iVar8 != 0) {
              return 1;
            }
            uVar13 = local_3c & 0xff;
            local_38 = local_48;
            local_34 = local_44;
            uStack_30 = uStack_40;
            uStack_2c = local_3c;
            uVar12 = local_3c >> 8 & 0xff;
            if (uVar12 < 0x81) {
              if (uVar12 < uVar13) {
                uVar12 = uVar13;
              }
              while (uVar12 != uVar13) {
                iVar8 = (*pcVar14)(param_3,*(undefined1 *)((int)&local_38 + uVar13));
                uVar13 = uVar13 + 1;
                if (iVar8 != 0) {
                  return 1;
                }
              }
            }
            else {
              while ((uVar13 & 0xff) < uVar12) {
                iVar8 = (*pcVar14)(param_3,puVar3);
                uVar13 = uVar13 + 1;
                if (iVar8 != 0) {
                  return 1;
                }
              }
            }
            iVar8 = 1;
            if (0x7f < uVar10) {
              iVar8 = 2;
            }
            if ((0x7ff < uVar10) && (iVar8 = 4, uVar10 < 0x10000)) {
              iVar8 = 3;
            }
            pbVar15 = pbVar6 + iVar8;
          }
          pbVar6 = pbVar11 + ((int)pbVar6 - (int)pbVar7);
          pbVar7 = pbVar11;
        } while (pbVar11 != pbVar5);
        if (pbVar15 == (byte *)0x0) goto LAB_01308b70;
        if (pbVar15 < pbVar2) {
          if ((char)pbVar1[(int)pbVar15] < -0x40) {
LAB_01308bf4:
                    /* WARNING: Subroutine does not return */
            FUN_012fb514(pbVar1,pbVar2,pbVar15,pbVar2,&DAT_01ce4ae0);
          }
          pbVar7 = pbVar15;
        }
        else {
          pbVar7 = pbVar2;
          if (pbVar15 != pbVar2) goto LAB_01308bf4;
        }
      }
      iVar8 = (**(code **)(param_4 + 0xc))(param_3,pbVar1 + (int)pbVar7,(int)pbVar2 - (int)pbVar7);
      if (iVar8 != 0) {
        return 1;
      }
      for (; iVar4 != 0; iVar4 = iVar4 + -1) {
        local_25 = *puVar16;
        local_38 = &local_25;
        local_34 = FUN_012fd6b4;
        iVar8 = FUN_012fa178(param_3,param_4,&DAT_0051de60,&local_38);
        if (iVar8 != 0) {
          return 1;
        }
        puVar16 = puVar16 + 1;
      }
    }
    uVar9 = (*pcVar14)(param_3,0x22);
  }
  return uVar9;
}


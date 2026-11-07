// FUN_011e1c1c @ 011e1c1c size=452 calls_out=1 calls_in=1
// strings: 

void FUN_011e1c1c(int *param_1,undefined4 *param_2)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  byte *pbVar7;
  byte *pbVar8;
  byte *pbVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  int local_30;
  int local_2c;
  int local_28;
  
  iVar11 = param_2[5];
  local_28 = 0;
  local_2c = 1;
  local_30 = 0;
  if (param_2[6] != iVar11) {
    FUN_011cf828(&local_30,0,param_2[6] - iVar11,1,1);
  }
  uVar12 = param_2[3];
  uVar13 = param_2[4];
  pbVar9 = (byte *)param_2[1];
  iVar5 = param_2[2];
  pbVar7 = (byte *)*param_2;
  do {
    iVar4 = local_28;
    if (uVar13 < uVar12) {
      piVar6 = (int *)(iVar5 + uVar13 * 8);
      if (iVar11 != *piVar6) {
        if (pbVar7 == pbVar9) {
          do {
                    /* WARNING: Do nothing block with infinite loop */
          } while( true );
        }
        goto LAB_011e1cac;
      }
      uVar14 = piVar6[1];
      uVar13 = uVar13 + 1;
      pbVar8 = pbVar7;
    }
    else {
      if (pbVar7 == pbVar9) {
        *param_1 = local_30;
        param_1[1] = local_2c;
        param_1[2] = local_28;
        return;
      }
LAB_011e1cac:
      pbVar8 = pbVar7 + 1;
      uVar14 = (uint)*pbVar7;
    }
    uVar10 = 1;
    if (0x7f < uVar14) {
      uVar10 = 2;
    }
    if ((0x7ff < uVar14) && (uVar10 = 4, uVar14 < 0x10000)) {
      uVar10 = 3;
    }
    if ((uint)(local_30 - local_28) < uVar10) {
      FUN_011cf828(&local_30,local_28,uVar10,1,1);
      pbVar7 = (byte *)(local_2c + local_28);
      if (uVar14 < 0x80) goto LAB_011e1c64;
LAB_011e1cec:
      bVar1 = (byte)uVar14 & 0x3f | 0x80;
      bVar2 = (byte)(uVar14 >> 6);
      if (uVar14 < 0x800) {
        pbVar7[1] = bVar1;
        *pbVar7 = bVar2 | 0xc0;
      }
      else {
        bVar2 = bVar2 & 0x3f | 0x80;
        bVar3 = (byte)(uVar14 >> 0xc);
        if (uVar14 >> 0x10 == 0) {
          pbVar7[1] = bVar2;
          pbVar7[2] = bVar1;
          *pbVar7 = bVar3 | 0xe0;
        }
        else {
          pbVar7[3] = bVar1;
          pbVar7[2] = bVar2;
          pbVar7[1] = bVar3 & 0x3f | 0x80;
          *pbVar7 = (byte)(uVar14 >> 0x12) | 0xf0;
        }
      }
    }
    else {
      pbVar7 = (byte *)(local_2c + local_28);
      if (0x7f < uVar14) goto LAB_011e1cec;
LAB_011e1c64:
      *pbVar7 = (byte)uVar14;
    }
    local_28 = uVar10 + iVar4;
    iVar11 = iVar11 + 1;
    pbVar7 = pbVar8;
  } while( true );
}


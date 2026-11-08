// FUN_00ff5dc4 @ 00ff5dc4 size=576 calls_out=1 calls_in=1
// strings: 

void FUN_00ff5dc4(int *param_1,byte *param_2,int param_3)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  bool bVar4;
  byte *pbVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  byte *pbVar10;
  
  if (param_3 == 0) {
    return;
  }
  pbVar10 = param_2 + param_3;
  do {
    uVar9 = (uint)*param_2;
    pbVar5 = param_2 + 1;
    if ((uint)(int)(char)*param_2 < 0x80000000) {
LAB_00ff5e5c:
      param_2 = pbVar5;
      uVar7 = uVar9 - 0x23;
      if (0x5a < uVar7) goto switchD_00ff5e70_caseD_ff60b8;
LAB_00ff5e68:
      switch((int)&switchD_00ff5e70::switchdataD_00ff5e74 +
             (&switchD_00ff5e70::switchdataD_00ff5e74)[uVar7] & 0xfffffffe) {
      case 0xff5fe0:
        iVar8 = param_1[2];
        iVar6 = iVar8;
        if (*param_1 == iVar8) {
          FUN_010007c0(param_1,iVar8,1,1,1);
          iVar6 = param_1[2];
        }
        iVar8 = iVar8 + 1;
        param_1[2] = iVar8;
        bVar4 = true;
        uVar7 = 1;
        *(undefined1 *)(param_1[1] + iVar6) = 0x5c;
        break;
      default:
        goto switchD_00ff5e70_caseD_ff60b8;
      }
    }
    else {
      if (uVar9 < 0xe0) {
        uVar9 = param_2[1] & 0x3f | (uVar9 & 0x1f) << 6;
        pbVar5 = param_2 + 2;
        goto LAB_00ff5e5c;
      }
      uVar7 = param_2[2] & 0x3f | (param_2[1] & 0x3f) << 6;
      if (uVar9 < 0xf0) {
        uVar9 = uVar7 | (uVar9 & 0x1f) << 0xc;
        param_2 = param_2 + 3;
      }
      else {
        uVar9 = param_2[3] & 0x3f | uVar7 << 6 | (uVar9 & 7) << 0x12;
        param_2 = param_2 + 4;
      }
      uVar7 = uVar9 - 0x23;
      if (uVar7 < 0x5b) goto LAB_00ff5e68;
switchD_00ff5e70_caseD_ff60b8:
      iVar8 = param_1[2];
      bVar4 = true;
      if (uVar9 < 0x80) {
        uVar7 = 1;
      }
      else {
        uVar7 = 2;
        bVar4 = false;
        if ((0x7ff < uVar9) && (uVar7 = 4, uVar9 < 0x10000)) {
          uVar7 = 3;
        }
      }
    }
    if ((uint)(*param_1 - iVar8) < uVar7) {
      FUN_010007c0(param_1,iVar8,uVar7,1,1);
      pbVar5 = (byte *)(param_1[1] + param_1[2]);
      if (!bVar4) goto LAB_00ff6030;
LAB_00ff5de8:
      *pbVar5 = (byte)uVar9;
    }
    else {
      pbVar5 = (byte *)(param_1[1] + iVar8);
      if (bVar4) goto LAB_00ff5de8;
LAB_00ff6030:
      bVar1 = (byte)uVar9 & 0x3f | 0x80;
      bVar2 = (byte)(uVar9 >> 6);
      if (uVar9 < 0x800) {
        pbVar5[1] = bVar1;
        *pbVar5 = bVar2 | 0xc0;
      }
      else {
        bVar2 = bVar2 & 0x3f | 0x80;
        bVar3 = (byte)(uVar9 >> 0xc);
        if (uVar9 >> 0x10 == 0) {
          pbVar5[1] = bVar2;
          pbVar5[2] = bVar1;
          *pbVar5 = bVar3 | 0xe0;
        }
        else {
          pbVar5[3] = bVar1;
          pbVar5[2] = bVar2;
          pbVar5[1] = bVar3 & 0x3f | 0x80;
          *pbVar5 = (byte)(uVar9 >> 0x12) | 0xf0;
        }
      }
    }
    param_1[2] = uVar7 + iVar8;
    if (param_2 == pbVar10) {
      return;
    }
  } while( true );
}


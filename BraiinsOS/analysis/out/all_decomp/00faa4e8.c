// FUN_00faa4e8 @ 00faa4e8 size=956 calls_out=2 calls_in=115
// strings: 

undefined4 FUN_00faa4e8(byte *param_1,byte *param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  byte *pbVar2;
  undefined4 uVar3;
  byte *pbVar4;
  byte *pbVar5;
  byte *pbVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  code *pcVar10;
  uint uVar11;
  byte *pbVar12;
  byte *pbVar13;
  byte *pbVar14;
  code *pcVar15;
  undefined4 local_34 [3];
  byte local_28;
  byte local_27;
  
  pcVar10 = *(code **)(param_4 + 0x10);
  iVar1 = (*pcVar10)(param_3,0x22);
  if (iVar1 != 0) {
    return 1;
  }
  if (param_2 == (byte *)0x0) {
    param_2 = (byte *)0x0;
    pbVar4 = (byte *)0x0;
  }
  else {
    pbVar5 = (byte *)0x0;
    pbVar6 = (byte *)0x0;
    pbVar4 = param_2;
    pbVar12 = param_1;
LAB_00faa564:
    do {
      pbVar2 = (byte *)0x0;
      while ((uVar9 = (uint)pbVar12[(int)pbVar2], 0xffffffa0 < uVar9 - 0x7f &&
             (uVar9 != 0x22 && uVar9 != 0x5c))) {
        pbVar2 = pbVar2 + 1;
        if (pbVar4 == pbVar2) {
          pbVar6 = pbVar6 + (int)pbVar4;
          goto LAB_00faa7a0;
        }
      }
      pbVar13 = pbVar12 + (int)pbVar2;
      uVar9 = (uint)*pbVar13;
      if ((char)*pbVar13 < '\0') {
        if (uVar9 < 0xe0) {
          uVar9 = pbVar13[1] & 0x3f | (uVar9 & 0x1f) << 6;
          pbVar14 = pbVar13 + 2;
        }
        else {
          uVar7 = pbVar13[2] & 0x3f | (pbVar13[1] & 0x3f) << 6;
          if (uVar9 < 0xf0) {
            uVar9 = uVar7 | (uVar9 & 0x1f) << 0xc;
            pbVar14 = pbVar13 + 3;
          }
          else {
            pbVar14 = pbVar13 + 4;
            uVar9 = pbVar13[3] & 0x3f | uVar7 << 6 | (uVar9 & 7) << 0x12;
          }
        }
      }
      else {
        pbVar14 = pbVar13 + 1;
      }
      pbVar2 = pbVar2 + (int)pbVar6;
      FUN_00fa9bcc(local_34,uVar9,0x10001);
      uVar11 = (uint)local_28;
      uVar8 = (uint)local_27;
      uVar7 = uVar8 - uVar11;
      if ((uVar7 & 0xff) != 1) {
        if (pbVar2 < pbVar5) goto LAB_00faa868;
        if (pbVar5 != (byte *)0x0) {
          if (pbVar5 < param_2) {
            if ((char)param_1[(int)pbVar5] < -0x40) goto LAB_00faa868;
          }
          else if (pbVar5 != param_2) goto LAB_00faa868;
        }
        if (pbVar2 != (byte *)0x0) {
          if (pbVar2 < param_2) {
            if ((char)param_1[(int)pbVar2] < -0x40) goto LAB_00faa868;
          }
          else if (pbVar2 != param_2) {
LAB_00faa868:
                    /* WARNING: Subroutine does not return */
            FUN_00faa8ac(param_1,param_2,pbVar5,pbVar2,&DAT_01880d94);
          }
        }
        pcVar15 = *(code **)(param_4 + 0xc);
        iVar1 = (*pcVar15)(param_3,param_1 + (int)pbVar5,(int)pbVar2 - (int)pbVar5);
        if (iVar1 != 0) {
          return 1;
        }
        if (uVar8 < 0x81) {
          iVar1 = (*pcVar15)(param_3,(int)local_34 + uVar11,uVar7);
        }
        else {
          iVar1 = (*pcVar10)(param_3,local_34[0]);
        }
        if (iVar1 != 0) {
          return 1;
        }
        iVar1 = 1;
        if (0x7f < uVar9) {
          iVar1 = 2;
        }
        if ((0x7ff < uVar9) && (iVar1 = 4, uVar9 < 0x10000)) {
          iVar1 = 3;
        }
        pbVar5 = pbVar2 + iVar1;
      }
      iVar1 = 1;
      if (0x7f < uVar9) {
        iVar1 = 2;
      }
      if (0x7ff < uVar9) {
        iVar1 = 4;
        if (uVar9 < 0x10000) {
          iVar1 = 3;
        }
        pbVar6 = pbVar2 + iVar1;
        pbVar4 = pbVar12 + ((int)pbVar4 - (int)pbVar14);
        pbVar12 = pbVar14;
        if (pbVar4 == (byte *)0x0) break;
        goto LAB_00faa564;
      }
      pbVar6 = pbVar2 + iVar1;
      pbVar4 = pbVar12 + ((int)pbVar4 - (int)pbVar14);
      pbVar12 = pbVar14;
    } while (pbVar4 != (byte *)0x0);
LAB_00faa7a0:
    if (pbVar6 < pbVar5) goto LAB_00faa88c;
    pbVar4 = (byte *)0x0;
    if (pbVar5 != (byte *)0x0) {
      if (pbVar5 < param_2) {
        pbVar4 = pbVar5;
        if ((char)param_1[(int)pbVar5] < -0x40) goto LAB_00faa88c;
      }
      else {
        pbVar4 = param_2;
        if (pbVar5 != param_2) goto LAB_00faa88c;
      }
    }
    if (pbVar6 != (byte *)0x0) {
      if (pbVar6 < param_2) {
        if (-0x41 < (char)param_1[(int)pbVar6]) {
          param_2 = pbVar6;
          goto LAB_00faa820;
        }
      }
      else if (pbVar6 == param_2) goto LAB_00faa820;
      pbVar5 = pbVar4;
LAB_00faa88c:
                    /* WARNING: Subroutine does not return */
      FUN_00faa8ac(param_1,param_2,pbVar5,pbVar6,&DAT_01880da4);
    }
    param_2 = (byte *)0x0;
  }
LAB_00faa820:
  iVar1 = (**(code **)(param_4 + 0xc))(param_3,param_1 + (int)pbVar4,(int)param_2 - (int)pbVar4);
  if (iVar1 == 0) {
    uVar3 = (*pcVar10)(param_3,0x22);
    return uVar3;
  }
  return 1;
}


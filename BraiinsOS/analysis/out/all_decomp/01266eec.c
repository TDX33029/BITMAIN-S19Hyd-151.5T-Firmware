// FUN_01266eec @ 01266eec size=1080 calls_out=2 calls_in=0
// strings: 

longlong FUN_01266eec(int *param_1,byte *param_2,byte *param_3,byte *param_4,int param_5,
                     byte *param_6)

{
  byte bVar1;
  uint uVar2;
  byte *pbVar3;
  byte *pbVar4;
  byte *pbVar5;
  uint uVar6;
  byte *pbVar7;
  byte *pbVar8;
  byte *pbVar9;
  byte *pbVar10;
  int iVar11;
  undefined8 uVar12;
  
  if (&DAT_0000000f < param_4) {
    param_2 = (byte *)param_1[1];
    if (*param_1 == 0) {
      if (param_6 == (byte *)0x0) goto LAB_01267078;
      if (param_6 <= param_4) {
        pbVar4 = (byte *)param_1[4];
        pbVar5 = (byte *)0x0;
        pbVar8 = param_6;
        pbVar7 = (byte *)0x0;
        do {
          pbVar3 = pbVar5;
          pbVar5 = param_6 + -1 + (int)pbVar3;
          if (param_4 <= pbVar5) {
                    /* WARNING: Subroutine does not return */
            FUN_00faa4a4(pbVar5,param_4,&DAT_0188b01c);
          }
          uVar2 = param_3[(int)pbVar5] & 0x3f;
          uVar6 = (uint)param_1[2] >> uVar2 | param_1[3] << (0x20 - uVar2 & 0xff);
          pbVar10 = (byte *)0x0;
          if (-1 < (int)(uVar2 - 0x20)) {
            uVar6 = (uint)param_1[3] >> (uVar2 - 0x20 & 0xff);
          }
          if ((uVar6 & 1) != 0) {
            pbVar5 = pbVar4;
            if (pbVar4 < pbVar7) {
              pbVar5 = pbVar7;
            }
            if (pbVar5 < param_6) {
              pbVar8 = pbVar5;
              do {
                if (param_4 <= pbVar3 + (int)pbVar8) {
                  pbVar8 = pbVar3 + (int)pbVar5;
                  if (pbVar3 + (int)pbVar5 < param_4) {
                    pbVar8 = param_4;
                  }
                    /* WARNING: Subroutine does not return */
                  FUN_00faa4a4(pbVar8,param_4,&DAT_0188b02c);
                }
                if (pbVar8[param_5] != (param_3 + (int)pbVar3)[(int)pbVar8]) {
                  pbVar8 = pbVar8 + (1 - (int)pbVar4);
                  pbVar10 = (byte *)0x0;
                  goto LAB_0126712c;
                }
                pbVar8 = pbVar8 + 1;
              } while (param_6 != pbVar8);
            }
            pbVar8 = param_2;
            pbVar10 = param_6 + -(int)param_2;
            if (pbVar7 < pbVar4) {
              pbVar5 = pbVar4;
              do {
                if (param_6 <= pbVar5) {
                    /* WARNING: Subroutine does not return */
                  FUN_00faa4a4(pbVar5,param_6,&DAT_0188b03c);
                }
                if (param_4 <= pbVar3 + (int)pbVar5) {
                    /* WARNING: Subroutine does not return */
                  FUN_00faa4a4(pbVar3 + (int)pbVar5,param_4,&DAT_0188b04c);
                }
                if (pbVar5[param_5] != (param_3 + (int)pbVar3)[(int)pbVar5]) goto LAB_0126712c;
                pbVar5 = pbVar5 + -1;
              } while (pbVar7 < pbVar5);
            }
            if (param_6 <= pbVar7) {
                    /* WARNING: Subroutine does not return */
              FUN_00faa4a4(pbVar7,param_6,&DAT_0188b05c);
            }
            pbVar5 = pbVar3 + (int)pbVar7;
            if (param_4 <= pbVar5) {
                    /* WARNING: Subroutine does not return */
              FUN_00faa4a4(pbVar5,param_4,&DAT_0188b06c);
            }
            if (pbVar7[param_5] == param_3[(int)pbVar5]) goto LAB_0126707c;
LAB_0126712c:
            pbVar8 = pbVar8 + (int)pbVar3;
          }
          pbVar9 = pbVar8 + (int)param_6;
          pbVar5 = pbVar8;
          pbVar8 = pbVar9;
          pbVar7 = pbVar10;
        } while (pbVar9 <= param_4);
        goto LAB_01267054;
      }
    }
    else {
      if (param_6 == (byte *)0x0) {
LAB_01267078:
        pbVar3 = (byte *)0x0;
LAB_0126707c:
        return CONCAT44(pbVar3,1);
      }
      if (param_6 <= param_4) {
        pbVar8 = (byte *)param_1[4];
        pbVar3 = (byte *)0x0;
        do {
          pbVar5 = param_6 + -1 + (int)pbVar3;
          if (param_4 <= pbVar5) {
                    /* WARNING: Subroutine does not return */
            FUN_00faa4a4(pbVar5,param_4,&DAT_0188afcc);
          }
          uVar2 = param_3[(int)pbVar5] & 0x3f;
          uVar6 = (uint)param_1[2] >> uVar2 | param_1[3] << (0x20 - uVar2 & 0xff);
          if (-1 < (int)(uVar2 - 0x20)) {
            uVar6 = (uint)param_1[3] >> (uVar2 - 0x20 & 0xff);
          }
          pbVar5 = param_6;
          if ((uVar6 & 1) != 0) {
            if (pbVar8 < param_6) {
              pbVar5 = pbVar8;
              do {
                if (param_4 <= pbVar3 + (int)pbVar5) {
                  pbVar5 = pbVar8 + (int)pbVar3;
                  if (pbVar8 + (int)pbVar3 < param_4) {
                    pbVar5 = param_4;
                  }
                    /* WARNING: Subroutine does not return */
                  FUN_00faa4a4(pbVar5,param_4,&DAT_0188afdc);
                }
                if (pbVar5[param_5] != (param_3 + (int)pbVar3)[(int)pbVar5]) {
                  pbVar3 = pbVar5 + (int)(pbVar3 + (1 - (int)pbVar8));
                  goto LAB_01267044;
                }
                pbVar5 = pbVar5 + 1;
              } while (param_6 != pbVar5);
            }
            pbVar5 = pbVar8 + -1;
            do {
              if (pbVar5 == (byte *)0xffffffff) goto LAB_0126707c;
              if (param_6 <= pbVar8 + -1) {
                    /* WARNING: Subroutine does not return */
                FUN_00faa4a4(pbVar5,param_6,&DAT_0188afec);
              }
              if (param_4 <= pbVar3 + (int)pbVar5) {
                    /* WARNING: Subroutine does not return */
                FUN_00faa4a4(pbVar3 + (int)pbVar5,param_4,&DAT_0188affc);
              }
              pbVar7 = param_3 + (int)pbVar3 + (int)pbVar5;
              pbVar4 = pbVar5 + param_5;
              pbVar5 = pbVar5 + -1;
            } while (*pbVar4 == *pbVar7);
            pbVar5 = param_2;
          }
          pbVar3 = pbVar5 + (int)pbVar3;
LAB_01267044:
        } while (pbVar3 + (int)param_6 <= param_4);
LAB_01267054:
        return ZEXT48(pbVar3) << 0x20;
      }
    }
  }
  else if (param_6 <= param_4) {
    pbVar8 = (byte *)param_1[10];
    iVar11 = param_1[0xb];
    if (param_6 == (byte *)0x0) {
      pbVar5 = (byte *)0x0;
    }
    else {
      pbVar5 = (byte *)0x0;
      param_2 = param_3 + (int)param_6;
      pbVar7 = param_3;
      do {
        pbVar4 = pbVar7 + 1;
        pbVar5 = (byte *)((uint)*pbVar7 + (int)pbVar5 * 2);
        pbVar7 = pbVar4;
      } while (pbVar4 < param_2);
    }
    pbVar7 = param_3;
    while( true ) {
      if (pbVar8 == pbVar5) {
        uVar12 = FUN_01266e60(pbVar7,param_5,param_6);
        param_2 = (byte *)((ulonglong)uVar12 >> 0x20);
        if ((int)uVar12 != 0) {
          return CONCAT44((int)pbVar7 - (int)param_3,1);
        }
      }
      if (param_3 + (int)param_4 + -(int)param_6 <= pbVar7) break;
      bVar1 = *pbVar7;
      param_2 = (byte *)(uint)pbVar7[(int)param_6];
      pbVar7 = pbVar7 + 1;
      pbVar5 = param_2 + ((int)pbVar5 - iVar11 * (uint)bVar1) * 2;
    }
  }
  return ZEXT48(param_2) << 0x20;
}


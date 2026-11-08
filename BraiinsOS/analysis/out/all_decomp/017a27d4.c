// FUN_017a27d4 @ 017a27d4 size=1184 calls_out=4 calls_in=2
// strings: 

uint FUN_017a27d4(int *param_1,uint param_2,char *param_3,uint param_4,undefined4 param_5,
                 undefined4 param_6,int param_7,int param_8,uint param_9,int param_10,int param_11,
                 int param_12)

{
  int iVar1;
  char cVar2;
  byte bVar3;
  uint uVar4;
  code *pcVar5;
  int iVar6;
  int iVar7;
  bool bVar8;
  bool bVar9;
  int local_3c;
  int local_30;
  int local_2c;
  
  local_2c = DAT_018ddaf8;
  if (param_4 < 0x400) {
    FUN_016dd1aa(param_8,param_7,0x408);
    if (param_10 == 0) {
      iVar6 = *(int *)(param_7 + 0x404);
      if ((int)(param_9 - 10) < -3) {
        uVar4 = 3;
      }
      else {
        uVar4 = 9 - param_9;
      }
      if (iVar6 == 2) {
        if (param_4 < 6) goto LAB_017a29b4;
        iVar7 = 3;
      }
      else {
        iVar7 = 3;
        if (param_4 < (uint)(8 << (uVar4 & 0xff))) goto LAB_017a2a70;
      }
LAB_017a2890:
      if (param_2 < iVar7 + 1U) goto LAB_017a2acc;
      bVar9 = 2 < param_9;
      bVar8 = param_9 == 3;
      if (param_9 < 4) {
        bVar9 = 0x3ff < param_4;
        bVar8 = param_4 == 0x400;
      }
      if (!bVar9 || bVar8) {
        bVar3 = param_12 != 0 | 4;
      }
      else {
        bVar3 = param_12 != 0 | (7 < param_9) << 1;
      }
      if (param_4 < 0x100 || iVar6 == 2 && iVar7 == 3) {
        pcVar5 = FUN_017976d0;
        local_3c = 0;
      }
      else {
        pcVar5 = FUN_01797744;
        local_3c = 4;
      }
      local_30 = iVar6;
      uVar4 = (*pcVar5)((char *)((int)param_1 + iVar7),param_2 - iVar7,param_3,param_4,0xff,0xb,
                        param_5,param_6,param_8,&local_30,bVar3 | (param_11 != 0) << 3);
      if (local_30 == 0) {
        iVar6 = 2;
      }
      else {
        iVar6 = 3;
      }
      if (uVar4 - 1 < 0xffffff87 || uVar4 == 0xffffff88) {
        if (param_9 < 7) {
          param_9 = 7;
        }
        if (uVar4 < (param_4 - 2) - (param_4 >> (param_9 - 1 & 0xff))) {
          if (uVar4 == 1) {
            if (param_4 < 8) {
              cVar2 = *param_3;
              if ((((param_3[1] != cVar2) || (param_3[2] != cVar2)) ||
                  ((param_3[3] != cVar2 || ((param_3[4] != cVar2 || (param_3[5] != cVar2)))))) ||
                 ((param_4 == 7 && (param_3[6] != cVar2)))) goto LAB_017a2ae8;
              FUN_016dd1aa(param_8,param_7,0x408);
LAB_017a2bd0:
              uVar4 = 2;
              *(char *)param_1 = (char)(param_4 << 3) + '\x01';
              iVar6 = 1;
            }
            else {
              FUN_016dd1aa(param_8,param_7,0x408);
              if (param_4 < 0x20) goto LAB_017a2bd0;
              if (param_4 < 0x1000) {
                uVar4 = 3;
                iVar6 = 2;
                *(short *)param_1 = (short)(param_4 * 0x10) + 5;
              }
              else {
                uVar4 = 4;
                iVar6 = 3;
                *param_1 = param_4 * 0x10 + 0xd;
              }
            }
            *(char *)((int)param_1 + iVar6) = *param_3;
          }
          else {
LAB_017a2ae8:
            iVar1 = param_4 * 0x10;
            if (iVar6 == 2) {
              *(undefined4 *)(param_8 + 0x404) = 1;
            }
            if (iVar7 == 4) {
              *param_1 = iVar1 + 8 + uVar4 * 0x40000 + iVar6;
            }
            else if (iVar7 == 5) {
              *(char *)(param_1 + 1) = (char)(uVar4 >> 10);
              *param_1 = iVar1 + 0xc + uVar4 * 0x400000 + iVar6;
            }
            else {
              iVar6 = local_3c + iVar1 + uVar4 * 0x4000 + iVar6;
              *(short *)param_1 = (short)iVar6;
              *(char *)((int)param_1 + 2) = (char)((uint)iVar6 >> 0x10);
            }
            uVar4 = uVar4 + iVar7;
          }
          goto LAB_017a29dc;
        }
      }
      FUN_016dd1aa(param_8,param_7,0x408);
      if (0x1f < param_4) goto LAB_017a2a98;
LAB_017a29b4:
      uVar4 = param_4 + 1;
      if (param_2 < uVar4) goto LAB_017a2acc;
      iVar6 = 1;
      *(char *)param_1 = (char)(param_4 << 3);
    }
    else {
      if (param_4 < 0x20) goto LAB_017a29b4;
LAB_017a2a78:
      uVar4 = param_4 + 2;
      if (param_2 < uVar4) goto LAB_017a2acc;
LAB_017a2a84:
      iVar6 = 2;
      *(short *)param_1 = (short)(param_4 << 4) + 4;
    }
LAB_017a29cc:
    FUN_016dd1aa((char *)((int)param_1 + iVar6),param_3,param_4);
  }
  else {
    FUN_016dd1aa(param_8,param_7,0x408);
    if (param_10 == 0) {
      iVar7 = (0x3fff < param_4) + 4;
      iVar6 = *(int *)(param_7 + 0x404);
      if ((((int)(param_9 - 10) < -3) || (iVar6 == 2)) ||
         ((uint)(8 << (9 - param_9 & 0xff)) <= param_4)) goto LAB_017a2890;
LAB_017a2a70:
      if (0x1f < param_4) goto LAB_017a2a78;
      goto LAB_017a29b4;
    }
LAB_017a2a98:
    iVar6 = (0xfff < param_4) + 2;
    uVar4 = iVar6 + param_4;
    if (uVar4 <= param_2) {
      if (iVar6 != 3) goto LAB_017a2a84;
      *param_1 = param_4 * 0x10 + 0xc;
      iVar6 = 3;
      goto LAB_017a29cc;
    }
LAB_017a2acc:
    uVar4 = 0xffffffba;
  }
LAB_017a29dc:
  if (local_2c != DAT_018ddaf8) {
                    /* WARNING: Subroutine does not return */
    FUN_016d2b78();
  }
  return uVar4;
}


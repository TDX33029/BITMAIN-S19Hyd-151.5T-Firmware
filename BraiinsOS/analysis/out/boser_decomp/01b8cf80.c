// FUN_01b8cf80 @ 01b8cf80 size=900 calls_out=5 calls_in=1
// strings: 

void FUN_01b8cf80(int *param_1,uint param_2,char *param_3,uint param_4,undefined4 param_5,
                 undefined4 param_6,int param_7,int param_8,uint param_9,int param_10,int param_11,
                 int param_12)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  char *pcVar5;
  int iVar6;
  byte bVar7;
  byte bVar8;
  bool bVar9;
  bool bVar10;
  uint local_30;
  uint local_2c;
  
  if (param_4 < 0x400) {
    iVar6 = 3;
  }
  else {
    iVar6 = 4;
  }
  local_2c = DAT_01d53560;
  uVar1 = FUN_01bed4e2(param_8,param_7,0x408);
  if (param_10 == 0) {
    uVar2 = *(uint *)(param_7 + 0x404);
    if ((int)(param_9 - 10) < -3) {
      uVar1 = 3;
    }
    else {
      uVar1 = 9 - param_9;
    }
    if (uVar2 == 2) {
      uVar4 = 6;
    }
    else {
      uVar4 = 8 << (uVar1 & 0xff);
    }
    if (uVar4 <= param_4) {
      if (0x3fff < param_4) {
        iVar6 = iVar6 + 1;
      }
      if (param_2 < iVar6 + 1U) {
        uVar1 = 0xffffffba;
LAB_01b8d290:
        uVar4 = local_2c ^ DAT_01d53560;
        if (uVar4 == 0) {
          return;
        }
        goto LAB_01b8d050;
      }
      bVar8 = param_12 != 0;
      bVar10 = 2 < param_9;
      bVar9 = param_9 == 3;
      if (param_9 < 4) {
        bVar10 = 0x3ff < param_4;
        bVar9 = param_4 == 0x400;
      }
      if (!bVar10 || bVar9) {
        bVar8 = bVar8 | 4;
        bVar7 = 0;
      }
      else {
        bVar7 = (7 < param_9) << 1;
      }
      bVar9 = param_4 < 0x100 || uVar2 == 2 && iVar6 == 3;
      iVar3 = 0x168;
      if (bVar9) {
        iVar3 = 0x164;
      }
      local_30 = uVar2;
      uVar1 = (**(code **)((int)&PTR_01d3b2b0 + iVar3))
                        ((int)param_1 + iVar6,param_2 - iVar6,param_3,param_4,0xff,0xb,param_5,
                         param_6,param_8,&local_30,bVar8 | bVar7 | (param_11 != 0) << 3);
      if (local_30 == 0) {
        uVar2 = 2;
      }
      else {
        uVar2 = 3;
      }
      if (uVar1 - 1 < 0xffffff87 || uVar1 == 0xffffff88) {
        if (param_9 < 7) {
          param_9 = 7;
        }
        if (uVar1 < (param_4 - 2) - (param_4 >> (param_9 - 1 & 0xff))) {
          if (uVar1 == 1) {
            if (param_4 < 8) {
              pcVar5 = param_3 + 1;
              do {
                if (*pcVar5 != *param_3) goto LAB_01b8d248;
                pcVar5 = pcVar5 + 1;
              } while (param_3 + param_4 != pcVar5);
            }
            uVar1 = FUN_01bed4e2(param_8,param_7,0x408);
            uVar2 = local_2c ^ DAT_01d53560;
            uVar4 = 0;
            if (uVar2 == 0) {
              FUN_01b8cf18(param_1,param_2,param_3,param_4);
              return;
            }
            goto LAB_01b8d050;
          }
LAB_01b8d248:
          if (uVar2 == 2) {
            *(undefined4 *)(param_8 + 0x404) = 1;
          }
          iVar3 = param_4 * 0x10;
          if (iVar6 == 4) {
            *param_1 = iVar3 + 8 + uVar1 * 0x40000 + uVar2;
          }
          else if (iVar6 == 5) {
            *param_1 = iVar3 + 0xc + uVar1 * 0x400000 + uVar2;
            *(char *)(param_1 + 1) = (char)(uVar1 >> 10);
          }
          else {
            iVar3 = ((uint)bVar9 << 2 ^ 4) + iVar3 + uVar1 * 0x4000 + uVar2;
            *(short *)param_1 = (short)iVar3;
            *(char *)((int)param_1 + 2) = (char)((uint)iVar3 >> 0x10);
          }
          uVar1 = iVar6 + uVar1;
          goto LAB_01b8d290;
        }
      }
      uVar1 = FUN_01bed4e2(param_8,param_7,0x408);
    }
  }
  uVar2 = local_2c ^ DAT_01d53560;
  uVar4 = 0;
  if (uVar2 == 0) {
    FUN_01b8ce8c(param_1,param_2,param_3,param_4);
    return;
  }
LAB_01b8d050:
                    /* WARNING: Subroutine does not return */
  FUN_01be31f4(uVar1,uVar2,uVar4);
}


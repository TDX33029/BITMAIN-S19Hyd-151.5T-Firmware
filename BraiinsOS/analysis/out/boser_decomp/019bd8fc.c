// FUN_019bd8fc @ 019bd8fc size=1088 calls_out=11 calls_in=1
// strings: 

void FUN_019bd8fc(undefined4 param_1,undefined4 param_2,int param_3,undefined4 param_4,int param_5,
                 uint param_6,undefined4 param_7,undefined4 param_8,int param_9,undefined4 param_10)

{
  ulonglong uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  byte *pbVar6;
  uint uVar7;
  undefined4 uVar8;
  uint uVar9;
  byte bVar10;
  uint uVar11;
  int iVar12;
  undefined4 uVar13;
  int iVar14;
  undefined4 local_150 [2];
  undefined4 local_148;
  undefined4 local_140;
  undefined4 local_138;
  undefined4 local_130;
  undefined4 local_128;
  undefined4 local_124;
  undefined1 auStack_120 [48];
  longlong local_f0;
  longlong lStack_e8;
  undefined4 local_d8;
  undefined1 auStack_b8 [32];
  int local_98;
  int local_94;
  int local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined1 auStack_74 [12];
  undefined4 local_68;
  undefined4 local_5c;
  undefined4 local_50;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined1 local_38;
  undefined1 local_37;
  undefined4 local_30;
  undefined4 local_2c;
  
  FUN_019afae4(auStack_74,param_7,param_8);
  local_68 = 0x80000000;
  local_50 = 0x80000000;
  local_5c = 0x80000000;
  local_88 = 4;
  local_7c = 4;
  local_84 = 0;
  local_8c = 0;
  local_90 = 0;
  local_94 = 1;
  local_98 = 0;
  local_78 = 0;
  local_80 = 0;
  local_150[0] = 0;
  local_44 = param_2;
  FUN_01bed93e(auStack_120,0,0x48);
  local_3c = 0xffffffff;
  local_128 = 0xc;
  local_38 = 1;
  local_40 = 0;
  local_d8 = 0;
  local_124 = 0;
  local_130 = 0;
  local_138 = 0;
  local_140 = 0;
  local_148 = 0;
  FUN_01bed93e(auStack_b8,0,0x20);
  local_37 = 2;
  FUN_019a66e4(&local_30,param_7,param_8,"a",1);
  if (param_6 < 2) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb12c(1,param_6,&DAT_01d2839c);
  }
  if (param_6 < 0x16) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb12c(0x15,param_6,&DAT_01d283ac);
  }
  uVar3 = *(uint *)(param_5 + 0xac);
  uVar13 = *(undefined4 *)(param_5 + 8);
  iVar14 = *(int *)(param_5 + 0xc);
  if (uVar3 == 0) {
LAB_019bdb18:
    uVar1 = 0;
  }
  else {
    pbVar6 = *(byte **)(param_5 + 0xa8);
    if (uVar3 != 1) {
      bVar10 = *pbVar6;
LAB_019bda54:
      if (bVar10 == 0x2b) {
        pbVar6 = pbVar6 + 1;
        uVar3 = uVar3 - 1;
      }
      if (uVar3 < 0x11) {
        if (uVar3 != 0) {
          uVar1 = 0;
          do {
            bVar10 = *pbVar6;
            if (9 < bVar10 - 0x30) goto LAB_019bdb18;
            pbVar6 = pbVar6 + 1;
            uVar3 = uVar3 - 1;
            uVar1 = (uVar1 & 0xffffffff) * 10 + CONCAT44((int)(uVar1 >> 0x20) * 10,bVar10 - 0x30);
          } while (uVar3 != 0);
          goto LAB_019bdb1c;
        }
      }
      else {
        uVar5 = 0;
        uVar4 = 0;
        do {
          uVar1 = CONCAT44(uVar4,uVar5);
          if (uVar3 == 0) goto LAB_019bdb1c;
          uVar11 = (uint)((ulonglong)uVar5 * 10);
          uVar9 = (uint)((ulonglong)uVar5 * 10 >> 0x20);
          uVar5 = (uint)((ulonglong)uVar4 * 10);
          uVar7 = uVar9 + uVar5;
          if (((int)((ulonglong)uVar4 * 10 >> 0x20) != 0 || CARRY4(uVar9,uVar5)) ||
             (uVar9 = *pbVar6 - 0x30, 9 < uVar9)) break;
          uVar5 = uVar11 + uVar9;
          pbVar6 = pbVar6 + 1;
          uVar4 = uVar7 + CARRY4(uVar11,uVar9);
          uVar3 = uVar3 - 1;
        } while (!CARRY4(uVar7,(uint)CARRY4(uVar11,uVar9)));
      }
      goto LAB_019bdb18;
    }
    bVar10 = *pbVar6;
    if (bVar10 == 0x2b) goto LAB_019bdb18;
    uVar1 = 0;
    if (bVar10 != 0x2d) goto LAB_019bda54;
  }
LAB_019bdb1c:
  if (*(int *)(param_9 + 8) == 0 && *(int *)(param_9 + 0xc) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_012ffdf4(&DAT_01d283bc,(int)(uVar1 >> 0x20));
  }
  local_f0 = FUN_01bf0ff0((int)uVar1);
  uVar3 = (uint)((ulonglong)local_f0 >> 0x20);
  uVar8 = 0;
  lStack_e8 = local_f0 + *(longlong *)(param_9 + 0x10);
  if (CARRY4(uVar3,*(uint *)(param_9 + 0x14)) ||
      CARRY4(uVar3 + *(uint *)(param_9 + 0x14),
             (uint)CARRY4((uint)local_f0,*(uint *)(param_9 + 0x10)))) {
    lStack_e8 = -1;
  }
  if (iVar14 < 0) {
LAB_019bdb5c:
                    /* WARNING: Subroutine does not return */
    FUN_00664620(uVar8,iVar14);
  }
  if (iVar14 == 0) {
    iVar2 = 1;
    iVar12 = 0;
  }
  else {
    uVar8 = 1;
    iVar2 = FUN_01298504(iVar14,1);
    if (iVar2 == 0) goto LAB_019bdb5c;
    iVar12 = iVar14;
  }
  FUN_01bed4e2(iVar2,uVar13,iVar14);
  FUN_0134bd64(0,1);
  uVar3 = *(uint *)(param_5 + 0x44);
  pbVar6 = *(byte **)(param_5 + 0x40);
  if (uVar3 != 0) {
    if (uVar3 == 1) {
      bVar10 = *pbVar6;
      if ((bVar10 == 0x2b) || (bVar10 == 0x2d)) goto LAB_019bdca8;
    }
    else {
      bVar10 = *pbVar6;
    }
    if (bVar10 == 0x2b) {
      pbVar6 = pbVar6 + 1;
      uVar3 = uVar3 - 1;
    }
    if (uVar3 < 9) {
      if (uVar3 != 0) {
        uVar4 = 0;
        do {
          bVar10 = *pbVar6;
          if (9 < bVar10 - 0x30) goto LAB_019bdca8;
          pbVar6 = pbVar6 + 1;
          uVar3 = uVar3 - 1;
          uVar4 = (bVar10 - 0x30) + uVar4 * 10;
        } while (uVar3 != 0);
LAB_019bdc48:
        if ((uVar4 & 0x200000) != 0) {
          local_37 = 0;
          goto LAB_019bdcb4;
        }
      }
    }
    else {
      uVar4 = 0;
      while( true ) {
        if (uVar3 == 0) goto LAB_019bdc48;
        uVar5 = (uint)((ulonglong)uVar4 * 10);
        if ((int)((ulonglong)uVar4 * 10 >> 0x20) != 0) break;
        uVar7 = *pbVar6 - 0x30;
        uVar4 = uVar7 + uVar5;
        if ((9 < uVar7) || (uVar3 = uVar3 - 1, pbVar6 = pbVar6 + 1, CARRY4(uVar7,uVar5))) break;
      }
    }
  }
LAB_019bdca8:
  if (param_3 != 0) {
    local_37 = 1;
  }
LAB_019bdcb4:
  local_98 = iVar12;
  local_94 = iVar2;
  local_90 = iVar14;
  FUN_019bde0c(local_150,param_3,param_4,param_10,&local_30,param_5,param_6);
  FUN_01bed4e2(param_1,local_150,0x120);
  FUN_0134bd64(local_30,local_2c);
  return;
}


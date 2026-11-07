// FUN_01b88a34 @ 01b88a34 size=828 calls_out=7 calls_in=2
// strings: 

void FUN_01b88a34(int *param_1,int param_2,int param_3,int param_4,int param_5,uint param_6,
                 uint param_7,int param_8,undefined4 param_9)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined4 extraout_r1;
  uint extraout_r1_00;
  undefined **ppuVar4;
  undefined4 extraout_r2;
  char *pcVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  char *pcVar13;
  int iVar14;
  uint uVar15;
  bool bVar16;
  undefined8 uVar17;
  char local_44 [4];
  char local_40;
  char local_3c;
  uint local_38;
  int local_34;
  undefined4 local_30;
  uint local_2c;
  
  ppuVar4 = &PTR_01d3b2b0;
  iVar14 = param_1[2];
  iVar12 = param_1[3] - iVar14;
  local_2c = DAT_01d53560;
  uVar6 = *(undefined4 *)(param_4 + 0x1c);
  iVar7 = *param_1;
  uVar15 = param_1[1] - iVar7;
  iVar8 = param_1[6];
  iVar9 = param_1[4];
  iVar1 = (int)uVar15 >> 3;
  if (iVar1 == 0) {
    ppuVar4 = (undefined **)0x1;
  }
  iVar10 = param_1[5];
  if (iVar1 != 0) {
    FUN_01bf1250(iVar12,iVar1,ppuVar4);
  }
  uVar2 = FUN_01b8511c(param_4);
  uVar17 = FUN_01b8cf80(param_5,param_6,iVar14,iVar12,param_8 + 0xd4,0x2204,param_2,param_3,uVar6,
                        uVar2,extraout_r2,param_9);
  uVar3 = (uint)uVar17;
  if (uVar3 < 0xffffff89) {
    if ((int)(param_6 - uVar3) < 4) {
      uVar17 = CONCAT44((int)((ulonglong)uVar17 >> 0x20),0xffffffba);
      goto LAB_01b88cf8;
    }
    pcVar5 = (char *)(param_5 + uVar3);
    iVar12 = param_3 + 0x408;
    if (0x3f8 < uVar15) {
      if (uVar15 < 0x3f7f9) {
        pcVar13 = pcVar5 + 2;
        pcVar5[1] = (char)iVar1;
        *pcVar5 = (char)((uint)iVar1 >> 8) + -0x80;
      }
      else {
        pcVar13 = pcVar5 + 3;
        *pcVar5 = -1;
        *(short *)(pcVar5 + 1) = (short)iVar1 + -0x7f00;
      }
LAB_01b88b88:
      FUN_01b885b8(local_44,param_1,iVar1,param_2 + 0x408,iVar12,pcVar13 + 1,param_5 + param_6,uVar6
                   ,param_8,param_8 + 0xd4,0x2204);
      uVar17 = CONCAT44(extraout_r1,local_38);
      if (local_38 < 0xffffff89) {
        pcVar5 = pcVar13 + 1 + local_38;
        *pcVar13 = local_40 * '\x10' + local_44[0] * '@' + local_3c * '\x04';
        uVar17 = FUN_01b8da30(pcVar5,(param_5 + param_6) - (int)pcVar5,param_3 + 0x70c,iVar10,iVar12
                              ,iVar8,param_3 + 0xcb8,iVar9,iVar7,iVar1,local_30,param_9);
        uVar15 = (uint)((ulonglong)uVar17 >> 0x20);
        uVar3 = (uint)uVar17;
        if (uVar3 < 0xffffff89) {
          if ((local_34 == 0) || (3 < local_34 + uVar3)) {
            pcVar5 = pcVar5 + (uVar3 - param_5);
            goto LAB_01b88cf0;
          }
          goto LAB_01b88c74;
        }
      }
      goto LAB_01b88cf8;
    }
    pcVar13 = pcVar5 + 1;
    *(char *)(param_5 + uVar3) = (char)iVar1;
    if (iVar1 != 0) goto LAB_01b88b88;
    FUN_01bed4e2(iVar12,param_2 + 0x408,0xde0);
    pcVar5 = pcVar13 + -param_5;
    uVar15 = extraout_r1_00;
LAB_01b88cf0:
    uVar17 = CONCAT44(uVar15,pcVar5);
    if (pcVar5 != (char *)0x0) goto LAB_01b88cf8;
  }
  else {
LAB_01b88cf8:
    uVar15 = (uint)((ulonglong)uVar17 >> 0x20);
    uVar3 = (uint)uVar17;
    bVar16 = param_6 == param_7;
    if (param_7 <= param_6) {
      bVar16 = uVar3 == 0xffffffba;
    }
    if (!bVar16) {
      if (0xffffff88 < uVar3) goto LAB_01b88c78;
      uVar11 = *(uint *)(param_4 + 0x1c);
      if (uVar11 < 7) {
        uVar11 = 7;
      }
      uVar15 = param_7;
      if (uVar3 < (param_7 - 2) - (param_7 >> (uVar11 - 1 & 0xff))) goto LAB_01b88c78;
    }
  }
LAB_01b88c74:
  uVar3 = 0;
LAB_01b88c78:
  if ((local_2c ^ DAT_01d53560) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01be31f4(uVar3,uVar15,local_2c ^ DAT_01d53560,0);
  }
  return;
}


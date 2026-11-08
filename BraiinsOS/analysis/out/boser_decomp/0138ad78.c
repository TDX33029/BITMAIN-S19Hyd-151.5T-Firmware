// FUN_0138ad78 @ 0138ad78 size=728 calls_out=3 calls_in=1
// strings: 

void FUN_0138ad78(byte *param_1,int param_2,int *param_3)

{
  undefined1 *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  byte bVar5;
  uint uVar6;
  byte *pbVar7;
  uint uVar8;
  byte *pbVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  byte *pbVar18;
  bool bVar19;
  undefined4 local_38;
  undefined4 local_34;
  int local_2c [2];
  
  if (param_2 == 0) {
    local_2c[0] = (uint)local_2c[0]._1_3_ << 8;
    FUN_01284394(param_3,local_2c,1);
  }
  else {
    uVar2 = param_3[1];
    uVar12 = 0;
    local_2c[0] = (uint)local_2c[0]._1_3_ << 8;
    FUN_01284394(param_3,local_2c,1);
    uVar3 = 0x28;
    uVar14 = 0;
    pbVar7 = param_1;
    do {
      pbVar18 = pbVar7 + 1;
      iVar15 = (uint)*pbVar7 * 0x10;
      uVar3 = uVar3 - *(int *)(&DAT_00463ef8 + iVar15);
      uVar8 = *(uint *)(&DAT_00463f00 + iVar15);
      uVar4 = uVar3 & 0x3f;
      uVar11 = uVar4 - 0x20;
      uVar6 = uVar8 << uVar4;
      if (-1 < (int)uVar11) {
        uVar6 = 0;
      }
      uVar12 = uVar6 | uVar12;
      uVar6 = uVar8 >> (0x20 - uVar4 & 0xff) | *(int *)(&DAT_00463f04 + iVar15) << uVar4;
      if (-1 < (int)uVar11) {
        uVar6 = uVar8 << (uVar11 & 0xff);
      }
      uVar14 = uVar6 | uVar14;
      uVar6 = uVar3;
      if (uVar3 < 0x21) {
        do {
          local_2c[0] = CONCAT31(local_2c[0]._1_3_,(char)uVar14);
          FUN_01284394(param_3,local_2c,1);
          uVar14 = uVar12 >> 0x18;
          uVar3 = uVar6 + 8;
          bVar19 = uVar6 < 0x19;
          uVar12 = uVar12 << 8;
          uVar6 = uVar3;
        } while (bVar19);
      }
      pbVar7 = pbVar18;
    } while (pbVar18 != param_1 + param_2);
    if (uVar3 != 0x28) {
      bVar5 = 0xff;
      uVar12 = (uVar3 & 0x3f) - 0x20;
      if (-1 < (int)uVar12) {
        bVar5 = (byte)(-1 << (uVar12 & 0xff));
      }
      local_2c[0] = CONCAT31(local_2c[0]._1_3_,(byte)uVar14 | ~bVar5);
      FUN_01284394(param_3,local_2c,1);
    }
    uVar14 = param_3[1];
    uVar12 = uVar14 + ~uVar2;
    if (uVar12 < 0x7f) {
      if (uVar14 <= uVar2) {
                    /* WARNING: Subroutine does not return */
        FUN_012fb12c(uVar2,uVar14,&DAT_01cec170);
      }
      *(byte *)(*param_3 + uVar2) = (byte)uVar12 | 0x80;
    }
    else {
      local_34 = 0;
      local_38 = 0xff;
      uVar12 = uVar12 - 0x7f;
      pbVar7 = (byte *)((uint)&local_38 | 1);
      if (uVar12 < 0x80) {
        local_38 = (uint)CONCAT11((char)uVar12,0xff);
        iVar15 = 7;
        iVar17 = 2;
      }
      else {
        pbVar18 = pbVar7;
        iVar15 = 7;
        do {
          iVar17 = iVar15;
          if (iVar17 == 0) goto LAB_0138afd8;
          pbVar9 = pbVar18 + 1;
          *pbVar18 = (byte)uVar12 | 0x80;
          uVar3 = uVar12 >> 7;
          uVar6 = uVar12 >> 0xe;
          iVar15 = iVar17 + -1;
          uVar12 = uVar3;
          pbVar18 = pbVar9;
        } while (uVar6 != 0);
        if (iVar15 == 0) {
LAB_0138afd8:
          local_2c[1] = 0;
          local_2c[0] = 1;
                    /* WARNING: Subroutine does not return */
          FUN_01284540(local_2c);
        }
        *pbVar9 = (byte)uVar3;
        iVar17 = 10 - iVar17;
      }
      FUN_01284394(param_3,pbVar7,8 - iVar15);
      iVar10 = *param_3;
      uVar12 = param_3[1];
      uVar14 = uVar14 - 1;
      do {
        if (uVar12 <= uVar14) {
                    /* WARNING: Subroutine does not return */
          FUN_012fb12c(uVar14,uVar12,&DAT_01cec150);
        }
        uVar3 = (uVar14 - iVar15) + 8;
        if (uVar12 <= uVar3) {
                    /* WARNING: Subroutine does not return */
          FUN_012fb12c(uVar3,uVar12,&DAT_01cec160);
        }
        puVar1 = (undefined1 *)(iVar10 + uVar14);
        iVar13 = (iVar10 - iVar15) + uVar14;
        uVar14 = uVar14 - 1;
        *(undefined1 *)(iVar13 + 8) = *puVar1;
      } while (uVar2 != uVar14);
      iVar13 = uVar12 - uVar2;
      iVar15 = 0;
      if (uVar12 < uVar2) {
        iVar13 = 0;
      }
      do {
        if (iVar15 == 8) {
                    /* WARNING: Subroutine does not return */
          FUN_012fb12c(8,8,&DAT_01cec130);
        }
        if (iVar13 == iVar15) {
                    /* WARNING: Subroutine does not return */
          FUN_012fb12c(uVar2 + iVar15,uVar12,&DAT_01cec140);
        }
        iVar16 = iVar15 + 1;
        *(undefined1 *)(iVar10 + uVar2 + iVar15) = *(undefined1 *)((int)&local_38 + iVar15);
        iVar15 = iVar16;
      } while (iVar17 != iVar16);
    }
  }
  return;
}


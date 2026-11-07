// FUN_017927d8 @ 017927d8 size=804 calls_out=0 calls_in=1
// strings: 

undefined4
FUN_017927d8(short *param_1,int param_2,uint param_3,uint param_4,int param_5,uint param_6)

{
  uint uVar1;
  undefined1 *puVar2;
  ushort uVar3;
  short sVar4;
  bool bVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint *puVar9;
  uint *puVar10;
  short *psVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  undefined2 uVar15;
  int iVar16;
  short *psVar17;
  char cVar18;
  short *psVar19;
  short *psVar20;
  int iVar21;
  bool bVar22;
  int local_34;
  undefined4 local_2c;
  
  uVar15 = 1;
  uVar1 = 1 << (param_4 & 0xff);
  uVar8 = (param_3 + 1) * 2;
  bVar22 = (uint)(uVar1 + 8 + uVar8 <= param_6) <=
           -((1 << (param_4 - 0x20 & 0xff) | 1U >> (0x20 - param_4 & 0xff)) +
             (uint)(0xfffffff7 < uVar1) + (uint)CARRY4(uVar1 + 8,uVar8));
  bVar5 = 0xff < param_3 || bVar22;
  if (0xff < param_3 || bVar22) {
    return 0xffffffd2;
  }
  if (0xc < param_4) {
    return 0xffffffd4;
  }
  uVar6 = uVar1 - 1;
  local_2c = CONCAT22(1,(short)param_4);
  if (param_3 + 1 == 0) {
    local_34 = (uVar1 >> 3) + (uVar1 >> 1);
    *(undefined4 *)param_1 = local_2c;
    iVar21 = param_5;
  }
  else {
    psVar17 = (short *)(param_2 + -2);
    psVar19 = (short *)(param_2 + param_3 * 2);
    psVar20 = (short *)(param_5 + -2);
    uVar12 = uVar6;
    psVar11 = psVar17;
    do {
      while( true ) {
        psVar11 = psVar11 + 1;
        sVar4 = *psVar11;
        if (sVar4 != -1) break;
        uVar7 = uVar12 - 1;
        *(bool *)(param_1 + uVar12 * 2 + 3) = bVar5;
        bVar5 = (bool)(bVar5 ^ 1);
        psVar20 = psVar20 + 1;
        *psVar20 = 1;
        uVar12 = uVar7;
        if (psVar19 == psVar11) goto LAB_017928f0;
      }
      if ((short)(1 << (param_4 - 1 & 0xff)) <= sVar4) {
        uVar15 = 0;
      }
      bVar5 = (bool)(bVar5 ^ 1);
      psVar20 = psVar20 + 1;
      *psVar20 = sVar4;
    } while (psVar19 != psVar11);
LAB_017928f0:
    *(uint *)param_1 = CONCAT22(uVar15,(short)param_4);
    if (uVar12 != uVar6) {
      uVar8 = 0;
      cVar18 = '\0';
      do {
        psVar17 = psVar17 + 1;
        sVar4 = *psVar17;
        if (0 < sVar4) {
          iVar21 = 0;
          do {
            *(char *)(param_1 + uVar8 * 2 + 3) = cVar18;
            do {
              uVar8 = uVar8 + (uVar1 >> 3) + (uVar1 >> 1) + 3 & uVar6;
            } while (uVar12 < uVar8);
            iVar21 = iVar21 + 1;
          } while (iVar21 != sVar4);
        }
        cVar18 = cVar18 + '\x01';
      } while (psVar19 != psVar17);
      if (uVar8 != 0) {
        return 0xffffffff;
      }
      goto LAB_01792980;
    }
    iVar21 = param_5 + uVar8;
    uVar8 = 0;
    local_34 = (uVar1 >> 3) + (uVar1 >> 1);
    uVar12 = 0;
    iVar16 = 0;
    do {
      psVar17 = psVar17 + 1;
      iVar14 = (int)*psVar17;
      *(uint *)(iVar21 + iVar16) = uVar8;
      *(uint *)(iVar21 + iVar16 + 4) = uVar12;
      if (8 < iVar14) {
        puVar9 = (uint *)(iVar21 + 8 + iVar16);
        do {
          *puVar9 = uVar8;
          puVar10 = puVar9 + 2;
          puVar9[1] = uVar12;
          puVar9 = puVar10;
        } while ((uint *)(iVar21 + 0x10 + iVar16 + (iVar14 - 9U & 0xfffffff8)) != puVar10);
      }
      bVar22 = 0xfefefefe < uVar8;
      uVar8 = uVar8 + 0x1010101;
      iVar16 = iVar16 + iVar14;
      uVar12 = uVar12 + 0x1010101 + (uint)bVar22;
    } while (psVar19 != psVar17);
  }
  local_34 = local_34 + 3;
  uVar12 = 0;
  uVar8 = 0;
  do {
    uVar13 = uVar6 & uVar8;
    uVar7 = uVar8 + local_34;
    uVar8 = local_34 * 2 + uVar8 & uVar6;
    *(undefined1 *)(param_1 + uVar13 * 2 + 3) = *(undefined1 *)(iVar21 + uVar12);
    puVar2 = (undefined1 *)(iVar21 + 1 + uVar12);
    uVar12 = uVar12 + 2;
    *(undefined1 *)(param_1 + (uVar7 & uVar6) * 2 + 3) = *puVar2;
  } while (uVar12 < uVar1);
LAB_01792980:
  uVar8 = 0;
  do {
    uVar8 = uVar8 + 1;
    uVar3 = *(ushort *)(param_5 + (uint)*(byte *)(param_1 + 3) * 2);
    *(ushort *)(param_5 + (uint)*(byte *)(param_1 + 3) * 2) = uVar3 + 1;
    uVar6 = param_4 - (0x1f - LZCOUNT((uint)uVar3));
    *(char *)((int)param_1 + 7) = (char)uVar6;
    param_1 = param_1 + 2;
    *param_1 = (uVar3 << (uVar6 & 0xff)) - (short)uVar1;
  } while (uVar8 < uVar1);
  return 0;
}


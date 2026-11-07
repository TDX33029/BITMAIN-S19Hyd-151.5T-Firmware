// FUN_01b81024 @ 01b81024 size=688 calls_out=0 calls_in=1
// strings: 

undefined4
FUN_01b81024(short *param_1,uint param_2,uint param_3,uint param_4,int param_5,uint param_6)

{
  uint uVar1;
  undefined1 *puVar2;
  ushort uVar3;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  short sVar10;
  int iVar11;
  uint uVar12;
  short *psVar13;
  int iVar14;
  uint uVar15;
  undefined2 uVar16;
  int iVar17;
  int iVar18;
  bool bVar19;
  short *local_40;
  short *local_34;
  
  uVar16 = 1;
  uVar15 = param_3 + 1;
  uVar5 = uVar15 * 2;
  uVar1 = 1 << (param_4 & 0xff);
  if (param_3 < 0x100 &&
      -((1 << (param_4 - 0x20 & 0xff) | 1U >> (0x20 - param_4 & 0xff)) + (uint)(0xfffffff7 < uVar1)
       + (uint)CARRY4(uVar1 + 8,uVar5)) < (uint)(uVar1 + 8 + uVar5 <= param_6)) {
    if (param_4 < 0xd) {
      uVar7 = uVar1 - 1;
      local_40 = (short *)(param_5 + -2);
      local_34 = (short *)(param_2 - 2);
      uVar12 = uVar7;
      psVar13 = local_34;
      for (uVar9 = 0; uVar9 < uVar15; uVar9 = uVar9 + 1) {
        psVar13 = psVar13 + 1;
        sVar10 = *psVar13;
        if (sVar10 == -1) {
          *(char *)(param_1 + uVar12 * 2 + 3) = (char)uVar9;
          sVar10 = 1;
          uVar12 = uVar12 - 1;
        }
        else if ((short)(1 << (param_4 - 1 & 0xff)) <= sVar10) {
          uVar16 = 0;
        }
        local_40 = local_40 + 1;
        *local_40 = sVar10;
      }
      if (uVar12 != uVar7) {
        param_2 = 0;
        param_3 = param_2;
      }
      *(uint *)param_1 = CONCAT22(uVar16,(short)param_4);
      iVar17 = (uVar1 >> 3) + (uVar1 >> 1) + 3;
      if (uVar12 != uVar7) {
        for (; param_2 < uVar15; param_2 = param_2 + 1) {
          local_34 = local_34 + 1;
          sVar10 = *local_34;
          for (iVar8 = 0; iVar8 < sVar10; iVar8 = iVar8 + 1) {
            *(char *)(param_1 + param_3 * 2 + 3) = (char)param_2;
            do {
              param_3 = param_3 + iVar17 & uVar7;
            } while (uVar12 < param_3);
          }
        }
        if (param_3 != 0) {
          return 0xffffffff;
        }
      }
      else {
        uVar15 = 0;
        iVar18 = param_5 + uVar5;
        iVar11 = 0;
        iVar8 = 0;
        while ((short *)(param_2 + param_3 * 2) != local_34) {
          iVar14 = iVar18 + iVar8;
          local_34 = local_34 + 1;
          sVar10 = *local_34;
          *(uint *)(iVar18 + iVar8) = uVar15;
          *(int *)(iVar14 + 4) = iVar11;
          for (iVar6 = 8; iVar6 < sVar10; iVar6 = iVar6 + 8) {
            *(uint *)(iVar14 + iVar6) = uVar15;
            *(int *)(iVar14 + iVar6 + 4) = iVar11;
          }
          bVar19 = 0xfefefefe < uVar15;
          uVar15 = uVar15 + 0x1010101;
          iVar8 = iVar8 + sVar10;
          iVar11 = iVar11 + 0x1010101 + (uint)bVar19;
        }
        uVar15 = 0;
        uVar5 = 0;
        do {
          *(undefined1 *)(param_1 + (uVar5 & uVar7) * 2 + 3) = *(undefined1 *)(iVar18 + uVar15);
          uVar9 = uVar5 + iVar17;
          puVar2 = (undefined1 *)(iVar18 + 1 + uVar15);
          uVar15 = uVar15 + 2;
          uVar5 = uVar5 + iVar17 * 2 & uVar7;
          *(undefined1 *)(param_1 + (uVar9 & uVar7) * 2 + 3) = *puVar2;
        } while (uVar15 < uVar1);
      }
      uVar5 = 0;
      do {
        uVar5 = uVar5 + 1;
        uVar3 = *(ushort *)(param_5 + (uint)*(byte *)(param_1 + 3) * 2);
        *(ushort *)(param_5 + (uint)*(byte *)(param_1 + 3) * 2) = uVar3 + 1;
        uVar15 = param_4 - (0x1f - LZCOUNT((uint)uVar3));
        *(char *)((int)param_1 + 7) = (char)uVar15;
        param_1 = param_1 + 2;
        *param_1 = (uVar3 << (uVar15 & 0xff)) - (short)uVar1;
      } while (uVar5 < uVar1);
      uVar4 = 0;
    }
    else {
      uVar4 = 0xffffffd4;
    }
  }
  else {
    uVar4 = 0xffffffd2;
  }
  return uVar4;
}


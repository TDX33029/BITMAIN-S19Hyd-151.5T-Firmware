// FUN_017694a0 @ 017694a0 size=1516 calls_out=5 calls_in=5
// strings: 

undefined8 FUN_017694a0(int param_1,int param_2,int param_3,int param_4,int param_5)

{
  int iVar1;
  uint uVar2;
  ushort *puVar3;
  ushort uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  bool bVar9;
  bool bVar10;
  ushort local_b60 [84];
  ushort auStack_ab8 [168];
  ushort auStack_968 [4];
  undefined1 local_960 [512];
  undefined1 local_760 [512];
  undefined1 local_560 [528];
  undefined1 auStack_350 [804];
  int local_2c;
  
  local_2c = DAT_018ddaf8;
  FUN_01759d50(auStack_350,param_2,&PTR_018bc3f4,0);
  FUN_01759d88(auStack_350,param_5,param_5 + 0x40,param_5 + 0x80,param_5 + 0xc0,0x22);
  FUN_01759de0(local_b60,local_960,local_760,local_560,auStack_350,3);
  uVar7 = 0;
  puVar3 = local_b60;
  do {
    while( true ) {
      uVar4 = (ushort)(*(byte *)((int)puVar3 + 1) >> 4) | (ushort)(byte)puVar3[1] << 4;
      if (0xd00 < (*puVar3 & 0xfff)) break;
      *(ushort *)(param_1 + uVar7 * 2) = *puVar3 & 0xfff;
      bVar10 = uVar7 != 0xff;
      uVar7 = uVar7 + 1;
      if (uVar4 < 0xd01 && bVar10) {
LAB_0176959c:
        iVar1 = uVar7 * 2;
        uVar7 = uVar7 + 1;
        *(ushort *)(param_1 + iVar1) = uVar4;
      }
      if (uVar7 == 0x100) {
        bVar10 = false;
        goto LAB_01769600;
      }
      puVar3 = (ushort *)((int)puVar3 + 3);
      if (auStack_968 == puVar3) goto LAB_017695f4;
    }
    if (uVar4 < 0xd01) goto LAB_0176959c;
    puVar3 = (ushort *)((int)puVar3 + 3);
  } while (auStack_968 != puVar3);
LAB_017695f4:
  bVar10 = true;
LAB_01769600:
  uVar6 = 0;
  puVar3 = local_b60;
  do {
    while( true ) {
      uVar4 = (ushort)(*(byte *)((int)puVar3 + 0x201) >> 4) | (ushort)(byte)puVar3[0x101] << 4;
      if (0xd00 < (puVar3[0x100] & 0xfff)) break;
      *(ushort *)(param_2 + uVar6 * 2) = puVar3[0x100] & 0xfff;
      bVar9 = uVar6 != 0xff;
      uVar6 = uVar6 + 1;
      if (uVar4 < 0xd01 && bVar9) {
LAB_01769634:
        iVar1 = uVar6 * 2;
        uVar6 = uVar6 + 1;
        *(ushort *)(param_2 + iVar1) = uVar4;
      }
      if (uVar6 == 0x100) goto LAB_01769690;
      puVar3 = (ushort *)((int)puVar3 + 3);
      if (auStack_968 == puVar3) goto LAB_0176968c;
    }
    if (uVar4 < 0xd01) goto LAB_01769634;
    puVar3 = (ushort *)((int)puVar3 + 3);
  } while (auStack_968 != puVar3);
LAB_0176968c:
  bVar10 = true;
LAB_01769690:
  uVar5 = 0;
  puVar3 = local_b60;
  do {
    while( true ) {
      uVar4 = (ushort)(*(byte *)((int)puVar3 + 0x401) >> 4) | (ushort)(byte)puVar3[0x201] << 4;
      if (0xd00 < (puVar3[0x200] & 0xfff)) break;
      *(ushort *)(param_3 + uVar5 * 2) = puVar3[0x200] & 0xfff;
      bVar9 = uVar5 != 0xff;
      uVar5 = uVar5 + 1;
      if (uVar4 < 0xd01 && bVar9) {
LAB_017696c0:
        iVar1 = uVar5 * 2;
        uVar5 = uVar5 + 1;
        *(ushort *)(param_3 + iVar1) = uVar4;
      }
      if (uVar5 == 0x100) goto LAB_0176971c;
      puVar3 = (ushort *)((int)puVar3 + 3);
      if (auStack_968 == puVar3) goto LAB_01769718;
    }
    if (uVar4 < 0xd01) goto LAB_017696c0;
    puVar3 = (ushort *)((int)puVar3 + 3);
  } while (auStack_968 != puVar3);
LAB_01769718:
  bVar10 = true;
LAB_0176971c:
  uVar8 = 0;
  puVar3 = local_b60;
  do {
    while( true ) {
      uVar4 = (ushort)(*(byte *)((int)puVar3 + 0x601) >> 4) | (ushort)(byte)puVar3[0x301] << 4;
      if (0xd00 < (puVar3[0x300] & 0xfff)) break;
      *(ushort *)(param_4 + uVar8 * 2) = puVar3[0x300] & 0xfff;
      bVar9 = uVar8 != 0xff;
      uVar8 = uVar8 + 1;
      if (uVar4 < 0xd01 && bVar9) {
LAB_0176974c:
        iVar1 = uVar8 * 2;
        uVar8 = uVar8 + 1;
        *(ushort *)(param_4 + iVar1) = uVar4;
      }
      if (uVar8 == 0x100) {
        if (!bVar10) goto LAB_01769a2c;
        goto LAB_017697a4;
      }
      puVar3 = (ushort *)((int)puVar3 + 3);
      if (auStack_968 == puVar3) goto LAB_017697a4;
    }
    if (uVar4 < 0xd01) goto LAB_0176974c;
    puVar3 = (ushort *)((int)puVar3 + 3);
  } while (auStack_968 != puVar3);
LAB_017697a4:
LAB_017697ac:
  do {
    FUN_01759de0(local_b60,local_960,local_760,local_560,auStack_350,1);
    if (uVar7 < 0x100) {
      puVar3 = local_b60;
      do {
        while( true ) {
          uVar4 = (ushort)(*(byte *)((int)puVar3 + 1) >> 4) | (ushort)(byte)puVar3[1] << 4;
          if (0xd00 < (*puVar3 & 0xfff)) break;
          *(ushort *)(param_1 + uVar7 * 2) = *puVar3 & 0xfff;
          bVar10 = uVar7 != 0xff;
          uVar7 = uVar7 + 1;
          if (uVar4 < 0xd01 && bVar10) {
LAB_01769808:
            iVar1 = uVar7 * 2;
            uVar7 = uVar7 + 1;
            *(ushort *)(param_1 + iVar1) = uVar4;
          }
          if ((uVar7 == 0x100) || (puVar3 = (ushort *)((int)puVar3 + 3), auStack_ab8 == puVar3))
          goto LAB_01769860;
        }
        if (uVar4 < 0xd01) goto LAB_01769808;
        puVar3 = (ushort *)((int)puVar3 + 3);
      } while (auStack_ab8 != puVar3);
    }
LAB_01769860:
    puVar3 = local_b60;
    if (uVar6 < 0x100) {
      do {
        while( true ) {
          uVar4 = (ushort)(*(byte *)((int)puVar3 + 0x201) >> 4) | (ushort)(byte)puVar3[0x101] << 4;
          if (0xd00 < (puVar3[0x100] & 0xfff)) break;
          *(ushort *)(param_2 + uVar6 * 2) = puVar3[0x100] & 0xfff;
          bVar10 = uVar6 != 0xff;
          uVar6 = uVar6 + 1;
          if (uVar4 < 0xd01 && bVar10) {
LAB_01769898:
            iVar1 = uVar6 * 2;
            uVar6 = uVar6 + 1;
            *(ushort *)(param_2 + iVar1) = uVar4;
          }
          if ((uVar6 == 0x100) || (puVar3 = (ushort *)((int)puVar3 + 3), auStack_ab8 == puVar3))
          goto LAB_017698f0;
        }
        if (uVar4 < 0xd01) goto LAB_01769898;
        puVar3 = (ushort *)((int)puVar3 + 3);
      } while (auStack_ab8 != puVar3);
    }
LAB_017698f0:
    if (uVar5 < 0x100) {
      puVar3 = local_b60;
      do {
        while( true ) {
          uVar4 = (ushort)(*(byte *)((int)puVar3 + 0x401) >> 4) | (ushort)(byte)puVar3[0x201] << 4;
          if (0xd00 < (puVar3[0x200] & 0xfff)) break;
          *(ushort *)(param_3 + uVar5 * 2) = puVar3[0x200] & 0xfff;
          bVar10 = uVar5 != 0xff;
          uVar5 = uVar5 + 1;
          if (uVar4 < 0xd01 && bVar10) {
LAB_01769924:
            iVar1 = uVar5 * 2;
            uVar5 = uVar5 + 1;
            *(ushort *)(param_3 + iVar1) = uVar4;
          }
          if (uVar5 == 0x100) goto LAB_01769988;
          puVar3 = (ushort *)((int)puVar3 + 3);
          if (auStack_ab8 == puVar3) goto LAB_0176997c;
        }
        if (uVar4 < 0xd01) goto LAB_01769924;
        puVar3 = (ushort *)((int)puVar3 + 3);
      } while (auStack_ab8 != puVar3);
LAB_0176997c:
      if (uVar8 < 0x100) {
LAB_01769990:
        puVar3 = local_b60;
        do {
          uVar4 = (ushort)(*(byte *)((int)puVar3 + 0x601) >> 4) | (ushort)(byte)puVar3[0x301] << 4;
          if ((puVar3[0x300] & 0xfff) < 0xd01) {
            *(ushort *)(param_4 + uVar8 * 2) = puVar3[0x300] & 0xfff;
            bVar10 = uVar8 != 0xff;
            uVar8 = uVar8 + 1;
            if (uVar4 < 0xd01 && bVar10) goto LAB_017699bc;
LAB_017699c8:
            if (uVar8 == 0x100) goto LAB_01769a0c;
          }
          else if (uVar4 < 0xd01) {
LAB_017699bc:
            iVar1 = uVar8 * 2;
            uVar8 = uVar8 + 1;
            *(ushort *)(param_4 + iVar1) = uVar4;
            goto LAB_017699c8;
          }
          puVar3 = (ushort *)((int)puVar3 + 3);
        } while (auStack_ab8 != puVar3);
      }
      goto LAB_017697ac;
    }
LAB_01769988:
    if (uVar8 < 0x100) goto LAB_01769990;
LAB_01769a0c:
    uVar2 = uVar6;
    if (0xff < uVar6) {
      uVar2 = uVar7;
    }
    if (0xff < uVar5 && 0xff < uVar2) {
LAB_01769a2c:
      FUN_0177aaa0(local_b60,0x800);
      if (local_2c != DAT_018ddaf8) {
                    /* WARNING: Subroutine does not return */
        FUN_016d2b78();
      }
      return 0;
    }
  } while( true );
}


// FUN_00773780 @ 00773780 size=16040 calls_out=15 calls_in=1
// strings: stratum_event | stratum_connection | stratum_connection | stratum_connection | setup_connection | a Display implementation returned an error unexpectedly

/* WARNING: Type propagation algorithm not settling */

void FUN_00773780(int param_1)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  undefined4 *******pppppppuVar4;
  undefined4 ******ppppppuVar5;
  undefined4 *puVar6;
  undefined2 *puVar7;
  undefined2 *puVar8;
  int iVar9;
  undefined2 *puVar10;
  int iVar11;
  undefined4 uVar12;
  undefined4 *puVar13;
  undefined4 *puVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  undefined2 *puVar18;
  int *piVar19;
  int *piVar20;
  int iVar21;
  bool bVar22;
  undefined2 *local_c0;
  undefined4 *******local_a0;
  int local_9c;
  int *local_98 [2];
  char *local_90;
  undefined4 local_8c;
  undefined *local_88;
  undefined4 local_84;
  int local_80;
  undefined4 local_7c;
  undefined4 local_78;
  int local_70;
  int *local_6c;
  undefined4 local_68;
  int *local_64;
  int *local_60;
  undefined4 *******local_5c;
  undefined4 local_58;
  int **local_54;
  undefined4 local_50;
  undefined4 *******local_4c;
  undefined2 *local_48;
  undefined4 *local_44;
  undefined4 local_40;
  undefined2 *local_3c;
  undefined4 *local_38;
  undefined2 *local_34;
  undefined4 *local_30;
  undefined2 *local_2c;
  int local_28;
  
  iVar15 = *(int *)(param_1 + 0x10);
  puVar18 = *(undefined2 **)(iVar15 + 0x10);
  if (puVar18 != (undefined2 *)0x0) {
    uVar12 = *(undefined4 *)(iVar15 + 0xc);
    ppppppuVar5 = (undefined4 ******)thunk_FUN_016d4a50(puVar18);
    if (ppppppuVar5 == (undefined4 ******)0x0) goto LAB_0077711c;
    FUN_016dd1aa(ppppppuVar5,uVar12,puVar18);
    if (puVar18 != (undefined2 *)&DAT_80000000) goto LAB_00773808;
    puVar18 = (undefined2 *)0x3;
    ppppppuVar5 = (undefined4 ******)thunk_FUN_016d4a50(3);
    if (ppppppuVar5 != (undefined4 ******)0x0) {
      bVar22 = false;
      *(undefined1 *)((int)ppppppuVar5 + 2) = 0x41;
      *(undefined2 *)ppppppuVar5 = 0x2f4e;
      goto LAB_00773810;
    }
LAB_00777118:
    puVar18 = (undefined2 *)0x3;
    goto LAB_0077711c;
  }
  ppppppuVar5 = (undefined4 ******)&DAT_00000001;
LAB_00773808:
  bVar22 = puVar18 == (undefined2 *)0x0;
LAB_00773810:
  puVar6 = (undefined4 *)thunk_FUN_016d4a50(5);
  if (puVar6 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(1,5);
  }
  *(undefined1 *)(puVar6 + 1) = 0x6e;
  *puVar6 = 0x69617264;
  FUN_00793ff8(&local_4c,param_1);
  if (local_4c == (undefined4 *******)&DAT_80000000) {
    puVar7 = (undefined2 *)thunk_FUN_016d4a50(3);
    if (puVar7 == (undefined2 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(1,3);
    }
    bVar1 = false;
    *(undefined1 *)(puVar7 + 1) = 0x41;
    *puVar7 = 0x2f4e;
    puVar14 = (undefined4 *)0x3;
  }
  else {
    bVar1 = local_4c == (undefined4 *******)0x0;
    puVar14 = local_44;
    puVar7 = local_48;
  }
  FUN_00794130(&local_4c,param_1);
  if (local_4c == (undefined4 *******)&DAT_80000000) {
    puVar8 = (undefined2 *)thunk_FUN_016d4a50(3);
    if (puVar8 == (undefined2 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(1,3);
    }
    *(undefined1 *)(puVar8 + 1) = 0x41;
    *puVar8 = 0x2f4e;
    bVar2 = false;
    puVar13 = (undefined4 *)0x3;
  }
  else {
    bVar2 = local_4c == (undefined4 *******)0x0;
    puVar13 = local_44;
    puVar8 = local_48;
  }
  iVar9 = *(int *)(param_1 + 0xc);
  iVar16 = *(int *)(iVar9 + 0x10);
  if (iVar16 == 0) {
    puVar10 = (undefined2 *)&DAT_00000001;
LAB_0077398c:
    bVar3 = iVar16 == 0;
  }
  else {
    uVar12 = *(undefined4 *)(iVar9 + 0xc);
    puVar10 = (undefined2 *)thunk_FUN_016d4a50(iVar16);
    if (puVar10 == (undefined2 *)0x0) {
LAB_007773e8:
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(1,iVar16);
    }
    FUN_016dd1aa(puVar10,uVar12,iVar16);
    if (iVar16 != -0x80000000) goto LAB_0077398c;
    iVar16 = 3;
    puVar10 = (undefined2 *)thunk_FUN_016d4a50(3);
    if (puVar10 == (undefined2 *)0x0) {
      iVar16 = 3;
      goto LAB_007773e8;
    }
    bVar3 = false;
    *(undefined1 *)(puVar10 + 1) = 0x41;
    *puVar10 = 0x2f4e;
  }
  local_40 = 5;
  local_4c = (undefined4 *******)ppppppuVar5;
  local_48 = puVar18;
  local_44 = puVar6;
  local_3c = puVar7;
  local_38 = puVar14;
  local_34 = puVar8;
  local_30 = puVar13;
  local_2c = puVar10;
  local_28 = iVar16;
  FUN_0074b0c8(&local_a0,DAT_018d7c80 + 8,&local_4c,5);
  FUN_00777ddc(&local_a0);
  if (bVar3) {
    if (!bVar2) goto LAB_00773ab0;
LAB_00773a08:
    if (!bVar1) goto LAB_00773ac4;
LAB_00773a14:
    thunk_FUN_016d3fb4(puVar6);
    if (!bVar22) goto LAB_00773adc;
LAB_00773a24:
    puVar18 = *(undefined2 **)(iVar15 + 0x10);
    if (puVar18 == (undefined2 *)0x0) goto LAB_00773af0;
LAB_00773a30:
    uVar12 = *(undefined4 *)(iVar15 + 0xc);
    ppppppuVar5 = (undefined4 ******)thunk_FUN_016d4a50(puVar18);
    if (ppppppuVar5 == (undefined4 ******)0x0) goto LAB_0077711c;
    FUN_016dd1aa(ppppppuVar5,uVar12,puVar18);
    if (puVar18 != (undefined2 *)&DAT_80000000) goto LAB_00773af4;
    puVar18 = (undefined2 *)0x3;
    ppppppuVar5 = (undefined4 ******)thunk_FUN_016d4a50(3);
    if (ppppppuVar5 != (undefined4 ******)0x0) {
      bVar22 = false;
      *(undefined1 *)((int)ppppppuVar5 + 2) = 0x41;
      *(undefined2 *)ppppppuVar5 = 0x2f4e;
      goto LAB_00773afc;
    }
LAB_0077710c:
    puVar18 = (undefined2 *)0x3;
LAB_0077711c:
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(1,puVar18);
  }
  thunk_FUN_016d3fb4(puVar10);
  if (bVar2) goto LAB_00773a08;
LAB_00773ab0:
  thunk_FUN_016d3fb4(puVar8);
  if (bVar1) goto LAB_00773a14;
LAB_00773ac4:
  thunk_FUN_016d3fb4(puVar7);
  thunk_FUN_016d3fb4(puVar6);
  if (bVar22) goto LAB_00773a24;
LAB_00773adc:
  thunk_FUN_016d3fb4(ppppppuVar5);
  puVar18 = *(undefined2 **)(iVar15 + 0x10);
  if (puVar18 != (undefined2 *)0x0) goto LAB_00773a30;
LAB_00773af0:
  ppppppuVar5 = (undefined4 ******)&DAT_00000001;
LAB_00773af4:
  bVar22 = puVar18 == (undefined2 *)0x0;
LAB_00773afc:
  puVar6 = (undefined4 *)thunk_FUN_016d4a50(5);
  if (puVar6 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(1,5);
  }
  *(undefined1 *)(puVar6 + 1) = 0x6e;
  *puVar6 = 0x69617264;
  FUN_00793ff8(&local_4c,param_1);
  if (local_4c == (undefined4 *******)&DAT_80000000) {
    puVar7 = (undefined2 *)thunk_FUN_016d4a50(3);
    if (puVar7 == (undefined2 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(1,3);
    }
    bVar1 = false;
    *(undefined1 *)(puVar7 + 1) = 0x41;
    *puVar7 = 0x2f4e;
    puVar14 = (undefined4 *)0x3;
  }
  else {
    bVar1 = local_4c == (undefined4 *******)0x0;
    puVar14 = local_44;
    puVar7 = local_48;
  }
  FUN_00794130(&local_4c,param_1);
  if (local_4c == (undefined4 *******)&DAT_80000000) {
    puVar8 = (undefined2 *)thunk_FUN_016d4a50(3);
    if (puVar8 == (undefined2 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(1,3);
    }
    *(undefined1 *)(puVar8 + 1) = 0x41;
    *puVar8 = 0x2f4e;
    bVar2 = false;
    puVar13 = (undefined4 *)0x3;
  }
  else {
    bVar2 = local_4c == (undefined4 *******)0x0;
    puVar13 = local_44;
    puVar8 = local_48;
  }
  iVar16 = *(int *)(iVar9 + 0x10);
  if (iVar16 == 0) {
    puVar10 = (undefined2 *)&DAT_00000001;
LAB_00773c6c:
    bVar3 = iVar16 == 0;
  }
  else {
    uVar12 = *(undefined4 *)(iVar9 + 0xc);
    puVar10 = (undefined2 *)thunk_FUN_016d4a50(iVar16);
    if (puVar10 == (undefined2 *)0x0) {
LAB_00777404:
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(1,iVar16);
    }
    FUN_016dd1aa(puVar10,uVar12,iVar16);
    if (iVar16 != -0x80000000) goto LAB_00773c6c;
    iVar16 = 3;
    puVar10 = (undefined2 *)thunk_FUN_016d4a50(3);
    if (puVar10 == (undefined2 *)0x0) {
      iVar16 = 3;
      goto LAB_00777404;
    }
    bVar3 = false;
    *(undefined1 *)(puVar10 + 1) = 0x41;
    *puVar10 = 0x2f4e;
  }
  local_40 = 5;
  local_4c = (undefined4 *******)ppppppuVar5;
  local_48 = puVar18;
  local_44 = puVar6;
  local_3c = puVar7;
  local_38 = puVar14;
  local_34 = puVar8;
  local_30 = puVar13;
  local_2c = puVar10;
  local_28 = iVar16;
  FUN_0074b0c8(&local_a0,DAT_018d7c84 + 8,&local_4c,5);
  FUN_00777ddc(&local_a0);
  if (bVar3) {
    if (!bVar2) goto LAB_00773d90;
LAB_00773ce8:
    if (!bVar1) goto LAB_00773da4;
LAB_00773cf4:
    thunk_FUN_016d3fb4(puVar6);
    if (!bVar22) goto LAB_00773dbc;
LAB_00773d04:
    puVar18 = *(undefined2 **)(iVar15 + 0x10);
    if (puVar18 == (undefined2 *)0x0) goto LAB_00773dd0;
LAB_00773d10:
    uVar12 = *(undefined4 *)(iVar15 + 0xc);
    ppppppuVar5 = (undefined4 ******)thunk_FUN_016d4a50(puVar18);
    if (ppppppuVar5 == (undefined4 ******)0x0) goto LAB_0077711c;
    FUN_016dd1aa(ppppppuVar5,uVar12,puVar18);
    if (puVar18 != (undefined2 *)&DAT_80000000) goto LAB_00773dd4;
    puVar18 = (undefined2 *)0x3;
    ppppppuVar5 = (undefined4 ******)thunk_FUN_016d4a50(3);
    if (ppppppuVar5 == (undefined4 ******)0x0) goto LAB_0077710c;
    bVar22 = false;
    *(undefined1 *)((int)ppppppuVar5 + 2) = 0x41;
    *(undefined2 *)ppppppuVar5 = 0x2f4e;
  }
  else {
    thunk_FUN_016d3fb4(puVar10);
    if (bVar2) goto LAB_00773ce8;
LAB_00773d90:
    thunk_FUN_016d3fb4(puVar8);
    if (bVar1) goto LAB_00773cf4;
LAB_00773da4:
    thunk_FUN_016d3fb4(puVar7);
    thunk_FUN_016d3fb4(puVar6);
    if (bVar22) goto LAB_00773d04;
LAB_00773dbc:
    thunk_FUN_016d3fb4(ppppppuVar5);
    puVar18 = *(undefined2 **)(iVar15 + 0x10);
    if (puVar18 != (undefined2 *)0x0) goto LAB_00773d10;
LAB_00773dd0:
    ppppppuVar5 = (undefined4 ******)&DAT_00000001;
LAB_00773dd4:
    bVar22 = puVar18 == (undefined2 *)0x0;
  }
  puVar6 = (undefined4 *)thunk_FUN_016d4a50(5);
  if (puVar6 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(1,5);
  }
  *(undefined1 *)(puVar6 + 1) = 0x6e;
  *puVar6 = 0x69617264;
  FUN_00793ff8(&local_4c,param_1);
  if (local_4c == (undefined4 *******)&DAT_80000000) {
    puVar7 = (undefined2 *)thunk_FUN_016d4a50(3);
    if (puVar7 == (undefined2 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(1,3);
    }
    bVar1 = false;
    *(undefined1 *)(puVar7 + 1) = 0x41;
    *puVar7 = 0x2f4e;
    puVar14 = (undefined4 *)0x3;
  }
  else {
    bVar1 = local_4c == (undefined4 *******)0x0;
    puVar14 = local_44;
    puVar7 = local_48;
  }
  FUN_00794130(&local_4c,param_1);
  if (local_4c == (undefined4 *******)&DAT_80000000) {
    puVar8 = (undefined2 *)thunk_FUN_016d4a50(3);
    if (puVar8 == (undefined2 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(1,3);
    }
    *(undefined1 *)(puVar8 + 1) = 0x41;
    *puVar8 = 0x2f4e;
    bVar2 = false;
    puVar13 = (undefined4 *)0x3;
  }
  else {
    bVar2 = local_4c == (undefined4 *******)0x0;
    puVar13 = local_44;
    puVar8 = local_48;
  }
  iVar16 = *(int *)(iVar9 + 0x10);
  if (iVar16 == 0) {
    puVar10 = (undefined2 *)&DAT_00000001;
LAB_00773f4c:
    bVar3 = iVar16 == 0;
  }
  else {
    uVar12 = *(undefined4 *)(iVar9 + 0xc);
    puVar10 = (undefined2 *)thunk_FUN_016d4a50(iVar16);
    if (puVar10 == (undefined2 *)0x0) {
LAB_00777420:
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(1,iVar16);
    }
    FUN_016dd1aa(puVar10,uVar12,iVar16);
    if (iVar16 != -0x80000000) goto LAB_00773f4c;
    iVar16 = 3;
    puVar10 = (undefined2 *)thunk_FUN_016d4a50(3);
    if (puVar10 == (undefined2 *)0x0) {
      iVar16 = 3;
      goto LAB_00777420;
    }
    bVar3 = false;
    *(undefined1 *)(puVar10 + 1) = 0x41;
    *puVar10 = 0x2f4e;
  }
  local_40 = 5;
  local_4c = (undefined4 *******)ppppppuVar5;
  local_48 = puVar18;
  local_44 = puVar6;
  local_3c = puVar7;
  local_38 = puVar14;
  local_34 = puVar8;
  local_30 = puVar13;
  local_2c = puVar10;
  local_28 = iVar16;
  FUN_0074b0c8(&local_a0,DAT_018d7c88 + 8,&local_4c,5);
  FUN_00777ddc(&local_a0);
  if (bVar3) {
    if (!bVar2) goto LAB_00774070;
LAB_00773fc8:
    if (!bVar1) goto LAB_00774084;
LAB_00773fd4:
    thunk_FUN_016d3fb4(puVar6);
    if (!bVar22) goto LAB_0077409c;
LAB_00773fe4:
    puVar18 = *(undefined2 **)(iVar15 + 0x10);
    if (puVar18 == (undefined2 *)0x0) goto LAB_007740b0;
LAB_00773ff0:
    uVar12 = *(undefined4 *)(iVar15 + 0xc);
    ppppppuVar5 = (undefined4 ******)thunk_FUN_016d4a50(puVar18);
    if (ppppppuVar5 == (undefined4 ******)0x0) goto LAB_0077711c;
    FUN_016dd1aa(ppppppuVar5,uVar12,puVar18);
    if (puVar18 != (undefined2 *)&DAT_80000000) goto LAB_007740b4;
    puVar18 = (undefined2 *)0x3;
    ppppppuVar5 = (undefined4 ******)thunk_FUN_016d4a50(3);
    if (ppppppuVar5 == (undefined4 ******)0x0) goto LAB_0077710c;
    bVar22 = false;
    *(undefined1 *)((int)ppppppuVar5 + 2) = 0x41;
    *(undefined2 *)ppppppuVar5 = 0x2f4e;
  }
  else {
    thunk_FUN_016d3fb4(puVar10);
    if (bVar2) goto LAB_00773fc8;
LAB_00774070:
    thunk_FUN_016d3fb4(puVar8);
    if (bVar1) goto LAB_00773fd4;
LAB_00774084:
    thunk_FUN_016d3fb4(puVar7);
    thunk_FUN_016d3fb4(puVar6);
    if (bVar22) goto LAB_00773fe4;
LAB_0077409c:
    thunk_FUN_016d3fb4(ppppppuVar5);
    puVar18 = *(undefined2 **)(iVar15 + 0x10);
    if (puVar18 != (undefined2 *)0x0) goto LAB_00773ff0;
LAB_007740b0:
    ppppppuVar5 = (undefined4 ******)&DAT_00000001;
LAB_007740b4:
    bVar22 = puVar18 == (undefined2 *)0x0;
  }
  puVar6 = (undefined4 *)thunk_FUN_016d4a50(5);
  if (puVar6 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(1,5);
  }
  *(undefined1 *)(puVar6 + 1) = 0x6e;
  *puVar6 = 0x69617264;
  FUN_00793ff8(&local_4c,param_1);
  if (local_4c == (undefined4 *******)&DAT_80000000) {
    puVar7 = (undefined2 *)thunk_FUN_016d4a50(3);
    if (puVar7 == (undefined2 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(1,3);
    }
    bVar1 = false;
    *(undefined1 *)(puVar7 + 1) = 0x41;
    *puVar7 = 0x2f4e;
    puVar14 = (undefined4 *)0x3;
  }
  else {
    bVar1 = local_4c == (undefined4 *******)0x0;
    puVar14 = local_44;
    puVar7 = local_48;
  }
  FUN_00794130(&local_4c,param_1);
  if (local_4c == (undefined4 *******)&DAT_80000000) {
    puVar8 = (undefined2 *)thunk_FUN_016d4a50(3);
    if (puVar8 == (undefined2 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(1,3);
    }
    *(undefined1 *)(puVar8 + 1) = 0x41;
    *puVar8 = 0x2f4e;
    bVar2 = false;
    puVar13 = (undefined4 *)0x3;
  }
  else {
    bVar2 = local_4c == (undefined4 *******)0x0;
    puVar8 = local_48;
    puVar13 = local_44;
  }
  iVar15 = *(int *)(iVar9 + 0x10);
  if (iVar15 == 0) {
    puVar10 = (undefined2 *)&DAT_00000001;
LAB_0077422c:
    bVar3 = iVar15 == 0;
  }
  else {
    uVar12 = *(undefined4 *)(iVar9 + 0xc);
    puVar10 = (undefined2 *)thunk_FUN_016d4a50(iVar15);
    if (puVar10 == (undefined2 *)0x0) {
LAB_0077743c:
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(1,iVar15);
    }
    FUN_016dd1aa(puVar10,uVar12,iVar15);
    if (iVar15 != -0x80000000) goto LAB_0077422c;
    iVar15 = 3;
    puVar10 = (undefined2 *)thunk_FUN_016d4a50(3);
    if (puVar10 == (undefined2 *)0x0) {
      iVar15 = 3;
      goto LAB_0077743c;
    }
    bVar3 = false;
    *(undefined1 *)(puVar10 + 1) = 0x41;
    *puVar10 = 0x2f4e;
  }
  local_40 = 5;
  local_4c = (undefined4 *******)ppppppuVar5;
  local_48 = puVar18;
  local_44 = puVar6;
  local_3c = puVar7;
  local_38 = puVar14;
  local_34 = puVar8;
  local_30 = puVar13;
  local_2c = puVar10;
  local_28 = iVar15;
  FUN_0074b0c8(&local_a0,DAT_018d7c8c + 8,&local_4c,5);
  FUN_00777ddc(&local_a0);
  if (bVar3) {
    if (!bVar2) goto LAB_0077435c;
LAB_007742a8:
    if (!bVar1) goto LAB_00774370;
LAB_007742b4:
    thunk_FUN_016d3fb4(puVar6);
  }
  else {
    thunk_FUN_016d3fb4(puVar10);
    if (bVar2) goto LAB_007742a8;
LAB_0077435c:
    thunk_FUN_016d3fb4(puVar8);
    if (bVar1) goto LAB_007742b4;
LAB_00774370:
    thunk_FUN_016d3fb4(puVar7);
    thunk_FUN_016d3fb4(puVar6);
  }
  if (!bVar22) {
    thunk_FUN_016d3fb4(ppppppuVar5);
  }
  iVar15 = *(int *)(param_1 + 0x10);
  puVar18 = *(undefined2 **)(iVar15 + 0x10);
  if (puVar18 == (undefined2 *)0x0) {
    ppppppuVar5 = (undefined4 ******)&DAT_00000001;
LAB_00774390:
    bVar22 = puVar18 == (undefined2 *)0x0;
  }
  else {
    uVar12 = *(undefined4 *)(iVar15 + 0xc);
    ppppppuVar5 = (undefined4 ******)thunk_FUN_016d4a50(puVar18);
    if (ppppppuVar5 == (undefined4 ******)0x0) goto LAB_0077711c;
    FUN_016dd1aa(ppppppuVar5,uVar12,puVar18);
    if (puVar18 != (undefined2 *)&DAT_80000000) goto LAB_00774390;
    puVar18 = (undefined2 *)0x3;
    ppppppuVar5 = (undefined4 ******)thunk_FUN_016d4a50(3);
    if (ppppppuVar5 == (undefined4 ******)0x0) goto LAB_00777118;
    bVar22 = false;
    *(undefined1 *)((int)ppppppuVar5 + 2) = 0x41;
    *(undefined2 *)ppppppuVar5 = 0x2f4e;
  }
  puVar6 = (undefined4 *)thunk_FUN_016d4a50(5);
  if (puVar6 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(1,5);
  }
  *(undefined1 *)(puVar6 + 1) = 0x6e;
  *puVar6 = 0x69617264;
  FUN_00793ff8(&local_4c,param_1);
  if (local_4c == (undefined4 *******)&DAT_80000000) {
    puVar7 = (undefined2 *)thunk_FUN_016d4a50(3);
    if (puVar7 == (undefined2 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(1,3);
    }
    bVar1 = false;
    *(undefined1 *)(puVar7 + 1) = 0x41;
    *puVar7 = 0x2f4e;
    puVar14 = (undefined4 *)0x3;
  }
  else {
    bVar1 = local_4c == (undefined4 *******)0x0;
    puVar14 = local_44;
    puVar7 = local_48;
  }
  FUN_00794130(&local_4c,param_1);
  if (local_4c == (undefined4 *******)&DAT_80000000) {
    puVar8 = (undefined2 *)thunk_FUN_016d4a50(3);
    if (puVar8 == (undefined2 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(1,3);
    }
    *(undefined1 *)(puVar8 + 1) = 0x41;
    *puVar8 = 0x2f4e;
    bVar2 = false;
    puVar13 = (undefined4 *)0x3;
  }
  else {
    bVar2 = local_4c == (undefined4 *******)0x0;
    puVar13 = local_44;
    puVar8 = local_48;
  }
  iVar9 = *(int *)(param_1 + 0xc);
  iVar16 = *(int *)(iVar9 + 0x10);
  if (iVar16 == 0) {
    puVar10 = (undefined2 *)&DAT_00000001;
LAB_00774514:
    bVar3 = iVar16 == 0;
  }
  else {
    uVar12 = *(undefined4 *)(iVar9 + 0xc);
    puVar10 = (undefined2 *)thunk_FUN_016d4a50(iVar16);
    if (puVar10 == (undefined2 *)0x0) {
LAB_00777458:
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(1,iVar16);
    }
    FUN_016dd1aa(puVar10,uVar12,iVar16);
    if (iVar16 != -0x80000000) goto LAB_00774514;
    iVar16 = 3;
    puVar10 = (undefined2 *)thunk_FUN_016d4a50(3);
    if (puVar10 == (undefined2 *)0x0) {
      iVar16 = 3;
      goto LAB_00777458;
    }
    bVar3 = false;
    *(undefined1 *)(puVar10 + 1) = 0x41;
    *puVar10 = 0x2f4e;
  }
  local_40 = 5;
  local_4c = (undefined4 *******)ppppppuVar5;
  local_48 = puVar18;
  local_44 = puVar6;
  local_3c = puVar7;
  local_38 = puVar14;
  local_34 = puVar8;
  local_30 = puVar13;
  local_2c = puVar10;
  local_28 = iVar16;
  FUN_0074b780(&local_a0,DAT_018d7c90 + 8,&local_4c);
  FUN_00777ddc(&local_a0);
  if (bVar3) {
    if (!bVar2) goto LAB_00774634;
LAB_0077458c:
    if (!bVar1) goto LAB_00774648;
LAB_00774598:
    thunk_FUN_016d3fb4(puVar6);
    if (!bVar22) goto LAB_00774660;
LAB_007745a8:
    puVar18 = *(undefined2 **)(iVar15 + 0x10);
    if (puVar18 == (undefined2 *)0x0) goto LAB_00774674;
LAB_007745b4:
    uVar12 = *(undefined4 *)(iVar15 + 0xc);
    ppppppuVar5 = (undefined4 ******)thunk_FUN_016d4a50(puVar18);
    if (ppppppuVar5 == (undefined4 ******)0x0) goto LAB_0077711c;
    FUN_016dd1aa(ppppppuVar5,uVar12,puVar18);
    if (puVar18 != (undefined2 *)&DAT_80000000) goto LAB_00774678;
    puVar18 = (undefined2 *)0x3;
    ppppppuVar5 = (undefined4 ******)thunk_FUN_016d4a50(3);
    if (ppppppuVar5 == (undefined4 ******)0x0) goto LAB_0077710c;
    bVar22 = false;
    *(undefined1 *)((int)ppppppuVar5 + 2) = 0x41;
    *(undefined2 *)ppppppuVar5 = 0x2f4e;
  }
  else {
    thunk_FUN_016d3fb4(puVar10);
    if (bVar2) goto LAB_0077458c;
LAB_00774634:
    thunk_FUN_016d3fb4(puVar8);
    if (bVar1) goto LAB_00774598;
LAB_00774648:
    thunk_FUN_016d3fb4(puVar7);
    thunk_FUN_016d3fb4(puVar6);
    if (bVar22) goto LAB_007745a8;
LAB_00774660:
    thunk_FUN_016d3fb4(ppppppuVar5);
    puVar18 = *(undefined2 **)(iVar15 + 0x10);
    if (puVar18 != (undefined2 *)0x0) goto LAB_007745b4;
LAB_00774674:
    ppppppuVar5 = (undefined4 ******)&DAT_00000001;
LAB_00774678:
    bVar22 = puVar18 == (undefined2 *)0x0;
  }
  puVar6 = (undefined4 *)thunk_FUN_016d4a50(5);
  if (puVar6 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(1,5);
  }
  *(undefined1 *)(puVar6 + 1) = 0x6e;
  *puVar6 = 0x69617264;
  FUN_00793ff8(&local_4c,param_1);
  if (local_4c == (undefined4 *******)&DAT_80000000) {
    puVar7 = (undefined2 *)thunk_FUN_016d4a50(3);
    if (puVar7 == (undefined2 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(1,3);
    }
    bVar1 = false;
    *(undefined1 *)(puVar7 + 1) = 0x41;
    *puVar7 = 0x2f4e;
    puVar14 = (undefined4 *)0x3;
  }
  else {
    bVar1 = local_4c == (undefined4 *******)0x0;
    puVar14 = local_44;
    puVar7 = local_48;
  }
  FUN_00794130(&local_4c,param_1);
  if (local_4c == (undefined4 *******)&DAT_80000000) {
    puVar8 = (undefined2 *)thunk_FUN_016d4a50(3);
    if (puVar8 == (undefined2 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(1,3);
    }
    *(undefined1 *)(puVar8 + 1) = 0x41;
    *puVar8 = 0x2f4e;
    bVar2 = false;
    puVar13 = (undefined4 *)0x3;
  }
  else {
    bVar2 = local_4c == (undefined4 *******)0x0;
    puVar13 = local_44;
    puVar8 = local_48;
  }
  iVar16 = *(int *)(iVar9 + 0x10);
  if (iVar16 == 0) {
    puVar10 = (undefined2 *)&DAT_00000001;
LAB_007747f0:
    bVar3 = iVar16 == 0;
  }
  else {
    uVar12 = *(undefined4 *)(iVar9 + 0xc);
    puVar10 = (undefined2 *)thunk_FUN_016d4a50(iVar16);
    if (puVar10 == (undefined2 *)0x0) {
LAB_00777470:
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(1,iVar16);
    }
    FUN_016dd1aa(puVar10,uVar12,iVar16);
    if (iVar16 != -0x80000000) goto LAB_007747f0;
    iVar16 = 3;
    puVar10 = (undefined2 *)thunk_FUN_016d4a50(3);
    if (puVar10 == (undefined2 *)0x0) {
      iVar16 = 3;
      goto LAB_00777470;
    }
    bVar3 = false;
    *(undefined1 *)(puVar10 + 1) = 0x41;
    *puVar10 = 0x2f4e;
  }
  local_40 = 5;
  local_4c = (undefined4 *******)ppppppuVar5;
  local_48 = puVar18;
  local_44 = puVar6;
  local_3c = puVar7;
  local_38 = puVar14;
  local_34 = puVar8;
  local_30 = puVar13;
  local_2c = puVar10;
  local_28 = iVar16;
  FUN_0074b780(&local_a0,DAT_018d7ca0 + 8,&local_4c);
  FUN_00777ddc(&local_a0);
  if (bVar3) {
    if (!bVar2) goto LAB_00774914;
LAB_00774868:
    if (!bVar1) goto LAB_00774928;
LAB_00774874:
    thunk_FUN_016d3fb4(puVar6);
    if (!bVar22) goto LAB_00774940;
LAB_00774884:
    puVar18 = *(undefined2 **)(iVar15 + 0x10);
    if (puVar18 == (undefined2 *)0x0) goto LAB_00774954;
LAB_00774890:
    uVar12 = *(undefined4 *)(iVar15 + 0xc);
    ppppppuVar5 = (undefined4 ******)thunk_FUN_016d4a50(puVar18);
    if (ppppppuVar5 == (undefined4 ******)0x0) goto LAB_0077711c;
    FUN_016dd1aa(ppppppuVar5,uVar12,puVar18);
    if (puVar18 != (undefined2 *)&DAT_80000000) goto LAB_00774958;
    puVar18 = (undefined2 *)0x3;
    ppppppuVar5 = (undefined4 ******)thunk_FUN_016d4a50(3);
    if (ppppppuVar5 == (undefined4 ******)0x0) goto LAB_0077710c;
    bVar22 = false;
    *(undefined1 *)((int)ppppppuVar5 + 2) = 0x41;
    *(undefined2 *)ppppppuVar5 = 0x2f4e;
  }
  else {
    thunk_FUN_016d3fb4(puVar10);
    if (bVar2) goto LAB_00774868;
LAB_00774914:
    thunk_FUN_016d3fb4(puVar8);
    if (bVar1) goto LAB_00774874;
LAB_00774928:
    thunk_FUN_016d3fb4(puVar7);
    thunk_FUN_016d3fb4(puVar6);
    if (bVar22) goto LAB_00774884;
LAB_00774940:
    thunk_FUN_016d3fb4(ppppppuVar5);
    puVar18 = *(undefined2 **)(iVar15 + 0x10);
    if (puVar18 != (undefined2 *)0x0) goto LAB_00774890;
LAB_00774954:
    ppppppuVar5 = (undefined4 ******)&DAT_00000001;
LAB_00774958:
    bVar22 = puVar18 == (undefined2 *)0x0;
  }
  puVar6 = (undefined4 *)thunk_FUN_016d4a50(5);
  if (puVar6 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(1,5);
  }
  *(undefined1 *)(puVar6 + 1) = 0x6e;
  *puVar6 = 0x69617264;
  FUN_00793ff8(&local_4c,param_1);
  if (local_4c == (undefined4 *******)&DAT_80000000) {
    puVar7 = (undefined2 *)thunk_FUN_016d4a50(3);
    if (puVar7 == (undefined2 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(1,3);
    }
    bVar1 = false;
    *(undefined1 *)(puVar7 + 1) = 0x41;
    *puVar7 = 0x2f4e;
    puVar14 = (undefined4 *)0x3;
  }
  else {
    bVar1 = local_4c == (undefined4 *******)0x0;
    puVar14 = local_44;
    puVar7 = local_48;
  }
  FUN_00794130(&local_4c,param_1);
  if (local_4c == (undefined4 *******)&DAT_80000000) {
    puVar8 = (undefined2 *)thunk_FUN_016d4a50(3);
    if (puVar8 == (undefined2 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(1,3);
    }
    *(undefined1 *)(puVar8 + 1) = 0x41;
    *puVar8 = 0x2f4e;
    bVar2 = false;
    puVar13 = (undefined4 *)0x3;
  }
  else {
    bVar2 = local_4c == (undefined4 *******)0x0;
    puVar13 = local_44;
    puVar8 = local_48;
  }
  iVar16 = *(int *)(iVar9 + 0x10);
  if (iVar16 == 0) {
    puVar10 = (undefined2 *)&DAT_00000001;
LAB_00774ad0:
    bVar3 = iVar16 == 0;
  }
  else {
    uVar12 = *(undefined4 *)(iVar9 + 0xc);
    puVar10 = (undefined2 *)thunk_FUN_016d4a50(iVar16);
    if (puVar10 == (undefined2 *)0x0) {
LAB_0077748c:
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(1,iVar16);
    }
    FUN_016dd1aa(puVar10,uVar12,iVar16);
    if (iVar16 != -0x80000000) goto LAB_00774ad0;
    iVar16 = 3;
    puVar10 = (undefined2 *)thunk_FUN_016d4a50(3);
    if (puVar10 == (undefined2 *)0x0) {
      iVar16 = 3;
      goto LAB_0077748c;
    }
    bVar3 = false;
    *(undefined1 *)(puVar10 + 1) = 0x41;
    *puVar10 = 0x2f4e;
  }
  local_40 = 5;
  local_4c = (undefined4 *******)ppppppuVar5;
  local_48 = puVar18;
  local_44 = puVar6;
  local_3c = puVar7;
  local_38 = puVar14;
  local_34 = puVar8;
  local_30 = puVar13;
  local_2c = puVar10;
  local_28 = iVar16;
  FUN_0074b780(&local_a0,DAT_018d7ca8 + 8,&local_4c);
  FUN_00777ddc(&local_a0);
  if (bVar3) {
    if (!bVar2) goto LAB_00774bf4;
LAB_00774b48:
    if (!bVar1) goto LAB_00774c08;
LAB_00774b54:
    thunk_FUN_016d3fb4(puVar6);
    if (!bVar22) goto LAB_00774c20;
LAB_00774b64:
    puVar18 = *(undefined2 **)(iVar15 + 0x10);
    if (puVar18 == (undefined2 *)0x0) goto LAB_00774c34;
LAB_00774b70:
    uVar12 = *(undefined4 *)(iVar15 + 0xc);
    ppppppuVar5 = (undefined4 ******)thunk_FUN_016d4a50(puVar18);
    if (ppppppuVar5 == (undefined4 ******)0x0) goto LAB_0077711c;
    FUN_016dd1aa(ppppppuVar5,uVar12,puVar18);
    if (puVar18 != (undefined2 *)&DAT_80000000) goto LAB_00774c38;
    puVar18 = (undefined2 *)0x3;
    ppppppuVar5 = (undefined4 ******)thunk_FUN_016d4a50(3);
    if (ppppppuVar5 == (undefined4 ******)0x0) goto LAB_0077710c;
    bVar22 = false;
    *(undefined1 *)((int)ppppppuVar5 + 2) = 0x41;
    *(undefined2 *)ppppppuVar5 = 0x2f4e;
  }
  else {
    thunk_FUN_016d3fb4(puVar10);
    if (bVar2) goto LAB_00774b48;
LAB_00774bf4:
    thunk_FUN_016d3fb4(puVar8);
    if (bVar1) goto LAB_00774b54;
LAB_00774c08:
    thunk_FUN_016d3fb4(puVar7);
    thunk_FUN_016d3fb4(puVar6);
    if (bVar22) goto LAB_00774b64;
LAB_00774c20:
    thunk_FUN_016d3fb4(ppppppuVar5);
    puVar18 = *(undefined2 **)(iVar15 + 0x10);
    if (puVar18 != (undefined2 *)0x0) goto LAB_00774b70;
LAB_00774c34:
    ppppppuVar5 = (undefined4 ******)&DAT_00000001;
LAB_00774c38:
    bVar22 = puVar18 == (undefined2 *)0x0;
  }
  puVar6 = (undefined4 *)thunk_FUN_016d4a50(5);
  if (puVar6 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(1,5);
  }
  *(undefined1 *)(puVar6 + 1) = 0x6e;
  *puVar6 = 0x69617264;
  FUN_00793ff8(&local_4c,param_1);
  if (local_4c == (undefined4 *******)&DAT_80000000) {
    puVar7 = (undefined2 *)thunk_FUN_016d4a50(3);
    if (puVar7 == (undefined2 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(1,3);
    }
    bVar1 = false;
    *(undefined1 *)(puVar7 + 1) = 0x41;
    *puVar7 = 0x2f4e;
    puVar14 = (undefined4 *)0x3;
  }
  else {
    bVar1 = local_4c == (undefined4 *******)0x0;
    puVar14 = local_44;
    puVar7 = local_48;
  }
  FUN_00794130(&local_4c,param_1);
  if (local_4c == (undefined4 *******)&DAT_80000000) {
    puVar8 = (undefined2 *)thunk_FUN_016d4a50(3);
    if (puVar8 == (undefined2 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(1,3);
    }
    *(undefined1 *)(puVar8 + 1) = 0x41;
    *puVar8 = 0x2f4e;
    bVar2 = false;
    puVar13 = (undefined4 *)0x3;
  }
  else {
    bVar2 = local_4c == (undefined4 *******)0x0;
    puVar8 = local_48;
    puVar13 = local_44;
  }
  iVar15 = *(int *)(iVar9 + 0x10);
  if (iVar15 == 0) {
    puVar10 = (undefined2 *)&DAT_00000001;
LAB_00774db0:
    bVar3 = iVar15 == 0;
  }
  else {
    uVar12 = *(undefined4 *)(iVar9 + 0xc);
    puVar10 = (undefined2 *)thunk_FUN_016d4a50(iVar15);
    if (puVar10 == (undefined2 *)0x0) {
LAB_007774a8:
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(1,iVar15);
    }
    FUN_016dd1aa(puVar10,uVar12,iVar15);
    if (iVar15 != -0x80000000) goto LAB_00774db0;
    iVar15 = 3;
    puVar10 = (undefined2 *)thunk_FUN_016d4a50(3);
    if (puVar10 == (undefined2 *)0x0) {
      iVar15 = 3;
      goto LAB_007774a8;
    }
    bVar3 = false;
    *(undefined1 *)(puVar10 + 1) = 0x41;
    *puVar10 = 0x2f4e;
  }
  local_40 = 5;
  local_4c = (undefined4 *******)ppppppuVar5;
  local_48 = puVar18;
  local_44 = puVar6;
  local_3c = puVar7;
  local_38 = puVar14;
  local_34 = puVar8;
  local_30 = puVar13;
  local_2c = puVar10;
  local_28 = iVar15;
  FUN_0074bb90(&local_a0,DAT_018d7cb4 + 8,&local_4c);
  FUN_00777ddc(&local_a0);
  if (bVar3) {
    if (!bVar2) goto LAB_00774edc;
LAB_00774e28:
    if (!bVar1) goto LAB_00774ef0;
LAB_00774e34:
    thunk_FUN_016d3fb4(puVar6);
  }
  else {
    thunk_FUN_016d3fb4(puVar10);
    if (bVar2) goto LAB_00774e28;
LAB_00774edc:
    thunk_FUN_016d3fb4(puVar8);
    if (bVar1) goto LAB_00774e34;
LAB_00774ef0:
    thunk_FUN_016d3fb4(puVar7);
    thunk_FUN_016d3fb4(puVar6);
  }
  if (!bVar22) {
    thunk_FUN_016d3fb4(ppppppuVar5);
  }
  iVar15 = *(int *)(param_1 + 0x10);
  puVar18 = *(undefined2 **)(iVar15 + 0x10);
  if (puVar18 == (undefined2 *)0x0) {
    ppppppuVar5 = (undefined4 ******)&DAT_00000001;
LAB_00774f14:
    bVar22 = puVar18 == (undefined2 *)0x0;
  }
  else {
    uVar12 = *(undefined4 *)(iVar15 + 0xc);
    ppppppuVar5 = (undefined4 ******)thunk_FUN_016d4a50(puVar18);
    if (ppppppuVar5 == (undefined4 ******)0x0) goto LAB_0077711c;
    FUN_016dd1aa(ppppppuVar5,uVar12,puVar18);
    if (puVar18 != (undefined2 *)&DAT_80000000) goto LAB_00774f14;
    puVar18 = (undefined2 *)0x3;
    ppppppuVar5 = (undefined4 ******)thunk_FUN_016d4a50(3);
    if (ppppppuVar5 == (undefined4 ******)0x0) goto LAB_00777118;
    bVar22 = false;
    *(undefined1 *)((int)ppppppuVar5 + 2) = 0x41;
    *(undefined2 *)ppppppuVar5 = 0x2f4e;
  }
  puVar6 = (undefined4 *)thunk_FUN_016d4a50(5);
  if (puVar6 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(1,5);
  }
  *(undefined1 *)(puVar6 + 1) = 0x6e;
  *puVar6 = 0x69617264;
  FUN_00793ff8(&local_4c,param_1);
  if (local_4c == (undefined4 *******)&DAT_80000000) {
    puVar7 = (undefined2 *)thunk_FUN_016d4a50(3);
    if (puVar7 == (undefined2 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(1,3);
    }
    bVar1 = false;
    *(undefined1 *)(puVar7 + 1) = 0x41;
    *puVar7 = 0x2f4e;
    puVar14 = (undefined4 *)0x3;
  }
  else {
    bVar1 = local_4c == (undefined4 *******)0x0;
    puVar14 = local_44;
    puVar7 = local_48;
  }
  FUN_00794130(&local_4c,param_1);
  if (local_4c == (undefined4 *******)&DAT_80000000) {
    puVar8 = (undefined2 *)thunk_FUN_016d4a50(3);
    if (puVar8 == (undefined2 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(1,3);
    }
    *(undefined1 *)(puVar8 + 1) = 0x41;
    *puVar8 = 0x2f4e;
    bVar2 = false;
    puVar13 = (undefined4 *)0x3;
  }
  else {
    bVar2 = local_4c == (undefined4 *******)0x0;
    puVar13 = local_44;
    puVar8 = local_48;
  }
  iVar9 = *(int *)(param_1 + 0xc);
  iVar16 = *(int *)(iVar9 + 0x10);
  if (iVar16 == 0) {
    puVar10 = (undefined2 *)&DAT_00000001;
LAB_00775098:
    bVar3 = iVar16 == 0;
  }
  else {
    uVar12 = *(undefined4 *)(iVar9 + 0xc);
    puVar10 = (undefined2 *)thunk_FUN_016d4a50(iVar16);
    if (puVar10 == (undefined2 *)0x0) {
LAB_007774c4:
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(1,iVar16);
    }
    FUN_016dd1aa(puVar10,uVar12,iVar16);
    if (iVar16 != -0x80000000) goto LAB_00775098;
    iVar16 = 3;
    puVar10 = (undefined2 *)thunk_FUN_016d4a50(3);
    if (puVar10 == (undefined2 *)0x0) {
      iVar16 = 3;
      goto LAB_007774c4;
    }
    bVar3 = false;
    *(undefined1 *)(puVar10 + 1) = 0x41;
    *puVar10 = 0x2f4e;
  }
  local_40 = 5;
  local_4c = (undefined4 *******)ppppppuVar5;
  local_48 = puVar18;
  local_44 = puVar6;
  local_3c = puVar7;
  local_38 = puVar14;
  local_34 = puVar8;
  local_30 = puVar13;
  local_2c = puVar10;
  local_28 = iVar16;
  FUN_0074b780(&local_a0,DAT_018d7c94 + 8,&local_4c);
  FUN_00777ddc(&local_a0);
  if (bVar3) {
    if (!bVar2) goto LAB_007751bc;
LAB_00775110:
    if (!bVar1) goto LAB_007751d0;
LAB_0077511c:
    thunk_FUN_016d3fb4(puVar6);
    if (!bVar22) goto LAB_007751e8;
LAB_0077512c:
    puVar18 = *(undefined2 **)(iVar15 + 0x10);
    if (puVar18 == (undefined2 *)0x0) goto LAB_007751fc;
LAB_00775138:
    uVar12 = *(undefined4 *)(iVar15 + 0xc);
    ppppppuVar5 = (undefined4 ******)thunk_FUN_016d4a50(puVar18);
    if (ppppppuVar5 == (undefined4 ******)0x0) goto LAB_0077711c;
    FUN_016dd1aa(ppppppuVar5,uVar12,puVar18);
    if (puVar18 != (undefined2 *)&DAT_80000000) goto LAB_00775200;
    puVar18 = (undefined2 *)0x3;
    ppppppuVar5 = (undefined4 ******)thunk_FUN_016d4a50(3);
    if (ppppppuVar5 == (undefined4 ******)0x0) goto LAB_0077710c;
    bVar22 = false;
    *(undefined1 *)((int)ppppppuVar5 + 2) = 0x41;
    *(undefined2 *)ppppppuVar5 = 0x2f4e;
  }
  else {
    thunk_FUN_016d3fb4(puVar10);
    if (bVar2) goto LAB_00775110;
LAB_007751bc:
    thunk_FUN_016d3fb4(puVar8);
    if (bVar1) goto LAB_0077511c;
LAB_007751d0:
    thunk_FUN_016d3fb4(puVar7);
    thunk_FUN_016d3fb4(puVar6);
    if (bVar22) goto LAB_0077512c;
LAB_007751e8:
    thunk_FUN_016d3fb4(ppppppuVar5);
    puVar18 = *(undefined2 **)(iVar15 + 0x10);
    if (puVar18 != (undefined2 *)0x0) goto LAB_00775138;
LAB_007751fc:
    ppppppuVar5 = (undefined4 ******)&DAT_00000001;
LAB_00775200:
    bVar22 = puVar18 == (undefined2 *)0x0;
  }
  puVar6 = (undefined4 *)thunk_FUN_016d4a50(5);
  if (puVar6 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(1,5);
  }
  *(undefined1 *)(puVar6 + 1) = 0x6e;
  *puVar6 = 0x69617264;
  FUN_00793ff8(&local_4c,param_1);
  if (local_4c == (undefined4 *******)&DAT_80000000) {
    puVar7 = (undefined2 *)thunk_FUN_016d4a50(3);
    if (puVar7 == (undefined2 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(1,3);
    }
    bVar1 = false;
    *(undefined1 *)(puVar7 + 1) = 0x41;
    *puVar7 = 0x2f4e;
    puVar14 = (undefined4 *)0x3;
  }
  else {
    bVar1 = local_4c == (undefined4 *******)0x0;
    puVar14 = local_44;
    puVar7 = local_48;
  }
  FUN_00794130(&local_4c,param_1);
  if (local_4c == (undefined4 *******)&DAT_80000000) {
    puVar8 = (undefined2 *)thunk_FUN_016d4a50(3);
    if (puVar8 == (undefined2 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(1,3);
    }
    *(undefined1 *)(puVar8 + 1) = 0x41;
    *puVar8 = 0x2f4e;
    bVar2 = false;
    puVar13 = (undefined4 *)0x3;
  }
  else {
    bVar2 = local_4c == (undefined4 *******)0x0;
    puVar8 = local_48;
    puVar13 = local_44;
  }
  iVar16 = *(int *)(iVar9 + 0x10);
  if (iVar16 == 0) {
    puVar10 = (undefined2 *)&DAT_00000001;
LAB_00775378:
    bVar3 = iVar16 == 0;
  }
  else {
    uVar12 = *(undefined4 *)(iVar9 + 0xc);
    puVar10 = (undefined2 *)thunk_FUN_016d4a50(iVar16);
    if (puVar10 == (undefined2 *)0x0) {
LAB_007774e0:
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(1,iVar16);
    }
    FUN_016dd1aa(puVar10,uVar12,iVar16);
    if (iVar16 != -0x80000000) goto LAB_00775378;
    iVar16 = 3;
    puVar10 = (undefined2 *)thunk_FUN_016d4a50(3);
    if (puVar10 == (undefined2 *)0x0) {
      iVar16 = 3;
      goto LAB_007774e0;
    }
    bVar3 = false;
    *(undefined1 *)(puVar10 + 1) = 0x41;
    *puVar10 = 0x2f4e;
  }
  local_40 = 5;
  local_4c = (undefined4 *******)ppppppuVar5;
  local_48 = puVar18;
  local_44 = puVar6;
  local_3c = puVar7;
  local_38 = puVar14;
  local_34 = puVar8;
  local_30 = puVar13;
  local_2c = puVar10;
  local_28 = iVar16;
  FUN_0074b780(&local_a0,DAT_018d7c98 + 8,&local_4c);
  FUN_00777ddc(&local_a0);
  if (bVar3) {
    if (!bVar2) goto LAB_00775c48;
LAB_007753f0:
    if (!bVar1) goto LAB_00775c60;
LAB_00775400:
    thunk_FUN_016d3fb4(puVar6);
  }
  else {
    thunk_FUN_016d3fb4(puVar10);
    if (bVar2) goto LAB_007753f0;
LAB_00775c48:
    thunk_FUN_016d3fb4(puVar8);
    if (bVar1) goto LAB_00775400;
LAB_00775c60:
    thunk_FUN_016d3fb4(puVar7);
    thunk_FUN_016d3fb4(puVar6);
  }
  if (!bVar22) {
    thunk_FUN_016d3fb4(ppppppuVar5);
  }
  iVar17 = 0;
  local_90 = "stratum_event";
  local_88 = &DAT_0034e2d9;
  local_98[1] = (int *)0x12;
  local_84 = 0xc;
  local_8c = 0xd;
  local_98[0] = (int *)0x340cee;
  local_9c = 3;
  local_a0 = (undefined4 *******)0x0;
  iVar16 = DAT_018d7ccc + 8;
  do {
    puVar18 = *(undefined2 **)(iVar15 + 0x10);
    ppppppuVar5 = (undefined4 ******)&DAT_00000001;
    piVar20 = local_98[iVar17 * 2];
    piVar19 = local_98[iVar17 * 2 + 1];
    if (puVar18 == (undefined2 *)0x0) {
LAB_00775514:
      bVar22 = puVar18 == (undefined2 *)0x0;
    }
    else {
      uVar12 = *(undefined4 *)(iVar15 + 0xc);
      ppppppuVar5 = (undefined4 ******)thunk_FUN_016d4a50(puVar18);
      if (ppppppuVar5 == (undefined4 ******)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00600af4(1,puVar18);
      }
      FUN_016dd1aa(ppppppuVar5,uVar12,puVar18);
      if (puVar18 != (undefined2 *)&DAT_80000000) goto LAB_00775514;
      ppppppuVar5 = (undefined4 ******)thunk_FUN_016d4a50(3);
      if (ppppppuVar5 == (undefined4 ******)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00600af4(1,3);
      }
      *(undefined1 *)((int)ppppppuVar5 + 2) = 0x41;
      puVar18 = (undefined2 *)0x3;
      bVar22 = false;
      *(undefined2 *)ppppppuVar5 = 0x2f4e;
    }
    puVar6 = (undefined4 *)thunk_FUN_016d4a50(5);
    if (puVar6 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(1,5);
    }
    *(undefined1 *)(puVar6 + 1) = 0x6e;
    *puVar6 = 0x69617264;
    FUN_00793ff8(&local_4c,param_1);
    if (local_4c == (undefined4 *******)&DAT_80000000) {
      puVar7 = (undefined2 *)thunk_FUN_016d4a50(3);
      if (puVar7 == (undefined2 *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00600af4(1,3);
      }
      *(undefined1 *)(puVar7 + 1) = 0x41;
      bVar1 = false;
      *puVar7 = 0x2f4e;
      puVar14 = (undefined4 *)0x3;
    }
    else {
      bVar1 = local_4c == (undefined4 *******)0x0;
      puVar7 = local_48;
      puVar14 = local_44;
    }
    FUN_00794130(&local_4c,param_1);
    if (local_4c == (undefined4 *******)&DAT_80000000) {
      puVar8 = (undefined2 *)thunk_FUN_016d4a50(3);
      if (puVar8 == (undefined2 *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00600af4(1,3);
      }
      *(undefined1 *)(puVar8 + 1) = 0x41;
      *puVar8 = 0x2f4e;
      bVar2 = false;
      puVar13 = (undefined4 *)0x3;
    }
    else {
      bVar2 = local_4c == (undefined4 *******)0x0;
      puVar13 = local_44;
      puVar8 = local_48;
    }
    iVar21 = *(int *)(iVar9 + 0x10);
    if (iVar21 == 0) {
      puVar10 = (undefined2 *)&DAT_00000001;
LAB_0077569c:
      bVar3 = iVar21 == 0;
    }
    else {
      uVar12 = *(undefined4 *)(iVar9 + 0xc);
      puVar10 = (undefined2 *)thunk_FUN_016d4a50(iVar21);
      if (puVar10 == (undefined2 *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00600af4(1,iVar21);
      }
      FUN_016dd1aa(puVar10,uVar12,iVar21);
      if (iVar21 != -0x80000000) goto LAB_0077569c;
      puVar10 = (undefined2 *)thunk_FUN_016d4a50(3);
      if (puVar10 == (undefined2 *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00600af4(1,3);
      }
      iVar21 = 3;
      *(undefined1 *)(puVar10 + 1) = 0x41;
      *puVar10 = 0x2f4e;
      bVar3 = false;
    }
    local_54 = &local_64;
    local_5c = &local_4c;
    local_40 = 5;
    local_58 = 5;
    local_50 = 1;
    local_64 = piVar20;
    local_60 = piVar19;
    local_4c = (undefined4 *******)ppppppuVar5;
    local_48 = puVar18;
    local_44 = puVar6;
    local_3c = puVar7;
    local_38 = puVar14;
    local_34 = puVar8;
    local_30 = puVar13;
    local_2c = puVar10;
    local_28 = iVar21;
    FUN_00791930(&local_70,&local_5c);
    piVar19 = local_6c;
    FUN_0074b0c8(&local_80,iVar16,local_6c,local_68);
    FUN_00777ddc(&local_80);
    if (local_70 != 0) {
      thunk_FUN_016d3fb4(piVar19);
    }
    if (!bVar3) {
      thunk_FUN_016d3fb4(puVar10);
    }
    if (!bVar2) {
      thunk_FUN_016d3fb4(puVar8);
    }
    if (!bVar1) {
      thunk_FUN_016d3fb4(puVar7);
    }
    thunk_FUN_016d3fb4(puVar6);
    if (!bVar22) {
      thunk_FUN_016d3fb4(ppppppuVar5);
    }
    iVar17 = iVar17 + 1;
  } while (iVar17 != 3);
  iVar17 = DAT_018d7cd0 + 8;
  iVar16 = 0;
  do {
    local_9c = 1;
    local_98[0] = (int *)0x0;
    local_a0 = (undefined4 *******)0x0;
    local_40 = 0;
    local_44 = (undefined4 *)&DAT_60000020;
    local_48 = (undefined2 *)&DAT_0185bc90;
    local_4c = &local_a0;
    iVar11 = FUN_00faace8(&local_4c,(&DAT_018af9a4)[-iVar16],(&DAT_0041de20)[-iVar16]);
    piVar19 = local_98[0];
    iVar21 = local_9c;
    pppppppuVar4 = local_a0;
    if (iVar11 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00fb74f8("a Display implementation returned an error unexpectedly",0x37,&local_5c,
                   &DAT_0185bca8,&DAT_018af130);
    }
    puVar18 = *(undefined2 **)(iVar15 + 0x10);
    if (puVar18 == (undefined2 *)0x0) {
      ppppppuVar5 = (undefined4 ******)&DAT_00000001;
LAB_007758d8:
      bVar22 = puVar18 == (undefined2 *)0x0;
    }
    else {
      uVar12 = *(undefined4 *)(iVar15 + 0xc);
      ppppppuVar5 = (undefined4 ******)thunk_FUN_016d4a50(puVar18);
      if (ppppppuVar5 == (undefined4 ******)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00600af4(1,puVar18);
      }
      FUN_016dd1aa(ppppppuVar5,uVar12,puVar18);
      if (puVar18 != (undefined2 *)&DAT_80000000) goto LAB_007758d8;
      ppppppuVar5 = (undefined4 ******)thunk_FUN_016d4a50(3);
      if (ppppppuVar5 == (undefined4 ******)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00600af4(1,3);
      }
      puVar18 = (undefined2 *)0x3;
      *(undefined1 *)((int)ppppppuVar5 + 2) = 0x41;
      *(undefined2 *)ppppppuVar5 = 0x2f4e;
      bVar22 = false;
    }
    puVar6 = (undefined4 *)thunk_FUN_016d4a50(5);
    if (puVar6 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(1,5);
    }
    *(undefined1 *)(puVar6 + 1) = 0x6e;
    *puVar6 = 0x69617264;
    FUN_00793ff8(&local_4c,param_1);
    if (local_4c == (undefined4 *******)&DAT_80000000) {
      local_c0 = (undefined2 *)thunk_FUN_016d4a50(3);
      if (local_c0 == (undefined2 *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00600af4(1);
      }
      *(undefined1 *)(local_c0 + 1) = 0x41;
      bVar1 = false;
      *local_c0 = 0x2f4e;
      puVar14 = (undefined4 *)0x3;
    }
    else {
      local_c0 = local_48;
      bVar1 = local_4c == (undefined4 *******)0x0;
      puVar14 = local_44;
    }
    FUN_00794130(&local_4c,param_1);
    if (local_4c == (undefined4 *******)&DAT_80000000) {
      puVar7 = (undefined2 *)thunk_FUN_016d4a50(3);
      if (puVar7 == (undefined2 *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00600af4(1,3);
      }
      *(undefined1 *)(puVar7 + 1) = 0x41;
      *puVar7 = 0x2f4e;
      bVar2 = false;
      puVar13 = (undefined4 *)0x3;
    }
    else {
      bVar2 = local_4c == (undefined4 *******)0x0;
      puVar7 = local_48;
      puVar13 = local_44;
    }
    iVar11 = *(int *)(iVar9 + 0x10);
    if (iVar11 == 0) {
      puVar8 = (undefined2 *)&DAT_00000001;
LAB_00775a60:
      bVar3 = iVar11 == 0;
    }
    else {
      uVar12 = *(undefined4 *)(iVar9 + 0xc);
      puVar8 = (undefined2 *)thunk_FUN_016d4a50(iVar11);
      if (puVar8 == (undefined2 *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00600af4(1,iVar11);
      }
      FUN_016dd1aa(puVar8,uVar12,iVar11);
      if (iVar11 != -0x80000000) goto LAB_00775a60;
      puVar8 = (undefined2 *)thunk_FUN_016d4a50(3);
      if (puVar8 == (undefined2 *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00600af4(1,3);
      }
      iVar11 = 3;
      *(undefined1 *)(puVar8 + 1) = 0x41;
      *puVar8 = 0x2f4e;
      bVar3 = false;
    }
    local_98[0] = &local_70;
    local_a0 = &local_4c;
    local_3c = local_c0;
    local_40 = 5;
    local_98[1] = (int *)0x1;
    local_9c = 5;
    local_6c = piVar19;
    local_70 = iVar21;
    local_4c = (undefined4 *******)ppppppuVar5;
    local_48 = puVar18;
    local_44 = puVar6;
    local_38 = puVar14;
    local_34 = puVar7;
    local_30 = puVar13;
    local_2c = puVar8;
    local_28 = iVar11;
    FUN_00791930(&local_80,&local_a0);
    uVar12 = local_7c;
    FUN_0074b424(&local_5c,iVar17,local_7c,local_78);
    FUN_00777ddc(&local_5c);
    if (local_80 != 0) {
      thunk_FUN_016d3fb4(uVar12);
    }
    if (!bVar3) {
      thunk_FUN_016d3fb4(puVar8);
    }
    if (!bVar2) {
      thunk_FUN_016d3fb4(puVar7);
    }
    if (!bVar1) {
      thunk_FUN_016d3fb4(local_c0);
    }
    thunk_FUN_016d3fb4(puVar6);
    if (!bVar22) {
      thunk_FUN_016d3fb4(ppppppuVar5);
    }
    if (pppppppuVar4 != (undefined4 *******)0x0) {
      thunk_FUN_016d3fb4(iVar21);
    }
    bVar22 = iVar16 != -2;
    iVar16 = iVar16 + -1;
  } while (bVar22);
  iVar15 = *(int *)(param_1 + 0x10);
  puVar18 = *(undefined2 **)(iVar15 + 0x10);
  if (puVar18 == (undefined2 *)0x0) {
    ppppppuVar5 = (undefined4 ******)&DAT_00000001;
LAB_00775c80:
    bVar22 = puVar18 == (undefined2 *)0x0;
  }
  else {
    uVar12 = *(undefined4 *)(iVar15 + 0xc);
    ppppppuVar5 = (undefined4 ******)thunk_FUN_016d4a50(puVar18);
    if (ppppppuVar5 == (undefined4 ******)0x0) goto LAB_0077711c;
    FUN_016dd1aa(ppppppuVar5,uVar12,puVar18);
    if (puVar18 != (undefined2 *)&DAT_80000000) goto LAB_00775c80;
    puVar18 = (undefined2 *)0x3;
    ppppppuVar5 = (undefined4 ******)thunk_FUN_016d4a50(3);
    if (ppppppuVar5 == (undefined4 ******)0x0) goto LAB_00777118;
    bVar22 = false;
    *(undefined1 *)((int)ppppppuVar5 + 2) = 0x41;
    *(undefined2 *)ppppppuVar5 = 0x2f4e;
  }
  puVar6 = (undefined4 *)thunk_FUN_016d4a50(5);
  if (puVar6 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(1,5);
  }
  *(undefined1 *)(puVar6 + 1) = 0x6e;
  *puVar6 = 0x69617264;
  FUN_00793ff8(&local_4c,param_1);
  if (local_4c == (undefined4 *******)&DAT_80000000) {
    puVar7 = (undefined2 *)thunk_FUN_016d4a50(3);
    if (puVar7 == (undefined2 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(1,3);
    }
    bVar1 = false;
    *(undefined1 *)(puVar7 + 1) = 0x41;
    *puVar7 = 0x2f4e;
    puVar14 = (undefined4 *)0x3;
  }
  else {
    bVar1 = local_4c == (undefined4 *******)0x0;
    puVar14 = local_44;
    puVar7 = local_48;
  }
  FUN_00794130(&local_4c,param_1);
  if (local_4c == (undefined4 *******)&DAT_80000000) {
    puVar8 = (undefined2 *)thunk_FUN_016d4a50(3);
    if (puVar8 == (undefined2 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(1,3);
    }
    *(undefined1 *)(puVar8 + 1) = 0x41;
    *puVar8 = 0x2f4e;
    bVar2 = false;
    puVar13 = (undefined4 *)0x3;
  }
  else {
    bVar2 = local_4c == (undefined4 *******)0x0;
    puVar13 = local_44;
    puVar8 = local_48;
  }
  iVar9 = *(int *)(param_1 + 0xc);
  iVar16 = *(int *)(iVar9 + 0x10);
  if (iVar16 == 0) {
    puVar10 = (undefined2 *)&DAT_00000001;
LAB_00775e08:
    bVar3 = iVar16 == 0;
  }
  else {
    uVar12 = *(undefined4 *)(iVar9 + 0xc);
    puVar10 = (undefined2 *)thunk_FUN_016d4a50(iVar16);
    if (puVar10 == (undefined2 *)0x0) {
LAB_007774fc:
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(1,iVar16);
    }
    FUN_016dd1aa(puVar10,uVar12,iVar16);
    if (iVar16 != -0x80000000) goto LAB_00775e08;
    iVar16 = 3;
    puVar10 = (undefined2 *)thunk_FUN_016d4a50(3);
    if (puVar10 == (undefined2 *)0x0) {
      iVar16 = 3;
      goto LAB_007774fc;
    }
    bVar3 = false;
    *(undefined1 *)(puVar10 + 1) = 0x41;
    *puVar10 = 0x2f4e;
  }
  local_40 = 5;
  local_4c = (undefined4 *******)ppppppuVar5;
  local_48 = puVar18;
  local_44 = puVar6;
  local_3c = puVar7;
  local_38 = puVar14;
  local_34 = puVar8;
  local_30 = puVar13;
  local_2c = puVar10;
  local_28 = iVar16;
  FUN_0074b0c8(&local_a0,DAT_018d7cd4 + 8,&local_4c,5);
  FUN_00777ddc(&local_a0);
  if (bVar3) {
    if (!bVar2) goto LAB_00775f28;
LAB_00775e84:
    if (!bVar1) goto LAB_00775f3c;
LAB_00775e90:
    thunk_FUN_016d3fb4(puVar6);
    if (!bVar22) goto LAB_00775f54;
LAB_00775ea0:
    puVar18 = *(undefined2 **)(iVar15 + 0x10);
    if (puVar18 == (undefined2 *)0x0) goto LAB_00775f68;
LAB_00775eac:
    uVar12 = *(undefined4 *)(iVar15 + 0xc);
    ppppppuVar5 = (undefined4 ******)thunk_FUN_016d4a50(puVar18);
    if (ppppppuVar5 == (undefined4 ******)0x0) goto LAB_0077711c;
    FUN_016dd1aa(ppppppuVar5,uVar12,puVar18);
    if (puVar18 != (undefined2 *)&DAT_80000000) goto LAB_00775f6c;
    puVar18 = (undefined2 *)0x3;
    ppppppuVar5 = (undefined4 ******)thunk_FUN_016d4a50(3);
    if (ppppppuVar5 == (undefined4 ******)0x0) goto LAB_0077710c;
    bVar22 = false;
    *(undefined1 *)((int)ppppppuVar5 + 2) = 0x41;
    *(undefined2 *)ppppppuVar5 = 0x2f4e;
  }
  else {
    thunk_FUN_016d3fb4(puVar10);
    if (bVar2) goto LAB_00775e84;
LAB_00775f28:
    thunk_FUN_016d3fb4(puVar8);
    if (bVar1) goto LAB_00775e90;
LAB_00775f3c:
    thunk_FUN_016d3fb4(puVar7);
    thunk_FUN_016d3fb4(puVar6);
    if (bVar22) goto LAB_00775ea0;
LAB_00775f54:
    thunk_FUN_016d3fb4(ppppppuVar5);
    puVar18 = *(undefined2 **)(iVar15 + 0x10);
    if (puVar18 != (undefined2 *)0x0) goto LAB_00775eac;
LAB_00775f68:
    ppppppuVar5 = (undefined4 ******)&DAT_00000001;
LAB_00775f6c:
    bVar22 = puVar18 == (undefined2 *)0x0;
  }
  puVar6 = (undefined4 *)thunk_FUN_016d4a50(5);
  if (puVar6 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(1,5);
  }
  *(undefined1 *)(puVar6 + 1) = 0x6e;
  *puVar6 = 0x69617264;
  FUN_00793ff8(&local_4c,param_1);
  if (local_4c == (undefined4 *******)&DAT_80000000) {
    puVar7 = (undefined2 *)thunk_FUN_016d4a50(3);
    if (puVar7 == (undefined2 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(1,3);
    }
    bVar1 = false;
    *(undefined1 *)(puVar7 + 1) = 0x41;
    *puVar7 = 0x2f4e;
    puVar14 = (undefined4 *)0x3;
  }
  else {
    bVar1 = local_4c == (undefined4 *******)0x0;
    puVar14 = local_44;
    puVar7 = local_48;
  }
  FUN_00794130(&local_4c,param_1);
  if (local_4c == (undefined4 *******)&DAT_80000000) {
    puVar8 = (undefined2 *)thunk_FUN_016d4a50(3);
    if (puVar8 == (undefined2 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(1,3);
    }
    *(undefined1 *)(puVar8 + 1) = 0x41;
    *puVar8 = 0x2f4e;
    bVar2 = false;
    puVar13 = (undefined4 *)0x3;
  }
  else {
    bVar2 = local_4c == (undefined4 *******)0x0;
    puVar13 = local_44;
    puVar8 = local_48;
  }
  iVar16 = *(int *)(iVar9 + 0x10);
  if (iVar16 == 0) {
    puVar10 = (undefined2 *)&DAT_00000001;
LAB_007760e8:
    bVar3 = iVar16 == 0;
  }
  else {
    uVar12 = *(undefined4 *)(iVar9 + 0xc);
    puVar10 = (undefined2 *)thunk_FUN_016d4a50(iVar16);
    if (puVar10 == (undefined2 *)0x0) {
LAB_00777514:
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(1,iVar16);
    }
    FUN_016dd1aa(puVar10,uVar12,iVar16);
    if (iVar16 != -0x80000000) goto LAB_007760e8;
    iVar16 = 3;
    puVar10 = (undefined2 *)thunk_FUN_016d4a50(3);
    if (puVar10 == (undefined2 *)0x0) {
      iVar16 = 3;
      goto LAB_00777514;
    }
    bVar3 = false;
    *(undefined1 *)(puVar10 + 1) = 0x41;
    *puVar10 = 0x2f4e;
  }
  local_40 = 5;
  local_4c = (undefined4 *******)ppppppuVar5;
  local_48 = puVar18;
  local_44 = puVar6;
  local_3c = puVar7;
  local_38 = puVar14;
  local_34 = puVar8;
  local_30 = puVar13;
  local_2c = puVar10;
  local_28 = iVar16;
  FUN_0074b780(&local_a0,DAT_018d7cd8 + 8,&local_4c);
  FUN_00777ddc(&local_a0);
  if (bVar3) {
    if (!bVar2) goto LAB_00776204;
LAB_00776160:
    if (!bVar1) goto LAB_00776218;
LAB_0077616c:
    thunk_FUN_016d3fb4(puVar6);
    if (!bVar22) goto LAB_00776230;
LAB_0077617c:
    puVar18 = *(undefined2 **)(iVar15 + 0x10);
    if (puVar18 == (undefined2 *)0x0) goto LAB_00776244;
LAB_00776188:
    uVar12 = *(undefined4 *)(iVar15 + 0xc);
    ppppppuVar5 = (undefined4 ******)thunk_FUN_016d4a50(puVar18);
    if (ppppppuVar5 == (undefined4 ******)0x0) goto LAB_0077711c;
    FUN_016dd1aa(ppppppuVar5,uVar12,puVar18);
    if (puVar18 != (undefined2 *)&DAT_80000000) goto LAB_00776248;
    puVar18 = (undefined2 *)0x3;
    ppppppuVar5 = (undefined4 ******)thunk_FUN_016d4a50(3);
    if (ppppppuVar5 == (undefined4 ******)0x0) goto LAB_0077710c;
    bVar22 = false;
    *(undefined1 *)((int)ppppppuVar5 + 2) = 0x41;
    *(undefined2 *)ppppppuVar5 = 0x2f4e;
  }
  else {
    thunk_FUN_016d3fb4(puVar10);
    if (bVar2) goto LAB_00776160;
LAB_00776204:
    thunk_FUN_016d3fb4(puVar8);
    if (bVar1) goto LAB_0077616c;
LAB_00776218:
    thunk_FUN_016d3fb4(puVar7);
    thunk_FUN_016d3fb4(puVar6);
    if (bVar22) goto LAB_0077617c;
LAB_00776230:
    thunk_FUN_016d3fb4(ppppppuVar5);
    puVar18 = *(undefined2 **)(iVar15 + 0x10);
    if (puVar18 != (undefined2 *)0x0) goto LAB_00776188;
LAB_00776244:
    ppppppuVar5 = (undefined4 ******)&DAT_00000001;
LAB_00776248:
    bVar22 = puVar18 == (undefined2 *)0x0;
  }
  puVar6 = (undefined4 *)thunk_FUN_016d4a50(5);
  if (puVar6 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(1,5);
  }
  *(undefined1 *)(puVar6 + 1) = 0x6e;
  *puVar6 = 0x69617264;
  FUN_00793ff8(&local_4c,param_1);
  if (local_4c == (undefined4 *******)&DAT_80000000) {
    puVar7 = (undefined2 *)thunk_FUN_016d4a50(3);
    if (puVar7 == (undefined2 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(1,3);
    }
    bVar1 = false;
    *(undefined1 *)(puVar7 + 1) = 0x41;
    *puVar7 = 0x2f4e;
    puVar14 = (undefined4 *)0x3;
  }
  else {
    bVar1 = local_4c == (undefined4 *******)0x0;
    puVar14 = local_44;
    puVar7 = local_48;
  }
  FUN_00794130(&local_4c,param_1);
  if (local_4c == (undefined4 *******)&DAT_80000000) {
    puVar8 = (undefined2 *)thunk_FUN_016d4a50(3);
    if (puVar8 == (undefined2 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(1,3);
    }
    *(undefined1 *)(puVar8 + 1) = 0x41;
    *puVar8 = 0x2f4e;
    bVar2 = false;
    puVar13 = (undefined4 *)0x3;
  }
  else {
    bVar2 = local_4c == (undefined4 *******)0x0;
    puVar13 = local_44;
    puVar8 = local_48;
  }
  iVar16 = *(int *)(iVar9 + 0x10);
  if (iVar16 == 0) {
    puVar10 = (undefined2 *)&DAT_00000001;
LAB_007763d4:
    bVar3 = iVar16 == 0;
  }
  else {
    uVar12 = *(undefined4 *)(iVar9 + 0xc);
    puVar10 = (undefined2 *)thunk_FUN_016d4a50(iVar16);
    if (puVar10 == (undefined2 *)0x0) {
LAB_00777530:
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(1,iVar16);
    }
    FUN_016dd1aa(puVar10,uVar12,iVar16);
    if (iVar16 != -0x80000000) goto LAB_007763d4;
    iVar16 = 3;
    puVar10 = (undefined2 *)thunk_FUN_016d4a50(3);
    if (puVar10 == (undefined2 *)0x0) {
      iVar16 = 3;
      goto LAB_00777530;
    }
    bVar3 = false;
    *(undefined1 *)(puVar10 + 1) = 0x41;
    *puVar10 = 0x2f4e;
  }
  local_40 = 5;
  local_4c = (undefined4 *******)ppppppuVar5;
  local_48 = puVar18;
  local_44 = puVar6;
  local_3c = puVar7;
  local_38 = puVar14;
  local_34 = puVar8;
  local_30 = puVar13;
  local_2c = puVar10;
  local_28 = iVar16;
  FUN_0074b0c8(&local_a0,DAT_018d7cdc + 8,&local_4c,5);
  FUN_00777ddc(&local_a0);
  if (bVar3) {
    if (!bVar2) goto LAB_007764f4;
LAB_00776450:
    if (!bVar1) goto LAB_00776508;
LAB_0077645c:
    thunk_FUN_016d3fb4(puVar6);
    if (!bVar22) goto LAB_00776520;
LAB_0077646c:
    puVar18 = *(undefined2 **)(iVar15 + 0x10);
    if (puVar18 == (undefined2 *)0x0) goto LAB_00776534;
LAB_00776478:
    uVar12 = *(undefined4 *)(iVar15 + 0xc);
    ppppppuVar5 = (undefined4 ******)thunk_FUN_016d4a50(puVar18);
    if (ppppppuVar5 == (undefined4 ******)0x0) goto LAB_0077711c;
    FUN_016dd1aa(ppppppuVar5,uVar12,puVar18);
    if (puVar18 != (undefined2 *)&DAT_80000000) goto LAB_00776538;
    puVar18 = (undefined2 *)0x3;
    ppppppuVar5 = (undefined4 ******)thunk_FUN_016d4a50(3);
    if (ppppppuVar5 == (undefined4 ******)0x0) goto LAB_0077710c;
    bVar22 = false;
    *(undefined1 *)((int)ppppppuVar5 + 2) = 0x41;
    *(undefined2 *)ppppppuVar5 = 0x2f4e;
  }
  else {
    thunk_FUN_016d3fb4(puVar10);
    if (bVar2) goto LAB_00776450;
LAB_007764f4:
    thunk_FUN_016d3fb4(puVar8);
    if (bVar1) goto LAB_0077645c;
LAB_00776508:
    thunk_FUN_016d3fb4(puVar7);
    thunk_FUN_016d3fb4(puVar6);
    if (bVar22) goto LAB_0077646c;
LAB_00776520:
    thunk_FUN_016d3fb4(ppppppuVar5);
    puVar18 = *(undefined2 **)(iVar15 + 0x10);
    if (puVar18 != (undefined2 *)0x0) goto LAB_00776478;
LAB_00776534:
    ppppppuVar5 = (undefined4 ******)&DAT_00000001;
LAB_00776538:
    bVar22 = puVar18 == (undefined2 *)0x0;
  }
  puVar6 = (undefined4 *)thunk_FUN_016d4a50(5);
  if (puVar6 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(1,5);
  }
  *(undefined1 *)(puVar6 + 1) = 0x6e;
  *puVar6 = 0x69617264;
  FUN_00793ff8(&local_4c,param_1);
  if (local_4c == (undefined4 *******)&DAT_80000000) {
    puVar7 = (undefined2 *)thunk_FUN_016d4a50(3);
    if (puVar7 == (undefined2 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(1,3);
    }
    bVar1 = false;
    *(undefined1 *)(puVar7 + 1) = 0x41;
    *puVar7 = 0x2f4e;
    puVar14 = (undefined4 *)0x3;
  }
  else {
    bVar1 = local_4c == (undefined4 *******)0x0;
    puVar14 = local_44;
    puVar7 = local_48;
  }
  FUN_00794130(&local_4c,param_1);
  if (local_4c == (undefined4 *******)&DAT_80000000) {
    puVar8 = (undefined2 *)thunk_FUN_016d4a50(3);
    if (puVar8 == (undefined2 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(1,3);
    }
    *(undefined1 *)(puVar8 + 1) = 0x41;
    *puVar8 = 0x2f4e;
    bVar2 = false;
    puVar13 = (undefined4 *)0x3;
  }
  else {
    bVar2 = local_4c == (undefined4 *******)0x0;
    puVar8 = local_48;
    puVar13 = local_44;
  }
  iVar15 = *(int *)(iVar9 + 0x10);
  if (iVar15 == 0) {
    puVar10 = (undefined2 *)&DAT_00000001;
LAB_007766b0:
    bVar3 = iVar15 == 0;
  }
  else {
    uVar12 = *(undefined4 *)(iVar9 + 0xc);
    puVar10 = (undefined2 *)thunk_FUN_016d4a50(iVar15);
    if (puVar10 == (undefined2 *)0x0) {
LAB_0077754c:
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(1,iVar15);
    }
    FUN_016dd1aa(puVar10,uVar12,iVar15);
    if (iVar15 != -0x80000000) goto LAB_007766b0;
    iVar15 = 3;
    puVar10 = (undefined2 *)thunk_FUN_016d4a50(3);
    if (puVar10 == (undefined2 *)0x0) {
      iVar15 = 3;
      goto LAB_0077754c;
    }
    bVar3 = false;
    *(undefined1 *)(puVar10 + 1) = 0x41;
    *puVar10 = 0x2f4e;
  }
  local_40 = 5;
  local_4c = (undefined4 *******)ppppppuVar5;
  local_48 = puVar18;
  local_44 = puVar6;
  local_3c = puVar7;
  local_38 = puVar14;
  local_34 = puVar8;
  local_30 = puVar13;
  local_2c = puVar10;
  local_28 = iVar15;
  FUN_0074b0c8(&local_a0,DAT_018d7ce0 + 8,&local_4c,5);
  FUN_00777ddc(&local_a0);
  if (bVar3) {
    if (!bVar2) goto LAB_007767e8;
LAB_0077672c:
    if (!bVar1) goto LAB_007767fc;
LAB_00776738:
    thunk_FUN_016d3fb4(puVar6);
  }
  else {
    thunk_FUN_016d3fb4(puVar10);
    if (bVar2) goto LAB_0077672c;
LAB_007767e8:
    thunk_FUN_016d3fb4(puVar8);
    if (bVar1) goto LAB_00776738;
LAB_007767fc:
    thunk_FUN_016d3fb4(puVar7);
    thunk_FUN_016d3fb4(puVar6);
  }
  if (!bVar22) {
    thunk_FUN_016d3fb4(ppppppuVar5);
  }
  iVar15 = *(int *)(param_1 + 0x10);
  puVar18 = *(undefined2 **)(iVar15 + 0x10);
  if (puVar18 == (undefined2 *)0x0) {
    ppppppuVar5 = (undefined4 ******)&DAT_00000001;
LAB_00776824:
    bVar22 = puVar18 == (undefined2 *)0x0;
  }
  else {
    uVar12 = *(undefined4 *)(iVar15 + 0xc);
    ppppppuVar5 = (undefined4 ******)thunk_FUN_016d4a50(puVar18);
    if (ppppppuVar5 == (undefined4 ******)0x0) goto LAB_0077711c;
    FUN_016dd1aa(ppppppuVar5,uVar12,puVar18);
    if (puVar18 != (undefined2 *)&DAT_80000000) goto LAB_00776824;
    puVar18 = (undefined2 *)0x3;
    ppppppuVar5 = (undefined4 ******)thunk_FUN_016d4a50(3);
    if (ppppppuVar5 == (undefined4 ******)0x0) goto LAB_00777118;
    bVar22 = false;
    *(undefined1 *)((int)ppppppuVar5 + 2) = 0x41;
    *(undefined2 *)ppppppuVar5 = 0x2f4e;
  }
  puVar6 = (undefined4 *)thunk_FUN_016d4a50(5);
  if (puVar6 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(1,5);
  }
  *(undefined1 *)(puVar6 + 1) = 0x6e;
  *puVar6 = 0x69617264;
  FUN_00793ff8(&local_4c,param_1);
  if (local_4c == (undefined4 *******)&DAT_80000000) {
    puVar7 = (undefined2 *)thunk_FUN_016d4a50(3);
    if (puVar7 == (undefined2 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(1,3);
    }
    bVar1 = false;
    *(undefined1 *)(puVar7 + 1) = 0x41;
    *puVar7 = 0x2f4e;
    puVar14 = (undefined4 *)0x3;
  }
  else {
    bVar1 = local_4c == (undefined4 *******)0x0;
    puVar14 = local_44;
    puVar7 = local_48;
  }
  FUN_00794130(&local_4c,param_1);
  if (local_4c == (undefined4 *******)&DAT_80000000) {
    puVar8 = (undefined2 *)thunk_FUN_016d4a50(3);
    if (puVar8 == (undefined2 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(1,3);
    }
    *(undefined1 *)(puVar8 + 1) = 0x41;
    *puVar8 = 0x2f4e;
    bVar2 = false;
    puVar13 = (undefined4 *)0x3;
  }
  else {
    bVar2 = local_4c == (undefined4 *******)0x0;
    puVar13 = local_44;
    puVar8 = local_48;
  }
  iVar9 = *(int *)(param_1 + 0xc);
  iVar16 = *(int *)(iVar9 + 0x10);
  if (iVar16 == 0) {
    puVar10 = (undefined2 *)&DAT_00000001;
LAB_007769a8:
    bVar3 = iVar16 == 0;
  }
  else {
    uVar12 = *(undefined4 *)(iVar9 + 0xc);
    puVar10 = (undefined2 *)thunk_FUN_016d4a50(iVar16);
    if (puVar10 == (undefined2 *)0x0) {
LAB_00777568:
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(1,iVar16);
    }
    FUN_016dd1aa(puVar10,uVar12,iVar16);
    if (iVar16 != -0x80000000) goto LAB_007769a8;
    iVar16 = 3;
    puVar10 = (undefined2 *)thunk_FUN_016d4a50(3);
    if (puVar10 == (undefined2 *)0x0) {
      iVar16 = 3;
      goto LAB_00777568;
    }
    bVar3 = false;
    *(undefined1 *)(puVar10 + 1) = 0x41;
    *puVar10 = 0x2f4e;
  }
  local_40 = 5;
  local_4c = (undefined4 *******)ppppppuVar5;
  local_48 = puVar18;
  local_44 = puVar6;
  local_3c = puVar7;
  local_38 = puVar14;
  local_34 = puVar8;
  local_30 = puVar13;
  local_2c = puVar10;
  local_28 = iVar16;
  FUN_0074b0c8(&local_a0,DAT_018d7ce4 + 8,&local_4c,5);
  FUN_00777ddc(&local_a0);
  if (bVar3) {
    if (!bVar2) goto LAB_00776ac8;
LAB_00776a24:
    if (!bVar1) goto LAB_00776adc;
LAB_00776a30:
    thunk_FUN_016d3fb4(puVar6);
    if (!bVar22) goto LAB_00776af4;
LAB_00776a40:
    puVar18 = *(undefined2 **)(iVar15 + 0x10);
    if (puVar18 == (undefined2 *)0x0) goto LAB_00776b08;
LAB_00776a4c:
    uVar12 = *(undefined4 *)(iVar15 + 0xc);
    ppppppuVar5 = (undefined4 ******)thunk_FUN_016d4a50(puVar18);
    if (ppppppuVar5 == (undefined4 ******)0x0) goto LAB_0077711c;
    FUN_016dd1aa(ppppppuVar5,uVar12,puVar18);
    if (puVar18 != (undefined2 *)&DAT_80000000) goto LAB_00776b0c;
    puVar18 = (undefined2 *)0x3;
    ppppppuVar5 = (undefined4 ******)thunk_FUN_016d4a50(3);
    if (ppppppuVar5 == (undefined4 ******)0x0) goto LAB_0077710c;
    bVar22 = false;
    *(undefined1 *)((int)ppppppuVar5 + 2) = 0x41;
    *(undefined2 *)ppppppuVar5 = 0x2f4e;
  }
  else {
    thunk_FUN_016d3fb4(puVar10);
    if (bVar2) goto LAB_00776a24;
LAB_00776ac8:
    thunk_FUN_016d3fb4(puVar8);
    if (bVar1) goto LAB_00776a30;
LAB_00776adc:
    thunk_FUN_016d3fb4(puVar7);
    thunk_FUN_016d3fb4(puVar6);
    if (bVar22) goto LAB_00776a40;
LAB_00776af4:
    thunk_FUN_016d3fb4(ppppppuVar5);
    puVar18 = *(undefined2 **)(iVar15 + 0x10);
    if (puVar18 != (undefined2 *)0x0) goto LAB_00776a4c;
LAB_00776b08:
    ppppppuVar5 = (undefined4 ******)&DAT_00000001;
LAB_00776b0c:
    bVar22 = puVar18 == (undefined2 *)0x0;
  }
  puVar6 = (undefined4 *)thunk_FUN_016d4a50(5);
  if (puVar6 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(1,5);
  }
  *(undefined1 *)(puVar6 + 1) = 0x6e;
  *puVar6 = 0x69617264;
  FUN_00793ff8(&local_4c,param_1);
  if (local_4c == (undefined4 *******)&DAT_80000000) {
    puVar7 = (undefined2 *)thunk_FUN_016d4a50(3);
    if (puVar7 == (undefined2 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(1,3);
    }
    bVar1 = false;
    *(undefined1 *)(puVar7 + 1) = 0x41;
    *puVar7 = 0x2f4e;
    puVar14 = (undefined4 *)0x3;
  }
  else {
    bVar1 = local_4c == (undefined4 *******)0x0;
    puVar14 = local_44;
    puVar7 = local_48;
  }
  FUN_00794130(&local_4c,param_1);
  if (local_4c == (undefined4 *******)&DAT_80000000) {
    puVar8 = (undefined2 *)thunk_FUN_016d4a50(3);
    if (puVar8 == (undefined2 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(1,3);
    }
    *(undefined1 *)(puVar8 + 1) = 0x41;
    *puVar8 = 0x2f4e;
    bVar2 = false;
    puVar13 = (undefined4 *)0x3;
  }
  else {
    bVar2 = local_4c == (undefined4 *******)0x0;
    puVar13 = local_44;
    puVar8 = local_48;
  }
  iVar16 = *(int *)(iVar9 + 0x10);
  if (iVar16 == 0) {
    puVar10 = (undefined2 *)&DAT_00000001;
LAB_00776c84:
    bVar3 = iVar16 == 0;
  }
  else {
    uVar12 = *(undefined4 *)(iVar9 + 0xc);
    puVar10 = (undefined2 *)thunk_FUN_016d4a50(iVar16);
    if (puVar10 == (undefined2 *)0x0) {
LAB_00777580:
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(1,iVar16);
    }
    FUN_016dd1aa(puVar10,uVar12,iVar16);
    if (iVar16 != -0x80000000) goto LAB_00776c84;
    iVar16 = 3;
    puVar10 = (undefined2 *)thunk_FUN_016d4a50(3);
    if (puVar10 == (undefined2 *)0x0) {
      iVar16 = 3;
      goto LAB_00777580;
    }
    bVar3 = false;
    *(undefined1 *)(puVar10 + 1) = 0x41;
    *puVar10 = 0x2f4e;
  }
  local_40 = 5;
  local_4c = (undefined4 *******)ppppppuVar5;
  local_48 = puVar18;
  local_44 = puVar6;
  local_3c = puVar7;
  local_38 = puVar14;
  local_34 = puVar8;
  local_30 = puVar13;
  local_2c = puVar10;
  local_28 = iVar16;
  FUN_0074b0c8(&local_a0,DAT_018d7ce8 + 8,&local_4c,5);
  FUN_00777ddc(&local_a0);
  if (bVar3) {
    if (!bVar2) goto LAB_00776da8;
LAB_00776d00:
    if (!bVar1) goto LAB_00776dbc;
LAB_00776d0c:
    thunk_FUN_016d3fb4(puVar6);
    if (!bVar22) goto LAB_00776dd4;
LAB_00776d1c:
    puVar18 = *(undefined2 **)(iVar15 + 0x10);
    if (puVar18 == (undefined2 *)0x0) goto LAB_00776de8;
LAB_00776d28:
    uVar12 = *(undefined4 *)(iVar15 + 0xc);
    ppppppuVar5 = (undefined4 ******)thunk_FUN_016d4a50(puVar18);
    if (ppppppuVar5 == (undefined4 ******)0x0) goto LAB_0077711c;
    FUN_016dd1aa(ppppppuVar5,uVar12,puVar18);
    if (puVar18 != (undefined2 *)&DAT_80000000) goto LAB_00776dec;
    puVar18 = (undefined2 *)0x3;
    ppppppuVar5 = (undefined4 ******)thunk_FUN_016d4a50(3);
    if (ppppppuVar5 == (undefined4 ******)0x0) goto LAB_0077710c;
    bVar22 = false;
    *(undefined1 *)((int)ppppppuVar5 + 2) = 0x41;
    *(undefined2 *)ppppppuVar5 = 0x2f4e;
  }
  else {
    thunk_FUN_016d3fb4(puVar10);
    if (bVar2) goto LAB_00776d00;
LAB_00776da8:
    thunk_FUN_016d3fb4(puVar8);
    if (bVar1) goto LAB_00776d0c;
LAB_00776dbc:
    thunk_FUN_016d3fb4(puVar7);
    thunk_FUN_016d3fb4(puVar6);
    if (bVar22) goto LAB_00776d1c;
LAB_00776dd4:
    thunk_FUN_016d3fb4(ppppppuVar5);
    puVar18 = *(undefined2 **)(iVar15 + 0x10);
    if (puVar18 != (undefined2 *)0x0) goto LAB_00776d28;
LAB_00776de8:
    ppppppuVar5 = (undefined4 ******)&DAT_00000001;
LAB_00776dec:
    bVar22 = puVar18 == (undefined2 *)0x0;
  }
  puVar6 = (undefined4 *)thunk_FUN_016d4a50(5);
  if (puVar6 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(1,5);
  }
  *(undefined1 *)(puVar6 + 1) = 0x6e;
  *puVar6 = 0x69617264;
  FUN_00793ff8(&local_4c,param_1);
  if (local_4c == (undefined4 *******)&DAT_80000000) {
    puVar7 = (undefined2 *)thunk_FUN_016d4a50(3);
    if (puVar7 == (undefined2 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(1,3);
    }
    bVar1 = false;
    *(undefined1 *)(puVar7 + 1) = 0x41;
    *puVar7 = 0x2f4e;
    puVar14 = (undefined4 *)0x3;
  }
  else {
    bVar1 = local_4c == (undefined4 *******)0x0;
    puVar14 = local_44;
    puVar7 = local_48;
  }
  FUN_00794130(&local_4c,param_1);
  if (local_4c == (undefined4 *******)&DAT_80000000) {
    puVar8 = (undefined2 *)thunk_FUN_016d4a50(3);
    if (puVar8 == (undefined2 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(1,3);
    }
    *(undefined1 *)(puVar8 + 1) = 0x41;
    *puVar8 = 0x2f4e;
    bVar2 = false;
    puVar13 = (undefined4 *)0x3;
  }
  else {
    bVar2 = local_4c == (undefined4 *******)0x0;
    puVar8 = local_48;
    puVar13 = local_44;
  }
  iVar15 = *(int *)(iVar9 + 0x10);
  if (iVar15 == 0) {
    puVar10 = (undefined2 *)&DAT_00000001;
  }
  else {
    uVar12 = *(undefined4 *)(iVar9 + 0xc);
    puVar10 = (undefined2 *)thunk_FUN_016d4a50(iVar15);
    if (puVar10 == (undefined2 *)0x0) {
LAB_0077759c:
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(1,iVar15);
    }
    FUN_016dd1aa(puVar10,uVar12,iVar15);
    if (iVar15 == -0x80000000) {
      iVar15 = 3;
      puVar10 = (undefined2 *)thunk_FUN_016d4a50(3);
      if (puVar10 == (undefined2 *)0x0) {
        iVar15 = 3;
        goto LAB_0077759c;
      }
      bVar3 = false;
      *(undefined1 *)(puVar10 + 1) = 0x41;
      *puVar10 = 0x2f4e;
      goto LAB_00776f6c;
    }
  }
  bVar3 = iVar15 == 0;
LAB_00776f6c:
  local_40 = 5;
  local_4c = (undefined4 *******)ppppppuVar5;
  local_48 = puVar18;
  local_44 = puVar6;
  local_3c = puVar7;
  local_38 = puVar14;
  local_34 = puVar8;
  local_30 = puVar13;
  local_2c = puVar10;
  local_28 = iVar15;
  FUN_0074b0c8(&local_a0,DAT_018d7cec + 8,&local_4c,5);
  FUN_00777ddc(&local_a0);
  if (!bVar3) {
    thunk_FUN_016d3fb4(puVar10);
  }
  if (!bVar2) {
    thunk_FUN_016d3fb4(puVar8);
  }
  if (bVar1) {
    thunk_FUN_016d3fb4(puVar6);
  }
  else {
    thunk_FUN_016d3fb4(puVar7);
    thunk_FUN_016d3fb4(puVar6);
  }
  if (!bVar22) {
    thunk_FUN_016d3fb4(ppppppuVar5);
    FUN_00777d58(param_1);
    return;
  }
  FUN_00777d58(param_1);
  return;
}


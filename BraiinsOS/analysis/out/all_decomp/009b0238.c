// FUN_009b0238 @ 009b0238 size=1212 calls_out=22 calls_in=4
// strings: a Display implementation returned an error unexpectedly

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_009b0238(undefined4 *param_1,int ***param_2,int **param_3)

{
  uint uVar1;
  undefined4 uVar2;
  int ****ppppiVar3;
  int ****ppppiVar4;
  int ****ppppiVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  bool bVar12;
  int iVar13;
  uint *puVar14;
  undefined4 *puVar15;
  int ***extraout_r1;
  uint uVar16;
  int *piVar17;
  uint uVar18;
  int ***pppiVar19;
  undefined8 uVar20;
  int **local_64;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  int ***local_50;
  int **local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  int ***local_3c;
  int ****local_38;
  int **local_34;
  int ****local_30;
  undefined1 *local_2c;
  uint local_28;
  
  local_64 = param_3;
  local_50 = param_2;
  local_4c = param_3;
  FUN_009bea90(&local_60,&local_50);
  if ((char)local_58 != '\x02') {
    *param_1 = local_60;
    param_1[1] = uStack_5c;
    param_1[2] = local_58;
    return;
  }
  local_28 = 0;
  local_2c = (undefined1 *)0x1;
  local_30 = (int ****)0x0;
  local_34 = (int **)&LAB_00fac484;
  local_3c = param_2;
  local_38 = &local_3c;
  iVar13 = FUN_00fa948c(&local_30,&DAT_01869a8c,&DAT_00590e71,&local_38);
  uVar9 = local_28;
  puVar6 = local_2c;
  ppppiVar3 = local_30;
  if (iVar13 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00fb74f8("a Display implementation returned an error unexpectedly",0x37,&local_38,
                 &DAT_01869ab4,&DAT_018af130);
  }
  local_38 = (int ****)&local_64;
  local_34 = (int **)&LAB_00fac484;
  FUN_00600d2c(&local_30,&DAT_00569e80,&local_38);
  uVar10 = local_28;
  puVar7 = local_2c;
  ppppiVar4 = local_30;
  if (DAT_018d7efc == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00faf2a4(&DAT_0186993c);
  }
  local_3c = (int ***)FUN_018462e8(local_64);
  local_34 = (int **)&LAB_00fac484;
  local_38 = &local_3c;
  FUN_00600d2c(&local_30,&DAT_00569c68,&local_38);
  uVar11 = local_28;
  puVar8 = local_2c;
  ppppiVar5 = local_30;
  if (DAT_018d7efc == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00fb7c58(&DAT_0186994c);
  }
  FUN_0184606c(local_64);
  local_30 = (int ****)&local_38;
  local_2c = &LAB_00fac484;
  local_38 = (int ****)extraout_r1;
  FUN_00600d2c(&local_48,&DAT_00569c68,&local_30);
  puVar14 = (uint *)(DAT_018d7f94 + 0xc);
  pppiVar19 = (int ***)(DAT_018d7f94 + 8);
  uVar16 = *(uint *)(DAT_018d7f94 + 0xc);
  do {
    if (0xfffffffe < uVar16) {
                    /* WARNING: Subroutine does not return */
      FUN_015be724(&DAT_0034abe5,0xf,&DAT_0186a960);
    }
    uVar18 = *puVar14;
    if (*puVar14 == uVar16) {
      DataMemoryBarrier(0xb);
      do {
        bVar12 = (bool)hasExclusiveAccess(puVar14);
        if (bVar12) {
          *puVar14 = uVar16 + 1;
          DataMemoryBarrier(0xb);
          uVar20 = thunk_FUN_016de0ee(puVar14,0x1b0);
          iVar13 = (int)uVar20 + (int)((ulonglong)uVar20 >> 0x20);
          if ((*(char *)(iVar13 + 8) != '\x01') && (iVar13 = FUN_00a30258(iVar13,0), iVar13 == 0)) {
                    /* WARNING: Subroutine does not return */
            FUN_015f853c(&DAT_018ae900);
          }
          uVar16 = *(uint *)(iVar13 + 4);
          piVar17 = (*pppiVar19)[uVar16 & 0xff];
          bVar12 = false;
          DataMemoryBarrier(0xb);
          if (piVar17 == (int *)0x0) goto LAB_009b04c8;
          uVar18 = uVar16;
          goto LAB_009b0474;
        }
        uVar18 = *puVar14;
      } while (*puVar14 == uVar16);
    }
    uVar16 = uVar18;
    ClearExclusiveLocal();
  } while( true );
  while( true ) {
    uVar1 = uVar18 & 0xffff;
    uVar18 = uVar18 >> 8;
    piVar17 = *(int **)(((uint)piVar17 & 0xfffffffe) + (uVar1 >> 8) * 4);
    DataMemoryBarrier(0xb);
    if (piVar17 == (int *)0x0) break;
LAB_009b0474:
    if (((uint)piVar17 & 1) == 0) {
      bVar12 = piVar17[3] == uVar16;
      break;
    }
  }
LAB_009b04c8:
  local_34 = (int **)CONCAT31(local_34._1_3_,bVar12);
  local_38 = (int ****)pppiVar19;
  FUN_009bd960(DAT_018d7f80,DAT_018d7f84,DAT_018d7f88,DAT_018d7f8c,param_2,param_3);
  uVar2 = DAT_018d7f90;
  puVar15 = (undefined4 *)thunk_FUN_016d4a50(0x38);
  if (puVar15 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(4,0x38);
  }
  puVar15[8] = ppppiVar5;
  puVar15[10] = uVar11;
  puVar15[0xb] = local_48;
  puVar15[0xc] = local_44;
  puVar15[2] = ppppiVar3;
  puVar15[3] = puVar6;
  puVar15[4] = uVar9;
  puVar15[5] = ppppiVar4;
  puVar15[6] = puVar7;
  puVar15[9] = puVar8;
  puVar15[0xd] = local_40;
  *puVar15 = param_2;
  puVar15[1] = param_3;
  puVar15[7] = uVar10;
  FUN_009bee98(&local_30,uVar2);
  uVar9 = local_28;
  puVar6 = local_2c;
  if (local_30 == (int ****)0x0) {
    FUN_009bf62c(&local_30);
    FUN_009ccc20(pppiVar19);
  }
  else {
    if (local_30 != (int ****)&DAT_00000001) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa464(&DAT_00419463,0x28,&DAT_0186a11c);
    }
    FUN_009ccc20(pppiVar19);
    FUN_009be88c(puVar6,uVar9);
    if (uVar9 != 0xffffffff) {
      piVar17 = (int *)(uVar9 + 4);
      DataMemoryBarrier(0xb);
      do {
        iVar13 = *piVar17;
        bVar12 = (bool)hasExclusiveAccess(piVar17);
      } while (!bVar12);
      *piVar17 = iVar13 + -1;
      if (iVar13 == 1) {
        DataMemoryBarrier(0xb);
        thunk_FUN_016d3fb4(uVar9);
      }
    }
  }
  local_38 = (int ****)param_2;
  local_34 = param_3;
  FUN_009bea90(&local_30,&local_38);
  if ((local_28 & 0xff) == 2) {
                    /* WARNING: Subroutine does not return */
    FUN_00fb74b8(&DAT_003498b0,0x2a,&DAT_0186995c);
  }
  *param_1 = local_30;
  param_1[1] = local_2c;
  param_1[2] = local_28;
  return;
}


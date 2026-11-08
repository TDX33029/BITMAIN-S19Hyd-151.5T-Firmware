// FUN_00ee735c @ 00ee735c size=1004 calls_out=11 calls_in=1
// strings: 

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_00ee735c(int *param_1,int *param_2,undefined4 param_3)

{
  bool bVar1;
  undefined4 *puVar2;
  uint uVar3;
  code *pcVar4;
  undefined4 *extraout_r2;
  undefined4 ******ppppppuVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  undefined4 uVar13;
  undefined4 *puVar14;
  int *piVar15;
  undefined8 uVar16;
  undefined4 ******local_68;
  int local_64;
  int local_60;
  undefined1 auStack_5c [4];
  int iStack_58;
  int iStack_54;
  undefined4 ******local_4c;
  int local_48;
  int local_44;
  byte local_40 [4];
  undefined4 *local_3c;
  undefined4 *******local_38;
  undefined4 *local_34;
  undefined4 *******local_30;
  int local_2c;
  int local_28;
  
  iVar7 = param_2[7];
  iVar9 = param_2[8];
  uVar16 = thunk_FUN_016de0ee(param_1,8,param_3,param_2[6]);
  piVar15 = (int *)((int)uVar16 + (int)((ulonglong)uVar16 >> 0x20));
  local_68 = (undefined4 ******)*extraout_r2;
  local_64 = extraout_r2[1];
  local_60 = extraout_r2[2];
  if (*piVar15 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00fb715c(&DAT_0187bb88);
  }
  iVar6 = param_2[1];
  iVar8 = param_2[2];
  iVar10 = param_2[3];
  iVar11 = param_2[4];
  iVar12 = param_2[5];
  piVar15[2] = *param_2;
  piVar15[3] = iVar6;
  piVar15[4] = iVar8;
  piVar15[5] = iVar10;
  piVar15[6] = iVar11;
  piVar15[7] = iVar12;
  DataMemoryBarrier(0xb);
  iStack_58 = iVar7;
  iStack_54 = iVar9;
  if (DAT_018d914c != 0) {
    local_30 = &local_4c;
    local_4c = (undefined4 ******)&DAT_018d914c;
    FUN_015eedc4(&DAT_018d914c,1,&local_30,&DAT_0187c2e0,&DAT_018ac9b8);
  }
  iVar7 = local_60;
  iVar9 = local_64;
  if (DAT_018d9150 == '\0') {
    ppppppuVar5 = &local_68;
    goto LAB_00ee7618;
  }
  local_44 = local_60;
  local_48 = local_64;
  local_4c = local_68;
  DataMemoryBarrier(0xb);
  if (DAT_018dad90 != 0) {
    local_30 = &local_38;
    local_38 = (undefined4 *******)&DAT_018dad90;
    FUN_015eedc4(&DAT_018dad90,1,&local_30,&DAT_0187c308,&DAT_018ac9b8);
  }
  do {
    if (DAT_018dad94 != 0) {
      ClearExclusiveLocal();
      FUN_015bf680(&DAT_018dad94);
      goto LAB_00ee743c;
    }
    bVar1 = (bool)hasExclusiveAccess(0x18dad94);
  } while (!bVar1);
  DAT_018dad94 = 1;
  DataMemoryBarrier(0xb);
LAB_00ee743c:
  if ((DAT_018dd988 & 0x7fffffff) == 0) {
    if (DAT_018dad98 == '\0') {
      uVar3 = 0;
      goto LAB_00ee74a8;
    }
LAB_00ee7460:
    if (((DAT_018dd988 & 0x7fffffff) != 0) && (iVar7 = FUN_015bf3f8(), iVar7 == 0)) {
      DAT_018dad98 = '\x01';
    }
LAB_00ee7478:
    DataMemoryBarrier(0xb);
    do {
      bVar1 = (bool)hasExclusiveAccess(0x18dad94);
      iVar7 = DAT_018dad94;
    } while (!bVar1);
  }
  else {
    uVar3 = FUN_015bf3f8();
    uVar3 = uVar3 ^ 1;
    if (DAT_018dad98 != '\0') {
      if (uVar3 == 0) goto LAB_00ee7460;
      goto LAB_00ee7478;
    }
LAB_00ee74a8:
    if (iVar7 != 0) {
      iVar7 = iVar7 * 0x140;
      do {
        FUN_00ee7e10(&local_30,iVar9);
        iVar6 = local_2c;
        if (local_30 == (undefined4 *******)&DAT_80000000) {
          FUN_005c3974(local_2c);
LAB_00ee74e8:
          thunk_FUN_016d3fb4(iVar6);
        }
        else {
          local_34 = &DAT_006043a8;
          local_38 = &local_30;
          FUN_00e9d860(local_40,&DAT_018dad9c,&DAT_00580c3b,&local_38);
          puVar2 = local_3c;
          if ((4 < local_40[0]) || (iVar6 = local_2c, local_40[0] == 3)) {
            uVar13 = *local_3c;
            puVar14 = (undefined4 *)local_3c[1];
            pcVar4 = (code *)*puVar14;
            if (pcVar4 != (code *)0x0) {
              (*pcVar4)(uVar13);
            }
            if (puVar14[1] != 0) {
              thunk_FUN_016d3fb4(uVar13);
            }
            thunk_FUN_016d3fb4(puVar2);
            iVar6 = local_2c;
          }
          local_2c = iVar6;
          if (local_30 != (undefined4 *******)0x0) goto LAB_00ee74e8;
        }
        iVar9 = iVar9 + 0x140;
        iVar7 = iVar7 + -0x140;
      } while (iVar7 != 0);
    }
    if (((uVar3 == 0) && ((DAT_018dd988 & 0x7fffffff) != 0)) && (iVar7 = FUN_015bf3f8(), iVar7 == 0)
       ) {
      DAT_018dad98 = '\x01';
    }
    DataMemoryBarrier(0xb);
    do {
      bVar1 = (bool)hasExclusiveAccess(0x18dad94);
      iVar7 = DAT_018dad94;
    } while (!bVar1);
  }
  DAT_018dad94 = 0;
  if (iVar7 == 2) {
    FUN_016d6968(0xf0,&DAT_018dad94,0x81,1);
  }
  ppppppuVar5 = &local_4c;
LAB_00ee7618:
  FUN_00ee7848(&local_30,auStack_5c,ppppppuVar5);
  if (*piVar15 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00fb715c(&DAT_0187bb98);
  }
  piVar15[6] = (int)&DAT_3b9aca00;
  param_1[6] = (int)local_30;
  param_1[7] = local_2c;
  param_1[8] = local_28;
  iVar7 = param_2[1];
  iVar9 = param_2[2];
  iVar6 = param_2[3];
  iVar8 = param_2[4];
  iVar10 = param_2[5];
  *param_1 = *param_2;
  param_1[1] = iVar7;
  param_1[2] = iVar9;
  param_1[3] = iVar6;
  param_1[4] = iVar8;
  param_1[5] = iVar10;
  return;
}


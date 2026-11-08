// FUN_014dd4cc @ 014dd4cc size=1792 calls_out=20 calls_in=1
// strings: 

void FUN_014dd4cc(int *param_1,int param_2,undefined4 param_3)

{
  code *pcVar1;
  bool bVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  undefined1 uVar7;
  undefined4 uVar8;
  undefined4 *puVar9;
  int *piVar10;
  undefined4 *puVar11;
  undefined8 uVar12;
  int local_bc0;
  int iStack_bbc;
  undefined4 *puStack_bb8;
  undefined1 auStack_bb4 [732];
  undefined1 auStack_8d8 [736];
  int local_5f8;
  undefined4 local_5f4;
  undefined4 local_5f0;
  int local_5ec;
  int local_310;
  int local_30c;
  undefined4 *local_308;
  int *piStack_304;
  undefined4 uStack_300;
  undefined4 local_2fc;
  undefined4 uStack_2f8;
  undefined4 uStack_2f4;
  undefined4 uStack_2f0;
  undefined4 uStack_2ec;
  undefined4 uStack_2e8;
  
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(undefined1 *)(param_2 + 0x129)) {
  case 0:
    *(undefined1 *)(param_2 + 299) = 0;
    FUN_016dd1aa(param_2 + 0x48,param_2,0x48);
    piVar10 = (int *)(param_2 + 0xc4);
    *(undefined1 *)(param_2 + 300) = 1;
    *piVar10 = *(int *)(param_2 + 0x98);
    *(undefined4 *)(param_2 + 200) = *(undefined4 *)(param_2 + 0x9c);
    *(undefined4 *)(param_2 + 0xcc) = *(undefined4 *)(param_2 + 0xa0);
    *(undefined4 *)(param_2 + 0xd0) = *(undefined4 *)(param_2 + 0xa4);
    *(undefined4 *)(param_2 + 0xd4) = *(undefined4 *)(param_2 + 0xa8);
    *(undefined4 *)(param_2 + 0xd8) = *(undefined4 *)(param_2 + 0xac);
    *(undefined4 *)(param_2 + 0xdc) = *(undefined4 *)(param_2 + 0xb0);
    *(undefined4 *)(param_2 + 0xe0) = *(undefined4 *)(param_2 + 0xb4);
    *(undefined4 *)(param_2 + 0xe4) = *(undefined4 *)(param_2 + 0xb8);
    *(undefined4 *)(param_2 + 0xe8) = *(undefined4 *)(param_2 + 0xbc);
    *(undefined4 *)(param_2 + 0xec) = *(undefined4 *)(param_2 + 0xc0);
    piVar3 = *(int **)(param_2 + 0x2c);
    *(undefined1 *)(param_2 + 0x12a) = *(undefined1 *)(param_2 + 0x128);
    *(int **)(param_2 + 0xf0) = piVar3;
    *(undefined4 *)(param_2 + 0xf4) = *(undefined4 *)(param_2 + 0x30);
    *(undefined4 *)(param_2 + 0xf8) = *(undefined4 *)(param_2 + 0x34);
    *(undefined4 *)(param_2 + 0xfc) = *(undefined4 *)(param_2 + 0x80);
    do {
      iVar4 = *piVar3;
      bVar2 = (bool)hasExclusiveAccess(piVar3);
    } while (!bVar2);
    *piVar3 = iVar4 + 1;
    if (iVar4 < 0) {
LAB_014ddbcc:
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xfdee,0x14ddbcc);
      (*pcVar1)();
    }
    piVar6 = *(int **)(param_2 + 0xf4);
    uVar8 = *(undefined4 *)(param_2 + 0xf8);
    do {
      iVar4 = *piVar6;
      bVar2 = (bool)hasExclusiveAccess(piVar6);
    } while (!bVar2);
    *piVar6 = iVar4 + 1;
    if (iVar4 < 0) goto LAB_014ddbcc;
    *(int **)(param_2 + 0x100) = piVar3;
    *(undefined1 *)(param_2 + 299) = 1;
    *(int **)(param_2 + 0x104) = piVar6;
    *(undefined4 *)(param_2 + 0x108) = uVar8;
    if (((*(char *)(param_2 + 0x8d) != '\x01') && (*(char *)piVar10 == '\x01')) &&
       (*(char *)(param_2 + 0xc5) == '\x01')) {
      iVar4 = FUN_014d8990((int *)(param_2 + 0x100));
      *(undefined1 *)(iVar4 + 0x8b) = 1;
    }
    local_5f8 = *(int *)(param_2 + 0x100);
    local_5f4 = *(undefined4 *)(param_2 + 0x104);
    local_5f0 = *(undefined4 *)(param_2 + 0x108);
    piVar3 = *(int **)(param_2 + 0xfc);
    *(undefined1 *)(param_2 + 299) = 0;
    do {
      iVar4 = *piVar3;
      bVar2 = (bool)hasExclusiveAccess(piVar3);
    } while (!bVar2);
    *piVar3 = iVar4 + 1;
    if (iVar4 < 0) goto LAB_014ddbcc;
    local_310 = local_5f8;
    local_30c = local_5f4;
    local_308 = (undefined4 *)local_5f0;
    piStack_304 = piVar3;
    puVar11 = (undefined4 *)thunk_FUN_016d4a50(8);
    if (puVar11 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600874(4,8);
    }
    *(int *)(param_2 + 0x10c) = local_310;
    *puVar11 = 1;
    puVar11[1] = 1;
    *(undefined1 *)(param_2 + 0x124) = 0;
    *(undefined1 *)(param_2 + 300) = 0;
    *(undefined4 **)(param_2 + 0x11c) = puVar11;
    *(int *)(param_2 + 0x110) = local_30c;
    *(undefined4 **)(param_2 + 0x114) = local_308;
    *(int **)(param_2 + 0x118) = piVar3;
    *(undefined **)(param_2 + 0x120) = &DAT_018a6114;
    local_310 = *piVar10;
    local_30c = *(int *)(param_2 + 200);
    local_308 = *(undefined4 **)(param_2 + 0xcc);
    piStack_304 = *(int **)(param_2 + 0xd0);
    uStack_300 = *(undefined4 *)(param_2 + 0xd4);
    local_2fc = *(undefined4 *)(param_2 + 0xd8);
    uStack_2f8 = *(undefined4 *)(param_2 + 0xdc);
    uStack_2f4 = *(undefined4 *)(param_2 + 0xe0);
    uStack_2f0 = *(undefined4 *)(param_2 + 0xe4);
    uStack_2ec = *(undefined4 *)(param_2 + 0xe8);
    uStack_2e8 = *(undefined4 *)(param_2 + 0xec);
    uVar12 = FUN_014c281c((int *)(param_2 + 0x10c));
    *(undefined8 *)(param_2 + 0x90) = uVar12;
    break;
  case 1:
                    /* WARNING: Subroutine does not return */
    FUN_00fb7ca0(&DAT_018a6970);
  case 2:
                    /* WARNING: Subroutine does not return */
    FUN_00fb7cc0(&DAT_018a6970);
  case 3:
    uVar12 = *(undefined8 *)(param_2 + 0x90);
  }
  (**(code **)((int)((ulonglong)uVar12 >> 0x20) + 0xc))(&local_310,(int)uVar12,param_3);
  puVar11 = local_308;
  iVar4 = local_30c;
  iVar5 = local_310;
  if (local_310 == 4) {
    *(undefined1 *)((int)param_1 + 9) = 3;
    *(undefined1 *)(param_2 + 0x129) = 3;
    return;
  }
  FUN_016dd1aa(auStack_8d8,&piStack_304,0x2dc);
  uVar8 = *(undefined4 *)(param_2 + 0x90);
  puVar9 = *(undefined4 **)(param_2 + 0x94);
  if ((code *)*puVar9 != (code *)0x0) {
    (*(code *)*puVar9)(uVar8);
  }
  if (puVar9[1] != 0) {
    thunk_FUN_016d3fb4(uVar8);
  }
  if (iVar5 == 3) {
LAB_014dd72c:
    FUN_014c14a4(param_2 + 0x10c);
    piVar3 = *(int **)(param_2 + 0xfc);
    *(undefined1 *)(param_2 + 299) = 0;
    DataMemoryBarrier(0xb);
    do {
      iVar5 = *piVar3;
      bVar2 = (bool)hasExclusiveAccess(piVar3);
    } while (!bVar2);
    *piVar3 = iVar5 + -1;
    if (iVar5 == 1) {
      DataMemoryBarrier(0xb);
      FUN_01561b24(*(undefined4 *)(param_2 + 0xfc));
    }
    piVar3 = *(int **)(param_2 + 0xf0);
    DataMemoryBarrier(0xb);
    do {
      iVar5 = *piVar3;
      bVar2 = (bool)hasExclusiveAccess(piVar3);
    } while (!bVar2);
    *piVar3 = iVar5 + -1;
    if (iVar5 == 1) {
      DataMemoryBarrier(0xb);
      FUN_010c353c(*(undefined4 *)(param_2 + 0xf0));
    }
    piVar3 = *(int **)(param_2 + 0xf4);
    DataMemoryBarrier(0xb);
    do {
      iVar5 = *piVar3;
      bVar2 = (bool)hasExclusiveAccess(piVar3);
    } while (!bVar2);
    *piVar3 = iVar5 + -1;
    if (iVar5 == 1) {
      DataMemoryBarrier(0xb);
      FUN_0089ddfc(*(undefined4 *)(param_2 + 0xf4),*(undefined4 *)(param_2 + 0xf8));
    }
    piVar3 = *(int **)(param_2 + 0x84);
    *(undefined1 *)(param_2 + 300) = 0;
    DataMemoryBarrier(0xb);
    do {
      iVar5 = *piVar3;
      bVar2 = (bool)hasExclusiveAccess(piVar3);
    } while (!bVar2);
    *piVar3 = iVar5 + -1;
    if (iVar5 == 1) {
      DataMemoryBarrier(0xb);
      FUN_01561b24(*(undefined4 *)(param_2 + 0x84));
    }
    piVar3 = *(int **)(param_2 + 0x88);
    DataMemoryBarrier(0xb);
    do {
      iVar5 = *piVar3;
      bVar2 = (bool)hasExclusiveAccess(piVar3);
    } while (!bVar2);
    *piVar3 = iVar5 + -1;
    if (iVar5 == 1) {
      DataMemoryBarrier(0xb);
      FUN_0149e51c(*(undefined4 *)(param_2 + 0x88));
    }
    if (*(char *)(param_2 + 0x70) != '\x02') {
      (**(code **)(*(int *)(param_2 + 0x60) + 0x10))
                (param_2 + 0x6c,*(undefined4 *)(param_2 + 100),*(undefined4 *)(param_2 + 0x68));
    }
    piVar3 = *(int **)(param_2 + 0x58);
    if (piVar3 == (int *)0x0) {
      uVar7 = 2;
      goto LAB_014ddb08;
    }
    DataMemoryBarrier(0xb);
    do {
      iVar5 = *piVar3;
      bVar2 = (bool)hasExclusiveAccess(piVar3);
    } while (!bVar2);
    *piVar3 = iVar5 + -1;
    uVar7 = 2;
  }
  else {
    FUN_016dd1aa(auStack_bb4,auStack_8d8,0x2dc);
    local_bc0 = iVar5;
    iStack_bbc = iVar4;
    puStack_bb8 = puVar11;
    if (iVar5 == 2) {
      FUN_016dd1aa(&local_310,&local_bc0,0x2e8);
      iVar4 = thunk_FUN_016d4a50(0x2e8);
      if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00600874(8,0x2e8);
      }
      FUN_016dd1aa(iVar4,&local_bc0,0x2e8);
      uVar7 = 0;
      puVar9 = (undefined4 *)(uint)*(byte *)(param_2 + 0x12a);
      puVar11 = (undefined4 *)&DAT_018a5e60;
    }
    else {
      FUN_016dd1aa(&local_5f8,&local_bc0,0x2e8);
      if (*(char *)(param_2 + 0x8d) == '\0') {
        if (local_5ec == -1) {
                    /* WARNING: Subroutine does not return */
          FUN_00faa444(&DAT_018ad11c);
        }
        local_310 = 0;
        iVar4 = FUN_016d98a4(local_5ec,6,1,&local_310,4);
        if (iVar4 == -1) {
          piVar3 = (int *)FUN_016d2bc8();
          local_30c = *piVar3;
          local_310 = 0;
          iVar4 = FUN_01495af8(&local_310);
          FUN_014ddf4c(&local_5f8);
          puVar11 = &DAT_018a500c;
          if (local_bc0 == 2) {
            FUN_014dd22c(&local_bc0);
          }
          goto LAB_014dd72c;
        }
      }
      FUN_016dd1aa(&local_310,&local_5f8,0x2e8);
      iVar4 = thunk_FUN_016d4a50(0x2e8);
      if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00600874(8,0x2e8);
      }
      FUN_016dd1aa(iVar4,&local_5f8,0x2e8);
      uVar7 = *(undefined1 *)(param_2 + 0x8e);
      puVar9 = (undefined4 *)(uint)*(byte *)(param_2 + 0x12a);
      puVar11 = (undefined4 *)&UNK_018a6040;
      if (local_bc0 == 2) {
        FUN_014dd22c(&local_bc0);
      }
    }
    FUN_014c14a4(param_2 + 0x10c);
    piVar3 = *(int **)(param_2 + 0xfc);
    *(undefined1 *)(param_2 + 299) = 0;
    DataMemoryBarrier(0xb);
    do {
      iVar5 = *piVar3;
      bVar2 = (bool)hasExclusiveAccess(piVar3);
    } while (!bVar2);
    *piVar3 = iVar5 + -1;
    if (iVar5 == 1) {
      DataMemoryBarrier(0xb);
      FUN_01561b24(*(undefined4 *)(param_2 + 0xfc));
    }
    piVar3 = *(int **)(param_2 + 0xf0);
    DataMemoryBarrier(0xb);
    do {
      iVar5 = *piVar3;
      bVar2 = (bool)hasExclusiveAccess(piVar3);
    } while (!bVar2);
    *piVar3 = iVar5 + -1;
    if (iVar5 == 1) {
      DataMemoryBarrier(0xb);
      FUN_010c353c(*(undefined4 *)(param_2 + 0xf0));
    }
    piVar3 = *(int **)(param_2 + 0xf4);
    DataMemoryBarrier(0xb);
    do {
      iVar5 = *piVar3;
      bVar2 = (bool)hasExclusiveAccess(piVar3);
    } while (!bVar2);
    *piVar3 = iVar5 + -1;
    if (iVar5 == 1) {
      DataMemoryBarrier(0xb);
      FUN_0089ddfc(*(undefined4 *)(param_2 + 0xf4),*(undefined4 *)(param_2 + 0xf8));
    }
    piVar3 = *(int **)(param_2 + 0x84);
    *(undefined1 *)(param_2 + 300) = 0;
    DataMemoryBarrier(0xb);
    do {
      iVar5 = *piVar3;
      bVar2 = (bool)hasExclusiveAccess(piVar3);
    } while (!bVar2);
    *piVar3 = iVar5 + -1;
    if (iVar5 == 1) {
      DataMemoryBarrier(0xb);
      FUN_01561b24(*(undefined4 *)(param_2 + 0x84));
    }
    piVar3 = *(int **)(param_2 + 0x88);
    DataMemoryBarrier(0xb);
    do {
      iVar5 = *piVar3;
      bVar2 = (bool)hasExclusiveAccess(piVar3);
    } while (!bVar2);
    *piVar3 = iVar5 + -1;
    if (iVar5 == 1) {
      DataMemoryBarrier(0xb);
      FUN_0149e51c(*(undefined4 *)(param_2 + 0x88));
    }
    if (*(char *)(param_2 + 0x70) != '\x02') {
      (**(code **)(*(int *)(param_2 + 0x60) + 0x10))
                (param_2 + 0x6c,*(undefined4 *)(param_2 + 100),*(undefined4 *)(param_2 + 0x68));
    }
    piVar3 = *(int **)(param_2 + 0x58);
    if (piVar3 == (int *)0x0) goto LAB_014ddb08;
    DataMemoryBarrier(0xb);
    do {
      iVar5 = *piVar3;
      bVar2 = (bool)hasExclusiveAccess(piVar3);
    } while (!bVar2);
    *piVar3 = iVar5 + -1;
  }
  if (iVar5 == 1) {
    DataMemoryBarrier(0xb);
    FUN_0143daec(*(undefined4 *)(param_2 + 0x58),*(undefined4 *)(param_2 + 0x5c));
  }
LAB_014ddb08:
  *(undefined1 *)((int)param_1 + 9) = uVar7;
  *(char *)(param_1 + 2) = (char)puVar9;
  *param_1 = iVar4;
  param_1[1] = (int)puVar11;
  *(undefined1 *)(param_2 + 0x129) = 1;
  return;
}


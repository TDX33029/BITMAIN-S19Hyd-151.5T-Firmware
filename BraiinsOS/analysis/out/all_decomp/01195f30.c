// FUN_01195f30 @ 01195f30 size=444 calls_out=8 calls_in=1
// strings: multipleOf

void FUN_01195f30(undefined4 *param_1,int param_2,undefined4 param_3,char *param_4)

{
  code *pcVar1;
  char cVar2;
  bool bVar3;
  int *piVar4;
  int iVar5;
  undefined8 *puVar6;
  double *pdVar7;
  undefined *puVar8;
  undefined4 uVar9;
  undefined4 extraout_s1;
  double dVar10;
  undefined8 uVar11;
  undefined4 local_b0;
  undefined8 uStack_ac;
  undefined1 *local_90;
  undefined2 local_8c;
  undefined1 local_58;
  char *local_54;
  int *local_40;
  undefined4 uStack_3c;
  undefined8 uStack_38;
  
  cVar2 = *param_4;
  uVar11 = FUN_0123ab30(*(undefined4 *)(param_2 + 0x38),*(undefined4 *)(param_2 + 0x3c),"multipleOf"
                        ,10);
  piVar4 = (int *)uVar11;
  if (cVar2 == '\x02') {
    pdVar7 = (double *)(param_4 + 0x10);
    if (*(int *)(param_4 + 8) == 0) {
      dVar10 = (double)FUN_01845f30(*(undefined4 *)pdVar7,*(undefined4 *)(param_4 + 0x14));
    }
    else if (*(int *)(param_4 + 8) == 1) {
      dVar10 = (double)FUN_01845d5c(*(undefined4 *)pdVar7,*(undefined4 *)(param_4 + 0x14));
    }
    else {
      dVar10 = *pdVar7;
    }
    uVar9 = FUN_016d62a0(SUB84(dVar10,0));
    puVar6 = (undefined8 *)thunk_FUN_016d4a50(0x10);
    if (dVar10 - (double)CONCAT44(extraout_s1,uVar9) == 0.0) {
      if (puVar6 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00600874(8,0x10);
      }
      puVar8 = &DAT_018891e8;
    }
    else {
      if (puVar6 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00600874(8,0x10);
      }
      puVar8 = &DAT_018891c8;
    }
    puVar6[1] = dVar10;
    *puVar6 = uVar11;
LAB_011960a4:
    param_1[1] = puVar6;
    param_1[2] = puVar8;
    *param_1 = 1;
    return;
  }
  do {
    iVar5 = *piVar4;
    bVar3 = (bool)hasExclusiveAccess(piVar4);
  } while (!bVar3);
  *piVar4 = iVar5 + 1;
  if (-1 < iVar5) {
    DataMemoryBarrier(0xb);
    if (DAT_018da8bc != 0) {
      FUN_0120d52c();
    }
    do {
      iVar5 = *DAT_018da8b4;
      bVar3 = (bool)hasExclusiveAccess(DAT_018da8b4);
    } while (!bVar3);
    *DAT_018da8b4 = iVar5 + 1;
    if (-1 < iVar5) {
      local_40 = DAT_018da8b4;
      uStack_3c = DAT_018da8b8;
      local_58 = 6;
      local_8c = 0x1000;
      local_90 = &DAT_80000028;
      local_b0 = 1;
      local_54 = param_4;
      uStack_38 = uVar11;
      uStack_ac = uVar11;
      puVar8 = (undefined *)thunk_FUN_016d4a50(0x80);
      if (puVar8 == (undefined *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00600874(8,0x80);
      }
      FUN_016dd1aa(puVar8,&local_b0,0x80);
      puVar6 = (undefined8 *)0x0;
      goto LAB_011960a4;
    }
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)software_udf(0xfdee,0x11960f0);
  (*pcVar1)();
}


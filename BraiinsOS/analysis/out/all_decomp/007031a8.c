// FUN_007031a8 @ 007031a8 size=852 calls_out=11 calls_in=2
// strings: 

undefined4 FUN_007031a8(int *param_1,undefined4 *param_2)

{
  bool bVar1;
  undefined1 uVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  code *pcVar6;
  int iVar7;
  uint uVar8;
  byte *pbVar9;
  undefined4 uVar10;
  undefined4 *puVar11;
  undefined1 local_2d;
  undefined1 *local_2c;
  code *local_28;
  
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch((char)param_1[0xf]) {
  case '\0':
    iVar3 = param_1[1];
    iVar5 = param_1[2];
    iVar7 = *param_1 + 4;
    param_1[5] = iVar3;
    param_1[6] = iVar5;
    param_1[9] = iVar7;
    *(undefined1 *)((int)param_1 + 0x29) = 0;
LAB_00703234:
    param_1[7] = iVar7;
    *(undefined1 *)(param_1 + 10) = 1;
    param_1[0xb] = iVar7 + 4;
    param_1[0xc] = -1;
    param_1[3] = iVar3;
    param_1[4] = iVar5;
    break;
  case '\x01':
                    /* WARNING: Subroutine does not return */
    FUN_00fb7ca0(&DAT_01859ce4);
  case '\x02':
                    /* WARNING: Subroutine does not return */
    FUN_00fb7cc0(&DAT_01859ce4);
  case '\x03':
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(*(undefined1 *)((int)param_1 + 0x29)) {
    case 0:
      iVar3 = param_1[5];
      iVar5 = param_1[6];
      iVar7 = param_1[9];
      goto LAB_00703234;
    case 1:
                    /* WARNING: Subroutine does not return */
      FUN_00fb7ca0(&DAT_01859d04);
    case 2:
                    /* WARNING: Subroutine does not return */
      FUN_00fb7cc0(&DAT_01859d04);
    case 4:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
      switch((char)param_1[0xe]) {
      case '\0':
        piVar4 = (int *)param_1[0xb];
LAB_007033c0:
        param_1[0xc] = *piVar4 + 8;
        param_1[0xd] = -1;
        break;
      case '\x01':
                    /* WARNING: Subroutine does not return */
        FUN_00fb7ca0(&DAT_01859d24);
      case '\x02':
                    /* WARNING: Subroutine does not return */
        FUN_00fb7cc0(&DAT_01859d24);
      }
      iVar3 = FUN_006f5654(param_1 + 0xc,*param_2);
      if (iVar3 != 0) {
        iVar5 = param_1[0xc];
        if (iVar5 != 0) {
          FUN_006f5fbc(iVar5,param_1[0xd],1);
        }
        if (*(int *)(iVar3 + 0x20) != 0) {
          FUN_00994994();
        }
        FUN_006f625c(iVar3);
        *(undefined1 *)(param_1 + 0xe) = 1;
        FUN_006f625c(param_1[8]);
        if ((char)param_1[10] != '\0') {
          iVar3 = param_1[3];
          puVar11 = (undefined4 *)param_1[4];
          pcVar6 = (code *)*puVar11;
          if (pcVar6 != (code *)0x0) {
            (*pcVar6)(iVar3);
          }
          if (puVar11[1] != 0) {
            thunk_FUN_016d3fb4(iVar3);
          }
        }
        uVar10 = 1;
        *(undefined1 *)(param_1 + 10) = 0;
        goto LAB_00703470;
      }
      *(undefined1 *)(param_1 + 0xe) = 3;
      uVar2 = 4;
      goto LAB_0070349c;
    }
  }
  iVar3 = FUN_006f59b4(param_1 + 0xb,param_2);
  if (iVar3 != 0) {
    param_1[8] = iVar3;
    if (param_1[0xb] != 0) {
      FUN_006f5fbc(param_1[0xb],param_1[0xc],1);
      iVar3 = param_1[8];
    }
    uVar8 = (uint)*(byte *)(*(int *)(iVar3 + 0x20) + 8);
    while (uVar2 = (undefined1)uVar8, uVar8 - 1 < 2) {
      pbVar9 = (byte *)(*(int *)(param_1[8] + 0x20) + 8);
      while (*pbVar9 == uVar8) {
        bVar1 = (bool)hasExclusiveAccess(pbVar9);
        if (bVar1) {
          *pbVar9 = 3;
          uVar10 = DAT_018d7c90;
          DataMemoryBarrier(0xb);
          local_2d = uVar2;
          if (DAT_018d7c7c == 0) {
            *(undefined1 *)(param_1 + 10) = 0;
            FUN_0077df34(uVar10,param_1[3],param_1[4],1);
          }
          *(undefined1 *)(param_1 + 0xe) = 0;
          piVar4 = (int *)param_1[7];
          param_1[0xb] = (int)piVar4;
          goto LAB_007033c0;
        }
      }
      ClearExclusiveLocal();
      uVar8 = (uint)*pbVar9;
    }
    if ((1 << uVar8 & 0x1d0U) == 0) {
      local_2c = &local_2d;
      local_28 = FUN_00702a34;
      local_2d = uVar2;
                    /* WARNING: Subroutine does not return */
      FUN_00faa478(&DAT_00575309,&local_2c,&DAT_01859d14);
    }
    FUN_006f625c(param_1[8]);
    iVar3 = param_1[3];
    puVar11 = (undefined4 *)param_1[4];
    pcVar6 = (code *)*puVar11;
    if (pcVar6 != (code *)0x0) {
      (*pcVar6)(iVar3);
    }
    if (puVar11[1] != 0) {
      thunk_FUN_016d3fb4(iVar3);
    }
    uVar10 = 0;
    *(undefined1 *)(param_1 + 10) = 0;
LAB_00703470:
    *(undefined1 *)((int)param_1 + 0x29) = 1;
    FUN_00703698(param_1 + 3);
    *(undefined1 *)(param_1 + 0xf) = 1;
    return uVar10;
  }
  uVar2 = 3;
LAB_0070349c:
  *(undefined1 *)((int)param_1 + 0x29) = uVar2;
  *(undefined1 *)(param_1 + 0xf) = 3;
  return 2;
}


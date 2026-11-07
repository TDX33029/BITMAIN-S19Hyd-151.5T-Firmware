// FUN_010cbfdc @ 010cbfdc size=864 calls_out=7 calls_in=1
// strings: Cannot write more after calling finish() | Writer must be present

void FUN_010cbfdc(undefined4 *param_1,undefined1 *param_2,undefined1 *param_3,uint param_4)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined1 *puVar4;
  int iVar5;
  undefined1 *puVar6;
  uint uVar7;
  int *piVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  
  if (param_4 != 0) {
    piVar8 = *(int **)(param_2 + 0x400);
    puVar4 = param_2 + 0x410;
    do {
      if (piVar8 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_015be724("Cannot write more after calling finish()",0x28,&DAT_018a4708);
      }
      uVar9 = *(uint *)(param_2 + 0x408);
      if (uVar9 != 0) {
        param_2[0x413] = 1;
        if (0x400 < uVar9) {
                    /* WARNING: Subroutine does not return */
          FUN_00faa36c(0,uVar9,0x400,&DAT_018a4578);
        }
        iVar5 = piVar8[2];
        if ((uint)(*piVar8 - iVar5) < uVar9) {
          FUN_010cdae0(piVar8,iVar5,uVar9);
          iVar5 = piVar8[2];
        }
        FUN_016dd1aa(piVar8[1] + iVar5,param_2,uVar9);
        iVar5 = piVar8[2];
        param_2[0x413] = 0;
        *(undefined4 *)(param_2 + 0x408) = 0;
        piVar8[2] = iVar5 + uVar9;
        goto LAB_010cc254;
      }
      uVar9 = *(uint *)(param_2 + 0x404);
      if (uVar9 == 0) {
        if (2 < param_4) {
          iVar5 = *(int *)(param_2 + 0x40c);
          iVar12 = 0;
          uVar7 = 0x300;
          uVar13 = 0;
          puVar6 = param_3;
          uVar9 = param_4;
          goto LAB_010cc128;
        }
        FUN_016dd1aa(puVar4,param_3,param_4);
        *(uint *)(param_2 + 0x404) = param_4;
        uVar9 = param_4;
      }
      else if (uVar9 + param_4 < 3) {
        if (2 < uVar9) {
                    /* WARNING: Subroutine does not return */
          FUN_00faa4a4(uVar9,3,&DAT_018a46d8);
        }
        puVar4[uVar9] = *param_3;
        *(uint *)(param_2 + 0x404) = uVar9 + 1;
        uVar9 = 1;
      }
      else {
        if (3 < uVar9) {
                    /* WARNING: Subroutine does not return */
          FUN_00faa36c(uVar9,3,3,&DAT_018a46f8);
        }
        uVar13 = 3 - uVar9;
        if (param_4 < uVar13) {
                    /* WARNING: Subroutine does not return */
          FUN_00faa36c(0,uVar13,param_4,&DAT_018a46e8);
        }
        FUN_016dd1aa(puVar4 + uVar9,param_3,uVar13);
        iVar12 = 4;
        iVar5 = *(int *)(param_2 + 0x40c);
        *(undefined4 *)(param_2 + 0x404) = 0;
        iVar10 = iVar5 + 3;
        uVar1 = *(undefined1 *)
                 (iVar10 + ((uint)((byte)param_2[0x411] >> 4) | ((byte)param_2[0x410] & 3) << 4));
        uVar2 = *(undefined1 *)(iVar10 + ((byte)param_2[0x412] & 0x3f));
        uVar3 = *(undefined1 *)(iVar10 + (uint)((byte)param_2[0x410] >> 2));
        param_2[2] = *(undefined1 *)
                      (iVar10 + (((byte)param_2[0x411] & 0xf) << 2 |
                                (uint)((byte)param_2[0x412] >> 6)));
        *param_2 = uVar3;
        param_2[1] = uVar1;
        param_2[3] = uVar2;
        uVar7 = 0x2fd;
        puVar6 = param_3 + uVar13;
        uVar9 = param_4 - uVar13;
LAB_010cc128:
        uVar11 = ((uint)((ulonglong)uVar9 * 0xaaaaaaab >> 0x20) & 0xfffffffe) + uVar9 / 3;
        if (uVar7 < uVar11) {
          uVar11 = uVar7;
        }
        iVar5 = FUN_0062e67c(iVar5,puVar6,uVar11,param_2 + iVar12,0x400 - iVar12);
        piVar8 = *(int **)(param_2 + 0x400);
        param_2[0x413] = 1;
        if (piVar8 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_00fb74b8("Writer must be present",0x16,&DAT_018a4568);
        }
        uVar9 = iVar5 + iVar12;
        if (0x400 < uVar9) {
                    /* WARNING: Subroutine does not return */
          FUN_00faa36c(0,uVar9,0x400,&DAT_018a4578);
        }
        iVar5 = piVar8[2];
        if ((uint)(*piVar8 - iVar5) < uVar9) {
          FUN_010cdae0(piVar8,iVar5,uVar9);
          iVar5 = piVar8[2];
        }
        FUN_016dd1aa(piVar8[1] + iVar5,param_2,uVar9);
        iVar5 = piVar8[2];
        param_2[0x413] = 0;
        piVar8[2] = iVar5 + uVar9;
        *(undefined4 *)(param_2 + 0x408) = 0;
        uVar9 = uVar11 + uVar13;
        if (uVar11 + uVar13 == 0) {
LAB_010cc254:
          *param_1 = 2;
          param_1[1] = &DAT_018aeae8;
          return;
        }
      }
      if (param_4 < uVar9) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa36c(uVar9,param_4,param_4,&DAT_018aeb00);
      }
      param_3 = param_3 + uVar9;
      param_4 = param_4 - uVar9;
    } while (param_4 != 0);
  }
  *(undefined1 *)param_1 = 4;
  return;
}


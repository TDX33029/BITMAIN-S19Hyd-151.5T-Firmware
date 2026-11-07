// FUN_0140a9f0 @ 0140a9f0 size=888 calls_out=7 calls_in=1
// strings: Cannot write more after calling finish() | Writer must be present

void FUN_0140a9f0(undefined4 *param_1,undefined1 *param_2,undefined1 *param_3,uint param_4)

{
  undefined1 uVar1;
  undefined1 *puVar2;
  int iVar3;
  undefined1 *puVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  int *piVar11;
  
  if (param_4 != 0) {
    piVar11 = *(int **)(param_2 + 0x400);
    puVar2 = param_2 + 0x410;
    do {
      if (piVar11 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_015be724("Cannot write more after calling finish()",0x28,&DAT_018a4708);
      }
      uVar6 = *(uint *)(param_2 + 0x408);
      if (uVar6 != 0) {
        param_2[0x413] = 1;
        if (0x400 < uVar6) {
                    /* WARNING: Subroutine does not return */
          FUN_00faa36c(0,uVar6,0x400,&DAT_018a4578);
        }
        iVar3 = piVar11[2];
        if ((uint)(*piVar11 - iVar3) < uVar6) {
          FUN_0148d72c(piVar11,iVar3,uVar6,1,1);
          iVar3 = piVar11[2];
        }
        FUN_016dd1aa(piVar11[1] + iVar3,param_2,uVar6);
        iVar3 = piVar11[2];
        param_2[0x413] = 0;
        *(undefined4 *)(param_2 + 0x408) = 0;
        piVar11[2] = iVar3 + uVar6;
        goto LAB_0140ac74;
      }
      uVar6 = *(uint *)(param_2 + 0x404);
      if (uVar6 == 0) {
        if (2 < param_4) {
          iVar3 = *(int *)(param_2 + 0x40c);
          iVar9 = 0;
          uVar5 = 0x300;
          uVar10 = 0;
          puVar4 = param_3;
          uVar6 = param_4;
          goto LAB_0140ab3c;
        }
        FUN_016dd1aa(puVar2,param_3,param_4);
        *(uint *)(param_2 + 0x404) = param_4;
        uVar6 = param_4;
      }
      else if (uVar6 + param_4 < 3) {
        if (2 < uVar6) {
                    /* WARNING: Subroutine does not return */
          FUN_00faa4a4(uVar6,3,&DAT_018a46d8);
        }
        puVar2[uVar6] = *param_3;
        *(uint *)(param_2 + 0x404) = uVar6 + 1;
        uVar6 = 1;
      }
      else {
        if (3 < uVar6) {
                    /* WARNING: Subroutine does not return */
          FUN_00faa36c(uVar6,3,3,&DAT_018a46f8);
        }
        uVar10 = 3 - uVar6;
        if (param_4 < uVar10) {
                    /* WARNING: Subroutine does not return */
          FUN_00faa36c(0,uVar10,param_4,&DAT_018a46e8);
        }
        FUN_016dd1aa(puVar2 + uVar6,param_3,uVar10);
        iVar9 = 4;
        iVar3 = *(int *)(param_2 + 0x40c);
        *(undefined4 *)(param_2 + 0x404) = 0;
        iVar7 = iVar3 + 3;
        uVar1 = *(undefined1 *)
                 (iVar7 + ((uint)((byte)param_2[0x411] >> 4) | ((byte)param_2[0x410] & 3) << 4));
        *param_2 = *(undefined1 *)(iVar7 + (uint)((byte)param_2[0x410] >> 2));
        uVar5 = 0x2fd;
        param_2[1] = uVar1;
        uVar1 = *(undefined1 *)
                 (iVar7 + (((byte)param_2[0x411] & 0xf) << 2 | (uint)((byte)param_2[0x412] >> 6)));
        param_2[3] = *(undefined1 *)(iVar7 + ((byte)param_2[0x412] & 0x3f));
        param_2[2] = uVar1;
        puVar4 = param_3 + uVar10;
        uVar6 = param_4 - uVar10;
LAB_0140ab3c:
        uVar8 = ((uint)((ulonglong)uVar6 * 0xaaaaaaab >> 0x20) & 0xfffffffe) + uVar6 / 3;
        if (uVar5 < uVar8) {
          uVar8 = uVar5;
        }
        iVar3 = FUN_0062e67c(iVar3,puVar4,uVar8,param_2 + iVar9,0x400 - iVar9);
        piVar11 = *(int **)(param_2 + 0x400);
        param_2[0x413] = 1;
        if (piVar11 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_00fb74b8("Writer must be present",0x16,&DAT_018a4568);
        }
        uVar6 = iVar3 + iVar9;
        if (0x400 < uVar6) {
                    /* WARNING: Subroutine does not return */
          FUN_00faa36c(0,uVar6,0x400,&DAT_018a4578);
        }
        iVar3 = piVar11[2];
        if ((uint)(*piVar11 - iVar3) < uVar6) {
          FUN_0148d72c(piVar11,iVar3,uVar6,1,1);
          iVar3 = piVar11[2];
        }
        FUN_016dd1aa(piVar11[1] + iVar3,param_2,uVar6);
        iVar3 = piVar11[2];
        param_2[0x413] = 0;
        piVar11[2] = iVar3 + uVar6;
        *(undefined4 *)(param_2 + 0x408) = 0;
        uVar6 = uVar8 + uVar10;
        if (uVar8 + uVar10 == 0) {
LAB_0140ac74:
          *param_1 = 2;
          param_1[1] = &DAT_018aeae8;
          return;
        }
      }
      if (param_4 < uVar6) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa36c(uVar6,param_4,param_4,&DAT_018aeb00);
      }
      param_3 = param_3 + uVar6;
      param_4 = param_4 - uVar6;
    } while (param_4 != 0);
  }
  *(undefined1 *)param_1 = 4;
  return;
}


// FUN_008e1da8 @ 008e1da8 size=848 calls_out=8 calls_in=3
// strings: 

/* WARNING: Heritage AFTER dead removal. Example location: s1 : 0x008e1fa4 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_008e1da8(uint *param_1,int param_2,undefined1 param_3,uint *param_4,int param_5,
                 uint *param_6,int param_7)

{
  bool bVar1;
  uint uVar2;
  int *piVar3;
  int iVar4;
  uint uVar5;
  uint *puVar6;
  undefined1 *puVar7;
  uint uVar8;
  uint uVar9;
  uint *puVar10;
  uint in_fpscr;
  double dVar11;
  ulonglong uVar12;
  uint local_38;
  uint local_34;
  undefined1 *local_30;
  
  if (param_7 != 0) {
    if (param_7 != 1) {
      uVar2 = *param_6;
      uVar8 = param_7 - 1U & 0x3fffffff;
      puVar6 = param_6;
      do {
        puVar6 = puVar6 + 1;
        uVar5 = *puVar6;
        if (uVar5 < uVar2) {
          param_6 = puVar6;
        }
        if (uVar5 <= uVar2) {
          uVar2 = uVar5;
        }
        uVar8 = uVar8 - 1;
      } while (uVar8 != 0);
    }
    if (param_5 != 0) {
      uVar2 = *param_6;
      puVar6 = param_4;
      if (param_5 != 1) {
        uVar8 = *param_4;
        uVar5 = param_5 - 1U & 0x3fffffff;
        puVar10 = param_4 + 1;
        do {
          uVar9 = *puVar10;
          if (uVar9 < uVar8) {
            puVar6 = puVar10;
          }
          if (uVar9 <= uVar8) {
            uVar8 = uVar9;
          }
          uVar5 = uVar5 - 1;
          puVar10 = puVar10 + 1;
        } while (uVar5 != 0);
      }
      uVar8 = *(uint *)(param_2 + 0x100);
      uVar5 = *(uint *)(param_2 + 0x104);
      puVar7 = *(undefined1 **)(param_2 + 0x108);
      uVar9 = *puVar6;
      *param_1 = uVar8;
      param_1[1] = uVar5;
      param_1[2] = (uint)puVar7;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
      switch(param_3) {
      case 1:
        if (uVar9 <= uVar2) {
          uVar8 = *(uint *)(param_2 + 0x134);
          uVar2 = *(uint *)(param_2 + 0x138);
          *param_1 = *(uint *)(param_2 + 0x130);
          param_1[1] = uVar8;
          param_1[2] = uVar2;
          return;
        }
      case 2:
        uVar8 = *(uint *)(param_2 + 0x144);
        uVar2 = *(uint *)(param_2 + 0x148);
        *param_1 = *(uint *)(param_2 + 0x140);
        param_1[1] = uVar8;
        param_1[2] = uVar2;
        return;
      case 3:
        FUN_006fe278(&local_38);
        if (local_30 != &DAT_3b9aca00) {
          puVar7 = local_30;
          uVar8 = local_38;
          uVar5 = local_34;
        }
        if (param_5 != 1) {
          uVar9 = param_5 - 1U & 0x3fffffff;
          uVar2 = *param_4;
          puVar6 = param_4 + 1;
          do {
            if (uVar2 <= *puVar6) {
              uVar2 = *puVar6;
              param_4 = puVar6;
            }
            uVar9 = uVar9 - 1;
            puVar6 = puVar6 + 1;
          } while (uVar9 != 0);
        }
        uVar2 = *param_4;
        uVar9 = *(uint *)(param_2 + 0x1cc);
        iVar4 = uVar2 - uVar9;
        if (uVar2 < uVar9 || iVar4 == 0) {
          iVar4 = uVar9 - uVar2;
        }
        dVar11 = (double)VectorUnsignedToFloat(iVar4,(byte)(in_fpscr >> 0x16) & 3);
        dVar11 = dVar11 / 1000000.0;
        FUN_016d5578(SUB84(dVar11,0),(int)((ulonglong)dVar11 >> 0x20),0);
        FUN_006fdfd0(SUB84(55.0 / dVar11,0),&local_38);
        bVar1 = local_34 <= uVar5 && (uint)(uVar8 <= local_38) <= local_34 - uVar5;
        if (local_38 == uVar8 && local_34 == uVar5) {
          bVar1 = local_30 < puVar7;
        }
        if (bVar1) {
          uVar5 = local_34;
          uVar8 = local_38;
          puVar7 = local_30;
        }
        *param_1 = uVar8;
        param_1[1] = uVar5;
        param_1[2] = (uint)puVar7;
        return;
      }
      if (uVar2 < uVar9) {
        FUN_006fe278(&local_38);
        if (local_30 != &DAT_3b9aca00) {
          *param_1 = local_38;
          param_1[1] = local_34;
          param_1[2] = (uint)local_30;
          return;
        }
      }
      else {
        uVar12 = FUN_007143c8();
        piVar3 = (int *)uVar12;
        if (*(char *)((int)piVar3 + 0x5a) == '\x01') {
          dVar11 = (double)FUN_01845f30(piVar3[2],piVar3[3]);
          FUN_006fdfd0(SUB84(dVar11 / 500.0,0),&local_38);
          uVar8 = local_38;
          uVar5 = local_34;
          puVar7 = local_30;
        }
        else {
          puVar7 = &DAT_3b9aca00;
        }
        if ((((uVar12 & 0x100000000) == 0) && ((DAT_018dd988 & 0x7fffffff) != 0)) &&
           (iVar4 = FUN_015bf3f8(), iVar4 == 0)) {
          *(undefined1 *)(piVar3 + 1) = 1;
        }
        DataMemoryBarrier(0xb);
        do {
          iVar4 = *piVar3;
          bVar1 = (bool)hasExclusiveAccess(piVar3);
        } while (!bVar1);
        *piVar3 = 0;
        if (iVar4 == 2) {
          FUN_016d6968(0xf0,piVar3,0x81,1);
        }
        if (puVar7 != &DAT_3b9aca00) {
          *param_1 = uVar8;
          param_1[1] = uVar5;
          param_1[2] = (uint)puVar7;
          return;
        }
      }
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00fb74b8(&DAT_0034ae54,0x16,&DAT_0186ac78);
}


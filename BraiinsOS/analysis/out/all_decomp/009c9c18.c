// FUN_009c9c18 @ 009c9c18 size=548 calls_out=4 calls_in=2
// strings: 

void FUN_009c9c18(uint *param_1,uint param_2,int param_3,undefined4 param_4,undefined4 param_5)

{
  char cVar1;
  bool bVar2;
  int *piVar3;
  uint *puVar4;
  int *piVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  uint *puVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint *local_2c;
  undefined1 local_28;
  
  if (param_2 == 0xffffffff) {
    return;
  }
  puVar9 = param_1 + 1;
  do {
    if (*puVar9 != 0) {
      ClearExclusiveLocal();
      FUN_015bf680(puVar9);
      goto LAB_009c9c54;
    }
    bVar2 = (bool)hasExclusiveAccess(puVar9);
  } while (!bVar2);
  *puVar9 = 1;
  DataMemoryBarrier(0xb);
LAB_009c9c54:
  uVar10 = 0;
  if ((DAT_018dd988 & 0x7fffffff) == 0) {
    cVar1 = (char)param_1[2];
  }
  else {
    uVar10 = FUN_015bf3f8();
    uVar10 = uVar10 ^ 1;
    cVar1 = (char)param_1[2];
  }
  if (cVar1 != '\0') {
    local_28 = (undefined1)uVar10;
    local_2c = puVar9;
                    /* WARNING: Subroutine does not return */
    FUN_00fb74f8(&DAT_00418ec6,0x2b,&local_2c,&DAT_0186a38c,&DAT_0187a790);
  }
  if (param_2 < param_1[5]) {
    uVar6 = param_1[7];
    puVar4 = (uint *)(param_1[4] + param_2 * 0xc);
    uVar8 = *puVar4;
    uVar11 = puVar4[1];
    uVar12 = puVar4[2];
    *puVar4 = 0;
    puVar4[1] = uVar6;
    if ((uVar8 & 1) != 0) {
      param_1[6] = param_1[6] - 1;
      param_1[7] = param_2;
      if ((param_3 != 0) && (uVar11 == 0)) {
        iVar7 = param_1[5] * 0xc;
        piVar3 = (int *)(param_1[4] - 0xc);
        do {
          piVar5 = piVar3;
          if (iVar7 == 0) goto LAB_009c9d18;
          iVar7 = iVar7 + -0xc;
          piVar3 = piVar5 + 3;
        } while (piVar5[3] == 0);
        iVar7 = piVar5[4];
        piVar5[4] = 0;
        if (iVar7 != 0) {
          (**(code **)(iVar7 + 4))(piVar5[5]);
        }
      }
LAB_009c9d18:
      if (uVar11 != 0) {
        (**(code **)(uVar11 + 0xc))(uVar12);
      }
      if (param_1[6] == 0) {
        do {
          bVar2 = (bool)hasExclusiveAccess(param_1);
        } while (!bVar2);
        *param_1 = *param_1 & 0xfffffffd;
      }
      if (((uVar10 == 0) && ((DAT_018dd988 & 0x7fffffff) != 0)) &&
         (iVar7 = FUN_015bf3f8(), iVar7 == 0)) {
        *(undefined1 *)(param_1 + 2) = 1;
      }
      DataMemoryBarrier(0xb);
      do {
        uVar10 = *puVar9;
        bVar2 = (bool)hasExclusiveAccess(puVar9);
      } while (!bVar2);
      *puVar9 = 0;
      if (uVar10 == 2) {
        software_interrupt(0);
        FUN_016d3496(puVar9,0x81,1,param_5);
        return;
      }
      return;
    }
    puVar4[1] = uVar11;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00fb74b8(&DAT_00412edc,0xb,&DAT_0187a7a0);
}


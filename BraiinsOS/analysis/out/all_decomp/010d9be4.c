// FUN_010d9be4 @ 010d9be4 size=452 calls_out=4 calls_in=1
// strings: capacity overflow

void FUN_010d9be4(int param_1,uint3 *param_2,uint3 *param_3)

{
  uint3 uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint *puVar6;
  uint uVar7;
  uint *puVar8;
  undefined1 *unaff_r6;
  uint *puVar9;
  uint *puVar10;
  
  uVar4 = ((int)param_3 - (int)param_2) * -0x55555555;
  puVar9 = (uint *)(param_1 + 0x48);
  uVar2 = *puVar9;
  uVar7 = uVar2;
  uVar5 = 0x11;
  if (0x11 < uVar2) {
    uVar7 = *(uint *)(param_1 + 4);
    uVar5 = uVar2;
  }
  if (uVar5 - uVar7 < uVar4) {
    if (CARRY4(uVar7,uVar4)) {
LAB_010d9d90:
                    /* WARNING: Subroutine does not return */
      FUN_00faa464("capacity overflow",0x11,&DAT_0188b950);
    }
    uVar5 = 0xffffffff >> LZCOUNT((uVar7 + uVar4) - 1);
    if (uVar7 + uVar4 < 2) {
      uVar5 = 0;
    }
    if (0xfffffffe < uVar5) goto LAB_010d9d90;
    iVar3 = FUN_010d9998(param_1,uVar5 + 1);
    if (iVar3 != -0x7fffffff) {
      if (iVar3 != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00600874();
      }
      goto LAB_010d9d90;
    }
    uVar2 = *puVar9;
  }
  puVar10 = (uint *)(param_1 + 4);
  if (uVar2 < 0x12) {
    uVar7 = 0x11;
    uVar5 = uVar2;
    puVar6 = puVar9;
    puVar8 = puVar10;
    if (0x10 < uVar2) goto LAB_010d9d00;
  }
  else {
    uVar5 = *(uint *)(param_1 + 4);
    puVar6 = puVar10;
    puVar8 = *(uint **)(param_1 + 8);
    uVar7 = uVar2;
    if (uVar2 <= uVar5) goto LAB_010d9d00;
  }
  do {
    if (param_2 == param_3) {
LAB_010d9d7c:
      *puVar6 = uVar5;
      return;
    }
    uVar1 = *param_2;
    unaff_r6 = (undefined1 *)(uint)(ushort)*param_2;
    param_2 = (uint3 *)((int)param_2 + 3);
    if (uVar1 == 0x110000) goto LAB_010d9d7c;
    puVar8[uVar5] = uVar1 | 0xff000000;
    uVar5 = uVar5 + 1;
  } while (uVar7 != uVar5);
  uVar5 = uVar7;
LAB_010d9d00:
  *puVar6 = uVar5;
  while( true ) {
    if (param_2 != param_3) {
      unaff_r6 = (undefined1 *)(uint)*param_2;
    }
    if (param_2 == param_3 || unaff_r6 == &DAT_00110000) break;
    uVar5 = *puVar9;
    if (uVar5 < 0x12) {
      uVar2 = 0x11;
      uVar7 = uVar5;
      puVar6 = puVar10;
      puVar8 = puVar9;
    }
    else {
      uVar7 = *(uint *)(param_1 + 4);
      puVar6 = *(uint **)(param_1 + 8);
      puVar8 = puVar10;
      uVar2 = uVar5;
    }
    if (uVar7 == uVar2) {
      FUN_010d9b58(param_1);
      uVar7 = *(uint *)(param_1 + 4);
      puVar6 = *(uint **)(param_1 + 8);
      puVar8 = puVar10;
    }
    puVar6[uVar7] = (uint)unaff_r6 | 0xff000000;
    param_2 = (uint3 *)((int)param_2 + 3);
    *puVar8 = *puVar8 + 1;
  }
  return;
}


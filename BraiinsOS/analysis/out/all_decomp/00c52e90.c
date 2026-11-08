// FUN_00c52e90 @ 00c52e90 size=392 calls_out=2 calls_in=1
// strings: 

void FUN_00c52e90(uint *param_1)

{
  undefined8 *puVar1;
  double *pdVar2;
  uint uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  uint uVar6;
  undefined4 uVar7;
  uint uVar8;
  int iVar9;
  double in_d0;
  double in_d1;
  double in_d2;
  double dVar10;
  undefined8 uVar11;
  uint local_48;
  undefined8 *local_44;
  uint local_40;
  
  if (in_d2 <= 0.0) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa478(&DAT_00354ad1,0x47,&DAT_01873858);
  }
  if (in_d1 < in_d0) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa478(&DAT_00354af4,0x55,&DAT_01873868);
  }
  iVar9 = 0;
  puVar1 = (undefined8 *)&DAT_00000008;
  local_40 = 0;
  local_44 = (undefined8 *)&DAT_00000008;
  local_48 = 0;
  uVar3 = 0xffffffff;
  if (in_d2 * 100.0 < in_d1 - in_d0) {
    in_d2 = (in_d1 - in_d0) / 100.0;
  }
  do {
    uVar8 = uVar3;
    if (uVar8 + 1 == local_48) {
      FUN_0132f4a4(&local_48);
      puVar1 = local_44;
    }
    dVar10 = in_d1 - in_d2;
    pdVar2 = (double *)((int)puVar1 + iVar9);
    uVar6 = uVar8 + 2;
    iVar9 = iVar9 + 8;
    *pdVar2 = in_d1;
    uVar3 = uVar8 + 1;
    in_d1 = dVar10;
    local_40 = uVar6;
  } while (in_d0 <= dVar10);
  if (in_d2 * 0.1 < ABS((in_d2 + dVar10) - in_d0)) {
    if (uVar6 == local_48) {
      FUN_0132f4a4(&local_48);
    }
    pdVar2 = (double *)(local_44 + uVar6);
    uVar6 = uVar8 + 3;
    *pdVar2 = in_d0;
  }
  uVar3 = uVar6 >> 1;
  if (uVar3 != 0) {
    puVar1 = local_44;
    puVar5 = local_44 + uVar6;
    do {
      puVar4 = puVar5 + -1;
      uVar11 = *puVar1;
      uVar3 = uVar3 - 1;
      uVar7 = *(undefined4 *)((int)puVar5 + -4);
      *(undefined4 *)puVar1 = *(undefined4 *)puVar4;
      *(undefined4 *)((int)puVar1 + 4) = uVar7;
      puVar1 = puVar1 + 1;
      *puVar4 = uVar11;
      puVar5 = puVar4;
    } while (uVar3 != 0);
  }
  *param_1 = local_48;
  param_1[1] = (uint)local_44;
  param_1[2] = uVar6;
  return;
}


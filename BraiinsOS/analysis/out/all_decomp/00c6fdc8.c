// FUN_00c6fdc8 @ 00c6fdc8 size=424 calls_out=8 calls_in=4
// strings: 

/* WARNING: Heritage AFTER dead removal. Example location: s1 : 0x00c6fec4 */
/* WARNING: Removing unreachable block (ram,0x00c6ff4c) */
/* WARNING: Restarted to delay deadcode elimination for space: register */

undefined4 FUN_00c6fdc8(int *param_1)

{
  uint uVar1;
  undefined8 *puVar2;
  uint uVar3;
  undefined8 *puVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  bool bVar10;
  bool bVar11;
  undefined8 uVar12;
  uint local_54 [3];
  int local_48;
  uint local_44;
  undefined4 local_40;
  int local_3c;
  int local_38;
  uint local_34;
  
  iVar5 = *param_1;
  uVar3 = param_1[2];
  if (iVar5 == 0) {
    uVar3 = 0;
  }
  uVar7 = (uint)(iVar5 != 0);
  uVar1 = uVar3 * 8;
  bVar11 = 0x1ffffffe < uVar3;
  bVar10 = uVar3 == 0x1fffffff;
  if (uVar3 < 0x20000000) {
    bVar11 = 0x7ffffff7 < uVar1;
    bVar10 = uVar1 == 0x7ffffff8;
  }
  if (bVar11 && !bVar10) {
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(0);
  }
  iVar9 = param_1[1];
  iVar6 = 0;
  if (uVar1 == 0) {
    puVar2 = (undefined8 *)&DAT_00000008;
    uVar8 = 0;
  }
  else {
    puVar2 = (undefined8 *)thunk_FUN_016d4a50(uVar1);
    uVar8 = uVar3;
    if (puVar2 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(8,uVar1);
    }
  }
  local_40 = 0;
  local_54[1] = 0;
  puVar4 = puVar2;
  local_54[0] = uVar7;
  local_54[2] = iVar5;
  local_48 = iVar9;
  local_44 = uVar7;
  local_3c = iVar5;
  local_38 = iVar9;
  local_34 = uVar3;
  while( true ) {
    uVar12 = FUN_00c3901c(local_54);
    iVar5 = (int)((ulonglong)uVar12 >> 0x20);
    if ((int)uVar12 == 0 || iVar5 == 0) break;
    iVar6 = iVar6 + 1;
    *puVar4 = *(undefined8 *)(iVar5 + 0x18);
    puVar4 = puVar4 + 1;
  }
  if (iVar6 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa478(&DAT_003555e8,0x57,&DAT_01874088);
  }
  puVar4 = puVar2;
  iVar5 = iVar6;
  do {
    uVar12 = *puVar4;
    puVar4 = puVar4 + 1;
    FUN_016d5622(0,0,(int)uVar12);
    iVar5 = iVar5 + -1;
  } while (iVar5 != 0);
  puVar4 = puVar2;
  do {
    uVar12 = *puVar4;
    puVar4 = puVar4 + 1;
    FUN_016d5578(0,0,(int)uVar12);
    iVar6 = iVar6 + -1;
  } while (iVar6 != 0);
  if (uVar8 != 0) {
    thunk_FUN_016d3fb4(puVar2);
  }
  return 0;
}


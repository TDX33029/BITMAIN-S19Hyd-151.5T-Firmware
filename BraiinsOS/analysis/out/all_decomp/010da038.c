// FUN_010da038 @ 010da038 size=428 calls_out=6 calls_in=2
// strings: 

undefined8 FUN_010da038(undefined4 *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined4 extraout_r3;
  undefined4 extraout_r3_00;
  undefined4 extraout_r3_01;
  uint uVar5;
  uint uVar6;
  undefined4 *puVar7;
  uint uVar8;
  bool bVar9;
  bool bVar10;
  undefined4 local_28;
  uint local_24;
  
  uVar6 = param_1[0xfe];
  puVar4 = param_1 + 1;
  uVar5 = 0xfd;
  uVar8 = uVar6;
  puVar7 = puVar4;
  if (0xfd < uVar6) {
    puVar7 = (undefined4 *)param_1[2];
    uVar8 = param_1[1];
    uVar5 = uVar6;
  }
  if (param_2 < uVar8) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa464(&DAT_005660d0,0x20,&DAT_0188b970);
  }
  uVar3 = 0x80000001;
  if (param_2 < 0xfe) {
    if (uVar6 < 0xfe) {
LAB_010da080:
      return CONCAT44(puVar4,uVar3);
    }
    *param_1 = 0;
    FUN_016dd1aa(puVar4,puVar7,uVar8 << 2);
    local_24 = uVar5 << 2;
    bVar9 = 0x3ffffffe < uVar5;
    if (uVar5 < 0x40000000) {
      bVar9 = 0x7ffffffc < local_24;
    }
    param_1[0xfe] = uVar8;
    if (bVar9) {
      local_28 = 0;
                    /* WARNING: Subroutine does not return */
      FUN_00fb74f8(&DAT_00418ec6,0x2b,&local_28,&DAT_018857c8,&DAT_0188b940);
    }
    thunk_FUN_016d3fb4(puVar7);
    uVar3 = extraout_r3_00;
    goto LAB_010da1a0;
  }
  if (param_2 == uVar5) {
    return CONCAT44(puVar4,0x80000001);
  }
  uVar1 = param_2 * 4;
  uVar3 = 0;
  if ((0x3fffffff < param_2) || (0x7ffffffc < uVar1)) goto LAB_010da1b8;
  if (uVar6 < 0xfe) {
    iVar2 = thunk_FUN_016d4a50(uVar1);
    if (iVar2 == 0) {
LAB_010da1b4:
      uVar3 = 4;
LAB_010da1b8:
      return CONCAT44(uVar1,uVar3);
    }
    FUN_016dd1aa(iVar2,puVar7,uVar8 << 2);
    uVar3 = extraout_r3;
  }
  else {
    puVar4 = (undefined4 *)(uVar5 * 4);
    bVar10 = 0x3ffffffe < uVar5;
    bVar9 = uVar5 == 0x3fffffff;
    if (uVar5 < 0x40000000) {
      bVar10 = (undefined4 *)0x7ffffffb < puVar4;
      bVar9 = puVar4 == (undefined4 *)0x7ffffffc;
    }
    if (bVar10 && !bVar9) goto LAB_010da080;
    iVar2 = thunk_FUN_016d4ea4(puVar7,uVar1);
    uVar3 = extraout_r3_01;
    if (iVar2 == 0) goto LAB_010da1b4;
  }
  param_1[0xfe] = param_2;
  *param_1 = 1;
  param_1[1] = uVar8;
  param_1[2] = iVar2;
LAB_010da1a0:
  return CONCAT44(uVar3,0x80000001);
}


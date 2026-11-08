// FUN_00c21f30 @ 00c21f30 size=484 calls_out=5 calls_in=0
// strings: 

undefined8 FUN_00c21f30(int *param_1,undefined4 param_2,undefined4 param_3,int *param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  undefined4 *puVar12;
  undefined4 *puVar13;
  int iVar14;
  int local_6ec;
  int local_6e8;
  int local_6e4;
  undefined1 auStack_4a8 [576];
  undefined1 auStack_268 [580];
  
  uVar5 = (**(code **)(param_4[1] + 0x34))
                    (*param_4 + (*(int *)(param_4[1] + 8) - 1U & 0xfffffff8) + 8);
  if (param_1[3] == 0) {
    iVar14 = 0;
  }
  else {
    uVar6 = FUN_00c507d4(param_1[4],param_1[5],param_1[6],param_1[7],uVar5);
    iVar9 = *param_1;
    uVar1 = uVar6 >> 0x19;
    local_6ec = 0;
    while( true ) {
      uVar6 = param_1[1] & uVar6;
      uVar7 = *(uint *)(iVar9 + uVar6);
      uVar10 = uVar7 ^ uVar1 * 0x1010101;
      uVar10 = ~uVar10 & 0x80808080 & uVar10 + 0xfefefeff;
      while (uVar10 != 0) {
        uVar11 = uVar10 >> 8;
        uVar2 = uVar10 >> 0x10;
        uVar3 = uVar10 >> 0x18;
        uVar4 = uVar10 << 0x18;
        uVar10 = uVar10 - 1 & uVar10;
        uVar11 = uVar6 + ((uint)LZCOUNT(uVar4 | (uVar11 & 0xff) << 0x10 | (uVar2 & 0xff) << 8 |
                                        uVar3) >> 3) & param_1[1];
        if ((uVar5 & 0xff) == (uint)*(byte *)(iVar9 + -0x10 + uVar11 * -0x10)) {
          iVar14 = 0;
          iVar9 = iVar9 + uVar11 * -0x10;
          iVar8 = *(int *)(iVar9 + -4);
          if (iVar8 == 0) goto LAB_00c220f0;
          puVar13 = *(undefined4 **)(iVar9 + -8);
          puVar12 = puVar13 + iVar8 * 2;
          goto LAB_00c22058;
        }
      }
      iVar14 = 0;
      if ((uVar7 & 0x80808080 & uVar7 << 1) != 0) break;
      local_6ec = local_6ec + 4;
      uVar6 = uVar6 + local_6ec;
    }
  }
  goto LAB_00c220f0;
  while (puVar13 = puVar13 + 2, puVar13 != puVar12) {
LAB_00c22058:
    FUN_00baaf98(&local_6e8,*puVar13,puVar13[1],param_2,param_3);
    if (local_6e8 != 2 || local_6e4 != 0) {
      FUN_016dd1aa(auStack_4a8,&local_6e8,0x240);
      FUN_016dd1aa(auStack_268,auStack_4a8,0x240);
      iVar14 = thunk_FUN_016d4a50(0x240);
      if (iVar14 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00600874(8,0x240);
      }
      FUN_016dd1aa(iVar14,auStack_4a8,0x240);
      break;
    }
  }
LAB_00c220f0:
  return CONCAT44(&DAT_01873268,iVar14);
}


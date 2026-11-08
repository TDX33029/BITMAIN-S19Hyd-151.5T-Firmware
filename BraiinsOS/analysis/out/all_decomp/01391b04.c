// FUN_01391b04 @ 01391b04 size=628 calls_out=2 calls_in=0
// strings: 

undefined4 FUN_01391b04(int *param_1,undefined4 *param_2)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  byte bVar8;
  byte bVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  undefined4 uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint *puVar18;
  uint uVar19;
  uint local_58 [7];
  undefined1 *local_3c;
  undefined1 local_35;
  uint *local_34;
  undefined *local_30;
  undefined4 local_2c;
  undefined4 uStack_28;
  
  iVar10 = *param_1;
  bVar8 = (**(code **)(param_2[1] + 0xc))(*param_2,&DAT_004144eb,1);
  bVar6 = false;
  uVar19 = 0;
  do {
    local_58[0] = 1;
    uVar16 = uVar19 & 0x1f;
    local_58[3] = 0;
    local_58[2] = 0;
    local_58[1] = 0;
    iVar11 = -((uVar19 & 0x60) >> 3);
    uVar15 = *(uint *)((int)local_58 + iVar11 + 4);
    uVar17 = *(uint *)((int)local_58 + iVar11 + 8);
    uVar14 = uVar16 ^ 0x1f;
    puVar18 = (uint *)(iVar10 + ((uVar19 & 0x80) >> 3));
    bVar4 = (*puVar18 & *(uint *)((int)local_58 + iVar11) << uVar16) != 0;
    bVar5 = ((uVar17 << uVar16 | (uVar15 >> 1) >> uVar14) & puVar18[2]) != 0;
    bVar2 = ((uVar15 << uVar16 | (*(uint *)((int)local_58 + iVar11) >> 1) >> uVar14) & puVar18[1])
            != 0;
    bVar3 = ((*(int *)((int)local_58 + iVar11 + 0xc) << uVar16 | (uVar17 >> 1) >> uVar14) &
            puVar18[3]) != 0;
    bVar1 = (bVar4 || bVar5) || (bVar2 || bVar3);
    bVar7 = (bool)(bVar1 | bVar6);
    bVar9 = bVar1 | bVar8;
    if (((bVar4 || bVar5) || (bVar2 || bVar3)) && ((bVar8 & 1) == 0)) {
      if ((*(byte *)((int)param_2 + 10) & 0x80) == 0) {
        if (bVar6) {
          iVar11 = (**(code **)(param_2[1] + 0xc))(*param_2,&DAT_0041950f,2);
          bVar9 = 1;
          bVar7 = true;
          if (iVar11 != 0) goto LAB_01391b6c;
        }
        bVar9 = FUN_01391d90(uVar19,param_2);
      }
      else {
        uVar13 = *param_2;
        iVar11 = param_2[1];
        if (!bVar6) {
          bVar9 = 1;
          iVar12 = (**(code **)(iVar11 + 0xc))(uVar13,&DAT_0041950e,1);
          bVar7 = true;
          if (iVar12 != 0) goto LAB_01391b6c;
        }
        local_35 = 1;
        local_2c = param_2[2];
        uStack_28 = param_2[3];
        local_3c = &local_35;
        local_30 = &DAT_01880dc4;
        local_34 = local_58 + 5;
        local_58[5] = uVar13;
        local_58[6] = iVar11;
        iVar11 = FUN_01391d90(uVar19,&local_34);
        if (iVar11 != 0) {
          bVar9 = 1;
          bVar7 = true;
          goto LAB_01391b6c;
        }
        bVar9 = (**(code **)(local_30 + 0xc))(local_34,&DAT_00414a81,2);
      }
      bVar7 = true;
    }
LAB_01391b6c:
    bVar6 = bVar7;
    uVar19 = (uVar19 & 0xff) + 1;
    bVar8 = bVar9;
    if ((uVar19 & 0xffffff00) != 0) {
      uVar13 = 1;
      if ((bVar9 & 1) == 0) {
        uVar13 = (**(code **)(param_2[1] + 0xc))(*param_2,"}",1);
      }
      return uVar13;
    }
  } while( true );
}


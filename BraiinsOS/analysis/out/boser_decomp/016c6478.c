// FUN_016c6478 @ 016c6478 size=720 calls_out=4 calls_in=0
// strings: 

undefined4 FUN_016c6478(int *param_1,undefined4 *param_2)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  byte bVar7;
  byte bVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  undefined4 uVar13;
  uint *puVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  bool bVar19;
  uint local_58 [4];
  undefined1 local_45;
  undefined4 local_44;
  int local_40;
  undefined1 *local_3c;
  undefined1 local_35;
  undefined4 *local_34;
  undefined *local_30;
  uint local_2c;
  undefined4 uStack_28;
  
  iVar9 = *param_1;
  bVar7 = (**(code **)(param_2[1] + 0xc))(*param_2,"{",1);
  bVar5 = false;
  uVar18 = 0;
  do {
    local_58[3] = 0;
    local_58[2] = 0;
    uVar15 = uVar18 & 0x1f;
    local_58[0] = 1;
    uVar10 = uVar15 ^ 0x1f;
    local_58[1] = 0;
    iVar11 = -((uVar18 & 0x60) >> 3);
    uVar17 = *(uint *)((int)local_58 + iVar11 + 4);
    uVar16 = *(uint *)((int)local_58 + iVar11 + 8);
    local_45 = (undefined1)uVar18;
    puVar14 = (uint *)(iVar9 + (uVar18 >> 3 & 0xfffffff0));
    bVar3 = (*puVar14 & *(uint *)((int)local_58 + iVar11) << uVar15) != 0;
    bVar4 = (puVar14[2] & (uVar16 << uVar15 | (uVar17 >> 1) >> uVar10)) != 0;
    bVar1 = (puVar14[1] & (uVar17 << uVar15 | (*(uint *)((int)local_58 + iVar11) >> 1) >> uVar10))
            != 0;
    bVar2 = (puVar14[3] &
            (*(int *)((int)local_58 + iVar11 + 0xc) << uVar15 | (uVar16 >> 1) >> uVar10)) != 0;
    bVar19 = (bVar3 || bVar4) || (bVar1 || bVar2);
    bVar6 = (bool)(bVar19 | bVar5);
    bVar8 = bVar19 | bVar7;
    if (((bVar3 || bVar4) || (bVar1 || bVar2)) && ((bVar7 & 1) == 0)) {
      uVar10 = param_2[2];
      if ((uVar10 & 0x800000) == 0) {
        if (bVar5) {
          iVar11 = (**(code **)(param_2[1] + 0xc))(*param_2,&DAT_00533bc1,2);
          bVar8 = 1;
          bVar6 = true;
          if (iVar11 != 0) goto LAB_016c6708;
        }
        if ((uVar10 & 0x2000000) == 0) {
          if ((uVar10 & 0x4000000) == 0) {
            bVar8 = FUN_012fcc70(&local_45,param_2);
          }
          else {
            bVar8 = FUN_012fd6b4(&local_45,param_2);
          }
        }
        else {
          bVar8 = FUN_012fd63c(&local_45,param_2);
        }
      }
      else {
        uVar13 = *param_2;
        iVar11 = param_2[1];
        if (!bVar5) {
          bVar8 = 1;
          iVar12 = (**(code **)(iVar11 + 0xc))(uVar13,"\n",1);
          bVar6 = true;
          if (iVar12 != 0) goto LAB_016c6708;
        }
        local_35 = 1;
        local_2c = param_2[2];
        uStack_28 = param_2[3];
        local_3c = &local_35;
        local_30 = &DAT_01ce45f8;
        local_34 = &local_44;
        local_44 = uVar13;
        local_40 = iVar11;
        if ((local_2c & 0x2000000) == 0) {
          if ((local_2c & 0x4000000) == 0) {
            iVar11 = FUN_012fcc70(&local_45,&local_34);
          }
          else {
            iVar11 = FUN_012fd6b4(&local_45,&local_34);
          }
        }
        else {
          iVar11 = FUN_012fd63c(&local_45,&local_34);
        }
        if (iVar11 == 0) {
          bVar8 = (**(code **)(local_30 + 0xc))(local_34,&DAT_005312e2,2);
        }
        else {
          bVar8 = 1;
        }
      }
      bVar6 = true;
    }
LAB_016c6708:
    bVar5 = bVar6;
    bVar19 = uVar18 == 0xff;
    uVar18 = uVar18 + 1;
    bVar7 = bVar8;
    if (bVar19) {
      uVar13 = 1;
      if ((bVar8 & 1) == 0) {
        uVar13 = (**(code **)(param_2[1] + 0xc))(*param_2,"}",1);
      }
      return uVar13;
    }
  } while( true );
}


// FUN_014bb3d8 @ 014bb3d8 size=1412 calls_out=5 calls_in=0
// strings: attempted to begin a new map entry without completing the previous one | attempted to finish a map with a partial entry

undefined4 FUN_014bb3d8(int *param_1,undefined4 *param_2)

{
  uint uVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  int *piVar7;
  undefined4 *puVar8;
  bool bVar9;
  int iVar10;
  bool bVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  int iVar15;
  undefined1 local_45;
  undefined4 local_44;
  undefined4 local_40;
  undefined1 *local_3c;
  undefined4 *local_38;
  undefined *local_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 *local_28;
  
  uVar3 = (**(code **)(param_2[1] + 0xc))(*param_2,&DAT_004144eb,1);
  local_45 = 1;
  iVar6 = *param_1;
  uVar14 = param_1[1];
  bVar2 = false;
  iVar13 = param_1[2];
  if (iVar6 == 0) {
    iVar13 = 0;
  }
  bVar9 = iVar6 != 0;
  bVar11 = false;
  iVar15 = 0;
  do {
    if (iVar13 == 0) {
      uVar5 = 1;
      if ((uVar3 & 1) == 0) {
        if (bVar2) {
                    /* WARNING: Subroutine does not return */
          FUN_00faa478("attempted to finish a map with a partial entry",0x5d,&DAT_01880ddc);
        }
        uVar5 = (**(code **)(param_2[1] + 0xc))(*param_2,"}",1);
      }
      return uVar5;
    }
    if (!bVar9) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa444(&DAT_018a9ff4);
    }
    if (iVar15 == 0) {
      iVar10 = 0;
      iVar15 = iVar6;
      for (; uVar14 != 0; uVar14 = uVar14 - 1) {
        iVar15 = *(int *)(iVar15 + 0x248);
      }
      uVar12 = 0;
      if (*(short *)(iVar15 + 0x242) == 0) goto LAB_014bb4e4;
LAB_014bb4b0:
      iVar6 = iVar15;
    }
    else {
      iVar10 = iVar6;
      uVar12 = uVar14;
      if (uVar14 < *(ushort *)(iVar15 + 0x242)) goto LAB_014bb4b0;
LAB_014bb4e4:
      do {
        iVar6 = *(int *)(iVar15 + 0x1b8);
        if (iVar6 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00faa444(&DAT_018aa004);
        }
        uVar12 = (uint)*(ushort *)(iVar15 + 0x240);
        iVar10 = iVar10 + 1;
        iVar15 = iVar6;
      } while (*(ushort *)(iVar6 + 0x242) <= uVar12);
    }
    if (iVar10 == 0) {
      uVar14 = uVar12 + 1;
      iVar15 = iVar6;
    }
    else {
      piVar7 = (int *)(iVar6 + uVar12 * 4 + 0x24c);
      do {
        iVar15 = *piVar7;
        iVar10 = iVar10 + -1;
        piVar7 = (int *)(iVar15 + 0x248);
      } while (iVar10 != 0);
      uVar14 = 0;
    }
    uVar1 = uVar3 & 1;
    uVar3 = 1;
    if (uVar1 == 0) {
      if (bVar2) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa478("attempted to begin a new map entry without completing the previous one",0x8d,
                     &DAT_01880dec);
      }
      iVar10 = iVar6 + uVar12 * 0xc;
      if ((*(byte *)((int)param_2 + 10) & 0x80) == 0) {
        if (bVar11) {
          iVar4 = (**(code **)(param_2[1] + 0xc))(*param_2,&DAT_0041950f,2);
          uVar3 = 1;
          if (iVar4 != 0) goto LAB_014bb46c;
        }
        iVar10 = FUN_013fa438(*(undefined4 *)(iVar10 + 0x1c0),*(undefined4 *)(iVar10 + 0x1c4),
                              param_2);
        uVar3 = 1;
        if (iVar10 == 0) {
          iVar10 = (**(code **)(param_2[1] + 0xc))(*param_2,&DAT_00414a7c,2);
          uVar3 = 1;
          if (iVar10 == 0) goto LAB_014bb6c4;
        }
      }
      else {
        if (!bVar11) {
          iVar4 = (**(code **)(param_2[1] + 0xc))(*param_2,&DAT_0041950e,1);
          uVar3 = 1;
          if (iVar4 != 0) goto LAB_014bb46c;
        }
        local_45 = 1;
        local_30 = param_2[2];
        uStack_2c = param_2[3];
        local_44 = *param_2;
        local_40 = param_2[1];
        local_34 = &DAT_01880dc4;
        local_38 = &local_44;
        local_3c = &local_45;
        iVar10 = FUN_013fa438(*(undefined4 *)(iVar10 + 0x1c0),*(undefined4 *)(iVar10 + 0x1c4),
                              &local_38);
        if ((iVar10 == 0) &&
           (iVar10 = (**(code **)(local_34 + 0xc))(local_38,&DAT_00414a7c,2), iVar10 == 0)) {
LAB_014bb6c4:
          puVar8 = (undefined4 *)(iVar6 + uVar12 * 0x28);
          bVar2 = true;
          if ((*(byte *)((int)param_2 + 10) & 0x80) == 0) {
            local_38 = puVar8;
            iVar6 = FUN_00fb34b0(param_2,&DAT_00564880,0x10,&DAT_00409140,0xd,puVar8 + 6,
                                 &LAB_00fc51fc,&DAT_0040914d,0xf,puVar8 + 4,FUN_014bf2a0,
                                 &DAT_004110c2,0xb,puVar8 + 9,FUN_014bf120,&DAT_0040915c,0xf,
                                 &local_38,FUN_014d2d00);
            uVar3 = 1;
            if (iVar6 != 0) goto LAB_014bb46c;
          }
          else {
            local_44 = *param_2;
            local_40 = param_2[1];
            local_30 = param_2[2];
            uStack_2c = param_2[3];
            local_34 = &DAT_01880dc4;
            local_38 = &local_44;
            local_3c = &local_45;
            local_28 = puVar8;
            iVar6 = FUN_00fb34b0(&local_38,&DAT_00564880,0x10,&DAT_00409140,0xd,puVar8 + 6,
                                 &LAB_00fc51fc,&DAT_0040914d,0xf,puVar8 + 4,FUN_014bf2a0,
                                 &DAT_004110c2,0xb,puVar8 + 9,FUN_014bf120,&DAT_0040915c,0xf,
                                 &local_28,FUN_014d2d00);
            if ((iVar6 != 0) ||
               (iVar6 = (**(code **)(local_34 + 0xc))(local_38,&DAT_00414a81,2), iVar6 != 0))
            goto LAB_014bb460;
          }
          uVar3 = 0;
          bVar2 = false;
        }
        else {
LAB_014bb460:
          uVar3 = 1;
        }
      }
    }
LAB_014bb46c:
    bVar11 = true;
    iVar13 = iVar13 + -1;
    iVar6 = 0;
    bVar9 = true;
  } while( true );
}


// FUN_00ed2224 @ 00ed2224 size=836 calls_out=4 calls_in=0
// strings: attempted to begin a new map entry without completing the previous one | attempted to finish a map with a partial entry

undefined4 FUN_00ed2224(undefined4 *param_1,int *param_2)

{
  bool bVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  undefined1 *puVar6;
  uint *puVar7;
  uint *puVar8;
  int iVar9;
  uint *puVar10;
  uint uVar11;
  undefined1 **ppuVar12;
  undefined4 uVar13;
  undefined1 *puVar14;
  int *piVar15;
  undefined1 uVar16;
  undefined1 local_41;
  int local_40;
  int local_3c;
  undefined1 *local_38;
  int *local_34;
  undefined *local_30;
  undefined1 *local_2c [2];
  
  param_1 = (undefined4 *)*param_1;
  uVar3 = (**(code **)(param_2[1] + 0xc))(*param_2,&DAT_004144eb,1);
  puVar10 = (uint *)*param_1;
  iVar9 = param_1[3];
  uVar13 = 1;
  local_41 = 1;
  bVar2 = false;
  uVar16 = (undefined1)uVar3;
  if (iVar9 != 0) {
    puVar14 = &local_41;
    uVar11 = ~*puVar10 & 0x80808080;
    puVar7 = puVar10 + 1;
    bVar1 = false;
    ppuVar12 = local_2c;
    piVar15 = param_2;
    do {
      puVar8 = puVar7;
      if (uVar11 == 0) {
        do {
          puVar7 = puVar8 + 1;
          uVar11 = *puVar8;
          puVar10 = puVar10 + -0x28;
          puVar8 = puVar7;
        } while ((uVar11 & 0x80808080) == 0x80808080);
        uVar11 = uVar11 & 0x80808080 ^ 0x80808080;
      }
      uVar5 = uVar3 & 1;
      uVar3 = 1;
      param_2 = piVar15;
      if (uVar5 == 0) {
        uVar3 = 1;
        if (bVar2) {
                    /* WARNING: Subroutine does not return */
          FUN_00faa478("attempted to begin a new map entry without completing the previous one",0x8d
                       ,&DAT_01880dec);
        }
        uVar5 = LZCOUNT(uVar11 << 0x18 | (uVar11 >> 8 & 0xff) << 0x10 | (uVar11 >> 0x10 & 0xff) << 8
                        | uVar11 >> 0x18);
        puVar8 = puVar10 + ((uVar5 >> 3) * -4 - (uVar5 >> 3)) * 2;
        if ((*(byte *)((int)piVar15 + 10) & 0x80) == 0) {
          if (bVar1) {
            iVar4 = (**(code **)(piVar15[1] + 0xc))(*piVar15,&DAT_0041950f,2);
            uVar3 = 1;
            if (iVar4 != 0) goto LAB_00ed22b8;
          }
          iVar4 = FUN_00faa4e8(puVar8[-9],puVar8[-8],*piVar15,piVar15[1],ppuVar12,uVar13,puVar14,
                               puVar8,param_2,uVar16);
          uVar3 = 1;
          if (iVar4 == 0) {
            iVar4 = (**(code **)(piVar15[1] + 0xc))(*piVar15,&DAT_00414a7c,2);
            uVar3 = 1;
            if (iVar4 == 0) {
LAB_00ed2440:
              bVar2 = true;
              if ((*(byte *)((int)param_2 + 10) & 0x80) == 0) {
                iVar4 = FUN_0157a500(puVar8 + -6);
                uVar3 = 1;
                if (iVar4 != 0) goto LAB_00ed22b8;
              }
              else {
                local_40 = *param_2;
                puVar6 = (undefined1 *)param_2[3];
                local_3c = param_2[1];
                *ppuVar12 = (undefined1 *)param_2[2];
                ppuVar12[1] = puVar6;
                local_30 = &DAT_01880dc4;
                local_34 = &local_40;
                local_38 = puVar14;
                iVar4 = FUN_0157a500(puVar8 + -6,&local_34);
                if ((iVar4 != 0) ||
                   (iVar4 = (**(code **)(local_30 + 0xc))(local_34,&DAT_00414a81,2), iVar4 != 0))
                goto LAB_00ed22b4;
              }
              uVar3 = 0;
              bVar2 = false;
            }
          }
        }
        else if ((bVar1) ||
                (iVar4 = (**(code **)(piVar15[1] + 0xc))(*piVar15,&DAT_0041950e,1), iVar4 == 0)) {
          local_34 = (int *)*piVar15;
          local_30 = (undefined *)piVar15[1];
          local_41 = 1;
          local_2c[0] = puVar14;
          iVar4 = FUN_00faa4e8(puVar8[-9],puVar8[-8],&local_34,&DAT_01880dc4);
          if ((iVar4 == 0) && (iVar4 = FUN_00fb1f64(&local_34,&DAT_00414a7c,2), iVar4 == 0))
          goto LAB_00ed2440;
LAB_00ed22b4:
          uVar3 = 1;
        }
      }
LAB_00ed22b8:
      bVar1 = true;
      iVar9 = iVar9 + -1;
      uVar11 = uVar11 - 1 & uVar11;
      uVar16 = (undefined1)uVar3;
      piVar15 = param_2;
    } while (iVar9 != 0);
  }
  if (uVar3 == 0) {
    if (bVar2) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa478("attempted to finish a map with a partial entry",0x5d,&DAT_01880ddc);
    }
    uVar13 = (**(code **)(param_2[1] + 0xc))(*param_2,"}",1);
  }
  return uVar13;
}


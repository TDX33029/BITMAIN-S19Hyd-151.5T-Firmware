// FUN_015dfaa4 @ 015dfaa4 size=996 calls_out=5 calls_in=2
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_015dfaa4(undefined4 *param_1,undefined4 *****param_2)

{
  byte bVar1;
  undefined4 *****pppppuVar2;
  int iVar3;
  undefined4 ****ppppuVar4;
  undefined4 *****pppppuVar5;
  uint uVar6;
  undefined4 ****ppppuVar7;
  int iVar8;
  int iVar9;
  undefined4 *****pppppuVar10;
  undefined4 *****pppppuVar11;
  undefined4 *****pppppuVar12;
  bool bVar13;
  undefined4 ****local_88;
  undefined4 *****local_84;
  undefined4 *****local_80;
  undefined4 *****local_7c;
  int local_78;
  int local_74;
  int local_70;
  byte local_69;
  undefined4 *****local_68;
  undefined4 *****local_64;
  undefined4 *****local_60;
  undefined4 *****local_5c;
  uint local_58;
  undefined4 *****local_50;
  code *local_4c;
  undefined4 *****local_48;
  code *local_44;
  undefined4 *****local_40;
  code *local_3c;
  undefined4 *****local_38 [3];
  undefined4 *****local_2c;
  undefined4 *****local_28;
  
  pppppuVar10 = (undefined4 *****)param_2[1];
  pppppuVar11 = (undefined4 *****)param_2[2];
  iVar9 = 0;
  pppppuVar5 = (undefined4 *****)param_2[0x13];
  local_70 = 0;
  local_74 = 1;
  local_78 = 0;
  local_84 = param_2;
  local_80 = pppppuVar5;
  local_7c = pppppuVar5;
  if (pppppuVar5 < pppppuVar11) {
    iVar8 = 1;
    local_88 = (undefined4 ****)0x0;
    do {
      local_69 = *(byte *)((int)pppppuVar10 + (int)local_7c);
      uVar6 = (uint)local_69;
      if (uVar6 == 0) {
        if (local_88 == (undefined4 ****)0x0) {
          param_2[0x13] = (undefined4 ****)((int)local_7c + 1);
        }
        param_1[1] = local_78;
        param_1[2] = local_74;
        param_1[3] = local_70;
        *param_1 = 4;
        return;
      }
      if ((local_69 & 0xc0) == 0) {
        local_7c = (undefined4 *****)((int)local_7c + 1);
        pppppuVar12 = (undefined4 *****)((int)local_7c + uVar6);
        local_68 = pppppuVar12;
        if (pppppuVar11 < pppppuVar12) {
          local_48 = &local_2c;
          local_44 = FUN_012fd02c;
          local_4c = FUN_012fd02c;
          local_50 = &local_68;
          pppppuVar5 = &local_60;
          local_2c = pppppuVar11;
          FUN_00664898(pppppuVar5,&DAT_0058e4d7,&local_50);
          goto LAB_015dfcb0;
        }
        FUN_012fbd94(&local_60,(int)pppppuVar10 + (int)local_7c);
        uVar6 = local_58;
        pppppuVar2 = local_5c;
        if (local_60 == (undefined4 *****)&DAT_00000001) {
          local_38[0] = local_5c;
          local_2c = local_38;
          local_28 = (undefined4 *****)FUN_01309a64;
          FUN_00664898(&local_4c,&DAT_0059e4eb,&local_2c);
          *param_1 = 2;
          param_1[1] = local_4c;
          param_1[2] = local_48;
          param_1[3] = local_44;
          goto LAB_015dfcc8;
        }
        if ((uint)(local_78 - iVar9) < local_58) {
          FUN_006520b4(&local_78,iVar9,local_58,1,1);
          iVar8 = local_74;
          iVar9 = local_70;
        }
        iVar3 = local_78;
        FUN_01bed4e2(iVar8 + iVar9,pppppuVar2,uVar6);
        local_70 = iVar9 + uVar6;
        if (iVar3 == local_70) {
          FUN_006520b4(&local_78,iVar3,1,1,1);
          iVar8 = local_74;
        }
        iVar9 = local_70 + 1;
        *(undefined1 *)(iVar8 + local_70) = 0x2e;
        local_70 = iVar9;
      }
      else {
        if ((uVar6 & 0xc0) != 0xc0) {
          local_44 = FUN_012fd02c;
          local_48 = &local_7c;
          local_50 = (undefined4 *****)&local_69;
          local_3c = (code *)&LAB_0141634c;
          local_40 = &local_2c;
          local_4c = FUN_012fd63c;
          pppppuVar5 = &local_60;
          local_2c = pppppuVar10;
          local_28 = local_7c;
          FUN_00664898(pppppuVar5,&DAT_004b3d15,&local_50);
          goto LAB_015dfcb0;
        }
        local_2c = (undefined4 *****)((int)pppppuVar11 - (int)local_7c);
        if (local_2c < (undefined4 *****)0x2) {
          local_5c = (undefined4 *****)FUN_012fd02c;
          local_60 = &local_2c;
          pppppuVar5 = &local_50;
          FUN_00664898(pppppuVar5,&DAT_005bde10,&local_60);
          goto LAB_015dfcb0;
        }
        bVar1 = ((byte *)((int)pppppuVar10 + (int)local_7c))[1];
        uVar6 = (CONCAT11(bVar1,local_69) ^ 0xc0) << 0x18 | (uint)bVar1 << 0x10;
        pppppuVar12 = (undefined4 *****)(uVar6 >> 0x10);
        local_64 = pppppuVar12;
        if (pppppuVar5 <= (undefined4 *****)(uVar6 >> 0x10)) {
          local_38[0] = &local_64;
          local_44 = (code *)&LAB_016cd65c;
          local_4c = (code *)&LAB_016cd65c;
          local_50 = local_38;
          local_2c = &local_80;
          local_48 = &local_2c;
          pppppuVar5 = &local_60;
          FUN_00664898(pppppuVar5,&DAT_005aa1db,&local_50);
          goto LAB_015dfcb0;
        }
        bVar13 = local_88 == (undefined4 ****)0x0;
        ppppuVar4 = local_88;
        pppppuVar2 = pppppuVar5;
        if (bVar13) {
          ppppuVar4 = (undefined4 ****)((int)local_7c + 2);
          pppppuVar2 = param_2;
        }
        local_88 = (undefined4 ****)0x1;
        if (bVar13) {
          pppppuVar2[0x13] = ppppuVar4;
        }
      }
      local_7c = pppppuVar12;
    } while (pppppuVar12 < pppppuVar11);
  }
  local_44 = FUN_012fd02c;
  local_4c = FUN_012fd02c;
  local_50 = &local_7c;
  local_3c = FUN_015dee90;
  local_40 = &local_84;
  local_48 = &local_2c;
  pppppuVar5 = &local_60;
  local_2c = pppppuVar11;
  FUN_00664898(pppppuVar5,&DAT_00584f4a,&local_50);
LAB_015dfcb0:
  ppppuVar4 = pppppuVar5[1];
  ppppuVar7 = pppppuVar5[2];
  param_1[1] = *pppppuVar5;
  param_1[2] = ppppuVar4;
  param_1[3] = ppppuVar7;
  *param_1 = 2;
LAB_015dfcc8:
  FUN_0134bd64(local_78,local_74);
  return;
}


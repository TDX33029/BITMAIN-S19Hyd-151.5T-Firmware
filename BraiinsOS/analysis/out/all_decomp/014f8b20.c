// FUN_014f8b20 @ 014f8b20 size=668 calls_out=5 calls_in=1
// strings: 

undefined4 FUN_014f8b20(int *param_1)

{
  int iVar1;
  undefined1 *puVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  undefined4 *puVar12;
  bool bVar13;
  int local_48;
  uint local_44;
  int local_40;
  undefined4 local_3c;
  undefined4 local_38;
  uint local_34 [3];
  byte local_28;
  byte local_27;
  
  iVar1 = *param_1;
  if (iVar1 == 0) {
    if (param_1[4] == 0) {
      return 0;
    }
    uVar4 = FUN_00faace8(param_1[4],"?",1);
    return uVar4;
  }
  uVar6 = param_1[1];
  uVar11 = param_1[2];
  uVar10 = uVar6;
  if (uVar6 < uVar11) {
    uVar10 = uVar11;
  }
  uVar8 = uVar11;
  do {
    uVar5 = uVar8;
    if (uVar10 == uVar5) goto LAB_014f8c48;
    uVar9 = (uint)*(byte *)(iVar1 + uVar5);
    param_1[2] = uVar5 + 1;
    uVar7 = uVar9 - 0x30;
    bVar13 = uVar7 < 10;
    if (!bVar13) {
      uVar7 = uVar9 - 0x61;
    }
    uVar8 = uVar5 + 1;
  } while (bVar13 || uVar7 < 6);
  if (uVar9 == 0x5f) {
    if ((uVar11 == 0) || (uVar6 <= uVar11)) {
      if (uVar6 < uVar5) goto LAB_014f8bac;
    }
    else if ((uVar6 < uVar5) || (*(char *)(iVar1 + uVar11) < -0x40)) {
LAB_014f8bac:
                    /* WARNING: Subroutine does not return */
      FUN_00faa8ac(iVar1,uVar6,uVar11,uVar5,&DAT_018a70c8);
    }
    if ((uVar5 - uVar11 & 1) == 0) {
      iVar1 = iVar1 + uVar11;
      uVar10 = uVar5 - uVar11 & 0x7ffffffe;
      local_38 = 2;
      local_3c = 0;
      local_48 = iVar1;
      local_44 = uVar10;
      local_40 = iVar1 + uVar10;
      do {
        puVar2 = (undefined1 *)FUN_014f925c(&local_48);
        if (puVar2 == (undefined1 *)0x110001) {
          puVar12 = (undefined4 *)param_1[4];
          if (puVar12 == (undefined4 *)0x0) {
            return 0;
          }
          iVar3 = (**(code **)(puVar12[1] + 0x10))(*puVar12,0x22);
          if (iVar3 != 0) {
            return 1;
          }
          local_38 = 2;
          local_3c = 0;
          local_48 = iVar1;
          local_44 = uVar10;
          local_40 = iVar1 + uVar10;
          while( true ) {
            puVar2 = (undefined1 *)FUN_014f925c(&local_48);
            if (puVar2 == (undefined1 *)0x110001) {
                    /* WARNING: Could not recover jumptable at 0x014f8d90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              uVar4 = (**(code **)(puVar12[1] + 0x10))(*puVar12,0x22);
              return uVar4;
            }
            if (puVar2 == &DAT_00110000) break;
            if (puVar2 == (undefined1 *)0x27) {
              iVar1 = (**(code **)(puVar12[1] + 0x10))(*puVar12,0x27);
              if (iVar1 != 0) {
                return 1;
              }
            }
            else {
              FUN_014f9608(local_34);
              uVar10 = local_34[0];
              uVar8 = (uint)local_27;
              uVar11 = (uint)local_28;
              uVar6 = uVar8;
              if (uVar8 < uVar11) {
                uVar6 = uVar11;
              }
              while (uVar6 != uVar11) {
                uVar5 = uVar10;
                if (uVar8 < 0x81) {
                  uVar5 = (uint)*(byte *)((int)local_34 + uVar11);
                }
                iVar1 = (**(code **)(puVar12[1] + 0x10))(*puVar12,uVar5);
                uVar11 = uVar11 + 1;
                if (iVar1 != 0) {
                  return 1;
                }
              }
            }
          }
                    /* WARNING: Subroutine does not return */
          FUN_00fb74f8(&DAT_00418ec6,0x2b,local_34,&DAT_018a71a8,&DAT_018a7188);
        }
      } while (puVar2 != &DAT_00110000);
    }
  }
LAB_014f8c48:
  if ((param_1[4] == 0) || (iVar1 = FUN_00faace8(param_1[4],&DAT_00564580,0x10), iVar1 == 0)) {
    *(undefined1 *)(param_1 + 1) = 0;
    *param_1 = 0;
    return 0;
  }
  return 1;
}


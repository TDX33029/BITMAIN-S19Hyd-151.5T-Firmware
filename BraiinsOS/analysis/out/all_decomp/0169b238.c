// FUN_0169b238 @ 0169b238 size=828 calls_out=3 calls_in=0
// strings: 

byte FUN_0169b238(uint *param_1,undefined4 *param_2)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  code *pcVar5;
  undefined4 *puVar6;
  uint uVar7;
  undefined4 uVar8;
  uint uVar9;
  uint *puVar10;
  undefined4 *local_54;
  byte local_50;
  byte local_4f;
  undefined4 local_4c;
  undefined4 uStack_48;
  undefined1 *puStack_44;
  undefined1 local_3d;
  undefined4 *local_3c;
  undefined *local_38;
  uint local_34;
  undefined4 local_30;
  undefined1 auStack_2c [8];
  
  uVar8 = *param_2;
  uVar7 = *param_1;
  puVar6 = (undefined4 *)param_1[1];
  pcVar5 = *(code **)(param_2[1] + 0xc);
  iVar2 = (*pcVar5)(uVar8,&DAT_00414b89,7);
  bVar1 = 1;
  local_54 = param_2;
  if (iVar2 == 0) {
    puVar10 = param_2 + 2;
    if ((*(byte *)((int)param_2 + 10) & 0x80) == 0) {
      iVar2 = (*pcVar5)(uVar8,&DAT_00414a79,3);
      bVar1 = 1;
      if (iVar2 == 0) {
        iVar2 = (**(code **)(param_2[1] + 0xc))(*param_2,&DAT_00566e18,4);
        bVar1 = 1;
        if (iVar2 == 0) {
          iVar2 = (**(code **)(param_2[1] + 0xc))(*param_2,&DAT_00414a7c,2);
          bVar1 = 1;
          if (iVar2 == 0) {
            uVar9 = *puVar10;
            uVar8 = param_2[3];
            uVar3 = uVar9;
            if ((uVar9 & 0x800000) != 0) {
              if ((uVar9 & 0x8000000) == 0) {
                *(undefined2 *)(param_2 + 3) = 10;
                uVar3 = uVar9 | 0x9000000;
              }
              else {
                uVar3 = uVar9 | 0x1000000;
              }
            }
            *puVar10 = uVar3 | 0x800000;
            iVar2 = 7;
            do {
              iVar4 = iVar2;
              uVar3 = uVar7 & 0xf;
              uVar7 = uVar7 >> 4;
              auStack_2c[iVar4 + -0x10] = (&DAT_00563e90)[uVar3];
              iVar2 = iVar4 + -1;
            } while (uVar7 != 0);
            bVar1 = FUN_00fa9698(param_2,1,"0x",2,auStack_2c + iVar4 + -0x10,9 - (iVar4 + 1));
            *puVar10 = uVar9;
            param_2[3] = uVar8;
          }
        }
      }
    }
    else {
      iVar2 = (*pcVar5)(uVar8,&DAT_00414a7e,3);
      bVar1 = 1;
      if (iVar2 == 0) {
        local_4c = *param_2;
        uStack_48 = param_2[1];
        puStack_44 = &local_3d;
        local_3c = &local_4c;
        uVar3 = *puVar10;
        local_30 = param_2[3];
        local_38 = &DAT_01880dc4;
        local_3d = 1;
        local_34 = uVar3;
        iVar2 = FUN_00fb1f64(local_3c,&DAT_00566e18,4);
        if ((iVar2 == 0) && (iVar2 = FUN_00fb1f64(&local_4c,&DAT_00414a7c,2), iVar2 == 0)) {
          if ((uVar3 & 0x800000) != 0) {
            if ((uVar3 & 0x8000000) == 0) {
              uVar3 = uVar3 | 0x9000000;
              local_30 = CONCAT22(local_30._2_2_,10);
            }
            else {
              uVar3 = uVar3 | 0x1000000;
            }
          }
          local_34 = uVar3 | 0x800000;
          iVar2 = 7;
          do {
            iVar4 = iVar2;
            uVar3 = uVar7 & 0xf;
            uVar7 = uVar7 >> 4;
            auStack_2c[iVar4] = (&DAT_00563e90)[uVar3];
            iVar2 = iVar4 + -1;
          } while (uVar7 != 0);
          bVar1 = 1;
          iVar2 = FUN_00fa9698(&local_3c,1,"0x",2,auStack_2c + iVar4,9 - (iVar4 + 1));
          if (iVar2 == 0) {
            bVar1 = (**(code **)(local_38 + 0xc))(local_3c,&DAT_00414a81,2);
          }
        }
      }
    }
  }
  local_4f = 1;
  local_50 = bVar1;
  local_3c = puVar6;
  FUN_00fb2258(&local_54,&DAT_00569b78,8,&local_3c,FUN_0169aa2c);
  if (local_4f != 1 || (local_50 & 1) != 0) {
    return (local_4f | local_50) & 1;
  }
  if ((*(byte *)((int)local_54 + 10) & 0x80) == 0) {
    bVar1 = (**(code **)(local_54[1] + 0xc))(*local_54," }",2);
    return bVar1 & 1;
  }
  bVar1 = (**(code **)(local_54[1] + 0xc))(*local_54,"}",1);
  return bVar1 & 1;
}


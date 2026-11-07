// FUN_00a7fdc8 @ 00a7fdc8 size=744 calls_out=9 calls_in=3
// strings: 

void FUN_00a7fdc8(undefined4 *param_1,undefined4 *param_2)

{
  undefined2 uVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
  int iVar8;
  byte *pbVar9;
  uint uVar10;
  undefined4 uVar11;
  int iVar12;
  undefined4 uVar13;
  undefined1 *puVar14;
  undefined4 local_60;
  int local_5c;
  int local_58;
  undefined1 *local_50;
  int local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  int local_30;
  int local_2c;
  int local_28;
  
  uVar13 = param_2[8];
  uVar11 = param_2[9];
  uVar1 = *(undefined2 *)(param_2 + 10);
  puVar7 = (undefined4 *)thunk_FUN_016d4a50(0x20);
  if (puVar7 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(1,0x20);
  }
  *puVar7 = uVar13;
  *(undefined2 *)((int)puVar7 + 10) = uVar1;
  *(undefined2 *)(puVar7 + 2) = 0xff00;
  puVar7[1] = uVar11;
  iVar8 = FUN_016d38c8(0x10,1);
  if (iVar8 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(1,0x10);
  }
  FUN_0062eb34(puVar7,0xc,iVar8,0x10);
  FUN_00fab1e0(&local_50,iVar8,0x10);
  if (local_50 != (undefined1 *)0x0) {
    local_40 = local_48;
    local_44 = local_4c;
    local_48 = 0x10;
    local_50 = (undefined1 *)0x10;
    local_4c = iVar8;
                    /* WARNING: Subroutine does not return */
    FUN_00fb74f8(&DAT_0035bd11,0xc,&local_50,&DAT_0186d2f8,&DAT_0187e7e8);
  }
  local_60 = 0x10;
  local_58 = 0x10;
  local_5c = iVar8;
  thunk_FUN_016d3fb4(puVar7);
  local_50 = (undefined1 *)*param_2;
  if (local_50 == &DAT_00110000) {
    local_58 = 0x10;
  }
  else {
    local_4c = param_2[1];
    local_48 = param_2[2];
    local_44 = param_2[3];
    local_40 = param_2[4];
    uStack_3c = param_2[5];
    uStack_38 = param_2[6];
    uStack_34 = param_2[7];
    iVar8 = 0;
    local_28 = 0;
    local_2c = 1;
    local_30 = 0;
    FUN_00a8a86c(&local_30,0,8,1,1);
    do {
      iVar12 = local_28;
      puVar14 = (&local_50)[iVar8];
      uVar10 = 1;
      if ((undefined1 *)0x7f < puVar14) {
        uVar10 = 2;
      }
      if (((undefined1 *)0x7ff < puVar14) && (uVar10 = 4, puVar14 < (undefined1 *)0x10000)) {
        uVar10 = 3;
      }
      if ((uint)(local_30 - local_28) < uVar10) {
        FUN_00a8a86c(&local_30,local_28,uVar10,1,1);
        pbVar9 = (byte *)(local_2c + local_28);
        if (puVar14 < (undefined1 *)0x80) goto LAB_00a7fee4;
LAB_00a7ff38:
        bVar2 = (byte)puVar14 & 0x3f | 0x80;
        bVar3 = (byte)((uint)puVar14 >> 6);
        if (puVar14 < (undefined1 *)0x800) {
          pbVar9[1] = bVar2;
          *pbVar9 = bVar3 | 0xc0;
        }
        else {
          bVar3 = bVar3 & 0x3f | 0x80;
          bVar4 = (byte)((uint)puVar14 >> 0xc);
          if ((uint)puVar14 >> 0x10 == 0) {
            pbVar9[1] = bVar3;
            pbVar9[2] = bVar2;
            *pbVar9 = bVar4 | 0xe0;
          }
          else {
            pbVar9[3] = bVar2;
            pbVar9[2] = bVar3;
            pbVar9[1] = bVar4 & 0x3f | 0x80;
            *pbVar9 = (byte)((uint)puVar14 >> 0x12) | 0xf0;
          }
        }
      }
      else {
        pbVar9 = (byte *)(local_2c + local_28);
        if ((undefined1 *)0x7f < puVar14) goto LAB_00a7ff38;
LAB_00a7fee4:
        *pbVar9 = (byte)puVar14;
      }
      iVar6 = local_2c;
      iVar5 = local_30;
      iVar12 = uVar10 + iVar12;
      iVar8 = iVar8 + 1;
      local_28 = iVar12;
    } while (iVar8 != 8);
    FUN_00a8a86c(&local_60,0x10,iVar12,1,1);
    iVar8 = local_58;
    FUN_016dd1aa(local_5c + local_58,iVar6,iVar12);
    local_58 = iVar8 + iVar12;
    if (iVar5 != 0) {
      thunk_FUN_016d3fb4(iVar6);
    }
  }
  *param_1 = local_60;
  param_1[1] = local_5c;
  param_1[2] = local_58;
  return;
}


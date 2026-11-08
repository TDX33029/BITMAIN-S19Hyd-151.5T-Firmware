// FUN_0167c688 @ 0167c688 size=548 calls_out=6 calls_in=1
// strings: 

void FUN_0167c688(undefined4 *param_1,int *param_2,undefined1 *param_3)

{
  ushort uVar1;
  int iVar2;
  undefined4 *puVar3;
  uint uVar4;
  undefined4 uVar5;
  uint uVar6;
  undefined4 uVar7;
  int iVar8;
  undefined4 uVar9;
  int iVar10;
  undefined4 uVar11;
  uint uVar12;
  undefined8 uVar13;
  int local_50;
  int local_4c;
  uint local_48;
  uint local_44;
  int local_40;
  int local_3c;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  
  iVar10 = *param_2;
  uVar12 = param_2[2];
  uVar1 = *(ushort *)(iVar10 + 0x8a);
  iVar2 = iVar10 + uVar12 * 4;
  iVar8 = (uint)uVar1 + ~uVar12;
  puVar3 = (undefined4 *)(iVar2 + 0x5c);
  uVar11 = *puVar3;
  FUN_01bed864(puVar3,iVar2 + 0x60,iVar8 * 4);
  puVar3 = (undefined4 *)(iVar10 + uVar12 * 8);
  uVar5 = *puVar3;
  uVar9 = puVar3[1];
  FUN_01bed864(puVar3,puVar3 + 2,iVar8 * 8);
  iVar2 = param_2[1];
  uVar4 = uVar1 - 1;
  *(short *)(iVar10 + 0x8a) = (short)uVar4;
  if (4 < (uVar4 & 0xffff)) goto LAB_0167c898;
  FUN_0167a424(&local_44,iVar10,iVar2);
  iVar2 = local_2c;
  iVar10 = local_34;
  if (local_44 == 2) {
    local_50 = local_40;
    local_4c = local_3c;
    local_48 = uVar12;
  }
  else {
    uVar4 = (uint)*(ushort *)(local_34 + 0x8a) + (uint)*(ushort *)(local_2c + 0x8a) + 1;
    if ((local_44 & 1) == 0) {
      if (uVar4 < 0xc) {
        uVar7 = 1;
        goto LAB_0167c780;
      }
      FUN_0167a4c8(&local_40,1);
      local_48 = uVar12 + 1;
      local_4c = local_28;
      local_50 = iVar2;
    }
    else if (uVar4 < 0xc) {
      uVar7 = 0;
LAB_0167c780:
      FUN_0167bdc0(&local_50,&local_40,uVar7,uVar12);
    }
    else {
      FUN_0167a8c8(&local_40,1);
      local_50 = iVar10;
      local_4c = local_30;
      local_48 = uVar12;
    }
  }
  uVar12 = local_48;
  iVar2 = local_4c;
  iVar10 = local_50;
  if (*(int *)(local_50 + 0x58) != 0) {
    uVar13 = CONCAT44(local_4c + 1,*(int *)(local_50 + 0x58));
    while( true ) {
      uVar4 = (uint)*(ushort *)((int)uVar13 + 0x8a);
      if (4 < uVar4) break;
      FUN_0167a424(&local_44,(int)uVar13,(int)((ulonglong)uVar13 >> 0x20));
      if (local_44 == 2) {
        if (uVar4 == 0) {
          *param_3 = 1;
        }
        break;
      }
      uVar6 = (uint)*(ushort *)(local_34 + 0x8a) + (uint)*(ushort *)(local_2c + 0x8a) + 1;
      if ((local_44 & 1) == 0) {
        if (0xb < uVar6) {
          FUN_0167a4c8(&local_40,5 - uVar4);
          break;
        }
      }
      else if (0xb < uVar6) {
        FUN_0167a8c8(&local_40,5 - uVar4);
        break;
      }
      uVar13 = FUN_0167a6f0(&local_40);
      if ((int)uVar13 == 0) break;
    }
  }
LAB_0167c898:
  *param_1 = uVar11;
  param_1[1] = uVar5;
  param_1[2] = uVar9;
  param_1[3] = iVar10;
  param_1[4] = iVar2;
  param_1[5] = uVar12;
  return;
}


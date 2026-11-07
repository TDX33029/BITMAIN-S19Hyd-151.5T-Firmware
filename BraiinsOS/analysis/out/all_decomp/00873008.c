// FUN_00873008 @ 00873008 size=384 calls_out=4 calls_in=10
// strings: 

void FUN_00873008(int *param_1,byte *param_2,uint param_3,char param_4)

{
  byte bVar1;
  byte *pbVar2;
  int iVar3;
  undefined1 *puVar4;
  uint uVar5;
  short sVar6;
  byte *pbVar7;
  ushort uVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  undefined1 local_50 [12];
  undefined1 local_44 [4];
  uint local_40;
  undefined4 local_3c;
  undefined1 local_38 [2];
  short local_36;
  short local_34;
  undefined1 local_2c [12];
  
  puVar4 = local_50;
  if ((param_3 == 0) || ((uint)*param_2 != (param_3 & 0xff))) {
    local_50[0] = 2;
  }
  else if (param_3 < 4) {
    local_3c = 4;
    local_44[0] = 3;
    puVar4 = local_44;
    local_40 = param_3;
  }
  else {
    uVar5 = param_3 - 2;
    pbVar2 = param_2 + uVar5;
    if (param_4 == '\x01') {
      sVar6 = 0;
      pbVar7 = param_2;
      do {
        uVar9 = uVar5;
        if (1 < uVar5) {
          uVar9 = 2;
        }
        uVar8 = 0;
        if (uVar5 != 1) {
          uVar8 = (ushort)pbVar7[1];
        }
        uVar5 = uVar5 - uVar9;
        sVar6 = sVar6 + (ushort)*pbVar7 + uVar8 * 0x100;
        pbVar7 = pbVar7 + uVar9;
      } while (uVar5 != 0);
    }
    else {
      sVar6 = 0;
      pbVar7 = param_2;
      do {
        uVar5 = uVar5 - 1;
        sVar6 = sVar6 + (ushort)*pbVar7;
        pbVar7 = pbVar7 + 1;
      } while (uVar5 != 0);
    }
    if (*(short *)pbVar2 == sVar6) {
      bVar1 = param_2[1];
      if (bVar1 != 0xf5 && bVar1 != 0) {
        iVar10 = param_3 - 4;
        if (iVar10 == 0) {
          iVar11 = 0;
          iVar3 = 1;
        }
        else {
          iVar3 = thunk_FUN_016d4a50(iVar10);
          iVar11 = iVar10;
          if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00600af4(1,iVar10);
          }
        }
        FUN_016dd1aa(iVar3,param_2 + 2,iVar10);
        *(byte *)(param_1 + 4) = bVar1;
        *param_1 = iVar11;
        param_1[1] = iVar3;
        param_1[2] = iVar10;
        param_1[3] = param_3;
        return;
      }
      local_2c[0] = 2;
      puVar4 = local_2c;
    }
    else {
      local_38[0] = 5;
      puVar4 = local_38;
      local_36 = *(short *)pbVar2;
      local_34 = sVar6;
    }
  }
  iVar10 = FUN_0080b0cc(puVar4);
  *param_1 = -0x80000000;
  param_1[1] = iVar10;
  return;
}


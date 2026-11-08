// FUN_01287470 @ 01287470 size=272 calls_out=1 calls_in=0
// strings: 

bool FUN_01287470(undefined4 *param_1,undefined4 *param_2)

{
  byte bVar1;
  byte *pbVar2;
  int iVar3;
  byte *pbVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  undefined4 uVar11;
  
  iVar7 = param_1[2];
  uVar11 = *param_2;
  iVar10 = param_2[1];
  pbVar4 = (byte *)*param_1;
  uVar9 = param_1[1];
  do {
    uVar8 = uVar9;
    if (uVar8 == 0) break;
    pbVar2 = pbVar4 + 1;
    bVar1 = *pbVar4;
    if (((char)bVar1 < '\0') ||
       ((*(uint *)(iVar7 + (uint)(bVar1 >> 5) * 4) >> (bVar1 & 0x1f) & 1) != 0)) {
      uVar9 = uVar8 - 1;
      pbVar4 = (byte *)("%0" + (uint)bVar1 * 3);
      uVar6 = 3;
    }
    else {
      uVar9 = 1;
      do {
        uVar6 = uVar9;
        if (uVar8 == uVar6) {
          uVar9 = 0;
          pbVar2 = &DAT_00000001;
          uVar6 = uVar8;
          goto LAB_012874dc;
        }
        pbVar2 = pbVar4 + uVar6;
        uVar5 = (uint)(char)*pbVar2;
      } while ((-1 < (int)uVar5) &&
              (uVar9 = uVar6 + 1, (*(uint *)(iVar7 + (uVar5 >> 5) * 4) >> (uVar5 & 0x1f) & 1) == 0))
      ;
      if (uVar8 < uVar6) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa478(&DAT_00418e0f,0x13,&DAT_0188bb90);
      }
      uVar9 = uVar8 - uVar6;
    }
LAB_012874dc:
    iVar3 = (**(code **)(iVar10 + 0xc))(uVar11,pbVar4,uVar6);
    pbVar4 = pbVar2;
  } while (iVar3 == 0);
  return uVar8 != 0;
}


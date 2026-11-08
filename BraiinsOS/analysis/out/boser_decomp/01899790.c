// FUN_01899790 @ 01899790 size=576 calls_out=8 calls_in=0
// strings: 

undefined4
FUN_01899790(int *param_1,undefined4 param_2,byte *param_3,uint param_4,int param_5,
            undefined4 param_6,int param_7)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  undefined4 uVar7;
  int iVar8;
  byte *pbVar9;
  uint local_84;
  uint local_80;
  int local_7c;
  uint local_78;
  uint local_74;
  byte local_70;
  uint local_6c;
  int local_68;
  undefined1 auStack_64 [64];
  
  if (param_5 == 0) {
    uVar7 = 1;
  }
  else {
    iVar8 = *param_1;
    uVar3 = param_5 - 1;
    local_84 = uVar3 >> 3;
    uVar7 = 1;
    uVar5 = *(uint *)(iVar8 + 0x48);
    if ((uVar3 & 7) != 0) {
      local_84 = (uVar3 >> 3) + 1;
    }
    uVar4 = uVar5 + 1;
    uVar6 = local_84 - uVar4;
    if (uVar4 <= local_84 && uVar4 <= uVar6) {
      local_7c = uVar6 - uVar4;
      bVar1 = (byte)(0xff >> (-uVar3 & 7));
      pbVar9 = param_3;
      local_80 = uVar6;
      local_78 = uVar5;
      local_74 = uVar5;
      local_70 = bVar1;
      if ((-uVar3 & 7) == 0) {
        if (param_4 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_012fb12c(0,0,&DAT_01d21d0c);
        }
        param_4 = param_4 - 1;
        pbVar9 = param_3 + 1;
        *param_3 = 0;
      }
      local_6c = param_4;
      if (param_4 != local_84) {
                    /* WARNING: Subroutine does not return */
        FUN_01304210(0,&local_6c,&local_84,0);
      }
      if (uVar6 < uVar5) {
                    /* WARNING: Subroutine does not return */
        FUN_012faff4(uVar6 - uVar5,uVar6,uVar6,&DAT_01d21d2c);
      }
      iVar2 = (**(code **)(param_7 + 0x14))(param_6,pbVar9 + (uVar6 - uVar5),uVar5);
      if (iVar2 == 0) {
        uVar3 = uVar6 + ~uVar5;
        FUN_018999f0(&local_68,iVar8,param_2,pbVar9 + (uVar6 - uVar5),uVar5);
        if (uVar6 < uVar3) {
                    /* WARNING: Subroutine does not return */
          FUN_012faff4(0,uVar3,uVar6,&DAT_01d21d3c);
        }
        FUN_01bed93e(pbVar9,0,uVar3);
        if (uVar6 <= uVar3) {
                    /* WARNING: Subroutine does not return */
          FUN_012fb12c(uVar3,uVar6,&DAT_01d21d4c);
        }
        pbVar9[uVar3] = 1;
        uVar3 = *(uint *)(local_68 + 0x48);
        if (0x40 < uVar3) {
                    /* WARNING: Subroutine does not return */
          FUN_012faff4(0,uVar3,0x40,&DAT_01d2571c);
        }
        FUN_01894954(iVar8,auStack_64,uVar3,pbVar9,uVar6);
        *pbVar9 = *pbVar9 & bVar1;
        uVar3 = *(uint *)(local_68 + 0x48);
        if (0x40 < uVar3) {
                    /* WARNING: Subroutine does not return */
          FUN_012faff4(0,uVar3,0x40,&DAT_01d2571c);
        }
        if (uVar5 != uVar3) {
                    /* WARNING: Subroutine does not return */
          FUN_013070f0(uVar5,uVar3,&DAT_01d21d5c);
        }
        FUN_01bed4e2(pbVar9 + uVar6,auStack_64,uVar5);
        uVar7 = 0;
        (pbVar9 + uVar6)[uVar5] = 0xbc;
      }
    }
  }
  return uVar7;
}


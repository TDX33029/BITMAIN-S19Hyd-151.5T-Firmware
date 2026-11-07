// FUN_016b5408 @ 016b5408 size=720 calls_out=5 calls_in=2
// strings: 

void FUN_016b5408(int *param_1,byte *param_2,byte *param_3)

{
  byte bVar1;
  int iVar2;
  byte *pbVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  byte *pbVar8;
  bool bVar9;
  
  do {
    do {
      pbVar3 = param_2;
      if (pbVar3 == param_3) {
        return;
      }
      param_2 = pbVar3 + 1;
      uVar4 = (uint)*pbVar3;
      if (0x7fffffff < (uint)(int)(char)*pbVar3) {
        if (uVar4 < 0xe0) {
          uVar4 = pbVar3[1] & 0x3f | (uVar4 & 0x1f) << 6;
          param_2 = pbVar3 + 2;
        }
        else {
          uVar5 = pbVar3[2] & 0x3f | (pbVar3[1] & 0x3f) << 6;
          if (uVar4 < 0xf0) {
            uVar4 = uVar5 | (uVar4 & 0x1f) << 0xc;
            param_2 = pbVar3 + 3;
          }
          else {
            param_2 = pbVar3 + 4;
            uVar4 = pbVar3[3] & 0x3f | uVar5 << 6 | (uVar4 & 7) << 0x12;
          }
        }
      }
    } while ((uVar4 < 0xe) && ((1 << (uVar4 & 0xff) & 0x2600U) != 0));
    uVar5 = 1;
    if (0x7f < uVar4) {
      uVar5 = 2;
    }
    if (uVar4 < 0x800) {
      uVar6 = (int)param_3 - (int)pbVar3;
      bVar9 = uVar5 == uVar6;
      if (uVar5 < uVar6) goto LAB_016b550c;
LAB_016b553c:
      if (!bVar9) goto LAB_016b56b8;
    }
    else {
      uVar5 = 4;
      if (uVar4 < 0x10000) {
        uVar5 = 3;
      }
      uVar6 = (int)param_3 - (int)pbVar3;
      bVar9 = uVar5 == uVar6;
      if (uVar6 <= uVar5) goto LAB_016b553c;
LAB_016b550c:
      if ((char)pbVar3[uVar5] < -0x40) {
LAB_016b56b8:
                    /* WARNING: Subroutine does not return */
        FUN_00faa8ac(pbVar3,uVar6,0,uVar5,&DAT_018aedd8);
      }
    }
    iVar2 = param_1[6];
    if (uVar4 == 0) {
      if (iVar2 != 0) {
        (**(code **)(param_1[7] + 0x14))(iVar2,7);
      }
    }
    else {
      FUN_016b4e08(iVar2,param_1[7],uVar4,param_2,param_3);
    }
    while (uVar5 != 0) {
      pbVar8 = pbVar3 + 1;
      bVar1 = *pbVar3;
      if (((char)bVar1 < '\0') ||
         ((*(uint *)(&DAT_00563ef0 + (uint)(bVar1 >> 5) * 4) >> (bVar1 & 0x1f) & 1) != 0)) {
        uVar4 = uVar5 - 1;
        pbVar3 = (byte *)("%0" + (uint)bVar1 * 3);
        uVar5 = 3;
      }
      else {
        pbVar8 = &DAT_00000001;
        uVar4 = 1;
        do {
          uVar6 = uVar4;
          if (uVar5 == uVar6) {
            uVar4 = 0;
            goto LAB_016b55d4;
          }
          uVar7 = (uint)(char)pbVar3[uVar6];
        } while ((-1 < (int)uVar7) &&
                (uVar4 = uVar6 + 1,
                (*(uint *)(&DAT_00563ef0 + (uVar7 >> 5) * 4) >> (uVar7 & 0x1f) & 1) == 0));
        if (uVar5 < uVar6) {
                    /* WARNING: Subroutine does not return */
          FUN_00faa478(&DAT_00418e0f,0x13,&DAT_0188bb90);
        }
        uVar4 = uVar5 - uVar6;
        uVar5 = uVar6;
        pbVar8 = pbVar3 + uVar6;
      }
LAB_016b55d4:
      iVar2 = param_1[2];
      if ((uint)(*param_1 - iVar2) < uVar5) {
        FUN_016bd7fc(param_1,iVar2,uVar5,1,1);
        iVar2 = param_1[2];
      }
      FUN_016dd1aa(param_1[1] + iVar2,pbVar3,uVar5);
      param_1[2] = iVar2 + uVar5;
      pbVar3 = pbVar8;
      uVar5 = uVar4;
    }
  } while( true );
}


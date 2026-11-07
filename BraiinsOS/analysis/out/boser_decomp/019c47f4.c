// FUN_019c47f4 @ 019c47f4 size=460 calls_out=4 calls_in=1
// strings: 

uint FUN_019c47f4(undefined4 param_1,undefined4 param_2)

{
  byte bVar1;
  short *psVar2;
  uint uVar3;
  undefined1 uVar4;
  uint uVar5;
  byte *pbVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  undefined4 unaff_r6;
  undefined8 uVar10;
  ulonglong uVar11;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined1 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined2 local_14;
  
  local_14 = 1;
  local_20 = 1;
  local_1c = 0;
  local_24 = 0x3a;
  uStack_2c = 0;
  local_38 = 0x3a;
  iVar9 = 0;
  local_34 = param_1;
  uStack_30 = param_2;
  local_28 = param_2;
  local_18 = param_2;
  while( true ) {
    uVar10 = FUN_019c456c(&local_38);
    if ((int)uVar10 == 0) break;
    iVar9 = (int)uVar10;
    unaff_r6 = (int)((ulonglong)uVar10 >> 0x20);
  }
  if (iVar9 != 0) {
    uVar11 = FUN_013245a0(iVar9,unaff_r6);
    iVar9 = (int)(uVar11 >> 0x20);
    psVar2 = (short *)uVar11;
    if ((0x1ffffffff < uVar11) && (*psVar2 == 0x7830)) {
      if (iVar9 == 2) {
        uVar4 = 0;
      }
      else {
        pbVar6 = (byte *)(psVar2 + 1);
        bVar1 = *pbVar6;
        if ((char)bVar1 < -0x40) {
                    /* WARNING: Subroutine does not return */
          FUN_012fb514(psVar2,iVar9,2,iVar9,&DAT_01d2840c);
        }
        uVar3 = iVar9 - 2;
        if ((uVar3 != 1) || (uVar4 = 1, bVar1 != 0x2b && bVar1 != 0x2d)) {
          uVar8 = 0;
          if (bVar1 == 0x2b) {
            pbVar6 = (byte *)((int)psVar2 + 3);
            uVar3 = iVar9 - 3;
          }
          if (uVar3 < 9) {
            while( true ) {
              if (uVar3 == 0) {
                return uVar8;
              }
              uVar7 = (uint)*pbVar6;
              uVar5 = uVar7 - 0x30;
              if (0x39 < uVar7) {
                uVar5 = (uVar7 - 0x41 & 0xffffffdf) + 10;
              }
              if (0xf < uVar5) break;
              uVar8 = uVar5 | uVar8 << 4;
              pbVar6 = pbVar6 + 1;
              uVar3 = uVar3 - 1;
            }
LAB_019c4998:
            uVar4 = 1;
          }
          else {
            while( true ) {
              uVar5 = (uint)*pbVar6;
              uVar7 = uVar5 - 0x30;
              if (0xfffffff < uVar8) break;
              if (0x39 < uVar5) {
                uVar7 = (uVar5 - 0x41 & 0xffffffdf) + 10;
              }
              if (0xf < uVar7) goto LAB_019c4998;
              uVar8 = uVar7 | uVar8 << 4;
              pbVar6 = pbVar6 + 1;
              uVar3 = uVar3 - 1;
              if (uVar3 == 0) {
                return uVar8;
              }
            }
            if (0x39 < uVar5) {
              uVar7 = (uVar5 - 0x41 & 0xffffffde) + 10;
            }
            uVar4 = 1;
            if (uVar7 < 0x10) {
              uVar4 = 2;
            }
          }
        }
      }
      local_38 = CONCAT31(local_38._1_3_,uVar4);
                    /* WARNING: Subroutine does not return */
      FUN_013073dc(&DAT_00533467,0x2b,&local_38,&DAT_01d283cc,&DAT_01d2841c);
    }
  }
  return 0;
}


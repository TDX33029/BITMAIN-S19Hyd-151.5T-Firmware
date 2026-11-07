// FUN_010b27f4 @ 010b27f4 size=408 calls_out=2 calls_in=2
// strings: 

void FUN_010b27f4(uint *param_1)

{
  uint uVar1;
  uint *puVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  bool bVar13;
  uint local_60;
  uint local_5c;
  uint uStack_58;
  uint uStack_54;
  uint uStack_50;
  uint uStack_4c;
  undefined1 auStack_48 [8];
  uint *local_40;
  uint local_3c;
  uint local_38;
  uint uStack_34;
  uint uStack_30;
  uint uStack_2c;
  uint uStack_28;
  
  uVar10 = param_1[2];
  uVar3 = param_1[3];
  uVar4 = param_1[4];
  uVar8 = *param_1;
  uVar11 = param_1[1];
  uVar5 = param_1[5];
  uVar1 = param_1[6];
  do {
    if ((uVar8 & 1) == 0) {
      if (uVar10 == uVar3) {
        return;
      }
      uVar12 = uVar10 + 1;
      param_1[2] = uVar12;
      if (uVar5 <= uVar10) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa4a4(uVar10,uVar5,&DAT_018847a8);
      }
      puVar2 = (uint *)(uVar4 + uVar10 * 0x34);
      bVar13 = (*puVar2 & 1) != 0;
      if (bVar13) {
        uVar11 = puVar2[1];
      }
      uVar8 = (uint)bVar13;
      uVar6 = puVar2[8];
      uVar7 = puVar2[9];
      uVar9 = puVar2[10];
      local_60 = puVar2[0xb];
      *param_1 = uVar8;
      param_1[1] = uVar11;
      local_5c = puVar2[3];
      uStack_58 = puVar2[4];
      uStack_54 = puVar2[5];
      uStack_50 = puVar2[6];
      uStack_4c = puVar2[7];
      uVar10 = uVar12;
      if (uVar6 != 0) {
        (**(code **)(uVar6 + 0x10))(&local_60,uVar7,uVar9);
      }
    }
    else {
      FUN_010b1bc4(auStack_48,uVar4,uVar5,uVar1,uVar11);
      bVar13 = ((uint)local_40 & 1) != 0;
      puVar2 = local_40;
      if (bVar13) {
        puVar2 = param_1;
      }
      uVar8 = (uint)bVar13;
      if (bVar13) {
        puVar2[1] = local_3c;
        uVar11 = local_3c;
      }
      *param_1 = uVar8;
      local_5c = local_38;
      uStack_58 = uStack_34;
      uStack_54 = uStack_30;
      uStack_50 = uStack_2c;
      uStack_4c = uStack_28;
    }
    (**(code **)(local_5c + 0x10))(&uStack_50,uStack_58,uStack_54);
  } while( true );
}


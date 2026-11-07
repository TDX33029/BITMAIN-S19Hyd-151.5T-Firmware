// FUN_014f1680 @ 014f1680 size=648 calls_out=4 calls_in=2
// strings: 

void FUN_014f1680(byte *param_1,byte *param_2,undefined4 *param_3)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  byte bVar9;
  byte bVar10;
  byte bVar11;
  byte bVar12;
  byte bVar13;
  byte bVar14;
  byte bVar15;
  byte bVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 *puVar21;
  byte local_48;
  byte local_47;
  byte local_46;
  byte local_45;
  byte local_44;
  byte local_43;
  byte local_42;
  byte local_41;
  byte local_40;
  byte local_3f;
  byte local_3e;
  byte local_3d;
  byte local_3c;
  byte local_3b;
  byte local_3a;
  byte local_39;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  
  uVar19 = *(undefined4 *)(param_2 + 0x118);
  uVar20 = *(undefined4 *)(param_2 + 0x11c);
  uVar17 = *(undefined4 *)(param_2 + 0x110);
  uVar18 = *(undefined4 *)(param_2 + 0x114);
  local_38 = CONCAT22(CONCAT11((char)uVar18,(char)((uint)uVar18 >> 8)),
                      CONCAT11((char)((uint)uVar18 >> 0x10),(char)((uint)uVar18 >> 0x18)));
  local_30 = CONCAT31(CONCAT21(CONCAT11((char)uVar20,(char)((uint)uVar20 >> 8)),
                               (char)((uint)uVar20 >> 0x10)),(char)((uint)uVar20 >> 0x18));
  local_2c = CONCAT13((char)uVar19,
                      CONCAT12((char)((uint)uVar19 >> 8),
                               CONCAT11((char)((uint)uVar19 >> 0x10),(char)((uint)uVar19 >> 0x18))))
  ;
  local_34 = CONCAT13((char)uVar17,
                      CONCAT12((char)((uint)uVar17 >> 8),
                               CONCAT11((char)((uint)uVar17 >> 0x10),(char)((uint)uVar17 >> 0x18))))
  ;
  FUN_014f190c(param_2,&local_38);
  bVar1 = *param_2;
  bVar2 = param_2[1];
  bVar3 = param_2[2];
  bVar4 = param_2[3];
  bVar5 = param_2[0xb];
  bVar6 = param_2[10];
  bVar7 = param_2[9];
  bVar8 = param_2[8];
  bVar9 = param_2[7];
  bVar10 = param_2[6];
  bVar11 = param_2[5];
  bVar12 = param_2[4];
  bVar13 = param_2[0xf];
  bVar14 = param_2[0xe];
  bVar15 = param_2[0xd];
  bVar16 = param_2[0xc];
  puVar21 = param_3 + 1;
  if ((DAT_018dffd8 & 4) == 0) {
    if ((DAT_018dffd8 & 1) == 0) {
      local_38 = *puVar21;
      local_34 = param_3[2];
      local_30 = param_3[3];
      local_2c = param_3[4];
      FUN_01836ca8(&local_38,&local_48);
    }
    else {
      local_38 = *puVar21;
      local_34 = param_3[2];
      local_30 = param_3[3];
      local_2c = param_3[4];
      FUN_0183bb90(&local_38,&local_48);
    }
  }
  else {
    local_38 = *puVar21;
    local_34 = param_3[2];
    local_30 = param_3[3];
    local_2c = param_3[4];
    FUN_0183a960(&local_38,&local_48,*param_3);
  }
  param_1[0xf] = bVar13 ^ local_39;
  param_1[0xe] = bVar14 ^ local_3a;
  param_1[0xd] = bVar15 ^ local_3b;
  param_1[0xc] = bVar16 ^ local_3c;
  param_1[0xb] = bVar5 ^ local_3d;
  param_1[10] = bVar6 ^ local_3e;
  param_1[9] = bVar7 ^ local_3f;
  param_1[8] = bVar8 ^ local_40;
  param_1[7] = bVar9 ^ local_41;
  param_1[6] = bVar10 ^ local_42;
  param_1[5] = bVar11 ^ local_43;
  param_1[4] = bVar12 ^ local_44;
  param_1[3] = bVar4 ^ local_45;
  param_1[2] = bVar3 ^ local_46;
  param_1[1] = bVar2 ^ local_47;
  *param_1 = bVar1 ^ local_48;
  return;
}


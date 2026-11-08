// FUN_01ab4ad4 @ 01ab4ad4 size=800 calls_out=7 calls_in=2
// strings: 

void FUN_01ab4ad4(int param_1,int param_2,int param_3)

{
  undefined4 ***pppuVar1;
  undefined4 ***pppuVar2;
  undefined4 ***pppuVar3;
  undefined4 ***pppuVar4;
  undefined4 ***pppuVar5;
  undefined4 uVar6;
  undefined4 ****ppppuVar7;
  uint uVar8;
  uint *puVar9;
  int iVar10;
  uint uVar11;
  uint *local_21c;
  uint *local_210;
  int local_20c;
  undefined4 local_208;
  uint local_204;
  undefined4 ****local_200 [80];
  uint local_c0 [2];
  undefined4 ****local_b8;
  undefined4 ***pppuStack_b4;
  undefined4 ***pppuStack_b0;
  undefined4 ***pppuStack_ac;
  undefined4 ***local_a8;
  undefined4 ***pppuStack_a4;
  undefined4 ***pppuStack_a0;
  undefined4 ***pppuStack_9c;
  undefined4 ****local_98;
  undefined4 ***pppuStack_94;
  undefined4 ***pppuStack_90;
  undefined4 ***pppuStack_8c;
  undefined4 ***local_88;
  undefined4 ***pppuStack_84;
  undefined4 ***pppuStack_80;
  undefined4 ***pppuStack_7c;
  undefined4 ****local_78;
  undefined4 ***pppuStack_74;
  undefined4 ***pppuStack_70;
  undefined4 ***pppuStack_6c;
  undefined4 ***local_68;
  undefined4 ***pppuStack_64;
  undefined4 ***pppuStack_60;
  undefined4 ***pppuStack_5c;
  undefined4 ***local_58;
  undefined4 ***local_54;
  undefined4 ****local_50;
  undefined4 ***pppuStack_4c;
  undefined4 ***pppuStack_48;
  undefined4 ***pppuStack_44;
  undefined4 ***local_40;
  undefined4 ***pppuStack_3c;
  undefined4 ***pppuStack_38;
  undefined4 ***pppuStack_34;
  undefined4 ***local_30;
  undefined4 ***local_2c;
  undefined4 ****local_28;
  
  if (*(uint *)(param_2 + 0x148) < 9) {
    iVar10 = param_2 + 8;
    local_20c = iVar10 + *(uint *)(param_2 + 0x148) * 0x28;
    local_208 = 0;
    local_c0[0] = 0;
    uVar6 = 0x80000001;
  }
  else {
    iVar10 = *(int *)(param_2 + 8);
    uVar8 = *(uint *)(param_2 + 4);
    uVar6 = 0;
    local_208 = 0;
    local_c0[0] = 0;
    local_20c = iVar10 + uVar8 * 0x28;
    if (uVar8 < 9) {
      uVar6 = 0x80000001;
    }
    else if (LZCOUNT(uVar8 - 1) != 0) {
      uVar6 = FUN_01ab1620(&local_208,(0xffffffffU >> LZCOUNT(uVar8 - 1)) + 1);
    }
  }
  local_210 = local_c0;
  FUN_01ab1588(uVar6);
  if (local_c0[0] < 9) {
    local_21c = local_210;
    uVar8 = 8;
    ppppuVar7 = local_200;
    uVar11 = local_c0[0];
  }
  else {
    local_21c = (uint *)((uint)&local_208 | 4);
    ppppuVar7 = local_200[0];
    uVar8 = local_c0[0];
    uVar11 = local_204;
  }
  if (uVar11 < uVar8) {
    uVar6 = *(undefined4 *)(param_3 + 0x14);
    ppppuVar7 = ppppuVar7 + uVar11 * 10 + 8;
    do {
      if (iVar10 == local_20c) {
LAB_01ab4dc4:
        *local_21c = uVar11;
        goto LAB_01ab4dcc;
      }
      FUN_01abf660(&local_50,iVar10);
      local_98 = &local_50;
      FUN_01aacd68(uVar6,&local_98,&DAT_01d2ecc0);
      pppuVar5 = local_2c;
      pppuVar4 = local_30;
      pppuVar3 = pppuStack_44;
      pppuVar2 = pppuStack_48;
      pppuVar1 = pppuStack_4c;
      local_b8 = local_50;
      pppuStack_b4 = pppuStack_4c;
      pppuStack_b0 = pppuStack_48;
      pppuStack_ac = pppuStack_44;
      local_a8 = local_40;
      pppuStack_a4 = pppuStack_3c;
      pppuStack_a0 = pppuStack_38;
      pppuStack_9c = pppuStack_34;
      if (local_30 == (undefined4 ***)0x6) goto LAB_01ab4dc4;
      iVar10 = iVar10 + 0x28;
      ppppuVar7[-8] = local_50;
      ppppuVar7[-7] = pppuVar1;
      ppppuVar7[-6] = pppuVar2;
      ppppuVar7[-5] = pppuVar3;
      pppuVar3 = pppuStack_9c;
      pppuVar2 = pppuStack_a0;
      pppuVar1 = pppuStack_a4;
      uVar11 = uVar11 + 1;
      ppppuVar7[-4] = local_a8;
      ppppuVar7[-3] = pppuVar1;
      ppppuVar7[-2] = pppuVar2;
      ppppuVar7[-1] = pppuVar3;
      *ppppuVar7 = pppuVar4;
      ppppuVar7[1] = pppuVar5;
      ppppuVar7 = ppppuVar7 + 10;
    } while (uVar8 != uVar11);
    uVar11 = uVar8;
  }
  *local_21c = uVar11;
  if (iVar10 != local_20c) {
    uVar6 = *(undefined4 *)(param_3 + 0x14);
    do {
      FUN_01abf660(&local_50,iVar10);
      local_28 = &local_50;
      FUN_01aacd68(uVar6,&local_28,&DAT_01d2ecc0);
      local_98 = local_50;
      pppuStack_94 = pppuStack_4c;
      pppuStack_90 = pppuStack_48;
      pppuStack_8c = pppuStack_44;
      local_88 = local_40;
      pppuStack_84 = pppuStack_3c;
      pppuStack_80 = pppuStack_38;
      pppuStack_7c = pppuStack_34;
      if (local_30 == (undefined4 ***)0x6) break;
      local_78 = local_50;
      pppuStack_74 = pppuStack_4c;
      pppuStack_70 = pppuStack_48;
      pppuStack_6c = pppuStack_44;
      local_68 = local_40;
      pppuStack_64 = pppuStack_3c;
      pppuStack_60 = pppuStack_38;
      pppuStack_5c = pppuStack_34;
      local_58 = local_30;
      ppppuVar7 = local_200;
      uVar8 = 8;
      puVar9 = local_210;
      if (8 < local_c0[0]) {
        ppppuVar7 = local_200[0];
        uVar8 = local_c0[0];
        puVar9 = (uint *)((uint)&local_208 | 4);
      }
      local_54 = local_2c;
      uVar11 = *puVar9;
      if (*puVar9 == uVar8) {
        FUN_01ab15c0(&local_208);
        ppppuVar7 = local_200[0];
        uVar11 = local_204;
        puVar9 = (uint *)((uint)&local_208 | 4);
      }
      iVar10 = iVar10 + 0x28;
      FUN_01bed864(ppppuVar7 + uVar11 * 10,&local_78,0x28);
      *puVar9 = *puVar9 + 1;
    } while (iVar10 != local_20c);
  }
LAB_01ab4dcc:
  FUN_01bed4e2(param_1,&local_208,0x150);
  *(undefined4 *)(param_1 + 0x150) = *(undefined4 *)(param_2 + 0x150);
  return;
}


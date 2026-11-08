// FUN_006cb608 @ 006cb608 size=392 calls_out=4 calls_in=4
// strings: 

void FUN_006cb608(int param_1,int *param_2)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint *unaff_r4;
  uint *puVar7;
  uint *puVar8;
  int unaff_r5;
  undefined4 uVar9;
  undefined4 local_58;
  int iStack_54;
  uint *puStack_50;
  uint *local_4c;
  uint local_48;
  uint *local_44;
  int iStack_40;
  uint local_3c;
  uint local_38;
  uint uStack_34;
  uint uStack_30;
  uint uStack_2c;
  
  puVar1 = (uint *)*param_2;
  iVar6 = param_2[1];
  uVar3 = param_2[3];
  if (iVar6 == 0) {
    uVar9 = 0;
  }
  else {
    unaff_r5 = iVar6 * 0x19 + 0x1d;
    unaff_r4 = puVar1 + iVar6 * -6 + -6;
    uVar9 = 4;
  }
  uVar4 = ~*puVar1 & 0x80808080;
  puVar8 = puVar1 + 1;
  uVar2 = uVar3;
  if (*(int *)(param_1 + 0xc) != 0) {
    uVar2 = uVar3 + 1 >> 1;
  }
  if (*(uint *)(param_1 + 8) < uVar2) {
    FUN_006bb984(param_1,uVar2,param_1 + 0x10);
  }
  local_58 = uVar9;
  iStack_54 = unaff_r5;
  puStack_50 = unaff_r4;
  local_4c = puVar1;
  local_48 = uVar4;
  local_44 = puVar8;
  iStack_40 = (int)puVar1 + iVar6 + 1;
  local_3c = uVar3;
  while( true ) {
    uVar2 = 0;
    if (uVar3 == 0) break;
    uVar5 = uVar4;
    puVar7 = puVar8;
    if (uVar4 == 0) {
      do {
        puVar8 = puVar7 + 1;
        uVar2 = *puVar7;
        puVar1 = puVar1 + -0x18;
        puVar7 = puVar8;
      } while ((uVar2 & 0x80808080) == 0x80808080);
      uVar5 = uVar2 & 0x80808080 ^ 0x80808080;
      local_4c = puVar1;
      local_44 = puVar8;
    }
    uVar2 = uVar3 - 1;
    uVar4 = uVar5 - 1 & uVar5;
    uVar3 = (uint)LZCOUNT(uVar5 << 0x18 | (uVar5 >> 8 & 0xff) << 0x10 | (uVar5 >> 0x10 & 0xff) << 8
                          | uVar5 >> 0x18) >> 3;
    local_38 = puVar1[uVar3 * -6 + -6];
    uStack_34 = puVar1[uVar3 * -6 + -5];
    uStack_30 = puVar1[uVar3 * -6 + -4];
    uStack_2c = puVar1[uVar3 * -6 + -3];
    local_48 = uVar4;
    if (puVar1[uVar3 * -6 + -2] == 0) break;
    iVar6 = FUN_006e5158(param_1,&local_38,puVar1[uVar3 * -6 + -2],puVar1[uVar3 * -6 + -1]);
    uVar3 = uVar2;
    if (iVar6 != 0) {
      FUN_01ab87b0();
    }
  }
  local_3c = uVar2;
  FUN_006b4298(&local_58);
  return;
}


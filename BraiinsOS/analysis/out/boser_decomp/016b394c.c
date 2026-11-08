// FUN_016b394c @ 016b394c size=384 calls_out=3 calls_in=3
// strings: 

undefined8 FUN_016b394c(int param_1,int *param_2)

{
  byte bVar1;
  int iVar2;
  undefined4 uVar3;
  uint *puVar4;
  undefined4 uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint local_50 [4];
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined1 local_2c;
  byte local_2b;
  uint local_28;
  uint local_24;
  
  if ((param_2[4] == 0) || (uVar7 = param_2[4] - 1, (uint)param_2[3] <= uVar7)) {
    iVar6 = *param_2;
    uVar9 = param_2[1];
    uVar7 = 2;
  }
  else {
    iVar6 = *param_2;
    uVar9 = param_2[1];
    bVar1 = *(byte *)(param_2[2] + uVar7);
    uVar8 = (uint)bVar1;
    iVar2 = thunk_FUN_01bed842(param_1 + 0x20,"",0x20);
    if (iVar2 != 0) {
      puVar4 = (uint *)(param_1 + 0x20 + (bVar1 >> 3 & 0xfffffff0));
      local_50[0] = *puVar4;
      local_50[1] = puVar4[1];
      local_50[2] = puVar4[2];
      local_50[3] = puVar4[3];
      uVar5 = 1;
      local_34 = 0;
      local_38 = 0;
      local_3c = 0;
      local_40 = 0;
      if ((local_50[(uVar8 & 0x7f) >> 5] >> (uVar8 & 0x1f) & 1) != 0) {
        local_2c = 0;
        local_2b = bVar1;
        local_28 = uVar7;
        uVar3 = FUN_016cc61c(&local_2c);
        goto LAB_016b3ab4;
      }
    }
    uVar7 = (uint)*(byte *)(param_1 + uVar8 + 0x1ac);
  }
  if (iVar6 == 0) {
    if (1 < *(byte *)(param_1 + 0x2b0)) goto LAB_016b3a94;
  }
  else if (iVar6 == 1) {
    if (*(char *)(param_1 + 0x2b0) == '\x01') {
LAB_016b3a94:
      local_2c = 3;
      local_28 = iVar6;
      local_24 = uVar9;
      uVar3 = FUN_016cc61c(&local_2c);
      uVar5 = 1;
      goto LAB_016b3ab4;
    }
    uVar7 = *(int *)(param_1 + 0x2ac) + uVar7;
  }
  else {
    if (*(int *)(param_1 + 0x188) == 0) goto LAB_016b3a94;
    uVar3 = 0;
    uVar5 = 0;
    if (*(uint *)(param_1 + 0x18c) <= uVar9) goto LAB_016b3ab4;
    uVar7 = *(int *)(param_1 + 0x2ac) * (uVar9 + 2) + uVar7;
  }
  if (*(uint *)(param_1 + 0x1a8) <= uVar7) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb12c(uVar7,*(uint *)(param_1 + 0x1a8),&DAT_01d2f27c);
  }
  uVar5 = 0;
  uVar3 = *(undefined4 *)(*(int *)(param_1 + 0x1a4) + uVar7 * 4);
LAB_016b3ab4:
  return CONCAT44(uVar3,uVar5);
}


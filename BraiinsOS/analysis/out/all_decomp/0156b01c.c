// FUN_0156b01c @ 0156b01c size=888 calls_out=2 calls_in=0
// strings: 

void FUN_0156b01c(undefined4 *param_1,int param_2,uint param_3,uint param_4,undefined4 param_5,
                 undefined4 param_6,int param_7,uint param_8)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  undefined4 *puVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  undefined1 local_44 [4];
  undefined4 local_40;
  uint local_3c;
  uint local_38;
  undefined4 uStack_34;
  undefined1 local_30;
  undefined1 local_2f;
  undefined1 local_2e;
  undefined1 local_2d;
  uint local_2c;
  uint local_28;
  
  uVar10 = (uint)*(byte *)(param_2 + 0x16) ^ param_4 >> 8 & 0xff;
  local_28 = (uint)*(byte *)(param_2 + 0x18) ^ param_3 >> 0x18;
  uVar3 = (uint)*(byte *)(param_2 + 0x19) ^ param_3 >> 0x10 & 0xff;
  local_44[0] = *(undefined1 *)(param_2 + 0x10);
  uVar8 = (uint)*(byte *)(param_2 + 0x17) ^ param_4 & 0xff;
  local_2e = *(undefined1 *)(param_2 + 0x12);
  uVar4 = (uint)*(byte *)(param_2 + 0x15) ^ param_4 >> 0x10 & 0xff;
  local_2d = *(undefined1 *)(param_2 + 0x13);
  local_2c = (uint)*(byte *)(param_2 + 0x14) ^ param_4 >> 0x18;
  uVar7 = (uint)*(byte *)(param_2 + 0x1a) ^ param_3 >> 8 & 0xff;
  uVar9 = (uint)*(byte *)(param_2 + 0x1b) ^ param_3 & 0xff;
  local_2f = *(undefined1 *)(param_2 + 0x11);
  local_40 = *(undefined4 *)(param_2 + 0x10);
  if ((0xf < param_8) &&
     (uVar5 = param_8 - 0x10, uVar2 = (*(uint **)(param_2 + 0x24))[1],
     uVar2 != 0 || uVar2 < (uVar5 <= **(uint **)(param_2 + 0x24)))) {
    if (*(int *)(param_2 + 0x1c) - 5U < 2) {
      local_28 = uVar9 << 0x18 | uVar7 << 0x10 | uVar3 << 8 | local_28;
      local_2c = uVar8 << 0x18 | uVar10 << 0x10 | uVar4 << 8 | local_2c;
      puVar6 = (undefined4 *)(param_7 + uVar5);
      local_40 = *puVar6;
      local_3c = puVar6[1];
      local_38 = puVar6[2];
      uStack_34 = puVar6[3];
      local_30 = local_44[0];
      iVar1 = FUN_017237a8(*(undefined4 *)(param_2 + 0x20),param_7,0,0,param_7,uVar5,&local_40,0x1c,
                           param_5,param_6,uVar5,local_2f);
    }
    else {
      local_3c = uVar10 << 0x10 | uVar8 << 0x18 | uVar4 << 8 | local_2c;
      local_38 = uVar9 << 0x18 | uVar7 << 0x10 | uVar3 << 8 | local_28;
      iVar1 = FUN_017238bc(*(undefined4 *)(param_2 + 0x20),param_7,local_44,uVar5,&local_40,0xc,
                           param_7,param_8,param_5,param_6);
    }
    if (iVar1 == 1) {
      param_1[1] = param_7;
      param_1[2] = uVar5;
      *param_1 = 0x80000029;
      return;
    }
  }
  *param_1 = &DAT_80000019;
  return;
}


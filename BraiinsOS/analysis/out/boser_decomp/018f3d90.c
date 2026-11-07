// FUN_018f3d90 @ 018f3d90 size=148 calls_out=3 calls_in=0
// strings: 

undefined8 FUN_018f3d90(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined1 auStack_e0 [128];
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 local_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  uVar3 = *(undefined4 *)(param_1 + 0xc0);
  uVar4 = *(undefined4 *)(param_1 + 0xc4);
  uVar5 = *(undefined4 *)(param_1 + 200);
  local_60 = *(undefined4 *)(param_1 + 0x80);
  uStack_5c = *(undefined4 *)(param_1 + 0x84);
  uStack_58 = *(undefined4 *)(param_1 + 0x88);
  uStack_54 = *(undefined4 *)(param_1 + 0x8c);
  uStack_50 = *(undefined4 *)(param_1 + 0x90);
  local_4c = *(undefined4 *)(param_1 + 0x94);
  uStack_48 = *(undefined4 *)(param_1 + 0x98);
  uStack_44 = *(undefined4 *)(param_1 + 0x9c);
  uStack_40 = *(undefined4 *)(param_1 + 0xa0);
  uStack_3c = *(undefined4 *)(param_1 + 0xa4);
  local_38 = *(undefined4 *)(param_1 + 0xa8);
  uStack_34 = *(undefined4 *)(param_1 + 0xac);
  uStack_30 = *(undefined4 *)(param_1 + 0xb0);
  uStack_2c = *(undefined4 *)(param_1 + 0xb4);
  uStack_28 = *(undefined4 *)(param_1 + 0xb8);
  uStack_24 = *(undefined4 *)(param_1 + 0xbc);
  uVar2 = *(undefined4 *)(param_1 + 0xd0);
  FUN_01bed4e2(auStack_e0,param_1,0x80);
  iVar1 = thunk_FUN_01be5118(0xd8);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0066439c(8,0xd8);
  }
  FUN_01bed4e2(iVar1,auStack_e0,0xc0);
  *(undefined4 *)(iVar1 + 0xc0) = uVar3;
  *(undefined4 *)(iVar1 + 0xc4) = uVar4;
  *(undefined4 *)(iVar1 + 200) = uVar5;
  *(undefined4 *)(iVar1 + 0xd0) = uVar2;
  return CONCAT44(&UNK_01d23f80,iVar1);
}


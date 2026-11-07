// FUN_00ea7b68 @ 00ea7b68 size=172 calls_out=4 calls_in=2
// strings: 

void FUN_00ea7b68(undefined4 *param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  undefined1 auStack_180 [296];
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  iVar2 = *(int *)(param_2 + 0xf8);
  if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_012ffdf4(&DAT_01ce84bc);
  }
  FUN_01bed4e2(auStack_180,param_2,0x128);
  FUN_0134c2dc(&local_58);
  FUN_01bed4e2(param_1 + 0x34,param_2,0x128);
  param_1[0x7e] = local_58;
  param_1[0x7f] = uStack_54;
  param_1[0x80] = uStack_50;
  param_1[0x81] = uStack_4c;
  param_1[0x82] = local_48;
  param_1[0x83] = uStack_44;
  param_1[0x84] = uStack_40;
  param_1[0x85] = uStack_3c;
  param_1[0x86] = local_38;
  param_1[0x87] = uStack_34;
  param_1[0x88] = uStack_30;
  param_1[0x89] = uStack_2c;
  param_1[0x8a] = uStack_28;
  *param_1 = 2;
  param_1[1] = 0;
  param_1[0x8b] = 0x1000000;
  uVar1 = FUN_01bf1250(0x1000000,iVar2);
  if (uVar1 < 2) {
    uVar1 = 1;
  }
  uVar1 = uVar1 + (uVar1 >> 2);
  if (uVar1 < 6) {
    uVar1 = 5;
  }
  param_1[0x8c] = uVar1;
  return;
}


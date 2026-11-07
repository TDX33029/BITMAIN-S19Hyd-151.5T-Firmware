// FUN_01388bf0 @ 01388bf0 size=136 calls_out=3 calls_in=4
// strings: assertion failed: self.can_inc_num_send_streams() | assertion failed: !stream.is_counted

void FUN_01388bf0(int param_1,int *param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  
  uVar7 = *(uint *)(param_1 + 0xc);
  if (*(uint *)(param_1 + 8) <= uVar7) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb0ec("assertion failed: self.can_inc_num_send_streams()",0x31,&DAT_01cebf20);
  }
  iVar4 = *param_2;
  iVar5 = param_2[1];
  iVar6 = param_2[2];
  iVar1 = FUN_01367c40(*(undefined4 *)(iVar4 + 0x34),*(undefined4 *)(iVar4 + 0x38),iVar5,iVar6);
  if (*(char *)(iVar1 + 0xe8) != '\0') {
                    /* WARNING: Subroutine does not return */
    FUN_012fb0ec("assertion failed: !stream.is_counted",0x24,&DAT_01cebf30);
  }
  uVar2 = *(undefined4 *)(iVar4 + 0x34);
  uVar3 = *(undefined4 *)(iVar4 + 0x38);
  *(uint *)(param_1 + 0xc) = uVar7 + 1;
  iVar1 = FUN_01367cb8(uVar2,uVar3,iVar5,iVar6);
  *(undefined1 *)(iVar1 + 0xe8) = 1;
  return;
}


// FUN_015bc794 @ 015bc794 size=232 calls_out=4 calls_in=0
// strings: 

void FUN_015bc794(int param_1,undefined4 param_2,uint param_3)

{
  uint uVar1;
  int local_184;
  undefined1 auStack_180 [64];
  undefined1 auStack_140 [200];
  int local_78;
  undefined4 local_70;
  undefined1 auStack_68 [80];
  
  if (param_3 < 0x40) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa36c(0,0x40,param_3,&DAT_018aa7f8);
  }
  FUN_016dd1aa(auStack_140,param_1,0xd8);
  uVar1 = *(uint *)(local_78 + 0x50);
  FUN_016dd1aa(auStack_68,param_1 + 0x80,0x50);
  if (0x80 < uVar1) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa36c(0,uVar1,0x80,&DAT_018a6dd0);
  }
  FUN_014f2c6c(&local_184,auStack_68,auStack_140,uVar1,local_70);
  uVar1 = *(uint *)(local_184 + 0x48);
  if (0x40 < uVar1) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa36c(0,uVar1,0x40,&DAT_018ab870);
  }
  if (uVar1 != 0x40) {
                    /* WARNING: Subroutine does not return */
    FUN_00fb7204(0x40,uVar1,&DAT_018aa808);
  }
  FUN_016dd1aa(param_2,auStack_180,0x40);
  return;
}


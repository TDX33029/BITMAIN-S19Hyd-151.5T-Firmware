// FUN_014f2e98 @ 014f2e98 size=344 calls_out=5 calls_in=1
// strings: 

void FUN_014f2e98(undefined4 param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined1 auStack_210 [132];
  int local_18c;
  undefined1 auStack_188 [64];
  undefined1 auStack_148 [200];
  int local_80;
  undefined4 local_78;
  undefined1 auStack_70 [80];
  
  iVar2 = *(int *)(param_2 + 200);
  FUN_016dd606(auStack_210,0,0x80);
  uVar1 = *(uint *)(iVar2 + 0x50);
  if (0x80 < uVar1) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa36c(0,uVar1,0x80,&DAT_018a6d20);
  }
  uVar4 = *(uint *)(iVar2 + 0x48);
  if (uVar1 < uVar4) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa36c(0,uVar4,uVar1,&DAT_018a6d10);
  }
  FUN_016dd1aa(auStack_148,param_2,0xd8);
  uVar3 = *(uint *)(local_80 + 0x50);
  FUN_016dd1aa(auStack_70,param_2 + 0x80,0x50);
  if (0x80 < uVar3) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa36c(0,uVar3,0x80,&DAT_018a6dd0);
  }
  FUN_014f2c6c(&local_18c,auStack_70,auStack_148,uVar3,local_78);
  uVar3 = *(uint *)(local_18c + 0x48);
  if (0x40 < uVar3) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa36c(0,uVar3,0x40,&DAT_018ab870);
  }
  if (uVar4 != uVar3) {
                    /* WARNING: Subroutine does not return */
    FUN_00fb7204(uVar4,uVar3,&DAT_018a6d00);
  }
  FUN_016dd1aa(auStack_210,auStack_188,uVar4);
  FUN_016dd1aa(auStack_148,param_2 + 0xd8,0x50);
  FUN_014f2c6c(param_1,auStack_148,auStack_210,uVar1,uVar4);
  return;
}

